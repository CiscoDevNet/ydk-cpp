
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_2.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::Remote()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "remote"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_high_value.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-high-value" || name == "cookie-low-value" || name == "cookie-size" || name == "session-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::L2TpIpv6Ts()
    :
    local_address{YType::str, "local-address"},
    path_mtu{YType::uint16, "path-mtu"},
    remote_address{YType::str, "remote-address"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tp-ipv6-ts"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::~L2TpIpv6Ts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::has_data() const
{
    return local_address.is_set
	|| path_mtu.is_set
	|| remote_address.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-ipv6-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "local-address" || name == "path-mtu" || name == "remote-address" || name == "sequence-number-expected" || name == "sequence-number-sent" || name == "tos-val" || name == "ttl")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::Local()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    secondary_cookie_high_value{YType::uint32, "secondary-cookie-high-value"},
    secondary_cookie_low_value{YType::uint32, "secondary-cookie-low-value"},
    secondary_cookie_size{YType::uint8, "secondary-cookie-size"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "local"; yang_parent_name = "l2tp-ipv6-ts"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| secondary_cookie_high_value.is_set
	|| secondary_cookie_low_value.is_set
	|| secondary_cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_high_value.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(secondary_cookie_high_value.yfilter)
	|| ydk::is_set(secondary_cookie_low_value.yfilter)
	|| ydk::is_set(secondary_cookie_size.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (secondary_cookie_high_value.is_set || is_set(secondary_cookie_high_value.yfilter)) leaf_name_data.push_back(secondary_cookie_high_value.get_name_leafdata());
    if (secondary_cookie_low_value.is_set || is_set(secondary_cookie_low_value.yfilter)) leaf_name_data.push_back(secondary_cookie_low_value.get_name_leafdata());
    if (secondary_cookie_size.is_set || is_set(secondary_cookie_size.yfilter)) leaf_name_data.push_back(secondary_cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value = value;
        secondary_cookie_high_value.value_namespace = name_space;
        secondary_cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value = value;
        secondary_cookie_low_value.value_namespace = name_space;
        secondary_cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size = value;
        secondary_cookie_size.value_namespace = name_space;
        secondary_cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-high-value" || name == "cookie-low-value" || name == "cookie-size" || name == "secondary-cookie-high-value" || name == "secondary-cookie-low-value" || name == "secondary-cookie-size" || name == "session-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::Remote()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "remote"; yang_parent_name = "l2tp-ipv6-ts"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_high_value.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-high-value" || name == "cookie-low-value" || name == "cookie-size" || name == "session-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::L2Tpv2()
    :
    next_hop_address{YType::str, "next-hop-address"},
    path_mtu{YType::uint16, "path-mtu"},
    protocol{YType::uint16, "protocol"},
    pw_flags{YType::uint8, "pw-flags"},
    rem_udp_port{YType::uint16, "rem-udp-port"},
    source_address{YType::str, "source-address"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tpv2"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::~L2Tpv2()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::has_data() const
{
    return next_hop_address.is_set
	|| path_mtu.is_set
	|| protocol.is_set
	|| pw_flags.is_set
	|| rem_udp_port.is_set
	|| source_address.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| xconnect_id.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(pw_flags.yfilter)
	|| ydk::is_set(rem_udp_port.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (pw_flags.is_set || is_set(pw_flags.yfilter)) leaf_name_data.push_back(pw_flags.get_name_leafdata());
    if (rem_udp_port.is_set || is_set(rem_udp_port.yfilter)) leaf_name_data.push_back(rem_udp_port.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flags")
    {
        pw_flags = value;
        pw_flags.value_namespace = name_space;
        pw_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port = value;
        rem_udp_port.value_namespace = name_space;
        rem_udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "pw-flags")
    {
        pw_flags.yfilter = yfilter;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "next-hop-address" || name == "path-mtu" || name == "protocol" || name == "pw-flags" || name == "rem-udp-port" || name == "source-address" || name == "tos-val" || name == "ttl" || name == "xconnect-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "local"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tunnel-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "remote"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tunnel-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::Mpls()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{

    yang_name = "mpls"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::~Mpls()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_label.yfilter)
	|| ydk::is_set(pw_local_label.yfilter)
	|| ydk::is_set(pw_tunnel_interface.yfilter)
	|| ydk::is_set(pw_xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.yfilter)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.yfilter)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.yfilter)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.yfilter)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
        pw_label.value_namespace = name_space;
        pw_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
        pw_local_label.value_namespace = name_space;
        pw_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
        pw_tunnel_interface.value_namespace = name_space;
        pw_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
        pw_xcid.value_namespace = name_space;
        pw_xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-label")
    {
        pw_label.yfilter = yfilter;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label.yfilter = yfilter;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-label" || name == "pw-local-label" || name == "pw-tunnel-interface" || name == "pw-xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6S()
{

    yang_name = "l2fib-mroute-ipv6s"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::~L2FibMrouteIpv6S()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::has_data() const
{
    for (std::size_t index=0; index<l2fib_mroute_ipv6.size(); index++)
    {
        if(l2fib_mroute_ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mroute_ipv6.size(); index++)
    {
        if(l2fib_mroute_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute-ipv6s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mroute-ipv6")
    {
        for(auto const & c : l2fib_mroute_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6>();
        c->parent = this;
        l2fib_mroute_ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_mroute_ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mroute-ipv6")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::L2FibMrouteIpv6()
    :
    bd_group_name{YType::str, "bd-group-name"},
    bd_name{YType::str, "bd-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    bridge_id{YType::uint32, "bridge-id"},
    group{YType::str, "group"},
    hardware_information{YType::str, "hardware-information"},
    platform_data{YType::str, "platform-data"},
    platform_data_length{YType::uint8, "platform-data-length"},
    source{YType::str, "source"},
    xid_count{YType::uint16, "xid-count"}
    	,
    destination_prefix(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix>())
	,forward_stats(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats>())
	,irb_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo>())
	,multicast_base_information(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation>())
	,source_prefix(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix>())
{
    destination_prefix->parent = this;
    forward_stats->parent = this;
    irb_info->parent = this;
    multicast_base_information->parent = this;
    source_prefix->parent = this;

    yang_name = "l2fib-mroute-ipv6"; yang_parent_name = "l2fib-mroute-ipv6s"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::~L2FibMrouteIpv6()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::has_data() const
{
    return bd_group_name.is_set
	|| bd_name.is_set
	|| bridge_domain_name.is_set
	|| bridge_id.is_set
	|| group.is_set
	|| hardware_information.is_set
	|| platform_data.is_set
	|| platform_data_length.is_set
	|| source.is_set
	|| xid_count.is_set
	|| (destination_prefix !=  nullptr && destination_prefix->has_data())
	|| (forward_stats !=  nullptr && forward_stats->has_data())
	|| (irb_info !=  nullptr && irb_info->has_data())
	|| (multicast_base_information !=  nullptr && multicast_base_information->has_data())
	|| (source_prefix !=  nullptr && source_prefix->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_group_name.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(platform_data.yfilter)
	|| ydk::is_set(platform_data_length.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(xid_count.yfilter)
	|| (destination_prefix !=  nullptr && destination_prefix->has_operation())
	|| (forward_stats !=  nullptr && forward_stats->has_operation())
	|| (irb_info !=  nullptr && irb_info->has_operation())
	|| (multicast_base_information !=  nullptr && multicast_base_information->has_operation())
	|| (source_prefix !=  nullptr && source_prefix->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_group_name.is_set || is_set(bd_group_name.yfilter)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (platform_data.is_set || is_set(platform_data.yfilter)) leaf_name_data.push_back(platform_data.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.yfilter)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (xid_count.is_set || is_set(xid_count.yfilter)) leaf_name_data.push_back(xid_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-prefix")
    {
        if(destination_prefix == nullptr)
        {
            destination_prefix = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix>();
        }
        return destination_prefix;
    }

    if(child_yang_name == "forward-stats")
    {
        if(forward_stats == nullptr)
        {
            forward_stats = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats>();
        }
        return forward_stats;
    }

    if(child_yang_name == "irb-info")
    {
        if(irb_info == nullptr)
        {
            irb_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo>();
        }
        return irb_info;
    }

    if(child_yang_name == "multicast-base-information")
    {
        if(multicast_base_information == nullptr)
        {
            multicast_base_information = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation>();
        }
        return multicast_base_information;
    }

    if(child_yang_name == "source-prefix")
    {
        if(source_prefix == nullptr)
        {
            source_prefix = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix>();
        }
        return source_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_prefix != nullptr)
    {
        children["destination-prefix"] = destination_prefix;
    }

    if(forward_stats != nullptr)
    {
        children["forward-stats"] = forward_stats;
    }

    if(irb_info != nullptr)
    {
        children["irb-info"] = irb_info;
    }

    if(multicast_base_information != nullptr)
    {
        children["multicast-base-information"] = multicast_base_information;
    }

    if(source_prefix != nullptr)
    {
        children["source-prefix"] = source_prefix;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name = value;
        bd_group_name.value_namespace = name_space;
        bd_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-data")
    {
        platform_data = value;
        platform_data.value_namespace = name_space;
        platform_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
        platform_data_length.value_namespace = name_space;
        platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid-count")
    {
        xid_count = value;
        xid_count.value_namespace = name_space;
        xid_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "platform-data")
    {
        platform_data.yfilter = yfilter;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "xid-count")
    {
        xid_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-prefix" || name == "forward-stats" || name == "irb-info" || name == "multicast-base-information" || name == "source-prefix" || name == "bd-group-name" || name == "bd-name" || name == "bridge-domain-name" || name == "bridge-id" || name == "group" || name == "hardware-information" || name == "platform-data" || name == "platform-data-length" || name == "source" || name == "xid-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix::DestinationPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint16, "prefix-length"},
    proto{YType::uint8, "proto"}
{

    yang_name = "destination-prefix"; yang_parent_name = "l2fib-mroute-ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix::~DestinationPrefix()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| proto.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(proto.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "proto")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStats()
    :
    forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat>())
{
    forward_stat->parent = this;

    yang_name = "forward-stats"; yang_parent_name = "l2fib-mroute-ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::~ForwardStats()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::has_data() const
{
    return (forward_stat !=  nullptr && forward_stat->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::has_operation() const
{
    return is_set(yfilter)
	|| (forward_stat !=  nullptr && forward_stat->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-stat")
    {
        if(forward_stat == nullptr)
        {
            forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat>();
        }
        return forward_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forward_stat != nullptr)
    {
        children["forward-stat"] = forward_stat;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-stat")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::ForwardStat()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    mulicast(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast>())
{
    mulicast->parent = this;

    yang_name = "forward-stat"; yang_parent_name = "forward-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::~ForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::has_data() const
{
    return data_type.is_set
	|| (mulicast !=  nullptr && mulicast->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (mulicast !=  nullptr && mulicast->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mulicast")
    {
        if(mulicast == nullptr)
        {
            mulicast = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast>();
        }
        return mulicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mulicast != nullptr)
    {
        children["mulicast"] = mulicast;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mulicast" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Mulicast()
    :
    core_received_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>())
	,drop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop>())
	,multicast_core_forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>())
	,multicast_forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>())
	,punt(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt>())
	,received_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat>())
{
    core_received_stat->parent = this;
    drop->parent = this;
    multicast_core_forward_stat->parent = this;
    multicast_forward_stat->parent = this;
    punt->parent = this;
    received_stat->parent = this;

    yang_name = "mulicast"; yang_parent_name = "forward-stat"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::~Mulicast()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::has_data() const
{
    return (core_received_stat !=  nullptr && core_received_stat->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_data())
	|| (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_data())
	|| (punt !=  nullptr && punt->has_data())
	|| (received_stat !=  nullptr && received_stat->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::has_operation() const
{
    return is_set(yfilter)
	|| (core_received_stat !=  nullptr && core_received_stat->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_operation())
	|| (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_operation())
	|| (punt !=  nullptr && punt->has_operation())
	|| (received_stat !=  nullptr && received_stat->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mulicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-received-stat")
    {
        if(core_received_stat == nullptr)
        {
            core_received_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>();
        }
        return core_received_stat;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "multicast-core-forward-stat")
    {
        if(multicast_core_forward_stat == nullptr)
        {
            multicast_core_forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>();
        }
        return multicast_core_forward_stat;
    }

    if(child_yang_name == "multicast-forward-stat")
    {
        if(multicast_forward_stat == nullptr)
        {
            multicast_forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>();
        }
        return multicast_forward_stat;
    }

    if(child_yang_name == "punt")
    {
        if(punt == nullptr)
        {
            punt = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt>();
        }
        return punt;
    }

    if(child_yang_name == "received-stat")
    {
        if(received_stat == nullptr)
        {
            received_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat>();
        }
        return received_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(core_received_stat != nullptr)
    {
        children["core-received-stat"] = core_received_stat;
    }

    if(drop != nullptr)
    {
        children["drop"] = drop;
    }

    if(multicast_core_forward_stat != nullptr)
    {
        children["multicast-core-forward-stat"] = multicast_core_forward_stat;
    }

    if(multicast_forward_stat != nullptr)
    {
        children["multicast-forward-stat"] = multicast_forward_stat;
    }

    if(punt != nullptr)
    {
        children["punt"] = punt;
    }

    if(received_stat != nullptr)
    {
        children["received-stat"] = received_stat;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-received-stat" || name == "drop" || name == "multicast-core-forward-stat" || name == "multicast-forward-stat" || name == "punt" || name == "received-stat")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::CoreReceivedStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "core-received-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::~CoreReceivedStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-received-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::Drop()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "drop"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::~Drop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::MulticastCoreForwardStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "multicast-core-forward-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::~MulticastCoreForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-core-forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::MulticastForwardStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "multicast-forward-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::~MulticastForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::Punt()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "punt"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::~Punt()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::ReceivedStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::~ReceivedStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::IrbInfo()
    :
    irb_plat_data_len{YType::uint16, "irb-plat-data-len"},
    mxid_ac_interface_handle{YType::str, "mxid-ac-interface-handle"},
    mxid_next_hop_address{YType::str, "mxid-next-hop-address"},
    mxid_pw_id{YType::uint32, "mxid-pw-id"}
{

    yang_name = "irb-info"; yang_parent_name = "l2fib-mroute-ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::~IrbInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::has_data() const
{
    for (std::size_t index=0; index<irb_plat_data.size(); index++)
    {
        if(irb_plat_data[index]->has_data())
            return true;
    }
    return irb_plat_data_len.is_set
	|| mxid_ac_interface_handle.is_set
	|| mxid_next_hop_address.is_set
	|| mxid_pw_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::has_operation() const
{
    for (std::size_t index=0; index<irb_plat_data.size(); index++)
    {
        if(irb_plat_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(irb_plat_data_len.yfilter)
	|| ydk::is_set(mxid_ac_interface_handle.yfilter)
	|| ydk::is_set(mxid_next_hop_address.yfilter)
	|| ydk::is_set(mxid_pw_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "irb-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (irb_plat_data_len.is_set || is_set(irb_plat_data_len.yfilter)) leaf_name_data.push_back(irb_plat_data_len.get_name_leafdata());
    if (mxid_ac_interface_handle.is_set || is_set(mxid_ac_interface_handle.yfilter)) leaf_name_data.push_back(mxid_ac_interface_handle.get_name_leafdata());
    if (mxid_next_hop_address.is_set || is_set(mxid_next_hop_address.yfilter)) leaf_name_data.push_back(mxid_next_hop_address.get_name_leafdata());
    if (mxid_pw_id.is_set || is_set(mxid_pw_id.yfilter)) leaf_name_data.push_back(mxid_pw_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "irb-plat-data")
    {
        for(auto const & c : irb_plat_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::IrbPlatData>();
        c->parent = this;
        irb_plat_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : irb_plat_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "irb-plat-data-len")
    {
        irb_plat_data_len = value;
        irb_plat_data_len.value_namespace = name_space;
        irb_plat_data_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mxid-ac-interface-handle")
    {
        mxid_ac_interface_handle = value;
        mxid_ac_interface_handle.value_namespace = name_space;
        mxid_ac_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mxid-next-hop-address")
    {
        mxid_next_hop_address = value;
        mxid_next_hop_address.value_namespace = name_space;
        mxid_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mxid-pw-id")
    {
        mxid_pw_id = value;
        mxid_pw_id.value_namespace = name_space;
        mxid_pw_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "irb-plat-data-len")
    {
        irb_plat_data_len.yfilter = yfilter;
    }
    if(value_path == "mxid-ac-interface-handle")
    {
        mxid_ac_interface_handle.yfilter = yfilter;
    }
    if(value_path == "mxid-next-hop-address")
    {
        mxid_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "mxid-pw-id")
    {
        mxid_pw_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "irb-plat-data" || name == "irb-plat-data-len" || name == "mxid-ac-interface-handle" || name == "mxid-next-hop-address" || name == "mxid-pw-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::IrbPlatData::IrbPlatData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "irb-plat-data"; yang_parent_name = "irb-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::IrbPlatData::~IrbPlatData()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::IrbPlatData::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::IrbPlatData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::IrbPlatData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "irb-plat-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::IrbPlatData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::IrbPlatData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::IrbPlatData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::IrbPlatData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::IrbPlatData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::IrbPlatData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation::MulticastBaseInformation()
{

    yang_name = "multicast-base-information"; yang_parent_name = "l2fib-mroute-ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation::~MulticastBaseInformation()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-base-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix::SourcePrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint16, "prefix-length"},
    proto{YType::uint8, "proto"}
{

    yang_name = "source-prefix"; yang_parent_name = "l2fib-mroute-ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix::~SourcePrefix()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| proto.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(proto.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "proto")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePorts()
{

    yang_name = "l2fib-mroute-ports"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::~L2FibMroutePorts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::has_data() const
{
    for (std::size_t index=0; index<l2fib_mroute_port.size(); index++)
    {
        if(l2fib_mroute_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mroute_port.size(); index++)
    {
        if(l2fib_mroute_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mroute-port")
    {
        for(auto const & c : l2fib_mroute_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort>();
        c->parent = this;
        l2fib_mroute_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_mroute_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mroute-port")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::L2FibMroutePort()
    :
    ac_interface_handle{YType::str, "ac-interface-handle"},
    bd_name{YType::str, "bd-name"},
    bridge_id{YType::uint32, "bridge-id"},
    csfl{YType::uint32, "csfl"},
    group{YType::str, "group"},
    is_ole_master{YType::boolean, "is-ole-master"},
    is_ole_offloaded{YType::boolean, "is-ole-offloaded"},
    is_topo_hub_and_spoke{YType::boolean, "is-topo-hub-and-spoke"},
    isid{YType::uint32, "isid"},
    leaf_pointer{YType::uint32, "leaf-pointer"},
    next_hop_address{YType::str, "next-hop-address"},
    pw_id{YType::str, "pw-id"},
    sat_id{YType::uint16, "sat-id"},
    source{YType::str, "source"},
    xcid{YType::str, "xcid"}
    	,
    base_information(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation>())
	,destination_prefix(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix>())
	,forward_stats(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats>())
	,source_prefix(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix>())
{
    base_information->parent = this;
    destination_prefix->parent = this;
    forward_stats->parent = this;
    source_prefix->parent = this;

    yang_name = "l2fib-mroute-port"; yang_parent_name = "l2fib-mroute-ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::~L2FibMroutePort()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::has_data() const
{
    return ac_interface_handle.is_set
	|| bd_name.is_set
	|| bridge_id.is_set
	|| csfl.is_set
	|| group.is_set
	|| is_ole_master.is_set
	|| is_ole_offloaded.is_set
	|| is_topo_hub_and_spoke.is_set
	|| isid.is_set
	|| leaf_pointer.is_set
	|| next_hop_address.is_set
	|| pw_id.is_set
	|| sat_id.is_set
	|| source.is_set
	|| xcid.is_set
	|| (base_information !=  nullptr && base_information->has_data())
	|| (destination_prefix !=  nullptr && destination_prefix->has_data())
	|| (forward_stats !=  nullptr && forward_stats->has_data())
	|| (source_prefix !=  nullptr && source_prefix->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ac_interface_handle.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(csfl.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(is_ole_master.yfilter)
	|| ydk::is_set(is_ole_offloaded.yfilter)
	|| ydk::is_set(is_topo_hub_and_spoke.yfilter)
	|| ydk::is_set(isid.yfilter)
	|| ydk::is_set(leaf_pointer.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(sat_id.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| (base_information !=  nullptr && base_information->has_operation())
	|| (destination_prefix !=  nullptr && destination_prefix->has_operation())
	|| (forward_stats !=  nullptr && forward_stats->has_operation())
	|| (source_prefix !=  nullptr && source_prefix->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_interface_handle.is_set || is_set(ac_interface_handle.yfilter)) leaf_name_data.push_back(ac_interface_handle.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (csfl.is_set || is_set(csfl.yfilter)) leaf_name_data.push_back(csfl.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (is_ole_master.is_set || is_set(is_ole_master.yfilter)) leaf_name_data.push_back(is_ole_master.get_name_leafdata());
    if (is_ole_offloaded.is_set || is_set(is_ole_offloaded.yfilter)) leaf_name_data.push_back(is_ole_offloaded.get_name_leafdata());
    if (is_topo_hub_and_spoke.is_set || is_set(is_topo_hub_and_spoke.yfilter)) leaf_name_data.push_back(is_topo_hub_and_spoke.get_name_leafdata());
    if (isid.is_set || is_set(isid.yfilter)) leaf_name_data.push_back(isid.get_name_leafdata());
    if (leaf_pointer.is_set || is_set(leaf_pointer.yfilter)) leaf_name_data.push_back(leaf_pointer.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (sat_id.is_set || is_set(sat_id.yfilter)) leaf_name_data.push_back(sat_id.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base-information")
    {
        if(base_information == nullptr)
        {
            base_information = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation>();
        }
        return base_information;
    }

    if(child_yang_name == "destination-prefix")
    {
        if(destination_prefix == nullptr)
        {
            destination_prefix = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix>();
        }
        return destination_prefix;
    }

    if(child_yang_name == "forward-stats")
    {
        if(forward_stats == nullptr)
        {
            forward_stats = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats>();
        }
        return forward_stats;
    }

    if(child_yang_name == "source-prefix")
    {
        if(source_prefix == nullptr)
        {
            source_prefix = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix>();
        }
        return source_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base_information != nullptr)
    {
        children["base-information"] = base_information;
    }

    if(destination_prefix != nullptr)
    {
        children["destination-prefix"] = destination_prefix;
    }

    if(forward_stats != nullptr)
    {
        children["forward-stats"] = forward_stats;
    }

    if(source_prefix != nullptr)
    {
        children["source-prefix"] = source_prefix;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ac-interface-handle")
    {
        ac_interface_handle = value;
        ac_interface_handle.value_namespace = name_space;
        ac_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csfl")
    {
        csfl = value;
        csfl.value_namespace = name_space;
        csfl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ole-master")
    {
        is_ole_master = value;
        is_ole_master.value_namespace = name_space;
        is_ole_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ole-offloaded")
    {
        is_ole_offloaded = value;
        is_ole_offloaded.value_namespace = name_space;
        is_ole_offloaded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-topo-hub-and-spoke")
    {
        is_topo_hub_and_spoke = value;
        is_topo_hub_and_spoke.value_namespace = name_space;
        is_topo_hub_and_spoke.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isid")
    {
        isid = value;
        isid.value_namespace = name_space;
        isid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-pointer")
    {
        leaf_pointer = value;
        leaf_pointer.value_namespace = name_space;
        leaf_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sat-id")
    {
        sat_id = value;
        sat_id.value_namespace = name_space;
        sat_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ac-interface-handle")
    {
        ac_interface_handle.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "csfl")
    {
        csfl.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "is-ole-master")
    {
        is_ole_master.yfilter = yfilter;
    }
    if(value_path == "is-ole-offloaded")
    {
        is_ole_offloaded.yfilter = yfilter;
    }
    if(value_path == "is-topo-hub-and-spoke")
    {
        is_topo_hub_and_spoke.yfilter = yfilter;
    }
    if(value_path == "isid")
    {
        isid.yfilter = yfilter;
    }
    if(value_path == "leaf-pointer")
    {
        leaf_pointer.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "sat-id")
    {
        sat_id.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base-information" || name == "destination-prefix" || name == "forward-stats" || name == "source-prefix" || name == "ac-interface-handle" || name == "bd-name" || name == "bridge-id" || name == "csfl" || name == "group" || name == "is-ole-master" || name == "is-ole-offloaded" || name == "is-topo-hub-and-spoke" || name == "isid" || name == "leaf-pointer" || name == "next-hop-address" || name == "pw-id" || name == "sat-id" || name == "source" || name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::BaseInformation()
{

    yang_name = "base-information"; yang_parent_name = "l2fib-mroute-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::~BaseInformation()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::DestinationPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint16, "prefix-length"},
    proto{YType::uint8, "proto"}
{

    yang_name = "destination-prefix"; yang_parent_name = "l2fib-mroute-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::~DestinationPrefix()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| proto.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(proto.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "proto")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStats()
    :
    forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat>())
{
    forward_stat->parent = this;

    yang_name = "forward-stats"; yang_parent_name = "l2fib-mroute-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::~ForwardStats()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::has_data() const
{
    return (forward_stat !=  nullptr && forward_stat->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::has_operation() const
{
    return is_set(yfilter)
	|| (forward_stat !=  nullptr && forward_stat->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-stat")
    {
        if(forward_stat == nullptr)
        {
            forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat>();
        }
        return forward_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forward_stat != nullptr)
    {
        children["forward-stat"] = forward_stat;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-stat")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::ForwardStat()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    mulicast(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast>())
{
    mulicast->parent = this;

    yang_name = "forward-stat"; yang_parent_name = "forward-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::~ForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::has_data() const
{
    return data_type.is_set
	|| (mulicast !=  nullptr && mulicast->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (mulicast !=  nullptr && mulicast->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mulicast")
    {
        if(mulicast == nullptr)
        {
            mulicast = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast>();
        }
        return mulicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mulicast != nullptr)
    {
        children["mulicast"] = mulicast;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mulicast" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Mulicast()
    :
    core_received_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>())
	,drop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop>())
	,multicast_core_forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>())
	,multicast_forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>())
	,punt(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt>())
	,received_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat>())
{
    core_received_stat->parent = this;
    drop->parent = this;
    multicast_core_forward_stat->parent = this;
    multicast_forward_stat->parent = this;
    punt->parent = this;
    received_stat->parent = this;

    yang_name = "mulicast"; yang_parent_name = "forward-stat"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::~Mulicast()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::has_data() const
{
    return (core_received_stat !=  nullptr && core_received_stat->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_data())
	|| (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_data())
	|| (punt !=  nullptr && punt->has_data())
	|| (received_stat !=  nullptr && received_stat->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::has_operation() const
{
    return is_set(yfilter)
	|| (core_received_stat !=  nullptr && core_received_stat->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_operation())
	|| (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_operation())
	|| (punt !=  nullptr && punt->has_operation())
	|| (received_stat !=  nullptr && received_stat->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mulicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-received-stat")
    {
        if(core_received_stat == nullptr)
        {
            core_received_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>();
        }
        return core_received_stat;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "multicast-core-forward-stat")
    {
        if(multicast_core_forward_stat == nullptr)
        {
            multicast_core_forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>();
        }
        return multicast_core_forward_stat;
    }

    if(child_yang_name == "multicast-forward-stat")
    {
        if(multicast_forward_stat == nullptr)
        {
            multicast_forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>();
        }
        return multicast_forward_stat;
    }

    if(child_yang_name == "punt")
    {
        if(punt == nullptr)
        {
            punt = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt>();
        }
        return punt;
    }

    if(child_yang_name == "received-stat")
    {
        if(received_stat == nullptr)
        {
            received_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat>();
        }
        return received_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(core_received_stat != nullptr)
    {
        children["core-received-stat"] = core_received_stat;
    }

    if(drop != nullptr)
    {
        children["drop"] = drop;
    }

    if(multicast_core_forward_stat != nullptr)
    {
        children["multicast-core-forward-stat"] = multicast_core_forward_stat;
    }

    if(multicast_forward_stat != nullptr)
    {
        children["multicast-forward-stat"] = multicast_forward_stat;
    }

    if(punt != nullptr)
    {
        children["punt"] = punt;
    }

    if(received_stat != nullptr)
    {
        children["received-stat"] = received_stat;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-received-stat" || name == "drop" || name == "multicast-core-forward-stat" || name == "multicast-forward-stat" || name == "punt" || name == "received-stat")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::CoreReceivedStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "core-received-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::~CoreReceivedStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-received-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::Drop()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "drop"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::~Drop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::MulticastCoreForwardStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "multicast-core-forward-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::~MulticastCoreForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-core-forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::MulticastForwardStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "multicast-forward-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::~MulticastForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::Punt()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "punt"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::~Punt()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::ReceivedStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::~ReceivedStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::SourcePrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint16, "prefix-length"},
    proto{YType::uint8, "proto"}
{

    yang_name = "source-prefix"; yang_parent_name = "l2fib-mroute-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::~SourcePrefix()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| proto.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(proto.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "proto")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummaries()
{

    yang_name = "l2fib-mroute-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::~L2FibMrouteSummaries()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::has_data() const
{
    for (std::size_t index=0; index<l2fib_mroute_summary.size(); index++)
    {
        if(l2fib_mroute_summary[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mroute_summary.size(); index++)
    {
        if(l2fib_mroute_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mroute-summary")
    {
        for(auto const & c : l2fib_mroute_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary>();
        c->parent = this;
        l2fib_mroute_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_mroute_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mroute-summary")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::L2FibMrouteSummary()
    :
    bd_group_name{YType::str, "bd-group-name"},
    bd_name{YType::str, "bd-name"},
    bridge_domain_id{YType::uint32, "bridge-domain-id"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    multicast_update{YType::uint32, "multicast-update"},
    multicast_update_dropped{YType::uint32, "multicast-update-dropped"},
    number_mroute_all_delete_drop{YType::uint32, "number-mroute-all-delete-drop"},
    number_mroute_delete_drop{YType::uint32, "number-mroute-delete-drop"},
    number_mroute_deleted{YType::uint32, "number-mroute-deleted"},
    number_mroutes_deleted_all{YType::uint32, "number-mroutes-deleted-all"},
    number_of_mroute_add{YType::uint32, "number-of-mroute-add"},
    number_of_routes{YType::uint32, "number-of-routes"},
    number_of_routes_with_ole_offload{YType::uint32, "number-of-routes-with-ole-offload"},
    number_of_xid{YType::uint32, "number-of-xid"},
    number_xid_add{YType::uint32, "number-xid-add"},
    number_xid_deleted{YType::uint32, "number-xid-deleted"},
    stale_deleted{YType::uint32, "stale-deleted"},
    stale_xid_deleted{YType::uint32, "stale-xid-deleted"}
{

    yang_name = "l2fib-mroute-summary"; yang_parent_name = "l2fib-mroute-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::~L2FibMrouteSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::has_data() const
{
    for (std::size_t index=0; index<message.size(); index++)
    {
        if(message[index]->has_data())
            return true;
    }
    return bd_group_name.is_set
	|| bd_name.is_set
	|| bridge_domain_id.is_set
	|| bridge_domain_name.is_set
	|| multicast_update.is_set
	|| multicast_update_dropped.is_set
	|| number_mroute_all_delete_drop.is_set
	|| number_mroute_delete_drop.is_set
	|| number_mroute_deleted.is_set
	|| number_mroutes_deleted_all.is_set
	|| number_of_mroute_add.is_set
	|| number_of_routes.is_set
	|| number_of_routes_with_ole_offload.is_set
	|| number_of_xid.is_set
	|| number_xid_add.is_set
	|| number_xid_deleted.is_set
	|| stale_deleted.is_set
	|| stale_xid_deleted.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::has_operation() const
{
    for (std::size_t index=0; index<message.size(); index++)
    {
        if(message[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bd_group_name.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(bridge_domain_id.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(multicast_update.yfilter)
	|| ydk::is_set(multicast_update_dropped.yfilter)
	|| ydk::is_set(number_mroute_all_delete_drop.yfilter)
	|| ydk::is_set(number_mroute_delete_drop.yfilter)
	|| ydk::is_set(number_mroute_deleted.yfilter)
	|| ydk::is_set(number_mroutes_deleted_all.yfilter)
	|| ydk::is_set(number_of_mroute_add.yfilter)
	|| ydk::is_set(number_of_routes.yfilter)
	|| ydk::is_set(number_of_routes_with_ole_offload.yfilter)
	|| ydk::is_set(number_of_xid.yfilter)
	|| ydk::is_set(number_xid_add.yfilter)
	|| ydk::is_set(number_xid_deleted.yfilter)
	|| ydk::is_set(stale_deleted.yfilter)
	|| ydk::is_set(stale_xid_deleted.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_group_name.is_set || is_set(bd_group_name.yfilter)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_domain_id.is_set || is_set(bridge_domain_id.yfilter)) leaf_name_data.push_back(bridge_domain_id.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (multicast_update.is_set || is_set(multicast_update.yfilter)) leaf_name_data.push_back(multicast_update.get_name_leafdata());
    if (multicast_update_dropped.is_set || is_set(multicast_update_dropped.yfilter)) leaf_name_data.push_back(multicast_update_dropped.get_name_leafdata());
    if (number_mroute_all_delete_drop.is_set || is_set(number_mroute_all_delete_drop.yfilter)) leaf_name_data.push_back(number_mroute_all_delete_drop.get_name_leafdata());
    if (number_mroute_delete_drop.is_set || is_set(number_mroute_delete_drop.yfilter)) leaf_name_data.push_back(number_mroute_delete_drop.get_name_leafdata());
    if (number_mroute_deleted.is_set || is_set(number_mroute_deleted.yfilter)) leaf_name_data.push_back(number_mroute_deleted.get_name_leafdata());
    if (number_mroutes_deleted_all.is_set || is_set(number_mroutes_deleted_all.yfilter)) leaf_name_data.push_back(number_mroutes_deleted_all.get_name_leafdata());
    if (number_of_mroute_add.is_set || is_set(number_of_mroute_add.yfilter)) leaf_name_data.push_back(number_of_mroute_add.get_name_leafdata());
    if (number_of_routes.is_set || is_set(number_of_routes.yfilter)) leaf_name_data.push_back(number_of_routes.get_name_leafdata());
    if (number_of_routes_with_ole_offload.is_set || is_set(number_of_routes_with_ole_offload.yfilter)) leaf_name_data.push_back(number_of_routes_with_ole_offload.get_name_leafdata());
    if (number_of_xid.is_set || is_set(number_of_xid.yfilter)) leaf_name_data.push_back(number_of_xid.get_name_leafdata());
    if (number_xid_add.is_set || is_set(number_xid_add.yfilter)) leaf_name_data.push_back(number_xid_add.get_name_leafdata());
    if (number_xid_deleted.is_set || is_set(number_xid_deleted.yfilter)) leaf_name_data.push_back(number_xid_deleted.get_name_leafdata());
    if (stale_deleted.is_set || is_set(stale_deleted.yfilter)) leaf_name_data.push_back(stale_deleted.get_name_leafdata());
    if (stale_xid_deleted.is_set || is_set(stale_xid_deleted.yfilter)) leaf_name_data.push_back(stale_xid_deleted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message")
    {
        for(auto const & c : message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message>();
        c->parent = this;
        message.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : message)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name = value;
        bd_group_name.value_namespace = name_space;
        bd_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id = value;
        bridge_domain_id.value_namespace = name_space;
        bridge_domain_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-update")
    {
        multicast_update = value;
        multicast_update.value_namespace = name_space;
        multicast_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-update-dropped")
    {
        multicast_update_dropped = value;
        multicast_update_dropped.value_namespace = name_space;
        multicast_update_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mroute-all-delete-drop")
    {
        number_mroute_all_delete_drop = value;
        number_mroute_all_delete_drop.value_namespace = name_space;
        number_mroute_all_delete_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mroute-delete-drop")
    {
        number_mroute_delete_drop = value;
        number_mroute_delete_drop.value_namespace = name_space;
        number_mroute_delete_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mroute-deleted")
    {
        number_mroute_deleted = value;
        number_mroute_deleted.value_namespace = name_space;
        number_mroute_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mroutes-deleted-all")
    {
        number_mroutes_deleted_all = value;
        number_mroutes_deleted_all.value_namespace = name_space;
        number_mroutes_deleted_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-mroute-add")
    {
        number_of_mroute_add = value;
        number_of_mroute_add.value_namespace = name_space;
        number_of_mroute_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-routes")
    {
        number_of_routes = value;
        number_of_routes.value_namespace = name_space;
        number_of_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-routes-with-ole-offload")
    {
        number_of_routes_with_ole_offload = value;
        number_of_routes_with_ole_offload.value_namespace = name_space;
        number_of_routes_with_ole_offload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-xid")
    {
        number_of_xid = value;
        number_of_xid.value_namespace = name_space;
        number_of_xid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xid-add")
    {
        number_xid_add = value;
        number_xid_add.value_namespace = name_space;
        number_xid_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xid-deleted")
    {
        number_xid_deleted = value;
        number_xid_deleted.value_namespace = name_space;
        number_xid_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-deleted")
    {
        stale_deleted = value;
        stale_deleted.value_namespace = name_space;
        stale_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-xid-deleted")
    {
        stale_xid_deleted = value;
        stale_xid_deleted.value_namespace = name_space;
        stale_xid_deleted.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "multicast-update")
    {
        multicast_update.yfilter = yfilter;
    }
    if(value_path == "multicast-update-dropped")
    {
        multicast_update_dropped.yfilter = yfilter;
    }
    if(value_path == "number-mroute-all-delete-drop")
    {
        number_mroute_all_delete_drop.yfilter = yfilter;
    }
    if(value_path == "number-mroute-delete-drop")
    {
        number_mroute_delete_drop.yfilter = yfilter;
    }
    if(value_path == "number-mroute-deleted")
    {
        number_mroute_deleted.yfilter = yfilter;
    }
    if(value_path == "number-mroutes-deleted-all")
    {
        number_mroutes_deleted_all.yfilter = yfilter;
    }
    if(value_path == "number-of-mroute-add")
    {
        number_of_mroute_add.yfilter = yfilter;
    }
    if(value_path == "number-of-routes")
    {
        number_of_routes.yfilter = yfilter;
    }
    if(value_path == "number-of-routes-with-ole-offload")
    {
        number_of_routes_with_ole_offload.yfilter = yfilter;
    }
    if(value_path == "number-of-xid")
    {
        number_of_xid.yfilter = yfilter;
    }
    if(value_path == "number-xid-add")
    {
        number_xid_add.yfilter = yfilter;
    }
    if(value_path == "number-xid-deleted")
    {
        number_xid_deleted.yfilter = yfilter;
    }
    if(value_path == "stale-deleted")
    {
        stale_deleted.yfilter = yfilter;
    }
    if(value_path == "stale-xid-deleted")
    {
        stale_xid_deleted.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message" || name == "bd-group-name" || name == "bd-name" || name == "bridge-domain-id" || name == "bridge-domain-name" || name == "multicast-update" || name == "multicast-update-dropped" || name == "number-mroute-all-delete-drop" || name == "number-mroute-delete-drop" || name == "number-mroute-deleted" || name == "number-mroutes-deleted-all" || name == "number-of-mroute-add" || name == "number-of-routes" || name == "number-of-routes-with-ole-offload" || name == "number-of-xid" || name == "number-xid-add" || name == "number-xid-deleted" || name == "stale-deleted" || name == "stale-xid-deleted")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::Message()
    :
    information1{YType::uint32, "information1"},
    information2{YType::uint32, "information2"},
    messgae_count{YType::uint32, "messgae-count"},
    time{YType::str, "time"}
{

    yang_name = "message"; yang_parent_name = "l2fib-mroute-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::~Message()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::has_data() const
{
    return information1.is_set
	|| information2.is_set
	|| messgae_count.is_set
	|| time.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(information1.yfilter)
	|| ydk::is_set(information2.yfilter)
	|| ydk::is_set(messgae_count.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (information1.is_set || is_set(information1.yfilter)) leaf_name_data.push_back(information1.get_name_leafdata());
    if (information2.is_set || is_set(information2.yfilter)) leaf_name_data.push_back(information2.get_name_leafdata());
    if (messgae_count.is_set || is_set(messgae_count.yfilter)) leaf_name_data.push_back(messgae_count.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "information1")
    {
        information1 = value;
        information1.value_namespace = name_space;
        information1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information2")
    {
        information2 = value;
        information2.value_namespace = name_space;
        information2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messgae-count")
    {
        messgae_count = value;
        messgae_count.value_namespace = name_space;
        messgae_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "information1")
    {
        information1.yfilter = yfilter;
    }
    if(value_path == "information2")
    {
        information2.yfilter = yfilter;
    }
    if(value_path == "messgae-count")
    {
        messgae_count.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information1" || name == "information2" || name == "messgae-count" || name == "time")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroutes()
{

    yang_name = "l2fib-mroutes"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::~L2FibMroutes()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::has_data() const
{
    for (std::size_t index=0; index<l2fib_mroute.size(); index++)
    {
        if(l2fib_mroute[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mroute.size(); index++)
    {
        if(l2fib_mroute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroutes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mroute")
    {
        for(auto const & c : l2fib_mroute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute>();
        c->parent = this;
        l2fib_mroute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_mroute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mroute")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::L2FibMroute()
    :
    bd_group_name{YType::str, "bd-group-name"},
    bd_name{YType::str, "bd-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    bridge_id{YType::uint32, "bridge-id"},
    group{YType::str, "group"},
    hardware_information{YType::str, "hardware-information"},
    platform_data{YType::str, "platform-data"},
    platform_data_length{YType::uint8, "platform-data-length"},
    source{YType::str, "source"},
    xid_count{YType::uint16, "xid-count"}
    	,
    destination_prefix(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix>())
	,forward_stats(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats>())
	,irb_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo>())
	,multicast_base_information(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation>())
	,source_prefix(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix>())
{
    destination_prefix->parent = this;
    forward_stats->parent = this;
    irb_info->parent = this;
    multicast_base_information->parent = this;
    source_prefix->parent = this;

    yang_name = "l2fib-mroute"; yang_parent_name = "l2fib-mroutes"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::~L2FibMroute()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::has_data() const
{
    return bd_group_name.is_set
	|| bd_name.is_set
	|| bridge_domain_name.is_set
	|| bridge_id.is_set
	|| group.is_set
	|| hardware_information.is_set
	|| platform_data.is_set
	|| platform_data_length.is_set
	|| source.is_set
	|| xid_count.is_set
	|| (destination_prefix !=  nullptr && destination_prefix->has_data())
	|| (forward_stats !=  nullptr && forward_stats->has_data())
	|| (irb_info !=  nullptr && irb_info->has_data())
	|| (multicast_base_information !=  nullptr && multicast_base_information->has_data())
	|| (source_prefix !=  nullptr && source_prefix->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_group_name.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(platform_data.yfilter)
	|| ydk::is_set(platform_data_length.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(xid_count.yfilter)
	|| (destination_prefix !=  nullptr && destination_prefix->has_operation())
	|| (forward_stats !=  nullptr && forward_stats->has_operation())
	|| (irb_info !=  nullptr && irb_info->has_operation())
	|| (multicast_base_information !=  nullptr && multicast_base_information->has_operation())
	|| (source_prefix !=  nullptr && source_prefix->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_group_name.is_set || is_set(bd_group_name.yfilter)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (platform_data.is_set || is_set(platform_data.yfilter)) leaf_name_data.push_back(platform_data.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.yfilter)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (xid_count.is_set || is_set(xid_count.yfilter)) leaf_name_data.push_back(xid_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-prefix")
    {
        if(destination_prefix == nullptr)
        {
            destination_prefix = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix>();
        }
        return destination_prefix;
    }

    if(child_yang_name == "forward-stats")
    {
        if(forward_stats == nullptr)
        {
            forward_stats = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats>();
        }
        return forward_stats;
    }

    if(child_yang_name == "irb-info")
    {
        if(irb_info == nullptr)
        {
            irb_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo>();
        }
        return irb_info;
    }

    if(child_yang_name == "multicast-base-information")
    {
        if(multicast_base_information == nullptr)
        {
            multicast_base_information = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation>();
        }
        return multicast_base_information;
    }

    if(child_yang_name == "source-prefix")
    {
        if(source_prefix == nullptr)
        {
            source_prefix = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix>();
        }
        return source_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_prefix != nullptr)
    {
        children["destination-prefix"] = destination_prefix;
    }

    if(forward_stats != nullptr)
    {
        children["forward-stats"] = forward_stats;
    }

    if(irb_info != nullptr)
    {
        children["irb-info"] = irb_info;
    }

    if(multicast_base_information != nullptr)
    {
        children["multicast-base-information"] = multicast_base_information;
    }

    if(source_prefix != nullptr)
    {
        children["source-prefix"] = source_prefix;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name = value;
        bd_group_name.value_namespace = name_space;
        bd_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-data")
    {
        platform_data = value;
        platform_data.value_namespace = name_space;
        platform_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
        platform_data_length.value_namespace = name_space;
        platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid-count")
    {
        xid_count = value;
        xid_count.value_namespace = name_space;
        xid_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "platform-data")
    {
        platform_data.yfilter = yfilter;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "xid-count")
    {
        xid_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-prefix" || name == "forward-stats" || name == "irb-info" || name == "multicast-base-information" || name == "source-prefix" || name == "bd-group-name" || name == "bd-name" || name == "bridge-domain-name" || name == "bridge-id" || name == "group" || name == "hardware-information" || name == "platform-data" || name == "platform-data-length" || name == "source" || name == "xid-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::DestinationPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint16, "prefix-length"},
    proto{YType::uint8, "proto"}
{

    yang_name = "destination-prefix"; yang_parent_name = "l2fib-mroute"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::~DestinationPrefix()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| proto.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(proto.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "proto")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStats()
    :
    forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat>())
{
    forward_stat->parent = this;

    yang_name = "forward-stats"; yang_parent_name = "l2fib-mroute"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::~ForwardStats()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::has_data() const
{
    return (forward_stat !=  nullptr && forward_stat->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::has_operation() const
{
    return is_set(yfilter)
	|| (forward_stat !=  nullptr && forward_stat->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-stat")
    {
        if(forward_stat == nullptr)
        {
            forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat>();
        }
        return forward_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forward_stat != nullptr)
    {
        children["forward-stat"] = forward_stat;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-stat")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::ForwardStat()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    mulicast(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast>())
{
    mulicast->parent = this;

    yang_name = "forward-stat"; yang_parent_name = "forward-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::~ForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::has_data() const
{
    return data_type.is_set
	|| (mulicast !=  nullptr && mulicast->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (mulicast !=  nullptr && mulicast->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mulicast")
    {
        if(mulicast == nullptr)
        {
            mulicast = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast>();
        }
        return mulicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mulicast != nullptr)
    {
        children["mulicast"] = mulicast;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mulicast" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Mulicast()
    :
    core_received_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>())
	,drop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop>())
	,multicast_core_forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>())
	,multicast_forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>())
	,punt(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt>())
	,received_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat>())
{
    core_received_stat->parent = this;
    drop->parent = this;
    multicast_core_forward_stat->parent = this;
    multicast_forward_stat->parent = this;
    punt->parent = this;
    received_stat->parent = this;

    yang_name = "mulicast"; yang_parent_name = "forward-stat"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::~Mulicast()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::has_data() const
{
    return (core_received_stat !=  nullptr && core_received_stat->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_data())
	|| (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_data())
	|| (punt !=  nullptr && punt->has_data())
	|| (received_stat !=  nullptr && received_stat->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::has_operation() const
{
    return is_set(yfilter)
	|| (core_received_stat !=  nullptr && core_received_stat->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_operation())
	|| (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_operation())
	|| (punt !=  nullptr && punt->has_operation())
	|| (received_stat !=  nullptr && received_stat->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mulicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-received-stat")
    {
        if(core_received_stat == nullptr)
        {
            core_received_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>();
        }
        return core_received_stat;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "multicast-core-forward-stat")
    {
        if(multicast_core_forward_stat == nullptr)
        {
            multicast_core_forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>();
        }
        return multicast_core_forward_stat;
    }

    if(child_yang_name == "multicast-forward-stat")
    {
        if(multicast_forward_stat == nullptr)
        {
            multicast_forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>();
        }
        return multicast_forward_stat;
    }

    if(child_yang_name == "punt")
    {
        if(punt == nullptr)
        {
            punt = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt>();
        }
        return punt;
    }

    if(child_yang_name == "received-stat")
    {
        if(received_stat == nullptr)
        {
            received_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat>();
        }
        return received_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(core_received_stat != nullptr)
    {
        children["core-received-stat"] = core_received_stat;
    }

    if(drop != nullptr)
    {
        children["drop"] = drop;
    }

    if(multicast_core_forward_stat != nullptr)
    {
        children["multicast-core-forward-stat"] = multicast_core_forward_stat;
    }

    if(multicast_forward_stat != nullptr)
    {
        children["multicast-forward-stat"] = multicast_forward_stat;
    }

    if(punt != nullptr)
    {
        children["punt"] = punt;
    }

    if(received_stat != nullptr)
    {
        children["received-stat"] = received_stat;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-received-stat" || name == "drop" || name == "multicast-core-forward-stat" || name == "multicast-forward-stat" || name == "punt" || name == "received-stat")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::CoreReceivedStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "core-received-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::~CoreReceivedStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-received-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::Drop()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "drop"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::~Drop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::MulticastCoreForwardStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "multicast-core-forward-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::~MulticastCoreForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-core-forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::MulticastForwardStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "multicast-forward-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::~MulticastForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::Punt()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "punt"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::~Punt()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::ReceivedStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::~ReceivedStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::IrbInfo()
    :
    irb_plat_data_len{YType::uint16, "irb-plat-data-len"},
    mxid_ac_interface_handle{YType::str, "mxid-ac-interface-handle"},
    mxid_next_hop_address{YType::str, "mxid-next-hop-address"},
    mxid_pw_id{YType::uint32, "mxid-pw-id"}
{

    yang_name = "irb-info"; yang_parent_name = "l2fib-mroute"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::~IrbInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::has_data() const
{
    for (std::size_t index=0; index<irb_plat_data.size(); index++)
    {
        if(irb_plat_data[index]->has_data())
            return true;
    }
    return irb_plat_data_len.is_set
	|| mxid_ac_interface_handle.is_set
	|| mxid_next_hop_address.is_set
	|| mxid_pw_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::has_operation() const
{
    for (std::size_t index=0; index<irb_plat_data.size(); index++)
    {
        if(irb_plat_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(irb_plat_data_len.yfilter)
	|| ydk::is_set(mxid_ac_interface_handle.yfilter)
	|| ydk::is_set(mxid_next_hop_address.yfilter)
	|| ydk::is_set(mxid_pw_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "irb-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (irb_plat_data_len.is_set || is_set(irb_plat_data_len.yfilter)) leaf_name_data.push_back(irb_plat_data_len.get_name_leafdata());
    if (mxid_ac_interface_handle.is_set || is_set(mxid_ac_interface_handle.yfilter)) leaf_name_data.push_back(mxid_ac_interface_handle.get_name_leafdata());
    if (mxid_next_hop_address.is_set || is_set(mxid_next_hop_address.yfilter)) leaf_name_data.push_back(mxid_next_hop_address.get_name_leafdata());
    if (mxid_pw_id.is_set || is_set(mxid_pw_id.yfilter)) leaf_name_data.push_back(mxid_pw_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "irb-plat-data")
    {
        for(auto const & c : irb_plat_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::IrbPlatData>();
        c->parent = this;
        irb_plat_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : irb_plat_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "irb-plat-data-len")
    {
        irb_plat_data_len = value;
        irb_plat_data_len.value_namespace = name_space;
        irb_plat_data_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mxid-ac-interface-handle")
    {
        mxid_ac_interface_handle = value;
        mxid_ac_interface_handle.value_namespace = name_space;
        mxid_ac_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mxid-next-hop-address")
    {
        mxid_next_hop_address = value;
        mxid_next_hop_address.value_namespace = name_space;
        mxid_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mxid-pw-id")
    {
        mxid_pw_id = value;
        mxid_pw_id.value_namespace = name_space;
        mxid_pw_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "irb-plat-data-len")
    {
        irb_plat_data_len.yfilter = yfilter;
    }
    if(value_path == "mxid-ac-interface-handle")
    {
        mxid_ac_interface_handle.yfilter = yfilter;
    }
    if(value_path == "mxid-next-hop-address")
    {
        mxid_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "mxid-pw-id")
    {
        mxid_pw_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "irb-plat-data" || name == "irb-plat-data-len" || name == "mxid-ac-interface-handle" || name == "mxid-next-hop-address" || name == "mxid-pw-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::IrbPlatData::IrbPlatData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "irb-plat-data"; yang_parent_name = "irb-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::IrbPlatData::~IrbPlatData()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::IrbPlatData::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::IrbPlatData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::IrbPlatData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "irb-plat-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::IrbPlatData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::IrbPlatData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::IrbPlatData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::IrbPlatData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::IrbPlatData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::IrbPlatData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::MulticastBaseInformation()
{

    yang_name = "multicast-base-information"; yang_parent_name = "l2fib-mroute"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::~MulticastBaseInformation()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-base-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::SourcePrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint16, "prefix-length"},
    proto{YType::uint8, "proto"}
{

    yang_name = "source-prefix"; yang_parent_name = "l2fib-mroute"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::~SourcePrefix()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| proto.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(proto.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "proto")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetails()
{

    yang_name = "l2fib-mstp-details"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::~L2FibMstpDetails()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::has_data() const
{
    for (std::size_t index=0; index<l2fib_mstp_detail.size(); index++)
    {
        if(l2fib_mstp_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mstp_detail.size(); index++)
    {
        if(l2fib_mstp_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMstpDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mstp-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMstpDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mstp-detail")
    {
        for(auto const & c : l2fib_mstp_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail>();
        c->parent = this;
        l2fib_mstp_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_mstp_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mstp-detail")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::L2FibMstpDetail()
    :
    internal_msti{YType::uint32, "internal-msti"},
    learn_key{YType::uint8, "learn-key"},
    msti{YType::int32, "msti"},
    msti_xr{YType::uint32, "msti-xr"},
    parent_interface{YType::str, "parent-interface"},
    parent_interface_xr{YType::str, "parent-interface-xr"},
    state{YType::uint32, "state"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base>())
{
    base->parent = this;

    yang_name = "l2fib-mstp-detail"; yang_parent_name = "l2fib-mstp-details"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::~L2FibMstpDetail()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::has_data() const
{
    for (std::size_t index=0; index<bridge_port_array.size(); index++)
    {
        if(bridge_port_array[index]->has_data())
            return true;
    }
    return internal_msti.is_set
	|| learn_key.is_set
	|| msti.is_set
	|| msti_xr.is_set
	|| parent_interface.is_set
	|| parent_interface_xr.is_set
	|| state.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::has_operation() const
{
    for (std::size_t index=0; index<bridge_port_array.size(); index++)
    {
        if(bridge_port_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(internal_msti.yfilter)
	|| ydk::is_set(learn_key.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(msti_xr.yfilter)
	|| ydk::is_set(parent_interface.yfilter)
	|| ydk::is_set(parent_interface_xr.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mstp-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_msti.is_set || is_set(internal_msti.yfilter)) leaf_name_data.push_back(internal_msti.get_name_leafdata());
    if (learn_key.is_set || is_set(learn_key.yfilter)) leaf_name_data.push_back(learn_key.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (msti_xr.is_set || is_set(msti_xr.yfilter)) leaf_name_data.push_back(msti_xr.get_name_leafdata());
    if (parent_interface.is_set || is_set(parent_interface.yfilter)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (parent_interface_xr.is_set || is_set(parent_interface_xr.yfilter)) leaf_name_data.push_back(parent_interface_xr.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base>();
        }
        return base;
    }

    if(child_yang_name == "bridge-port-array")
    {
        for(auto const & c : bridge_port_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray>();
        c->parent = this;
        bridge_port_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    for (auto const & c : bridge_port_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-msti")
    {
        internal_msti = value;
        internal_msti.value_namespace = name_space;
        internal_msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn-key")
    {
        learn_key = value;
        learn_key.value_namespace = name_space;
        learn_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-xr")
    {
        msti_xr = value;
        msti_xr.value_namespace = name_space;
        msti_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface")
    {
        parent_interface = value;
        parent_interface.value_namespace = name_space;
        parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-xr")
    {
        parent_interface_xr = value;
        parent_interface_xr.value_namespace = name_space;
        parent_interface_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-msti")
    {
        internal_msti.yfilter = yfilter;
    }
    if(value_path == "learn-key")
    {
        learn_key.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "msti-xr")
    {
        msti_xr.yfilter = yfilter;
    }
    if(value_path == "parent-interface")
    {
        parent_interface.yfilter = yfilter;
    }
    if(value_path == "parent-interface-xr")
    {
        parent_interface_xr.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "bridge-port-array" || name == "internal-msti" || name == "learn-key" || name == "msti" || name == "msti-xr" || name == "parent-interface" || name == "parent-interface-xr" || name == "state")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2fib-mstp-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::BridgePortArray()
    :
    entry{YType::str, "entry"}
{

    yang_name = "bridge-port-array"; yang_parent_name = "l2fib-mstp-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::~BridgePortArray()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-port-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummaries()
{

    yang_name = "l2fib-mstp-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::~L2FibMstpSummaries()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::has_data() const
{
    for (std::size_t index=0; index<l2fib_mstp_summary.size(); index++)
    {
        if(l2fib_mstp_summary[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mstp_summary.size(); index++)
    {
        if(l2fib_mstp_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mstp-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mstp-summary")
    {
        for(auto const & c : l2fib_mstp_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary>();
        c->parent = this;
        l2fib_mstp_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_mstp_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mstp-summary")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::L2FibMstpSummary()
    :
    bridge_port_count{YType::uint32, "bridge-port-count"},
    msti{YType::int32, "msti"},
    msti_xr{YType::uint32, "msti-xr"},
    parent_interface{YType::str, "parent-interface"},
    parent_interface_xr{YType::str, "parent-interface-xr"},
    state{YType::uint32, "state"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base>())
{
    base->parent = this;

    yang_name = "l2fib-mstp-summary"; yang_parent_name = "l2fib-mstp-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::~L2FibMstpSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::has_data() const
{
    return bridge_port_count.is_set
	|| msti.is_set
	|| msti_xr.is_set
	|| parent_interface.is_set
	|| parent_interface_xr.is_set
	|| state.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_port_count.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(msti_xr.yfilter)
	|| ydk::is_set(parent_interface.yfilter)
	|| ydk::is_set(parent_interface_xr.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mstp-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port_count.is_set || is_set(bridge_port_count.yfilter)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (msti_xr.is_set || is_set(msti_xr.yfilter)) leaf_name_data.push_back(msti_xr.get_name_leafdata());
    if (parent_interface.is_set || is_set(parent_interface.yfilter)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (parent_interface_xr.is_set || is_set(parent_interface_xr.yfilter)) leaf_name_data.push_back(parent_interface_xr.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
        bridge_port_count.value_namespace = name_space;
        bridge_port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-xr")
    {
        msti_xr = value;
        msti_xr.value_namespace = name_space;
        msti_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface")
    {
        parent_interface = value;
        parent_interface.value_namespace = name_space;
        parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-xr")
    {
        parent_interface_xr = value;
        parent_interface_xr.value_namespace = name_space;
        parent_interface_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "msti-xr")
    {
        msti_xr.yfilter = yfilter;
    }
    if(value_path == "parent-interface")
    {
        parent_interface.yfilter = yfilter;
    }
    if(value_path == "parent-interface-xr")
    {
        parent_interface_xr.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "bridge-port-count" || name == "msti" || name == "msti-xr" || name == "parent-interface" || name == "parent-interface-xr" || name == "state")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2fib-mstp-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeers()
{

    yang_name = "l2fib-nve-peers"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibNvePeers::~L2FibNvePeers()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibNvePeers::has_data() const
{
    for (std::size_t index=0; index<l2fib_nve_peer.size(); index++)
    {
        if(l2fib_nve_peer[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibNvePeers::has_operation() const
{
    for (std::size_t index=0; index<l2fib_nve_peer.size(); index++)
    {
        if(l2fib_nve_peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibNvePeers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-nve-peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibNvePeers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibNvePeers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-nve-peer")
    {
        for(auto const & c : l2fib_nve_peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer>();
        c->parent = this;
        l2fib_nve_peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibNvePeers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_nve_peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibNvePeers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibNvePeers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibNvePeers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-nve-peer")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::L2FibNvePeer()
    :
    nve_if{YType::str, "nve-if"},
    vn_iid{YType::uint32, "vn-iid"},
    vniid{YType::str, "vniid"},
    vte_pip{YType::str, "vte-pip"},
    vtep_address{YType::str, "vtep-address"},
    xc_uint_id{YType::str, "xc-uint-id"}
{

    yang_name = "l2fib-nve-peer"; yang_parent_name = "l2fib-nve-peers"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::~L2FibNvePeer()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::has_data() const
{
    return nve_if.is_set
	|| vn_iid.is_set
	|| vniid.is_set
	|| vte_pip.is_set
	|| vtep_address.is_set
	|| xc_uint_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nve_if.yfilter)
	|| ydk::is_set(vn_iid.yfilter)
	|| ydk::is_set(vniid.yfilter)
	|| ydk::is_set(vte_pip.yfilter)
	|| ydk::is_set(vtep_address.yfilter)
	|| ydk::is_set(xc_uint_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-nve-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nve_if.is_set || is_set(nve_if.yfilter)) leaf_name_data.push_back(nve_if.get_name_leafdata());
    if (vn_iid.is_set || is_set(vn_iid.yfilter)) leaf_name_data.push_back(vn_iid.get_name_leafdata());
    if (vniid.is_set || is_set(vniid.yfilter)) leaf_name_data.push_back(vniid.get_name_leafdata());
    if (vte_pip.is_set || is_set(vte_pip.yfilter)) leaf_name_data.push_back(vte_pip.get_name_leafdata());
    if (vtep_address.is_set || is_set(vtep_address.yfilter)) leaf_name_data.push_back(vtep_address.get_name_leafdata());
    if (xc_uint_id.is_set || is_set(xc_uint_id.yfilter)) leaf_name_data.push_back(xc_uint_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nve-if")
    {
        nve_if = value;
        nve_if.value_namespace = name_space;
        nve_if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vn-iid")
    {
        vn_iid = value;
        vn_iid.value_namespace = name_space;
        vn_iid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vniid")
    {
        vniid = value;
        vniid.value_namespace = name_space;
        vniid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vte-pip")
    {
        vte_pip = value;
        vte_pip.value_namespace = name_space;
        vte_pip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtep-address")
    {
        vtep_address = value;
        vtep_address.value_namespace = name_space;
        vtep_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xc-uint-id")
    {
        xc_uint_id = value;
        xc_uint_id.value_namespace = name_space;
        xc_uint_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nve-if")
    {
        nve_if.yfilter = yfilter;
    }
    if(value_path == "vn-iid")
    {
        vn_iid.yfilter = yfilter;
    }
    if(value_path == "vniid")
    {
        vniid.yfilter = yfilter;
    }
    if(value_path == "vte-pip")
    {
        vte_pip.yfilter = yfilter;
    }
    if(value_path == "vtep-address")
    {
        vtep_address.yfilter = yfilter;
    }
    if(value_path == "xc-uint-id")
    {
        xc_uint_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nve-if" || name == "vn-iid" || name == "vniid" || name == "vte-pip" || name == "vtep-address" || name == "xc-uint-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibP2Mp::L2FibP2Mp()
    :
    ptrees(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees>())
{
    ptrees->parent = this;

    yang_name = "l2fib-p2mp"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibP2Mp::~L2FibP2Mp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibP2Mp::has_data() const
{
    return (ptrees !=  nullptr && ptrees->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibP2Mp::has_operation() const
{
    return is_set(yfilter)
	|| (ptrees !=  nullptr && ptrees->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibP2Mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-p2mp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibP2Mp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibP2Mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ptrees")
    {
        if(ptrees == nullptr)
        {
            ptrees = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees>();
        }
        return ptrees;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibP2Mp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ptrees != nullptr)
    {
        children["ptrees"] = ptrees;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibP2Mp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibP2Mp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibP2Mp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ptrees")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptrees()
{

    yang_name = "ptrees"; yang_parent_name = "l2fib-p2mp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::~Ptrees()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::has_data() const
{
    for (std::size_t index=0; index<ptree.size(); index++)
    {
        if(ptree[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::has_operation() const
{
    for (std::size_t index=0; index<ptree.size(); index++)
    {
        if(ptree[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptrees";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ptree")
    {
        for(auto const & c : ptree)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree>();
        c->parent = this;
        ptree.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ptree)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ptree")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::Ptree()
    :
    extended_tunnel_id{YType::int32, "extended-tunnel-id"},
    extended_tunnel_id_xr{YType::str, "extended-tunnel-id-xr"},
    lsm_id{YType::int32, "lsm-id"},
    lsm_id_xr{YType::uint32, "lsm-id-xr"},
    p2mp_id{YType::int32, "p2mp-id"},
    p2mp_id_xr{YType::uint32, "p2mp-id-xr"},
    ptree_type{YType::enumeration, "ptree-type"},
    tunnel_id{YType::int32, "tunnel-id"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"}
{

    yang_name = "ptree"; yang_parent_name = "ptrees"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::~Ptree()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::has_data() const
{
    return extended_tunnel_id.is_set
	|| extended_tunnel_id_xr.is_set
	|| lsm_id.is_set
	|| lsm_id_xr.is_set
	|| p2mp_id.is_set
	|| p2mp_id_xr.is_set
	|| ptree_type.is_set
	|| tunnel_id.is_set
	|| tunnel_id_xr.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id_xr.yfilter)
	|| ydk::is_set(lsm_id.yfilter)
	|| ydk::is_set(lsm_id_xr.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(p2mp_id_xr.yfilter)
	|| ydk::is_set(ptree_type.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (extended_tunnel_id_xr.is_set || is_set(extended_tunnel_id_xr.yfilter)) leaf_name_data.push_back(extended_tunnel_id_xr.get_name_leafdata());
    if (lsm_id.is_set || is_set(lsm_id.yfilter)) leaf_name_data.push_back(lsm_id.get_name_leafdata());
    if (lsm_id_xr.is_set || is_set(lsm_id_xr.yfilter)) leaf_name_data.push_back(lsm_id_xr.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (p2mp_id_xr.is_set || is_set(p2mp_id_xr.yfilter)) leaf_name_data.push_back(p2mp_id_xr.get_name_leafdata());
    if (ptree_type.is_set || is_set(ptree_type.yfilter)) leaf_name_data.push_back(ptree_type.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr = value;
        extended_tunnel_id_xr.value_namespace = name_space;
        extended_tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsm-id")
    {
        lsm_id = value;
        lsm_id.value_namespace = name_space;
        lsm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsm-id-xr")
    {
        lsm_id_xr = value;
        lsm_id_xr.value_namespace = name_space;
        lsm_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr = value;
        p2mp_id_xr.value_namespace = name_space;
        p2mp_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptree-type")
    {
        ptree_type = value;
        ptree_type.value_namespace = name_space;
        ptree_type.value_namespace_prefix = name_space_prefix;
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
}

void L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "lsm-id")
    {
        lsm_id.yfilter = yfilter;
    }
    if(value_path == "lsm-id-xr")
    {
        lsm_id_xr.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr.yfilter = yfilter;
    }
    if(value_path == "ptree-type")
    {
        ptree_type.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-tunnel-id" || name == "extended-tunnel-id-xr" || name == "lsm-id" || name == "lsm-id-xr" || name == "p2mp-id" || name == "p2mp-id-xr" || name == "ptree-type" || name == "tunnel-id" || name == "tunnel-id-xr")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroups()
{

    yang_name = "l2fib-pw-groups"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibPwGroups::~L2FibPwGroups()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibPwGroups::has_data() const
{
    for (std::size_t index=0; index<l2fib_pw_group.size(); index++)
    {
        if(l2fib_pw_group[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibPwGroups::has_operation() const
{
    for (std::size_t index=0; index<l2fib_pw_group.size(); index++)
    {
        if(l2fib_pw_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibPwGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-pw-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibPwGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibPwGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-pw-group")
    {
        for(auto const & c : l2fib_pw_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup>();
        c->parent = this;
        l2fib_pw_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibPwGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_pw_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibPwGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibPwGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibPwGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-pw-group")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::L2FibPwGroup()
    :
    group_id{YType::int32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    peer_address{YType::str, "peer-address"},
    pw_list_count{YType::uint32, "pw-list-count"},
    tunnel_if_handle{YType::int32, "tunnel-if-handle"}
{

    yang_name = "l2fib-pw-group"; yang_parent_name = "l2fib-pw-groups"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::~L2FibPwGroup()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::has_data() const
{
    return group_id.is_set
	|| group_state.is_set
	|| peer_address.is_set
	|| pw_list_count.is_set
	|| tunnel_if_handle.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_state.yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(pw_list_count.yfilter)
	|| ydk::is_set(tunnel_if_handle.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-pw-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.yfilter)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (pw_list_count.is_set || is_set(pw_list_count.yfilter)) leaf_name_data.push_back(pw_list_count.get_name_leafdata());
    if (tunnel_if_handle.is_set || is_set(tunnel_if_handle.yfilter)) leaf_name_data.push_back(tunnel_if_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-state")
    {
        group_state = value;
        group_state.value_namespace = name_space;
        group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-list-count")
    {
        pw_list_count = value;
        pw_list_count.value_namespace = name_space;
        pw_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-if-handle")
    {
        tunnel_if_handle = value;
        tunnel_if_handle.value_namespace = name_space;
        tunnel_if_handle.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-state")
    {
        group_state.yfilter = yfilter;
    }
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "pw-list-count")
    {
        pw_list_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-if-handle")
    {
        tunnel_if_handle.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id" || name == "group-state" || name == "peer-address" || name == "pw-list-count" || name == "tunnel-if-handle")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPorts()
{

    yang_name = "l2fib-pwhe-main-ports"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::~L2FibPwheMainPorts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::has_data() const
{
    for (std::size_t index=0; index<l2fib_pwhe_main_port.size(); index++)
    {
        if(l2fib_pwhe_main_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::has_operation() const
{
    for (std::size_t index=0; index<l2fib_pwhe_main_port.size(); index++)
    {
        if(l2fib_pwhe_main_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-pwhe-main-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-pwhe-main-port")
    {
        for(auto const & c : l2fib_pwhe_main_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort>();
        c->parent = this;
        l2fib_pwhe_main_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_pwhe_main_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-pwhe-main-port")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::L2FibPwheMainPort()
    :
    interface_name{YType::str, "interface-name"},
    control_word_enabled{YType::boolean, "control-word-enabled"},
    generic_interface_list_id{YType::uint32, "generic-interface-list-id"},
    internal_label{YType::uint32, "internal-label"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    pseudo_wire_type{YType::uint32, "pseudo-wire-type"},
    remote_label{YType::uint32, "remote-label"}
{

    yang_name = "l2fib-pwhe-main-port"; yang_parent_name = "l2fib-pwhe-main-ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::~L2FibPwheMainPort()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::has_data() const
{
    return interface_name.is_set
	|| control_word_enabled.is_set
	|| generic_interface_list_id.is_set
	|| internal_label.is_set
	|| next_hop_address.is_set
	|| next_hop_valid.is_set
	|| pseudo_wire_type.is_set
	|| remote_label.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(control_word_enabled.yfilter)
	|| ydk::is_set(generic_interface_list_id.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(pseudo_wire_type.yfilter)
	|| ydk::is_set(remote_label.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-pwhe-main-port" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (control_word_enabled.is_set || is_set(control_word_enabled.yfilter)) leaf_name_data.push_back(control_word_enabled.get_name_leafdata());
    if (generic_interface_list_id.is_set || is_set(generic_interface_list_id.yfilter)) leaf_name_data.push_back(generic_interface_list_id.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (pseudo_wire_type.is_set || is_set(pseudo_wire_type.yfilter)) leaf_name_data.push_back(pseudo_wire_type.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.yfilter)) leaf_name_data.push_back(remote_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word-enabled")
    {
        control_word_enabled = value;
        control_word_enabled.value_namespace = name_space;
        control_word_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generic-interface-list-id")
    {
        generic_interface_list_id = value;
        generic_interface_list_id.value_namespace = name_space;
        generic_interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-type")
    {
        pseudo_wire_type = value;
        pseudo_wire_type.value_namespace = name_space;
        pseudo_wire_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
        remote_label.value_namespace = name_space;
        remote_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "control-word-enabled")
    {
        control_word_enabled.yfilter = yfilter;
    }
    if(value_path == "generic-interface-list-id")
    {
        generic_interface_list_id.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-type")
    {
        pseudo_wire_type.yfilter = yfilter;
    }
    if(value_path == "remote-label")
    {
        remote_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "control-word-enabled" || name == "generic-interface-list-id" || name == "internal-label" || name == "next-hop-address" || name == "next-hop-valid" || name == "pseudo-wire-type" || name == "remote-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::L2FibResourceAvailability()
    :
    hardware_resource_mode_information{YType::str, "hardware-resource-mode-information"},
    overall_out_of_resource_mode{YType::uint32, "overall-out-of-resource-mode"}
    	,
    shm_resource(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource>())
{
    shm_resource->parent = this;

    yang_name = "l2fib-resource-availability"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::~L2FibResourceAvailability()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::has_data() const
{
    for (std::size_t index=0; index<hardware_resource_mode.size(); index++)
    {
        if(hardware_resource_mode[index]->has_data())
            return true;
    }
    return hardware_resource_mode_information.is_set
	|| overall_out_of_resource_mode.is_set
	|| (shm_resource !=  nullptr && shm_resource->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::has_operation() const
{
    for (std::size_t index=0; index<hardware_resource_mode.size(); index++)
    {
        if(hardware_resource_mode[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hardware_resource_mode_information.yfilter)
	|| ydk::is_set(overall_out_of_resource_mode.yfilter)
	|| (shm_resource !=  nullptr && shm_resource->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-resource-availability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hardware_resource_mode_information.is_set || is_set(hardware_resource_mode_information.yfilter)) leaf_name_data.push_back(hardware_resource_mode_information.get_name_leafdata());
    if (overall_out_of_resource_mode.is_set || is_set(overall_out_of_resource_mode.yfilter)) leaf_name_data.push_back(overall_out_of_resource_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-resource-mode")
    {
        for(auto const & c : hardware_resource_mode)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::HardwareResourceMode>();
        c->parent = this;
        hardware_resource_mode.push_back(c);
        return c;
    }

    if(child_yang_name == "shm-resource")
    {
        if(shm_resource == nullptr)
        {
            shm_resource = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource>();
        }
        return shm_resource;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hardware_resource_mode)
    {
        children[c->get_segment_path()] = c;
    }

    if(shm_resource != nullptr)
    {
        children["shm-resource"] = shm_resource;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hardware-resource-mode-information")
    {
        hardware_resource_mode_information = value;
        hardware_resource_mode_information.value_namespace = name_space;
        hardware_resource_mode_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overall-out-of-resource-mode")
    {
        overall_out_of_resource_mode = value;
        overall_out_of_resource_mode.value_namespace = name_space;
        overall_out_of_resource_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hardware-resource-mode-information")
    {
        hardware_resource_mode_information.yfilter = yfilter;
    }
    if(value_path == "overall-out-of-resource-mode")
    {
        overall_out_of_resource_mode.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-resource-mode" || name == "shm-resource" || name == "hardware-resource-mode-information" || name == "overall-out-of-resource-mode")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::HardwareResourceMode::HardwareResourceMode()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "hardware-resource-mode"; yang_parent_name = "l2fib-resource-availability"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::HardwareResourceMode::~HardwareResourceMode()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::HardwareResourceMode::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::HardwareResourceMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::HardwareResourceMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-resource-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::HardwareResourceMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::HardwareResourceMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::HardwareResourceMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::HardwareResourceMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::HardwareResourceMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::HardwareResourceMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource::ShmResource()
    :
    average_available{YType::uint64, "average-available"},
    average_utility{YType::uint64, "average-utility"},
    maximum_available{YType::uint64, "maximum-available"},
    oout_of_resource_mode{YType::uint32, "oout-of-resource-mode"}
{

    yang_name = "shm-resource"; yang_parent_name = "l2fib-resource-availability"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource::~ShmResource()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource::has_data() const
{
    return average_available.is_set
	|| average_utility.is_set
	|| maximum_available.is_set
	|| oout_of_resource_mode.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_available.yfilter)
	|| ydk::is_set(average_utility.yfilter)
	|| ydk::is_set(maximum_available.yfilter)
	|| ydk::is_set(oout_of_resource_mode.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shm-resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_available.is_set || is_set(average_available.yfilter)) leaf_name_data.push_back(average_available.get_name_leafdata());
    if (average_utility.is_set || is_set(average_utility.yfilter)) leaf_name_data.push_back(average_utility.get_name_leafdata());
    if (maximum_available.is_set || is_set(maximum_available.yfilter)) leaf_name_data.push_back(maximum_available.get_name_leafdata());
    if (oout_of_resource_mode.is_set || is_set(oout_of_resource_mode.yfilter)) leaf_name_data.push_back(oout_of_resource_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-available")
    {
        average_available = value;
        average_available.value_namespace = name_space;
        average_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-utility")
    {
        average_utility = value;
        average_utility.value_namespace = name_space;
        average_utility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-available")
    {
        maximum_available = value;
        maximum_available.value_namespace = name_space;
        maximum_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oout-of-resource-mode")
    {
        oout_of_resource_mode = value;
        oout_of_resource_mode.value_namespace = name_space;
        oout_of_resource_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-available")
    {
        average_available.yfilter = yfilter;
    }
    if(value_path == "average-utility")
    {
        average_utility.yfilter = yfilter;
    }
    if(value_path == "maximum-available")
    {
        maximum_available.yfilter = yfilter;
    }
    if(value_path == "oout-of-resource-mode")
    {
        oout_of_resource_mode.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-available" || name == "average-utility" || name == "maximum-available" || name == "oout-of-resource-mode")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::L2FibSummary()
    :
    bridge_domain_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary>())
	,evpn_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary>())
	,global_cfg(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg>())
	,l2tp_disposition_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary>())
	,mac_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary>())
	,next_hop_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary>())
	,ptree_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary>())
	,pw_group_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary>())
	,pwhe_mp_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary>())
	,queue_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary>())
	,xconnect_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary>())
{
    bridge_domain_summary->parent = this;
    evpn_summary->parent = this;
    global_cfg->parent = this;
    l2tp_disposition_summary->parent = this;
    mac_summary->parent = this;
    next_hop_summary->parent = this;
    ptree_summary->parent = this;
    pw_group_summary->parent = this;
    pwhe_mp_summary->parent = this;
    queue_summary->parent = this;
    xconnect_summary->parent = this;

    yang_name = "l2fib-summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::~L2FibSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::has_data() const
{
    return (bridge_domain_summary !=  nullptr && bridge_domain_summary->has_data())
	|| (evpn_summary !=  nullptr && evpn_summary->has_data())
	|| (global_cfg !=  nullptr && global_cfg->has_data())
	|| (l2tp_disposition_summary !=  nullptr && l2tp_disposition_summary->has_data())
	|| (mac_summary !=  nullptr && mac_summary->has_data())
	|| (next_hop_summary !=  nullptr && next_hop_summary->has_data())
	|| (ptree_summary !=  nullptr && ptree_summary->has_data())
	|| (pw_group_summary !=  nullptr && pw_group_summary->has_data())
	|| (pwhe_mp_summary !=  nullptr && pwhe_mp_summary->has_data())
	|| (queue_summary !=  nullptr && queue_summary->has_data())
	|| (xconnect_summary !=  nullptr && xconnect_summary->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::has_operation() const
{
    return is_set(yfilter)
	|| (bridge_domain_summary !=  nullptr && bridge_domain_summary->has_operation())
	|| (evpn_summary !=  nullptr && evpn_summary->has_operation())
	|| (global_cfg !=  nullptr && global_cfg->has_operation())
	|| (l2tp_disposition_summary !=  nullptr && l2tp_disposition_summary->has_operation())
	|| (mac_summary !=  nullptr && mac_summary->has_operation())
	|| (next_hop_summary !=  nullptr && next_hop_summary->has_operation())
	|| (ptree_summary !=  nullptr && ptree_summary->has_operation())
	|| (pw_group_summary !=  nullptr && pw_group_summary->has_operation())
	|| (pwhe_mp_summary !=  nullptr && pwhe_mp_summary->has_operation())
	|| (queue_summary !=  nullptr && queue_summary->has_operation())
	|| (xconnect_summary !=  nullptr && xconnect_summary->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain-summary")
    {
        if(bridge_domain_summary == nullptr)
        {
            bridge_domain_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary>();
        }
        return bridge_domain_summary;
    }

    if(child_yang_name == "evpn-summary")
    {
        if(evpn_summary == nullptr)
        {
            evpn_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary>();
        }
        return evpn_summary;
    }

    if(child_yang_name == "global-cfg")
    {
        if(global_cfg == nullptr)
        {
            global_cfg = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg>();
        }
        return global_cfg;
    }

    if(child_yang_name == "l2tp-disposition-summary")
    {
        if(l2tp_disposition_summary == nullptr)
        {
            l2tp_disposition_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary>();
        }
        return l2tp_disposition_summary;
    }

    if(child_yang_name == "mac-summary")
    {
        if(mac_summary == nullptr)
        {
            mac_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary>();
        }
        return mac_summary;
    }

    if(child_yang_name == "next-hop-summary")
    {
        if(next_hop_summary == nullptr)
        {
            next_hop_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary>();
        }
        return next_hop_summary;
    }

    if(child_yang_name == "ptree-summary")
    {
        if(ptree_summary == nullptr)
        {
            ptree_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary>();
        }
        return ptree_summary;
    }

    if(child_yang_name == "pw-group-summary")
    {
        if(pw_group_summary == nullptr)
        {
            pw_group_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary>();
        }
        return pw_group_summary;
    }

    if(child_yang_name == "pwhe-mp-summary")
    {
        if(pwhe_mp_summary == nullptr)
        {
            pwhe_mp_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary>();
        }
        return pwhe_mp_summary;
    }

    if(child_yang_name == "queue-summary")
    {
        if(queue_summary == nullptr)
        {
            queue_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary>();
        }
        return queue_summary;
    }

    if(child_yang_name == "xconnect-summary")
    {
        if(xconnect_summary == nullptr)
        {
            xconnect_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary>();
        }
        return xconnect_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bridge_domain_summary != nullptr)
    {
        children["bridge-domain-summary"] = bridge_domain_summary;
    }

    if(evpn_summary != nullptr)
    {
        children["evpn-summary"] = evpn_summary;
    }

    if(global_cfg != nullptr)
    {
        children["global-cfg"] = global_cfg;
    }

    if(l2tp_disposition_summary != nullptr)
    {
        children["l2tp-disposition-summary"] = l2tp_disposition_summary;
    }

    if(mac_summary != nullptr)
    {
        children["mac-summary"] = mac_summary;
    }

    if(next_hop_summary != nullptr)
    {
        children["next-hop-summary"] = next_hop_summary;
    }

    if(ptree_summary != nullptr)
    {
        children["ptree-summary"] = ptree_summary;
    }

    if(pw_group_summary != nullptr)
    {
        children["pw-group-summary"] = pw_group_summary;
    }

    if(pwhe_mp_summary != nullptr)
    {
        children["pwhe-mp-summary"] = pwhe_mp_summary;
    }

    if(queue_summary != nullptr)
    {
        children["queue-summary"] = queue_summary;
    }

    if(xconnect_summary != nullptr)
    {
        children["xconnect-summary"] = xconnect_summary;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-summary" || name == "evpn-summary" || name == "global-cfg" || name == "l2tp-disposition-summary" || name == "mac-summary" || name == "next-hop-summary" || name == "ptree-summary" || name == "pw-group-summary" || name == "pwhe-mp-summary" || name == "queue-summary" || name == "xconnect-summary")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::BridgeDomainSummary()
    :
    bridge_domain_count{YType::uint32, "bridge-domain-count"},
    bridge_domain_drop_count{YType::uint32, "bridge-domain-drop-count"},
    bridge_domain_with_bvi_count{YType::uint32, "bridge-domain-with-bvi-count"},
    bridge_domain_with_evpn_enabled{YType::uint32, "bridge-domain-with-evpn-enabled"},
    bridge_domain_with_p2mp_enabled{YType::uint32, "bridge-domain-with-p2mp-enabled"},
    bridge_domain_with_pbbevpn_enabled{YType::uint32, "bridge-domain-with-pbbevpn-enabled"}
{

    yang_name = "bridge-domain-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::~BridgeDomainSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::has_data() const
{
    return bridge_domain_count.is_set
	|| bridge_domain_drop_count.is_set
	|| bridge_domain_with_bvi_count.is_set
	|| bridge_domain_with_evpn_enabled.is_set
	|| bridge_domain_with_p2mp_enabled.is_set
	|| bridge_domain_with_pbbevpn_enabled.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_domain_count.yfilter)
	|| ydk::is_set(bridge_domain_drop_count.yfilter)
	|| ydk::is_set(bridge_domain_with_bvi_count.yfilter)
	|| ydk::is_set(bridge_domain_with_evpn_enabled.yfilter)
	|| ydk::is_set(bridge_domain_with_p2mp_enabled.yfilter)
	|| ydk::is_set(bridge_domain_with_pbbevpn_enabled.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_count.is_set || is_set(bridge_domain_count.yfilter)) leaf_name_data.push_back(bridge_domain_count.get_name_leafdata());
    if (bridge_domain_drop_count.is_set || is_set(bridge_domain_drop_count.yfilter)) leaf_name_data.push_back(bridge_domain_drop_count.get_name_leafdata());
    if (bridge_domain_with_bvi_count.is_set || is_set(bridge_domain_with_bvi_count.yfilter)) leaf_name_data.push_back(bridge_domain_with_bvi_count.get_name_leafdata());
    if (bridge_domain_with_evpn_enabled.is_set || is_set(bridge_domain_with_evpn_enabled.yfilter)) leaf_name_data.push_back(bridge_domain_with_evpn_enabled.get_name_leafdata());
    if (bridge_domain_with_p2mp_enabled.is_set || is_set(bridge_domain_with_p2mp_enabled.yfilter)) leaf_name_data.push_back(bridge_domain_with_p2mp_enabled.get_name_leafdata());
    if (bridge_domain_with_pbbevpn_enabled.is_set || is_set(bridge_domain_with_pbbevpn_enabled.yfilter)) leaf_name_data.push_back(bridge_domain_with_pbbevpn_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-domain-count")
    {
        bridge_domain_count = value;
        bridge_domain_count.value_namespace = name_space;
        bridge_domain_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-drop-count")
    {
        bridge_domain_drop_count = value;
        bridge_domain_drop_count.value_namespace = name_space;
        bridge_domain_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-with-bvi-count")
    {
        bridge_domain_with_bvi_count = value;
        bridge_domain_with_bvi_count.value_namespace = name_space;
        bridge_domain_with_bvi_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-with-evpn-enabled")
    {
        bridge_domain_with_evpn_enabled = value;
        bridge_domain_with_evpn_enabled.value_namespace = name_space;
        bridge_domain_with_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-with-p2mp-enabled")
    {
        bridge_domain_with_p2mp_enabled = value;
        bridge_domain_with_p2mp_enabled.value_namespace = name_space;
        bridge_domain_with_p2mp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-with-pbbevpn-enabled")
    {
        bridge_domain_with_pbbevpn_enabled = value;
        bridge_domain_with_pbbevpn_enabled.value_namespace = name_space;
        bridge_domain_with_pbbevpn_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-domain-count")
    {
        bridge_domain_count.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-drop-count")
    {
        bridge_domain_drop_count.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-with-bvi-count")
    {
        bridge_domain_with_bvi_count.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-with-evpn-enabled")
    {
        bridge_domain_with_evpn_enabled.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-with-p2mp-enabled")
    {
        bridge_domain_with_p2mp_enabled.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-with-pbbevpn-enabled")
    {
        bridge_domain_with_pbbevpn_enabled.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-count" || name == "bridge-domain-drop-count" || name == "bridge-domain-with-bvi-count" || name == "bridge-domain-with-evpn-enabled" || name == "bridge-domain-with-p2mp-enabled" || name == "bridge-domain-with-pbbevpn-enabled")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::EvpnSummary()
    :
    default_count{YType::uint32, "default-count"},
    isid_count{YType::uint32, "isid-count"},
    stitching_count{YType::uint32, "stitching-count"},
    total_count{YType::uint32, "total-count"}
{

    yang_name = "evpn-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::~EvpnSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::has_data() const
{
    return default_count.is_set
	|| isid_count.is_set
	|| stitching_count.is_set
	|| total_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_count.yfilter)
	|| ydk::is_set(isid_count.yfilter)
	|| ydk::is_set(stitching_count.yfilter)
	|| ydk::is_set(total_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_count.is_set || is_set(default_count.yfilter)) leaf_name_data.push_back(default_count.get_name_leafdata());
    if (isid_count.is_set || is_set(isid_count.yfilter)) leaf_name_data.push_back(isid_count.get_name_leafdata());
    if (stitching_count.is_set || is_set(stitching_count.yfilter)) leaf_name_data.push_back(stitching_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-count")
    {
        default_count = value;
        default_count.value_namespace = name_space;
        default_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isid-count")
    {
        isid_count = value;
        isid_count.value_namespace = name_space;
        isid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching-count")
    {
        stitching_count = value;
        stitching_count.value_namespace = name_space;
        stitching_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-count")
    {
        default_count.yfilter = yfilter;
    }
    if(value_path == "isid-count")
    {
        isid_count.yfilter = yfilter;
    }
    if(value_path == "stitching-count")
    {
        stitching_count.yfilter = yfilter;
    }
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-count" || name == "isid-count" || name == "stitching-count" || name == "total-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::GlobalCfg()
    :
    evpn_imc_label_block_base{YType::uint32, "evpn-imc-label-block-base"},
    evpn_imc_label_block_size{YType::uint16, "evpn-imc-label-block-size"},
    load_balance_type{YType::enumeration, "load-balance-type"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base>())
{
    base->parent = this;

    yang_name = "global-cfg"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::~GlobalCfg()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::has_data() const
{
    return evpn_imc_label_block_base.is_set
	|| evpn_imc_label_block_size.is_set
	|| load_balance_type.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evpn_imc_label_block_base.yfilter)
	|| ydk::is_set(evpn_imc_label_block_size.yfilter)
	|| ydk::is_set(load_balance_type.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpn_imc_label_block_base.is_set || is_set(evpn_imc_label_block_base.yfilter)) leaf_name_data.push_back(evpn_imc_label_block_base.get_name_leafdata());
    if (evpn_imc_label_block_size.is_set || is_set(evpn_imc_label_block_size.yfilter)) leaf_name_data.push_back(evpn_imc_label_block_size.get_name_leafdata());
    if (load_balance_type.is_set || is_set(load_balance_type.yfilter)) leaf_name_data.push_back(load_balance_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evpn-imc-label-block-base")
    {
        evpn_imc_label_block_base = value;
        evpn_imc_label_block_base.value_namespace = name_space;
        evpn_imc_label_block_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-imc-label-block-size")
    {
        evpn_imc_label_block_size = value;
        evpn_imc_label_block_size.value_namespace = name_space;
        evpn_imc_label_block_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-type")
    {
        load_balance_type = value;
        load_balance_type.value_namespace = name_space;
        load_balance_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evpn-imc-label-block-base")
    {
        evpn_imc_label_block_base.yfilter = yfilter;
    }
    if(value_path == "evpn-imc-label-block-size")
    {
        evpn_imc_label_block_size.yfilter = yfilter;
    }
    if(value_path == "load-balance-type")
    {
        load_balance_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "evpn-imc-label-block-base" || name == "evpn-imc-label-block-size" || name == "load-balance-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::Base()
{

    yang_name = "base"; yang_parent_name = "global-cfg"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::L2TpDispositionSummary()
    :
    bound_l2tp_disposition_session_count{YType::uint32, "bound-l2tp-disposition-session-count"},
    l2tp_disposition_session_count{YType::uint32, "l2tp-disposition-session-count"},
    unbound_l2tp_disposition_session_count{YType::uint32, "unbound-l2tp-disposition-session-count"}
{

    yang_name = "l2tp-disposition-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::~L2TpDispositionSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::has_data() const
{
    return bound_l2tp_disposition_session_count.is_set
	|| l2tp_disposition_session_count.is_set
	|| unbound_l2tp_disposition_session_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound_l2tp_disposition_session_count.yfilter)
	|| ydk::is_set(l2tp_disposition_session_count.yfilter)
	|| ydk::is_set(unbound_l2tp_disposition_session_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-disposition-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound_l2tp_disposition_session_count.is_set || is_set(bound_l2tp_disposition_session_count.yfilter)) leaf_name_data.push_back(bound_l2tp_disposition_session_count.get_name_leafdata());
    if (l2tp_disposition_session_count.is_set || is_set(l2tp_disposition_session_count.yfilter)) leaf_name_data.push_back(l2tp_disposition_session_count.get_name_leafdata());
    if (unbound_l2tp_disposition_session_count.is_set || is_set(unbound_l2tp_disposition_session_count.yfilter)) leaf_name_data.push_back(unbound_l2tp_disposition_session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound-l2tp-disposition-session-count")
    {
        bound_l2tp_disposition_session_count = value;
        bound_l2tp_disposition_session_count.value_namespace = name_space;
        bound_l2tp_disposition_session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-disposition-session-count")
    {
        l2tp_disposition_session_count = value;
        l2tp_disposition_session_count.value_namespace = name_space;
        l2tp_disposition_session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbound-l2tp-disposition-session-count")
    {
        unbound_l2tp_disposition_session_count = value;
        unbound_l2tp_disposition_session_count.value_namespace = name_space;
        unbound_l2tp_disposition_session_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound-l2tp-disposition-session-count")
    {
        bound_l2tp_disposition_session_count.yfilter = yfilter;
    }
    if(value_path == "l2tp-disposition-session-count")
    {
        l2tp_disposition_session_count.yfilter = yfilter;
    }
    if(value_path == "unbound-l2tp-disposition-session-count")
    {
        unbound_l2tp_disposition_session_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bound-l2tp-disposition-session-count" || name == "l2tp-disposition-session-count" || name == "unbound-l2tp-disposition-session-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::MacSummary()
    :
    bmac_count{YType::uint32, "bmac-count"},
    local_mac_count{YType::uint32, "local-mac-count"},
    mac_count{YType::uint32, "mac-count"},
    remote_mac_count{YType::uint32, "remote-mac-count"},
    routed_mac_count{YType::uint32, "routed-mac-count"},
    sbmac_count{YType::uint32, "sbmac-count"},
    static_mac_count{YType::uint32, "static-mac-count"}
{

    yang_name = "mac-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::~MacSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::has_data() const
{
    return bmac_count.is_set
	|| local_mac_count.is_set
	|| mac_count.is_set
	|| remote_mac_count.is_set
	|| routed_mac_count.is_set
	|| sbmac_count.is_set
	|| static_mac_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bmac_count.yfilter)
	|| ydk::is_set(local_mac_count.yfilter)
	|| ydk::is_set(mac_count.yfilter)
	|| ydk::is_set(remote_mac_count.yfilter)
	|| ydk::is_set(routed_mac_count.yfilter)
	|| ydk::is_set(sbmac_count.yfilter)
	|| ydk::is_set(static_mac_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bmac_count.is_set || is_set(bmac_count.yfilter)) leaf_name_data.push_back(bmac_count.get_name_leafdata());
    if (local_mac_count.is_set || is_set(local_mac_count.yfilter)) leaf_name_data.push_back(local_mac_count.get_name_leafdata());
    if (mac_count.is_set || is_set(mac_count.yfilter)) leaf_name_data.push_back(mac_count.get_name_leafdata());
    if (remote_mac_count.is_set || is_set(remote_mac_count.yfilter)) leaf_name_data.push_back(remote_mac_count.get_name_leafdata());
    if (routed_mac_count.is_set || is_set(routed_mac_count.yfilter)) leaf_name_data.push_back(routed_mac_count.get_name_leafdata());
    if (sbmac_count.is_set || is_set(sbmac_count.yfilter)) leaf_name_data.push_back(sbmac_count.get_name_leafdata());
    if (static_mac_count.is_set || is_set(static_mac_count.yfilter)) leaf_name_data.push_back(static_mac_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bmac-count")
    {
        bmac_count = value;
        bmac_count.value_namespace = name_space;
        bmac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mac-count")
    {
        local_mac_count = value;
        local_mac_count.value_namespace = name_space;
        local_mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-count")
    {
        mac_count = value;
        mac_count.value_namespace = name_space;
        mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-mac-count")
    {
        remote_mac_count = value;
        remote_mac_count.value_namespace = name_space;
        remote_mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routed-mac-count")
    {
        routed_mac_count = value;
        routed_mac_count.value_namespace = name_space;
        routed_mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbmac-count")
    {
        sbmac_count = value;
        sbmac_count.value_namespace = name_space;
        sbmac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-mac-count")
    {
        static_mac_count = value;
        static_mac_count.value_namespace = name_space;
        static_mac_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bmac-count")
    {
        bmac_count.yfilter = yfilter;
    }
    if(value_path == "local-mac-count")
    {
        local_mac_count.yfilter = yfilter;
    }
    if(value_path == "mac-count")
    {
        mac_count.yfilter = yfilter;
    }
    if(value_path == "remote-mac-count")
    {
        remote_mac_count.yfilter = yfilter;
    }
    if(value_path == "routed-mac-count")
    {
        routed_mac_count.yfilter = yfilter;
    }
    if(value_path == "sbmac-count")
    {
        sbmac_count.yfilter = yfilter;
    }
    if(value_path == "static-mac-count")
    {
        static_mac_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmac-count" || name == "local-mac-count" || name == "mac-count" || name == "remote-mac-count" || name == "routed-mac-count" || name == "sbmac-count" || name == "static-mac-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::NextHopSummary()
    :
    l2tp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp>())
	,lsm(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm>())
	,mpls(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls>())
	,mpls_il(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl>())
	,p2mp_tunnels(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels>())
{
    l2tp->parent = this;
    lsm->parent = this;
    mpls->parent = this;
    mpls_il->parent = this;
    p2mp_tunnels->parent = this;

    yang_name = "next-hop-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::~NextHopSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::has_data() const
{
    return (l2tp !=  nullptr && l2tp->has_data())
	|| (lsm !=  nullptr && lsm->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (mpls_il !=  nullptr && mpls_il->has_data())
	|| (p2mp_tunnels !=  nullptr && p2mp_tunnels->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::has_operation() const
{
    return is_set(yfilter)
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (lsm !=  nullptr && lsm->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (mpls_il !=  nullptr && mpls_il->has_operation())
	|| (p2mp_tunnels !=  nullptr && p2mp_tunnels->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tp")
    {
        if(l2tp == nullptr)
        {
            l2tp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp>();
        }
        return l2tp;
    }

    if(child_yang_name == "lsm")
    {
        if(lsm == nullptr)
        {
            lsm = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm>();
        }
        return lsm;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "mpls-il")
    {
        if(mpls_il == nullptr)
        {
            mpls_il = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl>();
        }
        return mpls_il;
    }

    if(child_yang_name == "p2mp-tunnels")
    {
        if(p2mp_tunnels == nullptr)
        {
            p2mp_tunnels = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels>();
        }
        return p2mp_tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2tp != nullptr)
    {
        children["l2tp"] = l2tp;
    }

    if(lsm != nullptr)
    {
        children["lsm"] = lsm;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(mpls_il != nullptr)
    {
        children["mpls-il"] = mpls_il;
    }

    if(p2mp_tunnels != nullptr)
    {
        children["p2mp-tunnels"] = p2mp_tunnels;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tp" || name == "lsm" || name == "mpls" || name == "mpls-il" || name == "p2mp-tunnels")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::L2Tp()
    :
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    next_hop_count{YType::uint32, "next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"}
{

    yang_name = "l2tp"; yang_parent_name = "next-hop-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::~L2Tp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::has_data() const
{
    return bound_next_hop_count.is_set
	|| next_hop_count.is_set
	|| next_hop_pending_registration_count.is_set
	|| unbound_next_hop_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound_next_hop_count.yfilter)
	|| ydk::is_set(next_hop_count.yfilter)
	|| ydk::is_set(next_hop_pending_registration_count.yfilter)
	|| ydk::is_set(unbound_next_hop_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.yfilter)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (next_hop_count.is_set || is_set(next_hop_count.yfilter)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.yfilter)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.yfilter)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
        bound_next_hop_count.value_namespace = name_space;
        bound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
        next_hop_count.value_namespace = name_space;
        next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
        next_hop_pending_registration_count.value_namespace = name_space;
        next_hop_pending_registration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
        unbound_next_hop_count.value_namespace = name_space;
        unbound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-count")
    {
        next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count.yfilter = yfilter;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bound-next-hop-count" || name == "next-hop-count" || name == "next-hop-pending-registration-count" || name == "unbound-next-hop-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::Lsm()
    :
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    next_hop_count{YType::uint32, "next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"}
{

    yang_name = "lsm"; yang_parent_name = "next-hop-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::~Lsm()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::has_data() const
{
    return bound_next_hop_count.is_set
	|| next_hop_count.is_set
	|| next_hop_pending_registration_count.is_set
	|| unbound_next_hop_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound_next_hop_count.yfilter)
	|| ydk::is_set(next_hop_count.yfilter)
	|| ydk::is_set(next_hop_pending_registration_count.yfilter)
	|| ydk::is_set(unbound_next_hop_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.yfilter)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (next_hop_count.is_set || is_set(next_hop_count.yfilter)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.yfilter)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.yfilter)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
        bound_next_hop_count.value_namespace = name_space;
        bound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
        next_hop_count.value_namespace = name_space;
        next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
        next_hop_pending_registration_count.value_namespace = name_space;
        next_hop_pending_registration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
        unbound_next_hop_count.value_namespace = name_space;
        unbound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-count")
    {
        next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count.yfilter = yfilter;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bound-next-hop-count" || name == "next-hop-count" || name == "next-hop-pending-registration-count" || name == "unbound-next-hop-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::Mpls()
    :
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    next_hop_count{YType::uint32, "next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"}
{

    yang_name = "mpls"; yang_parent_name = "next-hop-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::~Mpls()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::has_data() const
{
    return bound_next_hop_count.is_set
	|| next_hop_count.is_set
	|| next_hop_pending_registration_count.is_set
	|| unbound_next_hop_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound_next_hop_count.yfilter)
	|| ydk::is_set(next_hop_count.yfilter)
	|| ydk::is_set(next_hop_pending_registration_count.yfilter)
	|| ydk::is_set(unbound_next_hop_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.yfilter)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (next_hop_count.is_set || is_set(next_hop_count.yfilter)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.yfilter)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.yfilter)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
        bound_next_hop_count.value_namespace = name_space;
        bound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
        next_hop_count.value_namespace = name_space;
        next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
        next_hop_pending_registration_count.value_namespace = name_space;
        next_hop_pending_registration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
        unbound_next_hop_count.value_namespace = name_space;
        unbound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-count")
    {
        next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count.yfilter = yfilter;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bound-next-hop-count" || name == "next-hop-count" || name == "next-hop-pending-registration-count" || name == "unbound-next-hop-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::MplsIl()
    :
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    next_hop_count{YType::uint32, "next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"}
{

    yang_name = "mpls-il"; yang_parent_name = "next-hop-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::~MplsIl()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::has_data() const
{
    return bound_next_hop_count.is_set
	|| next_hop_count.is_set
	|| next_hop_pending_registration_count.is_set
	|| unbound_next_hop_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound_next_hop_count.yfilter)
	|| ydk::is_set(next_hop_count.yfilter)
	|| ydk::is_set(next_hop_pending_registration_count.yfilter)
	|| ydk::is_set(unbound_next_hop_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-il";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.yfilter)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (next_hop_count.is_set || is_set(next_hop_count.yfilter)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.yfilter)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.yfilter)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
        bound_next_hop_count.value_namespace = name_space;
        bound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
        next_hop_count.value_namespace = name_space;
        next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
        next_hop_pending_registration_count.value_namespace = name_space;
        next_hop_pending_registration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
        unbound_next_hop_count.value_namespace = name_space;
        unbound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-count")
    {
        next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count.yfilter = yfilter;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bound-next-hop-count" || name == "next-hop-count" || name == "next-hop-pending-registration-count" || name == "unbound-next-hop-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::P2MpTunnels()
    :
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    next_hop_count{YType::uint32, "next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"}
{

    yang_name = "p2mp-tunnels"; yang_parent_name = "next-hop-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::~P2MpTunnels()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::has_data() const
{
    return bound_next_hop_count.is_set
	|| next_hop_count.is_set
	|| next_hop_pending_registration_count.is_set
	|| unbound_next_hop_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound_next_hop_count.yfilter)
	|| ydk::is_set(next_hop_count.yfilter)
	|| ydk::is_set(next_hop_pending_registration_count.yfilter)
	|| ydk::is_set(unbound_next_hop_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.yfilter)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (next_hop_count.is_set || is_set(next_hop_count.yfilter)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.yfilter)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.yfilter)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
        bound_next_hop_count.value_namespace = name_space;
        bound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
        next_hop_count.value_namespace = name_space;
        next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
        next_hop_pending_registration_count.value_namespace = name_space;
        next_hop_pending_registration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
        unbound_next_hop_count.value_namespace = name_space;
        unbound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-count")
    {
        next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count.yfilter = yfilter;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bound-next-hop-count" || name == "next-hop-count" || name == "next-hop-pending-registration-count" || name == "unbound-next-hop-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::PtreeSummary()
    :
    lmrib_mldp_ptree_count{YType::uint32, "lmrib-mldp-ptree-count"},
    lmrib_rsvp_te_ptree_count{YType::uint32, "lmrib-rsvp-te-ptree-count"},
    mldp_enabled_ptree_count{YType::uint32, "mldp-enabled-ptree-count"},
    rsvp_te_enabled_ptree_count{YType::uint32, "rsvp-te-enabled-ptree-count"},
    total_ptree_count{YType::uint32, "total-ptree-count"}
{

    yang_name = "ptree-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::~PtreeSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::has_data() const
{
    return lmrib_mldp_ptree_count.is_set
	|| lmrib_rsvp_te_ptree_count.is_set
	|| mldp_enabled_ptree_count.is_set
	|| rsvp_te_enabled_ptree_count.is_set
	|| total_ptree_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lmrib_mldp_ptree_count.yfilter)
	|| ydk::is_set(lmrib_rsvp_te_ptree_count.yfilter)
	|| ydk::is_set(mldp_enabled_ptree_count.yfilter)
	|| ydk::is_set(rsvp_te_enabled_ptree_count.yfilter)
	|| ydk::is_set(total_ptree_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptree-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lmrib_mldp_ptree_count.is_set || is_set(lmrib_mldp_ptree_count.yfilter)) leaf_name_data.push_back(lmrib_mldp_ptree_count.get_name_leafdata());
    if (lmrib_rsvp_te_ptree_count.is_set || is_set(lmrib_rsvp_te_ptree_count.yfilter)) leaf_name_data.push_back(lmrib_rsvp_te_ptree_count.get_name_leafdata());
    if (mldp_enabled_ptree_count.is_set || is_set(mldp_enabled_ptree_count.yfilter)) leaf_name_data.push_back(mldp_enabled_ptree_count.get_name_leafdata());
    if (rsvp_te_enabled_ptree_count.is_set || is_set(rsvp_te_enabled_ptree_count.yfilter)) leaf_name_data.push_back(rsvp_te_enabled_ptree_count.get_name_leafdata());
    if (total_ptree_count.is_set || is_set(total_ptree_count.yfilter)) leaf_name_data.push_back(total_ptree_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lmrib-mldp-ptree-count")
    {
        lmrib_mldp_ptree_count = value;
        lmrib_mldp_ptree_count.value_namespace = name_space;
        lmrib_mldp_ptree_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmrib-rsvp-te-ptree-count")
    {
        lmrib_rsvp_te_ptree_count = value;
        lmrib_rsvp_te_ptree_count.value_namespace = name_space;
        lmrib_rsvp_te_ptree_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-enabled-ptree-count")
    {
        mldp_enabled_ptree_count = value;
        mldp_enabled_ptree_count.value_namespace = name_space;
        mldp_enabled_ptree_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-enabled-ptree-count")
    {
        rsvp_te_enabled_ptree_count = value;
        rsvp_te_enabled_ptree_count.value_namespace = name_space;
        rsvp_te_enabled_ptree_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ptree-count")
    {
        total_ptree_count = value;
        total_ptree_count.value_namespace = name_space;
        total_ptree_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lmrib-mldp-ptree-count")
    {
        lmrib_mldp_ptree_count.yfilter = yfilter;
    }
    if(value_path == "lmrib-rsvp-te-ptree-count")
    {
        lmrib_rsvp_te_ptree_count.yfilter = yfilter;
    }
    if(value_path == "mldp-enabled-ptree-count")
    {
        mldp_enabled_ptree_count.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-enabled-ptree-count")
    {
        rsvp_te_enabled_ptree_count.yfilter = yfilter;
    }
    if(value_path == "total-ptree-count")
    {
        total_ptree_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lmrib-mldp-ptree-count" || name == "lmrib-rsvp-te-ptree-count" || name == "mldp-enabled-ptree-count" || name == "rsvp-te-enabled-ptree-count" || name == "total-ptree-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::PwGroupSummary()
    :
    plat_grouping_supported{YType::boolean, "plat-grouping-supported"},
    pw_groups_down{YType::uint32, "pw-groups-down"},
    total_pw_groups{YType::uint32, "total-pw-groups"}
{

    yang_name = "pw-group-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::~PwGroupSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::has_data() const
{
    return plat_grouping_supported.is_set
	|| pw_groups_down.is_set
	|| total_pw_groups.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plat_grouping_supported.yfilter)
	|| ydk::is_set(pw_groups_down.yfilter)
	|| ydk::is_set(total_pw_groups.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-group-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plat_grouping_supported.is_set || is_set(plat_grouping_supported.yfilter)) leaf_name_data.push_back(plat_grouping_supported.get_name_leafdata());
    if (pw_groups_down.is_set || is_set(pw_groups_down.yfilter)) leaf_name_data.push_back(pw_groups_down.get_name_leafdata());
    if (total_pw_groups.is_set || is_set(total_pw_groups.yfilter)) leaf_name_data.push_back(total_pw_groups.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plat-grouping-supported")
    {
        plat_grouping_supported = value;
        plat_grouping_supported.value_namespace = name_space;
        plat_grouping_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-groups-down")
    {
        pw_groups_down = value;
        pw_groups_down.value_namespace = name_space;
        pw_groups_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pw-groups")
    {
        total_pw_groups = value;
        total_pw_groups.value_namespace = name_space;
        total_pw_groups.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plat-grouping-supported")
    {
        plat_grouping_supported.yfilter = yfilter;
    }
    if(value_path == "pw-groups-down")
    {
        pw_groups_down.yfilter = yfilter;
    }
    if(value_path == "total-pw-groups")
    {
        total_pw_groups.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plat-grouping-supported" || name == "pw-groups-down" || name == "total-pw-groups")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::PwheMpSummary()
    :
    total_count{YType::uint32, "total-count"}
{

    yang_name = "pwhe-mp-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::~PwheMpSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::has_data() const
{
    return total_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwhe-mp-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::QueueSummary()
    :
    del_cnt{YType::uint32, "del-cnt"},
    inline_cnt{YType::uint32, "inline-cnt"},
    retry_cnt{YType::uint32, "retry-cnt"},
    update_cnt{YType::uint32, "update-cnt"}
{

    yang_name = "queue-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::~QueueSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::has_data() const
{
    return del_cnt.is_set
	|| inline_cnt.is_set
	|| retry_cnt.is_set
	|| update_cnt.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(del_cnt.yfilter)
	|| ydk::is_set(inline_cnt.yfilter)
	|| ydk::is_set(retry_cnt.yfilter)
	|| ydk::is_set(update_cnt.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (del_cnt.is_set || is_set(del_cnt.yfilter)) leaf_name_data.push_back(del_cnt.get_name_leafdata());
    if (inline_cnt.is_set || is_set(inline_cnt.yfilter)) leaf_name_data.push_back(inline_cnt.get_name_leafdata());
    if (retry_cnt.is_set || is_set(retry_cnt.yfilter)) leaf_name_data.push_back(retry_cnt.get_name_leafdata());
    if (update_cnt.is_set || is_set(update_cnt.yfilter)) leaf_name_data.push_back(update_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "del-cnt")
    {
        del_cnt = value;
        del_cnt.value_namespace = name_space;
        del_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inline-cnt")
    {
        inline_cnt = value;
        inline_cnt.value_namespace = name_space;
        inline_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-cnt")
    {
        retry_cnt = value;
        retry_cnt.value_namespace = name_space;
        retry_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-cnt")
    {
        update_cnt = value;
        update_cnt.value_namespace = name_space;
        update_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "del-cnt")
    {
        del_cnt.yfilter = yfilter;
    }
    if(value_path == "inline-cnt")
    {
        inline_cnt.yfilter = yfilter;
    }
    if(value_path == "retry-cnt")
    {
        retry_cnt.yfilter = yfilter;
    }
    if(value_path == "update-cnt")
    {
        update_cnt.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "del-cnt" || name == "inline-cnt" || name == "retry-cnt" || name == "update-cnt")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::XconnectSummary()
    :
    ac_down_count_aib{YType::uint32, "ac-down-count-aib"},
    ac_down_count_l2vpn{YType::uint32, "ac-down-count-l2vpn"},
    ac_down_count_l3fib{YType::uint32, "ac-down-count-l3fib"},
    ac_down_count_vpdn{YType::uint32, "ac-down-count-vpdn"},
    ac_to_ac_count{YType::uint32, "ac-to-ac-count"},
    ac_to_bp_count{YType::uint32, "ac-to-bp-count"},
    ac_to_pw_count_l2tp{YType::uint32, "ac-to-pw-count-l2tp"},
    ac_to_pw_count_l2tp_ip_v6{YType::uint32, "ac-to-pw-count-l2tp-ip-v6"},
    ac_to_pw_count_l2tpv2{YType::uint32, "ac-to-pw-count-l2tpv2"},
    ac_to_pw_count_mpls{YType::uint32, "ac-to-pw-count-mpls"},
    ac_to_unknown_count{YType::uint32, "ac-to-unknown-count"},
    bp_count{YType::uint32, "bp-count"},
    bundle_ac_max_exceeded_drop_cnt{YType::uint32, "bundle-ac-max-exceeded-drop-cnt"},
    evpn_invalid_xid_drop_count{YType::uint32, "evpn-invalid-xid-drop-count"},
    evpn_to_bp_count{YType::uint32, "evpn-to-bp-count"},
    evpn_to_unknown_count{YType::uint32, "evpn-to-unknown-count"},
    mon_sess_to_pw_count{YType::uint32, "mon-sess-to-pw-count"},
    mon_sess_to_unknown_count{YType::uint32, "mon-sess-to-unknown-count"},
    p2p_count{YType::uint32, "p2p-count"},
    pbb_invalid_xid_drop_count{YType::uint32, "pbb-invalid-xid-drop-count"},
    pbb_to_bp_count{YType::uint32, "pbb-to-bp-count"},
    pbb_to_unknown_count{YType::uint32, "pbb-to-unknown-count"},
    pw_to_bp_count{YType::uint32, "pw-to-bp-count"},
    pw_to_unknown_count{YType::uint32, "pw-to-unknown-count"},
    pwhe_l2_if_count{YType::uint32, "pwhe-l2-if-count"},
    virtual_ac_invalid_xid_drop_count{YType::uint32, "virtual-ac-invalid-xid-drop-count"},
    vni_invalid_xid_drop_count{YType::uint32, "vni-invalid-xid-drop-count"},
    vni_to_bp_count{YType::uint32, "vni-to-bp-count"},
    vni_to_unknown_count{YType::uint32, "vni-to-unknown-count"},
    vpls_pw_invalid_xid_drop_count{YType::uint32, "vpls-pw-invalid-xid-drop-count"},
    vpls_pw_max_exceeded_drop_cnt{YType::uint32, "vpls-pw-max-exceeded-drop-cnt"},
    vpws_pw_invalid_xid_drop_count{YType::uint32, "vpws-pw-invalid-xid-drop-count"},
    xconnect_count{YType::uint32, "xconnect-count"},
    xconnect_down_count{YType::uint32, "xconnect-down-count"},
    xconnect_up_count{YType::uint32, "xconnect-up-count"}
{

    yang_name = "xconnect-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::~XconnectSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::has_data() const
{
    return ac_down_count_aib.is_set
	|| ac_down_count_l2vpn.is_set
	|| ac_down_count_l3fib.is_set
	|| ac_down_count_vpdn.is_set
	|| ac_to_ac_count.is_set
	|| ac_to_bp_count.is_set
	|| ac_to_pw_count_l2tp.is_set
	|| ac_to_pw_count_l2tp_ip_v6.is_set
	|| ac_to_pw_count_l2tpv2.is_set
	|| ac_to_pw_count_mpls.is_set
	|| ac_to_unknown_count.is_set
	|| bp_count.is_set
	|| bundle_ac_max_exceeded_drop_cnt.is_set
	|| evpn_invalid_xid_drop_count.is_set
	|| evpn_to_bp_count.is_set
	|| evpn_to_unknown_count.is_set
	|| mon_sess_to_pw_count.is_set
	|| mon_sess_to_unknown_count.is_set
	|| p2p_count.is_set
	|| pbb_invalid_xid_drop_count.is_set
	|| pbb_to_bp_count.is_set
	|| pbb_to_unknown_count.is_set
	|| pw_to_bp_count.is_set
	|| pw_to_unknown_count.is_set
	|| pwhe_l2_if_count.is_set
	|| virtual_ac_invalid_xid_drop_count.is_set
	|| vni_invalid_xid_drop_count.is_set
	|| vni_to_bp_count.is_set
	|| vni_to_unknown_count.is_set
	|| vpls_pw_invalid_xid_drop_count.is_set
	|| vpls_pw_max_exceeded_drop_cnt.is_set
	|| vpws_pw_invalid_xid_drop_count.is_set
	|| xconnect_count.is_set
	|| xconnect_down_count.is_set
	|| xconnect_up_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ac_down_count_aib.yfilter)
	|| ydk::is_set(ac_down_count_l2vpn.yfilter)
	|| ydk::is_set(ac_down_count_l3fib.yfilter)
	|| ydk::is_set(ac_down_count_vpdn.yfilter)
	|| ydk::is_set(ac_to_ac_count.yfilter)
	|| ydk::is_set(ac_to_bp_count.yfilter)
	|| ydk::is_set(ac_to_pw_count_l2tp.yfilter)
	|| ydk::is_set(ac_to_pw_count_l2tp_ip_v6.yfilter)
	|| ydk::is_set(ac_to_pw_count_l2tpv2.yfilter)
	|| ydk::is_set(ac_to_pw_count_mpls.yfilter)
	|| ydk::is_set(ac_to_unknown_count.yfilter)
	|| ydk::is_set(bp_count.yfilter)
	|| ydk::is_set(bundle_ac_max_exceeded_drop_cnt.yfilter)
	|| ydk::is_set(evpn_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(evpn_to_bp_count.yfilter)
	|| ydk::is_set(evpn_to_unknown_count.yfilter)
	|| ydk::is_set(mon_sess_to_pw_count.yfilter)
	|| ydk::is_set(mon_sess_to_unknown_count.yfilter)
	|| ydk::is_set(p2p_count.yfilter)
	|| ydk::is_set(pbb_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(pbb_to_bp_count.yfilter)
	|| ydk::is_set(pbb_to_unknown_count.yfilter)
	|| ydk::is_set(pw_to_bp_count.yfilter)
	|| ydk::is_set(pw_to_unknown_count.yfilter)
	|| ydk::is_set(pwhe_l2_if_count.yfilter)
	|| ydk::is_set(virtual_ac_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(vni_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(vni_to_bp_count.yfilter)
	|| ydk::is_set(vni_to_unknown_count.yfilter)
	|| ydk::is_set(vpls_pw_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(vpls_pw_max_exceeded_drop_cnt.yfilter)
	|| ydk::is_set(vpws_pw_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(xconnect_count.yfilter)
	|| ydk::is_set(xconnect_down_count.yfilter)
	|| ydk::is_set(xconnect_up_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_down_count_aib.is_set || is_set(ac_down_count_aib.yfilter)) leaf_name_data.push_back(ac_down_count_aib.get_name_leafdata());
    if (ac_down_count_l2vpn.is_set || is_set(ac_down_count_l2vpn.yfilter)) leaf_name_data.push_back(ac_down_count_l2vpn.get_name_leafdata());
    if (ac_down_count_l3fib.is_set || is_set(ac_down_count_l3fib.yfilter)) leaf_name_data.push_back(ac_down_count_l3fib.get_name_leafdata());
    if (ac_down_count_vpdn.is_set || is_set(ac_down_count_vpdn.yfilter)) leaf_name_data.push_back(ac_down_count_vpdn.get_name_leafdata());
    if (ac_to_ac_count.is_set || is_set(ac_to_ac_count.yfilter)) leaf_name_data.push_back(ac_to_ac_count.get_name_leafdata());
    if (ac_to_bp_count.is_set || is_set(ac_to_bp_count.yfilter)) leaf_name_data.push_back(ac_to_bp_count.get_name_leafdata());
    if (ac_to_pw_count_l2tp.is_set || is_set(ac_to_pw_count_l2tp.yfilter)) leaf_name_data.push_back(ac_to_pw_count_l2tp.get_name_leafdata());
    if (ac_to_pw_count_l2tp_ip_v6.is_set || is_set(ac_to_pw_count_l2tp_ip_v6.yfilter)) leaf_name_data.push_back(ac_to_pw_count_l2tp_ip_v6.get_name_leafdata());
    if (ac_to_pw_count_l2tpv2.is_set || is_set(ac_to_pw_count_l2tpv2.yfilter)) leaf_name_data.push_back(ac_to_pw_count_l2tpv2.get_name_leafdata());
    if (ac_to_pw_count_mpls.is_set || is_set(ac_to_pw_count_mpls.yfilter)) leaf_name_data.push_back(ac_to_pw_count_mpls.get_name_leafdata());
    if (ac_to_unknown_count.is_set || is_set(ac_to_unknown_count.yfilter)) leaf_name_data.push_back(ac_to_unknown_count.get_name_leafdata());
    if (bp_count.is_set || is_set(bp_count.yfilter)) leaf_name_data.push_back(bp_count.get_name_leafdata());
    if (bundle_ac_max_exceeded_drop_cnt.is_set || is_set(bundle_ac_max_exceeded_drop_cnt.yfilter)) leaf_name_data.push_back(bundle_ac_max_exceeded_drop_cnt.get_name_leafdata());
    if (evpn_invalid_xid_drop_count.is_set || is_set(evpn_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(evpn_invalid_xid_drop_count.get_name_leafdata());
    if (evpn_to_bp_count.is_set || is_set(evpn_to_bp_count.yfilter)) leaf_name_data.push_back(evpn_to_bp_count.get_name_leafdata());
    if (evpn_to_unknown_count.is_set || is_set(evpn_to_unknown_count.yfilter)) leaf_name_data.push_back(evpn_to_unknown_count.get_name_leafdata());
    if (mon_sess_to_pw_count.is_set || is_set(mon_sess_to_pw_count.yfilter)) leaf_name_data.push_back(mon_sess_to_pw_count.get_name_leafdata());
    if (mon_sess_to_unknown_count.is_set || is_set(mon_sess_to_unknown_count.yfilter)) leaf_name_data.push_back(mon_sess_to_unknown_count.get_name_leafdata());
    if (p2p_count.is_set || is_set(p2p_count.yfilter)) leaf_name_data.push_back(p2p_count.get_name_leafdata());
    if (pbb_invalid_xid_drop_count.is_set || is_set(pbb_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(pbb_invalid_xid_drop_count.get_name_leafdata());
    if (pbb_to_bp_count.is_set || is_set(pbb_to_bp_count.yfilter)) leaf_name_data.push_back(pbb_to_bp_count.get_name_leafdata());
    if (pbb_to_unknown_count.is_set || is_set(pbb_to_unknown_count.yfilter)) leaf_name_data.push_back(pbb_to_unknown_count.get_name_leafdata());
    if (pw_to_bp_count.is_set || is_set(pw_to_bp_count.yfilter)) leaf_name_data.push_back(pw_to_bp_count.get_name_leafdata());
    if (pw_to_unknown_count.is_set || is_set(pw_to_unknown_count.yfilter)) leaf_name_data.push_back(pw_to_unknown_count.get_name_leafdata());
    if (pwhe_l2_if_count.is_set || is_set(pwhe_l2_if_count.yfilter)) leaf_name_data.push_back(pwhe_l2_if_count.get_name_leafdata());
    if (virtual_ac_invalid_xid_drop_count.is_set || is_set(virtual_ac_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(virtual_ac_invalid_xid_drop_count.get_name_leafdata());
    if (vni_invalid_xid_drop_count.is_set || is_set(vni_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(vni_invalid_xid_drop_count.get_name_leafdata());
    if (vni_to_bp_count.is_set || is_set(vni_to_bp_count.yfilter)) leaf_name_data.push_back(vni_to_bp_count.get_name_leafdata());
    if (vni_to_unknown_count.is_set || is_set(vni_to_unknown_count.yfilter)) leaf_name_data.push_back(vni_to_unknown_count.get_name_leafdata());
    if (vpls_pw_invalid_xid_drop_count.is_set || is_set(vpls_pw_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(vpls_pw_invalid_xid_drop_count.get_name_leafdata());
    if (vpls_pw_max_exceeded_drop_cnt.is_set || is_set(vpls_pw_max_exceeded_drop_cnt.yfilter)) leaf_name_data.push_back(vpls_pw_max_exceeded_drop_cnt.get_name_leafdata());
    if (vpws_pw_invalid_xid_drop_count.is_set || is_set(vpws_pw_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(vpws_pw_invalid_xid_drop_count.get_name_leafdata());
    if (xconnect_count.is_set || is_set(xconnect_count.yfilter)) leaf_name_data.push_back(xconnect_count.get_name_leafdata());
    if (xconnect_down_count.is_set || is_set(xconnect_down_count.yfilter)) leaf_name_data.push_back(xconnect_down_count.get_name_leafdata());
    if (xconnect_up_count.is_set || is_set(xconnect_up_count.yfilter)) leaf_name_data.push_back(xconnect_up_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ac-down-count-aib")
    {
        ac_down_count_aib = value;
        ac_down_count_aib.value_namespace = name_space;
        ac_down_count_aib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-down-count-l2vpn")
    {
        ac_down_count_l2vpn = value;
        ac_down_count_l2vpn.value_namespace = name_space;
        ac_down_count_l2vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-down-count-l3fib")
    {
        ac_down_count_l3fib = value;
        ac_down_count_l3fib.value_namespace = name_space;
        ac_down_count_l3fib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-down-count-vpdn")
    {
        ac_down_count_vpdn = value;
        ac_down_count_vpdn.value_namespace = name_space;
        ac_down_count_vpdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-ac-count")
    {
        ac_to_ac_count = value;
        ac_to_ac_count.value_namespace = name_space;
        ac_to_ac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-bp-count")
    {
        ac_to_bp_count = value;
        ac_to_bp_count.value_namespace = name_space;
        ac_to_bp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-pw-count-l2tp")
    {
        ac_to_pw_count_l2tp = value;
        ac_to_pw_count_l2tp.value_namespace = name_space;
        ac_to_pw_count_l2tp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-pw-count-l2tp-ip-v6")
    {
        ac_to_pw_count_l2tp_ip_v6 = value;
        ac_to_pw_count_l2tp_ip_v6.value_namespace = name_space;
        ac_to_pw_count_l2tp_ip_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-pw-count-l2tpv2")
    {
        ac_to_pw_count_l2tpv2 = value;
        ac_to_pw_count_l2tpv2.value_namespace = name_space;
        ac_to_pw_count_l2tpv2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-pw-count-mpls")
    {
        ac_to_pw_count_mpls = value;
        ac_to_pw_count_mpls.value_namespace = name_space;
        ac_to_pw_count_mpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-unknown-count")
    {
        ac_to_unknown_count = value;
        ac_to_unknown_count.value_namespace = name_space;
        ac_to_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bp-count")
    {
        bp_count = value;
        bp_count.value_namespace = name_space;
        bp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-ac-max-exceeded-drop-cnt")
    {
        bundle_ac_max_exceeded_drop_cnt = value;
        bundle_ac_max_exceeded_drop_cnt.value_namespace = name_space;
        bundle_ac_max_exceeded_drop_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-invalid-xid-drop-count")
    {
        evpn_invalid_xid_drop_count = value;
        evpn_invalid_xid_drop_count.value_namespace = name_space;
        evpn_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-to-bp-count")
    {
        evpn_to_bp_count = value;
        evpn_to_bp_count.value_namespace = name_space;
        evpn_to_bp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-to-unknown-count")
    {
        evpn_to_unknown_count = value;
        evpn_to_unknown_count.value_namespace = name_space;
        evpn_to_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mon-sess-to-pw-count")
    {
        mon_sess_to_pw_count = value;
        mon_sess_to_pw_count.value_namespace = name_space;
        mon_sess_to_pw_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mon-sess-to-unknown-count")
    {
        mon_sess_to_unknown_count = value;
        mon_sess_to_unknown_count.value_namespace = name_space;
        mon_sess_to_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-count")
    {
        p2p_count = value;
        p2p_count.value_namespace = name_space;
        p2p_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-invalid-xid-drop-count")
    {
        pbb_invalid_xid_drop_count = value;
        pbb_invalid_xid_drop_count.value_namespace = name_space;
        pbb_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-to-bp-count")
    {
        pbb_to_bp_count = value;
        pbb_to_bp_count.value_namespace = name_space;
        pbb_to_bp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-to-unknown-count")
    {
        pbb_to_unknown_count = value;
        pbb_to_unknown_count.value_namespace = name_space;
        pbb_to_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-to-bp-count")
    {
        pw_to_bp_count = value;
        pw_to_bp_count.value_namespace = name_space;
        pw_to_bp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-to-unknown-count")
    {
        pw_to_unknown_count = value;
        pw_to_unknown_count.value_namespace = name_space;
        pw_to_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwhe-l2-if-count")
    {
        pwhe_l2_if_count = value;
        pwhe_l2_if_count.value_namespace = name_space;
        pwhe_l2_if_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-ac-invalid-xid-drop-count")
    {
        virtual_ac_invalid_xid_drop_count = value;
        virtual_ac_invalid_xid_drop_count.value_namespace = name_space;
        virtual_ac_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-invalid-xid-drop-count")
    {
        vni_invalid_xid_drop_count = value;
        vni_invalid_xid_drop_count.value_namespace = name_space;
        vni_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-to-bp-count")
    {
        vni_to_bp_count = value;
        vni_to_bp_count.value_namespace = name_space;
        vni_to_bp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-to-unknown-count")
    {
        vni_to_unknown_count = value;
        vni_to_unknown_count.value_namespace = name_space;
        vni_to_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-pw-invalid-xid-drop-count")
    {
        vpls_pw_invalid_xid_drop_count = value;
        vpls_pw_invalid_xid_drop_count.value_namespace = name_space;
        vpls_pw_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-pw-max-exceeded-drop-cnt")
    {
        vpls_pw_max_exceeded_drop_cnt = value;
        vpls_pw_max_exceeded_drop_cnt.value_namespace = name_space;
        vpls_pw_max_exceeded_drop_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpws-pw-invalid-xid-drop-count")
    {
        vpws_pw_invalid_xid_drop_count = value;
        vpws_pw_invalid_xid_drop_count.value_namespace = name_space;
        vpws_pw_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-count")
    {
        xconnect_count = value;
        xconnect_count.value_namespace = name_space;
        xconnect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-down-count")
    {
        xconnect_down_count = value;
        xconnect_down_count.value_namespace = name_space;
        xconnect_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-up-count")
    {
        xconnect_up_count = value;
        xconnect_up_count.value_namespace = name_space;
        xconnect_up_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ac-down-count-aib")
    {
        ac_down_count_aib.yfilter = yfilter;
    }
    if(value_path == "ac-down-count-l2vpn")
    {
        ac_down_count_l2vpn.yfilter = yfilter;
    }
    if(value_path == "ac-down-count-l3fib")
    {
        ac_down_count_l3fib.yfilter = yfilter;
    }
    if(value_path == "ac-down-count-vpdn")
    {
        ac_down_count_vpdn.yfilter = yfilter;
    }
    if(value_path == "ac-to-ac-count")
    {
        ac_to_ac_count.yfilter = yfilter;
    }
    if(value_path == "ac-to-bp-count")
    {
        ac_to_bp_count.yfilter = yfilter;
    }
    if(value_path == "ac-to-pw-count-l2tp")
    {
        ac_to_pw_count_l2tp.yfilter = yfilter;
    }
    if(value_path == "ac-to-pw-count-l2tp-ip-v6")
    {
        ac_to_pw_count_l2tp_ip_v6.yfilter = yfilter;
    }
    if(value_path == "ac-to-pw-count-l2tpv2")
    {
        ac_to_pw_count_l2tpv2.yfilter = yfilter;
    }
    if(value_path == "ac-to-pw-count-mpls")
    {
        ac_to_pw_count_mpls.yfilter = yfilter;
    }
    if(value_path == "ac-to-unknown-count")
    {
        ac_to_unknown_count.yfilter = yfilter;
    }
    if(value_path == "bp-count")
    {
        bp_count.yfilter = yfilter;
    }
    if(value_path == "bundle-ac-max-exceeded-drop-cnt")
    {
        bundle_ac_max_exceeded_drop_cnt.yfilter = yfilter;
    }
    if(value_path == "evpn-invalid-xid-drop-count")
    {
        evpn_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "evpn-to-bp-count")
    {
        evpn_to_bp_count.yfilter = yfilter;
    }
    if(value_path == "evpn-to-unknown-count")
    {
        evpn_to_unknown_count.yfilter = yfilter;
    }
    if(value_path == "mon-sess-to-pw-count")
    {
        mon_sess_to_pw_count.yfilter = yfilter;
    }
    if(value_path == "mon-sess-to-unknown-count")
    {
        mon_sess_to_unknown_count.yfilter = yfilter;
    }
    if(value_path == "p2p-count")
    {
        p2p_count.yfilter = yfilter;
    }
    if(value_path == "pbb-invalid-xid-drop-count")
    {
        pbb_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "pbb-to-bp-count")
    {
        pbb_to_bp_count.yfilter = yfilter;
    }
    if(value_path == "pbb-to-unknown-count")
    {
        pbb_to_unknown_count.yfilter = yfilter;
    }
    if(value_path == "pw-to-bp-count")
    {
        pw_to_bp_count.yfilter = yfilter;
    }
    if(value_path == "pw-to-unknown-count")
    {
        pw_to_unknown_count.yfilter = yfilter;
    }
    if(value_path == "pwhe-l2-if-count")
    {
        pwhe_l2_if_count.yfilter = yfilter;
    }
    if(value_path == "virtual-ac-invalid-xid-drop-count")
    {
        virtual_ac_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "vni-invalid-xid-drop-count")
    {
        vni_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "vni-to-bp-count")
    {
        vni_to_bp_count.yfilter = yfilter;
    }
    if(value_path == "vni-to-unknown-count")
    {
        vni_to_unknown_count.yfilter = yfilter;
    }
    if(value_path == "vpls-pw-invalid-xid-drop-count")
    {
        vpls_pw_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "vpls-pw-max-exceeded-drop-cnt")
    {
        vpls_pw_max_exceeded_drop_cnt.yfilter = yfilter;
    }
    if(value_path == "vpws-pw-invalid-xid-drop-count")
    {
        vpws_pw_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "xconnect-count")
    {
        xconnect_count.yfilter = yfilter;
    }
    if(value_path == "xconnect-down-count")
    {
        xconnect_down_count.yfilter = yfilter;
    }
    if(value_path == "xconnect-up-count")
    {
        xconnect_up_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac-down-count-aib" || name == "ac-down-count-l2vpn" || name == "ac-down-count-l3fib" || name == "ac-down-count-vpdn" || name == "ac-to-ac-count" || name == "ac-to-bp-count" || name == "ac-to-pw-count-l2tp" || name == "ac-to-pw-count-l2tp-ip-v6" || name == "ac-to-pw-count-l2tpv2" || name == "ac-to-pw-count-mpls" || name == "ac-to-unknown-count" || name == "bp-count" || name == "bundle-ac-max-exceeded-drop-cnt" || name == "evpn-invalid-xid-drop-count" || name == "evpn-to-bp-count" || name == "evpn-to-unknown-count" || name == "mon-sess-to-pw-count" || name == "mon-sess-to-unknown-count" || name == "p2p-count" || name == "pbb-invalid-xid-drop-count" || name == "pbb-to-bp-count" || name == "pbb-to-unknown-count" || name == "pw-to-bp-count" || name == "pw-to-unknown-count" || name == "pwhe-l2-if-count" || name == "virtual-ac-invalid-xid-drop-count" || name == "vni-invalid-xid-drop-count" || name == "vni-to-bp-count" || name == "vni-to-unknown-count" || name == "vpls-pw-invalid-xid-drop-count" || name == "vpls-pw-max-exceeded-drop-cnt" || name == "vpws-pw-invalid-xid-drop-count" || name == "xconnect-count" || name == "xconnect-down-count" || name == "xconnect-up-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetails()
{

    yang_name = "l2fibmac-details"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::~L2FibmacDetails()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::has_data() const
{
    for (std::size_t index=0; index<l2fibmac_detail.size(); index++)
    {
        if(l2fibmac_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::has_operation() const
{
    for (std::size_t index=0; index<l2fibmac_detail.size(); index++)
    {
        if(l2fibmac_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibmac-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fibmac-detail")
    {
        for(auto const & c : l2fibmac_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail>();
        c->parent = this;
        l2fibmac_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fibmac_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fibmac-detail")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::L2FibmacDetail()
    :
    address{YType::str, "address"},
    bmac_configured{YType::boolean, "bmac-configured"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    bridge_id{YType::uint32, "bridge-id"},
    flag_extension{YType::uint16, "flag-extension"},
    group_name{YType::str, "group-name"},
    l3_encapsulationvlan_id{YType::uint16, "l3-encapsulationvlan-id"},
    name{YType::str, "name"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    node_id{YType::str, "node-id"},
    pbb_bmac{YType::str, "pbb-bmac"},
    peer_vtep_ip{YType::str, "peer-vtep-ip"},
    platform_is_hw_learn{YType::uint8, "platform-is-hw-learn"},
    vni{YType::uint32, "vni"},
    vni_l3_flag{YType::boolean, "vni-l3-flag"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base>())
	,evpn_ctx(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop>())
	,segment(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment>())
{
    base->parent = this;
    evpn_ctx->parent = this;
    next_hop->parent = this;
    segment->parent = this;

    yang_name = "l2fibmac-detail"; yang_parent_name = "l2fibmac-details"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::~L2FibmacDetail()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::has_data() const
{
    return address.is_set
	|| bmac_configured.is_set
	|| bridge_domain_name.is_set
	|| bridge_id.is_set
	|| flag_extension.is_set
	|| group_name.is_set
	|| l3_encapsulationvlan_id.is_set
	|| name.is_set
	|| next_hop_valid.is_set
	|| node_id.is_set
	|| pbb_bmac.is_set
	|| peer_vtep_ip.is_set
	|| platform_is_hw_learn.is_set
	|| vni.is_set
	|| vni_l3_flag.is_set
	|| (base !=  nullptr && base->has_data())
	|| (evpn_ctx !=  nullptr && evpn_ctx->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (segment !=  nullptr && segment->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(bmac_configured.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(flag_extension.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(l3_encapsulationvlan_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(pbb_bmac.yfilter)
	|| ydk::is_set(peer_vtep_ip.yfilter)
	|| ydk::is_set(platform_is_hw_learn.yfilter)
	|| ydk::is_set(vni.yfilter)
	|| ydk::is_set(vni_l3_flag.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (evpn_ctx !=  nullptr && evpn_ctx->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (segment !=  nullptr && segment->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibmac-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bmac_configured.is_set || is_set(bmac_configured.yfilter)) leaf_name_data.push_back(bmac_configured.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (flag_extension.is_set || is_set(flag_extension.yfilter)) leaf_name_data.push_back(flag_extension.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (l3_encapsulationvlan_id.is_set || is_set(l3_encapsulationvlan_id.yfilter)) leaf_name_data.push_back(l3_encapsulationvlan_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (pbb_bmac.is_set || is_set(pbb_bmac.yfilter)) leaf_name_data.push_back(pbb_bmac.get_name_leafdata());
    if (peer_vtep_ip.is_set || is_set(peer_vtep_ip.yfilter)) leaf_name_data.push_back(peer_vtep_ip.get_name_leafdata());
    if (platform_is_hw_learn.is_set || is_set(platform_is_hw_learn.yfilter)) leaf_name_data.push_back(platform_is_hw_learn.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (vni_l3_flag.is_set || is_set(vni_l3_flag.yfilter)) leaf_name_data.push_back(vni_l3_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base>();
        }
        return base;
    }

    if(child_yang_name == "evpn-ctx")
    {
        if(evpn_ctx == nullptr)
        {
            evpn_ctx = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx>();
        }
        return evpn_ctx;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "segment")
    {
        if(segment == nullptr)
        {
            segment = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment>();
        }
        return segment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(evpn_ctx != nullptr)
    {
        children["evpn-ctx"] = evpn_ctx;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(segment != nullptr)
    {
        children["segment"] = segment;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmac-configured")
    {
        bmac_configured = value;
        bmac_configured.value_namespace = name_space;
        bmac_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-extension")
    {
        flag_extension = value;
        flag_extension.value_namespace = name_space;
        flag_extension.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3-encapsulationvlan-id")
    {
        l3_encapsulationvlan_id = value;
        l3_encapsulationvlan_id.value_namespace = name_space;
        l3_encapsulationvlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-bmac")
    {
        pbb_bmac = value;
        pbb_bmac.value_namespace = name_space;
        pbb_bmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-vtep-ip")
    {
        peer_vtep_ip = value;
        peer_vtep_ip.value_namespace = name_space;
        peer_vtep_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-is-hw-learn")
    {
        platform_is_hw_learn = value;
        platform_is_hw_learn.value_namespace = name_space;
        platform_is_hw_learn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-l3-flag")
    {
        vni_l3_flag = value;
        vni_l3_flag.value_namespace = name_space;
        vni_l3_flag.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "bmac-configured")
    {
        bmac_configured.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "flag-extension")
    {
        flag_extension.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "l3-encapsulationvlan-id")
    {
        l3_encapsulationvlan_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "pbb-bmac")
    {
        pbb_bmac.yfilter = yfilter;
    }
    if(value_path == "peer-vtep-ip")
    {
        peer_vtep_ip.yfilter = yfilter;
    }
    if(value_path == "platform-is-hw-learn")
    {
        platform_is_hw_learn.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
    if(value_path == "vni-l3-flag")
    {
        vni_l3_flag.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "evpn-ctx" || name == "next-hop" || name == "segment" || name == "address" || name == "bmac-configured" || name == "bridge-domain-name" || name == "bridge-id" || name == "flag-extension" || name == "group-name" || name == "l3-encapsulationvlan-id" || name == "name" || name == "next-hop-valid" || name == "node-id" || name == "pbb-bmac" || name == "peer-vtep-ip" || name == "platform-is-hw-learn" || name == "vni" || name == "vni-l3-flag")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2fibmac-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::EvpnCtx()
    :
    bp_ifh{YType::str, "bp-ifh"},
    data_type{YType::enumeration, "data-type"},
    esi_id{YType::uint16, "esi-id"},
    local_label{YType::uint32, "local-label"}
    	,
    mcast_ole(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle>())
{
    mcast_ole->parent = this;

    yang_name = "evpn-ctx"; yang_parent_name = "l2fibmac-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::~EvpnCtx()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::has_data() const
{
    return bp_ifh.is_set
	|| data_type.is_set
	|| esi_id.is_set
	|| local_label.is_set
	|| (mcast_ole !=  nullptr && mcast_ole->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bp_ifh.yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(esi_id.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| (mcast_ole !=  nullptr && mcast_ole->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-ctx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bp_ifh.is_set || is_set(bp_ifh.yfilter)) leaf_name_data.push_back(bp_ifh.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (esi_id.is_set || is_set(esi_id.yfilter)) leaf_name_data.push_back(esi_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcast-ole")
    {
        if(mcast_ole == nullptr)
        {
            mcast_ole = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle>();
        }
        return mcast_ole;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mcast_ole != nullptr)
    {
        children["mcast-ole"] = mcast_ole;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bp-ifh")
    {
        bp_ifh = value;
        bp_ifh.value_namespace = name_space;
        bp_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-id")
    {
        esi_id = value;
        esi_id.value_namespace = name_space;
        esi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bp-ifh")
    {
        bp_ifh.yfilter = yfilter;
    }
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "esi-id")
    {
        esi_id.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-ole" || name == "bp-ifh" || name == "data-type" || name == "esi-id" || name == "local-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::McastOle()
    :
    mcast_label{YType::uint32, "mcast-label"},
    next_hop_ipv6_addr{YType::str, "next-hop-ipv6-addr"}
{

    yang_name = "mcast-ole"; yang_parent_name = "evpn-ctx"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::~McastOle()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::has_data() const
{
    return mcast_label.is_set
	|| next_hop_ipv6_addr.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcast_label.yfilter)
	|| ydk::is_set(next_hop_ipv6_addr.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-ole";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcast_label.is_set || is_set(mcast_label.yfilter)) leaf_name_data.push_back(mcast_label.get_name_leafdata());
    if (next_hop_ipv6_addr.is_set || is_set(next_hop_ipv6_addr.yfilter)) leaf_name_data.push_back(next_hop_ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mcast-label")
    {
        mcast_label = value;
        mcast_label.value_namespace = name_space;
        mcast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr = value;
        next_hop_ipv6_addr.value_namespace = name_space;
        next_hop_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mcast-label")
    {
        mcast_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-label" || name == "next-hop-ipv6-addr")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "l2fibmac-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::has_data() const
{
    return children_count.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "children-count" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Segment()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac>())
	,evpn(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn>())
	,pbb(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw>())
	,vni(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni>())
{
    ac->parent = this;
    evpn->parent = this;
    pbb->parent = this;
    pw->parent = this;
    vni->parent = this;

    yang_name = "segment"; yang_parent_name = "l2fibmac-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::~Segment()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (pw !=  nullptr && pw->has_data())
	|| (vni !=  nullptr && vni->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (pw !=  nullptr && pw->has_operation())
	|| (vni !=  nullptr && vni->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb>();
        }
        return pbb;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw>();
        }
        return pw;
    }

    if(child_yang_name == "vni")
    {
        if(vni == nullptr)
        {
            vni = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni>();
        }
        return vni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ac != nullptr)
    {
        children["ac"] = ac;
    }

    if(evpn != nullptr)
    {
        children["evpn"] = evpn;
    }

    if(pbb != nullptr)
    {
        children["pbb"] = pbb;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    if(vni != nullptr)
    {
        children["vni"] = vni;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "evpn" || name == "pbb" || name == "pw" || name == "vni" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::Ac()
    :
    interface_handle{YType::str, "interface-handle"}
{

    yang_name = "ac"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::has_data() const
{
    return interface_handle.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::Evpn()
    :
    xcid{YType::uint32, "xcid"}
{

    yang_name = "evpn"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::~Evpn()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::has_data() const
{
    return xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::Pbb()
    :
    xcid{YType::uint32, "xcid"}
{

    yang_name = "pbb"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::~Pbb()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::has_data() const
{
    return xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::Pw()
    :
    next_hop_address{YType::str, "next-hop-address"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_id{YType::uint64, "pw-id"}
{

    yang_name = "pw"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::~Pw()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::has_data() const
{
    return next_hop_address.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(pseudo_wire_id_type.yfilter)
	|| ydk::is_set(pw_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
        pseudo_wire_id_type.value_namespace = name_space;
        pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "pseudo-wire-id-type" || name == "pw-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::Vni()
    :
    parent_if{YType::str, "parent-if"},
    xcid{YType::uint32, "xcid"}
{

    yang_name = "vni"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::~Vni()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::has_data() const
{
    return parent_if.is_set
	|| xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(parent_if.yfilter)
	|| ydk::is_set(xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parent_if.is_set || is_set(parent_if.yfilter)) leaf_name_data.push_back(parent_if.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "parent-if")
    {
        parent_if = value;
        parent_if.value_namespace = name_space;
        parent_if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "parent-if")
    {
        parent_if.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parent-if" || name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgresses()
{

    yang_name = "l2fibmac-hardware-egresses"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::~L2FibmacHardwareEgresses()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::has_data() const
{
    for (std::size_t index=0; index<l2fibmac_hardware_egress.size(); index++)
    {
        if(l2fibmac_hardware_egress[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::has_operation() const
{
    for (std::size_t index=0; index<l2fibmac_hardware_egress.size(); index++)
    {
        if(l2fibmac_hardware_egress[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibmac-hardware-egresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fibmac-hardware-egress")
    {
        for(auto const & c : l2fibmac_hardware_egress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress>();
        c->parent = this;
        l2fibmac_hardware_egress.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fibmac_hardware_egress)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fibmac-hardware-egress")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::L2FibmacHardwareEgress()
    :
    address{YType::str, "address"},
    bmac_configured{YType::boolean, "bmac-configured"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    bridge_id{YType::uint32, "bridge-id"},
    flag_extension{YType::uint16, "flag-extension"},
    group_name{YType::str, "group-name"},
    l3_encapsulationvlan_id{YType::uint16, "l3-encapsulationvlan-id"},
    name{YType::str, "name"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    node_id{YType::str, "node-id"},
    pbb_bmac{YType::str, "pbb-bmac"},
    peer_vtep_ip{YType::str, "peer-vtep-ip"},
    platform_is_hw_learn{YType::uint8, "platform-is-hw-learn"},
    vni{YType::uint32, "vni"},
    vni_l3_flag{YType::boolean, "vni-l3-flag"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base>())
	,evpn_ctx(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop>())
	,segment(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment>())
{
    base->parent = this;
    evpn_ctx->parent = this;
    next_hop->parent = this;
    segment->parent = this;

    yang_name = "l2fibmac-hardware-egress"; yang_parent_name = "l2fibmac-hardware-egresses"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::~L2FibmacHardwareEgress()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::has_data() const
{
    return address.is_set
	|| bmac_configured.is_set
	|| bridge_domain_name.is_set
	|| bridge_id.is_set
	|| flag_extension.is_set
	|| group_name.is_set
	|| l3_encapsulationvlan_id.is_set
	|| name.is_set
	|| next_hop_valid.is_set
	|| node_id.is_set
	|| pbb_bmac.is_set
	|| peer_vtep_ip.is_set
	|| platform_is_hw_learn.is_set
	|| vni.is_set
	|| vni_l3_flag.is_set
	|| (base !=  nullptr && base->has_data())
	|| (evpn_ctx !=  nullptr && evpn_ctx->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (segment !=  nullptr && segment->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(bmac_configured.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(flag_extension.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(l3_encapsulationvlan_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(pbb_bmac.yfilter)
	|| ydk::is_set(peer_vtep_ip.yfilter)
	|| ydk::is_set(platform_is_hw_learn.yfilter)
	|| ydk::is_set(vni.yfilter)
	|| ydk::is_set(vni_l3_flag.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (evpn_ctx !=  nullptr && evpn_ctx->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (segment !=  nullptr && segment->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibmac-hardware-egress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bmac_configured.is_set || is_set(bmac_configured.yfilter)) leaf_name_data.push_back(bmac_configured.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (flag_extension.is_set || is_set(flag_extension.yfilter)) leaf_name_data.push_back(flag_extension.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (l3_encapsulationvlan_id.is_set || is_set(l3_encapsulationvlan_id.yfilter)) leaf_name_data.push_back(l3_encapsulationvlan_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (pbb_bmac.is_set || is_set(pbb_bmac.yfilter)) leaf_name_data.push_back(pbb_bmac.get_name_leafdata());
    if (peer_vtep_ip.is_set || is_set(peer_vtep_ip.yfilter)) leaf_name_data.push_back(peer_vtep_ip.get_name_leafdata());
    if (platform_is_hw_learn.is_set || is_set(platform_is_hw_learn.yfilter)) leaf_name_data.push_back(platform_is_hw_learn.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (vni_l3_flag.is_set || is_set(vni_l3_flag.yfilter)) leaf_name_data.push_back(vni_l3_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base>();
        }
        return base;
    }

    if(child_yang_name == "evpn-ctx")
    {
        if(evpn_ctx == nullptr)
        {
            evpn_ctx = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx>();
        }
        return evpn_ctx;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "segment")
    {
        if(segment == nullptr)
        {
            segment = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment>();
        }
        return segment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(evpn_ctx != nullptr)
    {
        children["evpn-ctx"] = evpn_ctx;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(segment != nullptr)
    {
        children["segment"] = segment;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmac-configured")
    {
        bmac_configured = value;
        bmac_configured.value_namespace = name_space;
        bmac_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-extension")
    {
        flag_extension = value;
        flag_extension.value_namespace = name_space;
        flag_extension.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3-encapsulationvlan-id")
    {
        l3_encapsulationvlan_id = value;
        l3_encapsulationvlan_id.value_namespace = name_space;
        l3_encapsulationvlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-bmac")
    {
        pbb_bmac = value;
        pbb_bmac.value_namespace = name_space;
        pbb_bmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-vtep-ip")
    {
        peer_vtep_ip = value;
        peer_vtep_ip.value_namespace = name_space;
        peer_vtep_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-is-hw-learn")
    {
        platform_is_hw_learn = value;
        platform_is_hw_learn.value_namespace = name_space;
        platform_is_hw_learn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-l3-flag")
    {
        vni_l3_flag = value;
        vni_l3_flag.value_namespace = name_space;
        vni_l3_flag.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "bmac-configured")
    {
        bmac_configured.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "flag-extension")
    {
        flag_extension.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "l3-encapsulationvlan-id")
    {
        l3_encapsulationvlan_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "pbb-bmac")
    {
        pbb_bmac.yfilter = yfilter;
    }
    if(value_path == "peer-vtep-ip")
    {
        peer_vtep_ip.yfilter = yfilter;
    }
    if(value_path == "platform-is-hw-learn")
    {
        platform_is_hw_learn.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
    if(value_path == "vni-l3-flag")
    {
        vni_l3_flag.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "evpn-ctx" || name == "next-hop" || name == "segment" || name == "address" || name == "bmac-configured" || name == "bridge-domain-name" || name == "bridge-id" || name == "flag-extension" || name == "group-name" || name == "l3-encapsulationvlan-id" || name == "name" || name == "next-hop-valid" || name == "node-id" || name == "pbb-bmac" || name == "peer-vtep-ip" || name == "platform-is-hw-learn" || name == "vni" || name == "vni-l3-flag")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2fibmac-hardware-egress"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::EvpnCtx()
    :
    bp_ifh{YType::str, "bp-ifh"},
    data_type{YType::enumeration, "data-type"},
    esi_id{YType::uint16, "esi-id"},
    local_label{YType::uint32, "local-label"}
    	,
    mcast_ole(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle>())
{
    mcast_ole->parent = this;

    yang_name = "evpn-ctx"; yang_parent_name = "l2fibmac-hardware-egress"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::~EvpnCtx()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::has_data() const
{
    return bp_ifh.is_set
	|| data_type.is_set
	|| esi_id.is_set
	|| local_label.is_set
	|| (mcast_ole !=  nullptr && mcast_ole->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bp_ifh.yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(esi_id.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| (mcast_ole !=  nullptr && mcast_ole->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-ctx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bp_ifh.is_set || is_set(bp_ifh.yfilter)) leaf_name_data.push_back(bp_ifh.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (esi_id.is_set || is_set(esi_id.yfilter)) leaf_name_data.push_back(esi_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcast-ole")
    {
        if(mcast_ole == nullptr)
        {
            mcast_ole = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle>();
        }
        return mcast_ole;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mcast_ole != nullptr)
    {
        children["mcast-ole"] = mcast_ole;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bp-ifh")
    {
        bp_ifh = value;
        bp_ifh.value_namespace = name_space;
        bp_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-id")
    {
        esi_id = value;
        esi_id.value_namespace = name_space;
        esi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bp-ifh")
    {
        bp_ifh.yfilter = yfilter;
    }
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "esi-id")
    {
        esi_id.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-ole" || name == "bp-ifh" || name == "data-type" || name == "esi-id" || name == "local-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle::McastOle()
    :
    mcast_label{YType::uint32, "mcast-label"},
    next_hop_ipv6_addr{YType::str, "next-hop-ipv6-addr"}
{

    yang_name = "mcast-ole"; yang_parent_name = "evpn-ctx"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle::~McastOle()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle::has_data() const
{
    return mcast_label.is_set
	|| next_hop_ipv6_addr.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcast_label.yfilter)
	|| ydk::is_set(next_hop_ipv6_addr.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-ole";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcast_label.is_set || is_set(mcast_label.yfilter)) leaf_name_data.push_back(mcast_label.get_name_leafdata());
    if (next_hop_ipv6_addr.is_set || is_set(next_hop_ipv6_addr.yfilter)) leaf_name_data.push_back(next_hop_ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mcast-label")
    {
        mcast_label = value;
        mcast_label.value_namespace = name_space;
        mcast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr = value;
        next_hop_ipv6_addr.value_namespace = name_space;
        next_hop_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mcast-label")
    {
        mcast_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-label" || name == "next-hop-ipv6-addr")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "l2fibmac-hardware-egress"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::has_data() const
{
    return children_count.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "children-count" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Segment()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac>())
	,evpn(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn>())
	,pbb(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw>())
	,vni(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni>())
{
    ac->parent = this;
    evpn->parent = this;
    pbb->parent = this;
    pw->parent = this;
    vni->parent = this;

    yang_name = "segment"; yang_parent_name = "l2fibmac-hardware-egress"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::~Segment()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (pw !=  nullptr && pw->has_data())
	|| (vni !=  nullptr && vni->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (pw !=  nullptr && pw->has_operation())
	|| (vni !=  nullptr && vni->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb>();
        }
        return pbb;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw>();
        }
        return pw;
    }

    if(child_yang_name == "vni")
    {
        if(vni == nullptr)
        {
            vni = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni>();
        }
        return vni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ac != nullptr)
    {
        children["ac"] = ac;
    }

    if(evpn != nullptr)
    {
        children["evpn"] = evpn;
    }

    if(pbb != nullptr)
    {
        children["pbb"] = pbb;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    if(vni != nullptr)
    {
        children["vni"] = vni;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "evpn" || name == "pbb" || name == "pw" || name == "vni" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac::Ac()
    :
    interface_handle{YType::str, "interface-handle"}
{

    yang_name = "ac"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac::has_data() const
{
    return interface_handle.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn::Evpn()
    :
    xcid{YType::uint32, "xcid"}
{

    yang_name = "evpn"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn::~Evpn()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn::has_data() const
{
    return xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb::Pbb()
    :
    xcid{YType::uint32, "xcid"}
{

    yang_name = "pbb"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb::~Pbb()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb::has_data() const
{
    return xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw::Pw()
    :
    next_hop_address{YType::str, "next-hop-address"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_id{YType::uint64, "pw-id"}
{

    yang_name = "pw"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw::~Pw()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw::has_data() const
{
    return next_hop_address.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(pseudo_wire_id_type.yfilter)
	|| ydk::is_set(pw_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
        pseudo_wire_id_type.value_namespace = name_space;
        pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "pseudo-wire-id-type" || name == "pw-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni::Vni()
    :
    parent_if{YType::str, "parent-if"},
    xcid{YType::uint32, "xcid"}
{

    yang_name = "vni"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni::~Vni()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni::has_data() const
{
    return parent_if.is_set
	|| xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(parent_if.yfilter)
	|| ydk::is_set(xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parent_if.is_set || is_set(parent_if.yfilter)) leaf_name_data.push_back(parent_if.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "parent-if")
    {
        parent_if = value;
        parent_if.value_namespace = name_space;
        parent_if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "parent-if")
    {
        parent_if.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parent-if" || name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngresses()
{

    yang_name = "l2fibmac-hardware-ingresses"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::~L2FibmacHardwareIngresses()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::has_data() const
{
    for (std::size_t index=0; index<l2fibmac_hardware_ingress.size(); index++)
    {
        if(l2fibmac_hardware_ingress[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::has_operation() const
{
    for (std::size_t index=0; index<l2fibmac_hardware_ingress.size(); index++)
    {
        if(l2fibmac_hardware_ingress[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibmac-hardware-ingresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fibmac-hardware-ingress")
    {
        for(auto const & c : l2fibmac_hardware_ingress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress>();
        c->parent = this;
        l2fibmac_hardware_ingress.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fibmac_hardware_ingress)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fibmac-hardware-ingress")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::L2FibmacHardwareIngress()
    :
    address{YType::str, "address"},
    bmac_configured{YType::boolean, "bmac-configured"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    bridge_id{YType::uint32, "bridge-id"},
    flag_extension{YType::uint16, "flag-extension"},
    group_name{YType::str, "group-name"},
    l3_encapsulationvlan_id{YType::uint16, "l3-encapsulationvlan-id"},
    name{YType::str, "name"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    node_id{YType::str, "node-id"},
    pbb_bmac{YType::str, "pbb-bmac"},
    peer_vtep_ip{YType::str, "peer-vtep-ip"},
    platform_is_hw_learn{YType::uint8, "platform-is-hw-learn"},
    vni{YType::uint32, "vni"},
    vni_l3_flag{YType::boolean, "vni-l3-flag"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base>())
	,evpn_ctx(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop>())
	,segment(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment>())
{
    base->parent = this;
    evpn_ctx->parent = this;
    next_hop->parent = this;
    segment->parent = this;

    yang_name = "l2fibmac-hardware-ingress"; yang_parent_name = "l2fibmac-hardware-ingresses"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::~L2FibmacHardwareIngress()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::has_data() const
{
    return address.is_set
	|| bmac_configured.is_set
	|| bridge_domain_name.is_set
	|| bridge_id.is_set
	|| flag_extension.is_set
	|| group_name.is_set
	|| l3_encapsulationvlan_id.is_set
	|| name.is_set
	|| next_hop_valid.is_set
	|| node_id.is_set
	|| pbb_bmac.is_set
	|| peer_vtep_ip.is_set
	|| platform_is_hw_learn.is_set
	|| vni.is_set
	|| vni_l3_flag.is_set
	|| (base !=  nullptr && base->has_data())
	|| (evpn_ctx !=  nullptr && evpn_ctx->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (segment !=  nullptr && segment->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(bmac_configured.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(flag_extension.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(l3_encapsulationvlan_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(pbb_bmac.yfilter)
	|| ydk::is_set(peer_vtep_ip.yfilter)
	|| ydk::is_set(platform_is_hw_learn.yfilter)
	|| ydk::is_set(vni.yfilter)
	|| ydk::is_set(vni_l3_flag.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (evpn_ctx !=  nullptr && evpn_ctx->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (segment !=  nullptr && segment->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibmac-hardware-ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bmac_configured.is_set || is_set(bmac_configured.yfilter)) leaf_name_data.push_back(bmac_configured.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (flag_extension.is_set || is_set(flag_extension.yfilter)) leaf_name_data.push_back(flag_extension.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (l3_encapsulationvlan_id.is_set || is_set(l3_encapsulationvlan_id.yfilter)) leaf_name_data.push_back(l3_encapsulationvlan_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (pbb_bmac.is_set || is_set(pbb_bmac.yfilter)) leaf_name_data.push_back(pbb_bmac.get_name_leafdata());
    if (peer_vtep_ip.is_set || is_set(peer_vtep_ip.yfilter)) leaf_name_data.push_back(peer_vtep_ip.get_name_leafdata());
    if (platform_is_hw_learn.is_set || is_set(platform_is_hw_learn.yfilter)) leaf_name_data.push_back(platform_is_hw_learn.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (vni_l3_flag.is_set || is_set(vni_l3_flag.yfilter)) leaf_name_data.push_back(vni_l3_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base>();
        }
        return base;
    }

    if(child_yang_name == "evpn-ctx")
    {
        if(evpn_ctx == nullptr)
        {
            evpn_ctx = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx>();
        }
        return evpn_ctx;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "segment")
    {
        if(segment == nullptr)
        {
            segment = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment>();
        }
        return segment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(evpn_ctx != nullptr)
    {
        children["evpn-ctx"] = evpn_ctx;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(segment != nullptr)
    {
        children["segment"] = segment;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmac-configured")
    {
        bmac_configured = value;
        bmac_configured.value_namespace = name_space;
        bmac_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-extension")
    {
        flag_extension = value;
        flag_extension.value_namespace = name_space;
        flag_extension.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3-encapsulationvlan-id")
    {
        l3_encapsulationvlan_id = value;
        l3_encapsulationvlan_id.value_namespace = name_space;
        l3_encapsulationvlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-bmac")
    {
        pbb_bmac = value;
        pbb_bmac.value_namespace = name_space;
        pbb_bmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-vtep-ip")
    {
        peer_vtep_ip = value;
        peer_vtep_ip.value_namespace = name_space;
        peer_vtep_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-is-hw-learn")
    {
        platform_is_hw_learn = value;
        platform_is_hw_learn.value_namespace = name_space;
        platform_is_hw_learn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-l3-flag")
    {
        vni_l3_flag = value;
        vni_l3_flag.value_namespace = name_space;
        vni_l3_flag.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "bmac-configured")
    {
        bmac_configured.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "flag-extension")
    {
        flag_extension.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "l3-encapsulationvlan-id")
    {
        l3_encapsulationvlan_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "pbb-bmac")
    {
        pbb_bmac.yfilter = yfilter;
    }
    if(value_path == "peer-vtep-ip")
    {
        peer_vtep_ip.yfilter = yfilter;
    }
    if(value_path == "platform-is-hw-learn")
    {
        platform_is_hw_learn.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
    if(value_path == "vni-l3-flag")
    {
        vni_l3_flag.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "evpn-ctx" || name == "next-hop" || name == "segment" || name == "address" || name == "bmac-configured" || name == "bridge-domain-name" || name == "bridge-id" || name == "flag-extension" || name == "group-name" || name == "l3-encapsulationvlan-id" || name == "name" || name == "next-hop-valid" || name == "node-id" || name == "pbb-bmac" || name == "peer-vtep-ip" || name == "platform-is-hw-learn" || name == "vni" || name == "vni-l3-flag")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2fibmac-hardware-ingress"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::EvpnCtx()
    :
    bp_ifh{YType::str, "bp-ifh"},
    data_type{YType::enumeration, "data-type"},
    esi_id{YType::uint16, "esi-id"},
    local_label{YType::uint32, "local-label"}
    	,
    mcast_ole(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle>())
{
    mcast_ole->parent = this;

    yang_name = "evpn-ctx"; yang_parent_name = "l2fibmac-hardware-ingress"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::~EvpnCtx()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::has_data() const
{
    return bp_ifh.is_set
	|| data_type.is_set
	|| esi_id.is_set
	|| local_label.is_set
	|| (mcast_ole !=  nullptr && mcast_ole->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bp_ifh.yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(esi_id.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| (mcast_ole !=  nullptr && mcast_ole->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-ctx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bp_ifh.is_set || is_set(bp_ifh.yfilter)) leaf_name_data.push_back(bp_ifh.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (esi_id.is_set || is_set(esi_id.yfilter)) leaf_name_data.push_back(esi_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcast-ole")
    {
        if(mcast_ole == nullptr)
        {
            mcast_ole = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle>();
        }
        return mcast_ole;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mcast_ole != nullptr)
    {
        children["mcast-ole"] = mcast_ole;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bp-ifh")
    {
        bp_ifh = value;
        bp_ifh.value_namespace = name_space;
        bp_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-id")
    {
        esi_id = value;
        esi_id.value_namespace = name_space;
        esi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bp-ifh")
    {
        bp_ifh.yfilter = yfilter;
    }
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "esi-id")
    {
        esi_id.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-ole" || name == "bp-ifh" || name == "data-type" || name == "esi-id" || name == "local-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::McastOle()
    :
    mcast_label{YType::uint32, "mcast-label"},
    next_hop_ipv6_addr{YType::str, "next-hop-ipv6-addr"}
{

    yang_name = "mcast-ole"; yang_parent_name = "evpn-ctx"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::~McastOle()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::has_data() const
{
    return mcast_label.is_set
	|| next_hop_ipv6_addr.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcast_label.yfilter)
	|| ydk::is_set(next_hop_ipv6_addr.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-ole";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcast_label.is_set || is_set(mcast_label.yfilter)) leaf_name_data.push_back(mcast_label.get_name_leafdata());
    if (next_hop_ipv6_addr.is_set || is_set(next_hop_ipv6_addr.yfilter)) leaf_name_data.push_back(next_hop_ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mcast-label")
    {
        mcast_label = value;
        mcast_label.value_namespace = name_space;
        mcast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr = value;
        next_hop_ipv6_addr.value_namespace = name_space;
        next_hop_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mcast-label")
    {
        mcast_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-label" || name == "next-hop-ipv6-addr")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "l2fibmac-hardware-ingress"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::has_data() const
{
    return children_count.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "children-count" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Segment()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac>())
	,evpn(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn>())
	,pbb(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw>())
	,vni(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni>())
{
    ac->parent = this;
    evpn->parent = this;
    pbb->parent = this;
    pw->parent = this;
    vni->parent = this;

    yang_name = "segment"; yang_parent_name = "l2fibmac-hardware-ingress"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::~Segment()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (pw !=  nullptr && pw->has_data())
	|| (vni !=  nullptr && vni->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (pw !=  nullptr && pw->has_operation())
	|| (vni !=  nullptr && vni->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb>();
        }
        return pbb;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw>();
        }
        return pw;
    }

    if(child_yang_name == "vni")
    {
        if(vni == nullptr)
        {
            vni = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni>();
        }
        return vni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ac != nullptr)
    {
        children["ac"] = ac;
    }

    if(evpn != nullptr)
    {
        children["evpn"] = evpn;
    }

    if(pbb != nullptr)
    {
        children["pbb"] = pbb;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    if(vni != nullptr)
    {
        children["vni"] = vni;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "evpn" || name == "pbb" || name == "pw" || name == "vni" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::Ac()
    :
    interface_handle{YType::str, "interface-handle"}
{

    yang_name = "ac"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::has_data() const
{
    return interface_handle.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::Evpn()
    :
    xcid{YType::uint32, "xcid"}
{

    yang_name = "evpn"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::~Evpn()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::has_data() const
{
    return xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::Pbb()
    :
    xcid{YType::uint32, "xcid"}
{

    yang_name = "pbb"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::~Pbb()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::has_data() const
{
    return xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::Pw()
    :
    next_hop_address{YType::str, "next-hop-address"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_id{YType::uint64, "pw-id"}
{

    yang_name = "pw"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::~Pw()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::has_data() const
{
    return next_hop_address.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(pseudo_wire_id_type.yfilter)
	|| ydk::is_set(pw_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
        pseudo_wire_id_type.value_namespace = name_space;
        pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "pseudo-wire-id-type" || name == "pw-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::Vni()
    :
    parent_if{YType::str, "parent-if"},
    xcid{YType::uint32, "xcid"}
{

    yang_name = "vni"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::~Vni()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::has_data() const
{
    return parent_if.is_set
	|| xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(parent_if.yfilter)
	|| ydk::is_set(xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parent_if.is_set || is_set(parent_if.yfilter)) leaf_name_data.push_back(parent_if.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "parent-if")
    {
        parent_if = value;
        parent_if.value_namespace = name_space;
        parent_if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "parent-if")
    {
        parent_if.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parent-if" || name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2S()
{

    yang_name = "l2fibx-con-l2tpv2s"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::~L2FibxConL2Tpv2S()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::has_data() const
{
    for (std::size_t index=0; index<l2fibx_con_l2tpv2.size(); index++)
    {
        if(l2fibx_con_l2tpv2[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::has_operation() const
{
    for (std::size_t index=0; index<l2fibx_con_l2tpv2.size(); index++)
    {
        if(l2fibx_con_l2tpv2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibx-con-l2tpv2s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fibx-con-l2tpv2")
    {
        for(auto const & c : l2fibx_con_l2tpv2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2>();
        c->parent = this;
        l2fibx_con_l2tpv2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fibx_con_l2tpv2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fibx-con-l2tpv2")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::L2FibxConL2Tpv2()
    :
    interface_name{YType::str, "interface-name"},
    bound{YType::boolean, "bound"},
    switching_type{YType::enumeration, "switching-type"},
    xcon_name{YType::str, "xcon-name"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base>())
	,segment1(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1>())
	,segment2(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2>())
{
    base->parent = this;
    segment1->parent = this;
    segment2->parent = this;

    yang_name = "l2fibx-con-l2tpv2"; yang_parent_name = "l2fibx-con-l2tpv2s"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::~L2FibxConL2Tpv2()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::has_data() const
{
    return interface_name.is_set
	|| bound.is_set
	|| switching_type.is_set
	|| xcon_name.is_set
	|| (base !=  nullptr && base->has_data())
	|| (segment1 !=  nullptr && segment1->has_data())
	|| (segment2 !=  nullptr && segment2->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(switching_type.yfilter)
	|| ydk::is_set(xcon_name.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (segment1 !=  nullptr && segment1->has_operation())
	|| (segment2 !=  nullptr && segment2->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibx-con-l2tpv2" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (switching_type.is_set || is_set(switching_type.yfilter)) leaf_name_data.push_back(switching_type.get_name_leafdata());
    if (xcon_name.is_set || is_set(xcon_name.yfilter)) leaf_name_data.push_back(xcon_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base>();
        }
        return base;
    }

    if(child_yang_name == "segment1")
    {
        if(segment1 == nullptr)
        {
            segment1 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1>();
        }
        return segment1;
    }

    if(child_yang_name == "segment2")
    {
        if(segment2 == nullptr)
        {
            segment2 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2>();
        }
        return segment2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(segment1 != nullptr)
    {
        children["segment1"] = segment1;
    }

    if(segment2 != nullptr)
    {
        children["segment2"] = segment2;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-type")
    {
        switching_type = value;
        switching_type.value_namespace = name_space;
        switching_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcon-name")
    {
        xcon_name = value;
        xcon_name.value_namespace = name_space;
        xcon_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "switching-type")
    {
        switching_type.yfilter = yfilter;
    }
    if(value_path == "xcon-name")
    {
        xcon_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "segment1" || name == "segment2" || name == "interface-name" || name == "bound" || name == "switching-type" || name == "xcon-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2fibx-con-l2tpv2"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Segment1()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac>())
	,evpn(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn>())
	,monitor_session(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession>())
	,pbb(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw>())
	,vni(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Vni>())
{
    ac->parent = this;
    evpn->parent = this;
    monitor_session->parent = this;
    pbb->parent = this;
    pw->parent = this;
    vni->parent = this;

    yang_name = "segment1"; yang_parent_name = "l2fibx-con-l2tpv2"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::~Segment1()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (monitor_session !=  nullptr && monitor_session->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (pw !=  nullptr && pw->has_data())
	|| (vni !=  nullptr && vni->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (monitor_session !=  nullptr && monitor_session->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (pw !=  nullptr && pw->has_operation())
	|| (vni !=  nullptr && vni->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "monitor-session")
    {
        if(monitor_session == nullptr)
        {
            monitor_session = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession>();
        }
        return monitor_session;
    }

    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb>();
        }
        return pbb;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw>();
        }
        return pw;
    }

    if(child_yang_name == "vni")
    {
        if(vni == nullptr)
        {
            vni = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Vni>();
        }
        return vni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ac != nullptr)
    {
        children["ac"] = ac;
    }

    if(evpn != nullptr)
    {
        children["evpn"] = evpn;
    }

    if(monitor_session != nullptr)
    {
        children["monitor-session"] = monitor_session;
    }

    if(pbb != nullptr)
    {
        children["pbb"] = pbb;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    if(vni != nullptr)
    {
        children["vni"] = vni;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "evpn" || name == "monitor-session" || name == "pbb" || name == "pw" || name == "vni" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Ac()
    :
    actype{YType::uint8, "actype"},
    adjacency_address{YType::str, "adjacency-address"},
    adjacency_valid{YType::boolean, "adjacency-valid"},
    attachment_circuit_id{YType::uint32, "attachment-circuit-id"},
    attachment_circuit_mtu{YType::uint16, "attachment-circuit-mtu"},
    bound{YType::boolean, "bound"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"},
    fxc_next_hop_valid{YType::boolean, "fxc-next-hop-valid"},
    inter_working_mode{YType::uint8, "inter-working-mode"},
    interface_handle{YType::str, "interface-handle"},
    ip_inter_working_mac{YType::str, "ip-inter-working-mac"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    sub_interface_handle{YType::str, "sub-interface-handle"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base>())
	,fxc_next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop>())
{
    base->parent = this;
    fxc_next_hop->parent = this;

    yang_name = "ac"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::has_data() const
{
    return actype.is_set
	|| adjacency_address.is_set
	|| adjacency_valid.is_set
	|| attachment_circuit_id.is_set
	|| attachment_circuit_mtu.is_set
	|| bound.is_set
	|| evpn_internal_label.is_set
	|| fxc_next_hop_valid.is_set
	|| inter_working_mode.is_set
	|| interface_handle.is_set
	|| ip_inter_working_mac.is_set
	|| redundancy_group_id.is_set
	|| redundancy_object_id.is_set
	|| sub_interface_handle.is_set
	|| (base !=  nullptr && base->has_data())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actype.yfilter)
	|| ydk::is_set(adjacency_address.yfilter)
	|| ydk::is_set(adjacency_valid.yfilter)
	|| ydk::is_set(attachment_circuit_id.yfilter)
	|| ydk::is_set(attachment_circuit_mtu.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(evpn_internal_label.yfilter)
	|| ydk::is_set(fxc_next_hop_valid.yfilter)
	|| ydk::is_set(inter_working_mode.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(ip_inter_working_mac.yfilter)
	|| ydk::is_set(redundancy_group_id.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter)
	|| ydk::is_set(sub_interface_handle.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actype.is_set || is_set(actype.yfilter)) leaf_name_data.push_back(actype.get_name_leafdata());
    if (adjacency_address.is_set || is_set(adjacency_address.yfilter)) leaf_name_data.push_back(adjacency_address.get_name_leafdata());
    if (adjacency_valid.is_set || is_set(adjacency_valid.yfilter)) leaf_name_data.push_back(adjacency_valid.get_name_leafdata());
    if (attachment_circuit_id.is_set || is_set(attachment_circuit_id.yfilter)) leaf_name_data.push_back(attachment_circuit_id.get_name_leafdata());
    if (attachment_circuit_mtu.is_set || is_set(attachment_circuit_mtu.yfilter)) leaf_name_data.push_back(attachment_circuit_mtu.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.yfilter)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());
    if (fxc_next_hop_valid.is_set || is_set(fxc_next_hop_valid.yfilter)) leaf_name_data.push_back(fxc_next_hop_valid.get_name_leafdata());
    if (inter_working_mode.is_set || is_set(inter_working_mode.yfilter)) leaf_name_data.push_back(inter_working_mode.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (ip_inter_working_mac.is_set || is_set(ip_inter_working_mac.yfilter)) leaf_name_data.push_back(ip_inter_working_mac.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.yfilter)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (sub_interface_handle.is_set || is_set(sub_interface_handle.yfilter)) leaf_name_data.push_back(sub_interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base>();
        }
        return base;
    }

    if(child_yang_name == "fxc-next-hop")
    {
        if(fxc_next_hop == nullptr)
        {
            fxc_next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop>();
        }
        return fxc_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(fxc_next_hop != nullptr)
    {
        children["fxc-next-hop"] = fxc_next_hop;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actype")
    {
        actype = value;
        actype.value_namespace = name_space;
        actype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address = value;
        adjacency_address.value_namespace = name_space;
        adjacency_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid = value;
        adjacency_valid.value_namespace = name_space;
        adjacency_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id = value;
        attachment_circuit_id.value_namespace = name_space;
        attachment_circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu = value;
        attachment_circuit_mtu.value_namespace = name_space;
        attachment_circuit_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
        evpn_internal_label.value_namespace = name_space;
        evpn_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid = value;
        fxc_next_hop_valid.value_namespace = name_space;
        fxc_next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode = value;
        inter_working_mode.value_namespace = name_space;
        inter_working_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac = value;
        ip_inter_working_mac.value_namespace = name_space;
        ip_inter_working_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
        redundancy_group_id.value_namespace = name_space;
        redundancy_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle = value;
        sub_interface_handle.value_namespace = name_space;
        sub_interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actype")
    {
        actype.yfilter = yfilter;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address.yfilter = yfilter;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label.yfilter = yfilter;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "fxc-next-hop" || name == "actype" || name == "adjacency-address" || name == "adjacency-valid" || name == "attachment-circuit-id" || name == "attachment-circuit-mtu" || name == "bound" || name == "evpn-internal-label" || name == "fxc-next-hop-valid" || name == "inter-working-mode" || name == "interface-handle" || name == "ip-inter-working-mac" || name == "redundancy-group-id" || name == "redundancy-object-id" || name == "sub-interface-handle")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base::Base()
{

    yang_name = "base"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::FxcNextHop()
    :
    children_count{YType::uint32, "children-count"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base>())
{
    base->parent = this;

    yang_name = "fxc-next-hop"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::~FxcNextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::has_data() const
{
    return children_count.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxc-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "children-count" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "fxc-next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Evpn()
    :
    bound{YType::boolean, "bound"},
    evi{YType::uint32, "evi"},
    forward_class{YType::uint8, "forward-class"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base>())
{
    base->parent = this;

    yang_name = "evpn"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::~Evpn()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::has_data() const
{
    return bound.is_set
	|| evi.is_set
	|| forward_class.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "bound" || name == "evi" || name == "forward-class")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base::Base()
{

    yang_name = "base"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::MonitorSession()
    :
    bound{YType::boolean, "bound"},
    hardware_information{YType::str, "hardware-information"},
    session_name{YType::str, "session-name"},
    xcid{YType::uint32, "xcid"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base>())
{
    base->parent = this;

    yang_name = "monitor-session"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::~MonitorSession()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::has_data() const
{
    return bound.is_set
	|| hardware_information.is_set
	|| session_name.is_set
	|| xcid.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "bound" || name == "hardware-information" || name == "session-name" || name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base::Base()
{

    yang_name = "base"; yang_parent_name = "monitor-session"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Pbb()
    :
    bound{YType::boolean, "bound"},
    core_pbb_evpn_enabled{YType::boolean, "core-pbb-evpn-enabled"},
    forward_class{YType::uint8, "forward-class"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base>())
	,pbb_union(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion>())
{
    base->parent = this;
    pbb_union->parent = this;

    yang_name = "pbb"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::~Pbb()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::has_data() const
{
    return bound.is_set
	|| core_pbb_evpn_enabled.is_set
	|| forward_class.is_set
	|| (base !=  nullptr && base->has_data())
	|| (pbb_union !=  nullptr && pbb_union->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(core_pbb_evpn_enabled.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (pbb_union !=  nullptr && pbb_union->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (core_pbb_evpn_enabled.is_set || is_set(core_pbb_evpn_enabled.yfilter)) leaf_name_data.push_back(core_pbb_evpn_enabled.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base>();
        }
        return base;
    }

    if(child_yang_name == "pbb-union")
    {
        if(pbb_union == nullptr)
        {
            pbb_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion>();
        }
        return pbb_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(pbb_union != nullptr)
    {
        children["pbb-union"] = pbb_union;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-pbb-evpn-enabled")
    {
        core_pbb_evpn_enabled = value;
        core_pbb_evpn_enabled.value_namespace = name_space;
        core_pbb_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "core-pbb-evpn-enabled")
    {
        core_pbb_evpn_enabled.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "pbb-union" || name == "bound" || name == "core-pbb-evpn-enabled" || name == "forward-class")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base::Base()
{

    yang_name = "base"; yang_parent_name = "pbb"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::PbbUnion()
    :
    pbb_type{YType::enumeration, "pbb-type"}
    	,
    core(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core>())
	,edge(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge>())
{
    core->parent = this;
    edge->parent = this;

    yang_name = "pbb-union"; yang_parent_name = "pbb"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::~PbbUnion()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::has_data() const
{
    return pbb_type.is_set
	|| (core !=  nullptr && core->has_data())
	|| (edge !=  nullptr && edge->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_type.yfilter)
	|| (core !=  nullptr && core->has_operation())
	|| (edge !=  nullptr && edge->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_type.is_set || is_set(pbb_type.yfilter)) leaf_name_data.push_back(pbb_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core")
    {
        if(core == nullptr)
        {
            core = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core>();
        }
        return core;
    }

    if(child_yang_name == "edge")
    {
        if(edge == nullptr)
        {
            edge = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge>();
        }
        return edge;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(core != nullptr)
    {
        children["core"] = core;
    }

    if(edge != nullptr)
    {
        children["edge"] = edge;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-type")
    {
        pbb_type = value;
        pbb_type.value_namespace = name_space;
        pbb_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-type")
    {
        pbb_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core" || name == "edge" || name == "pbb-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core::Core()
    :
    vlan_id{YType::uint32, "vlan-id"}
{

    yang_name = "core"; yang_parent_name = "pbb-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core::~Core()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core::has_data() const
{
    return vlan_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge::Edge()
    :
    mac{YType::str, "mac"},
    mac_configured{YType::boolean, "mac-configured"}
{

    yang_name = "edge"; yang_parent_name = "pbb-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge::~Edge()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge::has_data() const
{
    return mac.is_set
	|| mac_configured.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(mac_configured.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (mac_configured.is_set || is_set(mac_configured.yfilter)) leaf_name_data.push_back(mac_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-configured")
    {
        mac_configured = value;
        mac_configured.value_namespace = name_space;
        mac_configured.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "mac-configured")
    {
        mac_configured.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "mac-configured")
        return true;
    return false;
}


}
}

