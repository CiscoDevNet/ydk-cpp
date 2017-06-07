
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_3.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_11.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_10.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_12.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_4.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_7.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_20.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_oper {

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::L2Tpv3Session()
    :
    session_id{YType::int32, "session-id"},
    bound{YType::boolean, "bound"},
    interface_handle{YType::str, "interface-handle"},
    ipv4_table_id{YType::uint32, "ipv4-table-id"},
    ipv6_table_id{YType::uint32, "ipv6-table-id"},
    nhop_ip_addr{YType::str, "nhop-ip-addr"},
    session_id_xr{YType::uint32, "session-id-xr"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    sub_interface_name{YType::str, "sub-interface-name"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base>())
{
    base->parent = this;

    yang_name = "l2tpv3-session"; yang_parent_name = "l2tpv3-sessions";
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::~L2Tpv3Session()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::has_data() const
{
    return session_id.is_set
	|| bound.is_set
	|| interface_handle.is_set
	|| ipv4_table_id.is_set
	|| ipv6_table_id.is_set
	|| nhop_ip_addr.is_set
	|| session_id_xr.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| sub_interface_name.is_set
	|| tunnel_id_xr.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(bound.operation)
	|| is_set(interface_handle.operation)
	|| is_set(ipv4_table_id.operation)
	|| is_set(ipv6_table_id.operation)
	|| is_set(nhop_ip_addr.operation)
	|| is_set(session_id_xr.operation)
	|| is_set(session_type.operation)
	|| is_set(source_address.operation)
	|| is_set(sub_interface_name.operation)
	|| is_set(tunnel_id_xr.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-session" <<"[session-id='" <<session_id <<"']";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv3Session' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (ipv4_table_id.is_set || is_set(ipv4_table_id.operation)) leaf_name_data.push_back(ipv4_table_id.get_name_leafdata());
    if (ipv6_table_id.is_set || is_set(ipv6_table_id.operation)) leaf_name_data.push_back(ipv6_table_id.get_name_leafdata());
    if (nhop_ip_addr.is_set || is_set(nhop_ip_addr.operation)) leaf_name_data.push_back(nhop_ip_addr.get_name_leafdata());
    if (session_id_xr.is_set || is_set(session_id_xr.operation)) leaf_name_data.push_back(session_id_xr.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (sub_interface_name.is_set || is_set(sub_interface_name.operation)) leaf_name_data.push_back(sub_interface_name.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.operation)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "ipv4-table-id")
    {
        ipv4_table_id = value;
    }
    if(value_path == "ipv6-table-id")
    {
        ipv6_table_id = value;
    }
    if(value_path == "nhop-ip-addr")
    {
        nhop_ip_addr = value;
    }
    if(value_path == "session-id-xr")
    {
        session_id_xr = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "sub-interface-name")
    {
        sub_interface_name = value;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::Base()
{
    yang_name = "base"; yang_parent_name = "l2tpv3-session";
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Sessions()
{
    yang_name = "l2tpv2-sessions"; yang_parent_name = "l2fib-l2tp";
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::~L2Tpv2Sessions()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::has_data() const
{
    for (std::size_t index=0; index<l2tpv2_session.size(); index++)
    {
        if(l2tpv2_session[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::has_operation() const
{
    for (std::size_t index=0; index<l2tpv2_session.size(); index++)
    {
        if(l2tpv2_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2-sessions";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv2Sessions' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tpv2-session")
    {
        for(auto const & c : l2tpv2_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session>();
        c->parent = this;
        l2tpv2_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2tpv2_session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::L2Tpv2Session()
    :
    bound{YType::boolean, "bound"},
    interface_handle{YType::str, "interface-handle"},
    ipv4_table_id{YType::uint32, "ipv4-table-id"},
    ipv6_table_id{YType::uint32, "ipv6-table-id"},
    nhop_ip_addr{YType::str, "nhop-ip-addr"},
    session_id{YType::int32, "session-id"},
    session_id_xr{YType::uint32, "session-id-xr"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    sub_interface_name{YType::str, "sub-interface-name"},
    tunnel_id{YType::int32, "tunnel-id"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base>())
{
    base->parent = this;

    yang_name = "l2tpv2-session"; yang_parent_name = "l2tpv2-sessions";
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::~L2Tpv2Session()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::has_data() const
{
    return bound.is_set
	|| interface_handle.is_set
	|| ipv4_table_id.is_set
	|| ipv6_table_id.is_set
	|| nhop_ip_addr.is_set
	|| session_id.is_set
	|| session_id_xr.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| sub_interface_name.is_set
	|| tunnel_id.is_set
	|| tunnel_id_xr.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::has_operation() const
{
    return is_set(operation)
	|| is_set(bound.operation)
	|| is_set(interface_handle.operation)
	|| is_set(ipv4_table_id.operation)
	|| is_set(ipv6_table_id.operation)
	|| is_set(nhop_ip_addr.operation)
	|| is_set(session_id.operation)
	|| is_set(session_id_xr.operation)
	|| is_set(session_type.operation)
	|| is_set(source_address.operation)
	|| is_set(sub_interface_name.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnel_id_xr.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2-session";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv2Session' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (ipv4_table_id.is_set || is_set(ipv4_table_id.operation)) leaf_name_data.push_back(ipv4_table_id.get_name_leafdata());
    if (ipv6_table_id.is_set || is_set(ipv6_table_id.operation)) leaf_name_data.push_back(ipv6_table_id.get_name_leafdata());
    if (nhop_ip_addr.is_set || is_set(nhop_ip_addr.operation)) leaf_name_data.push_back(nhop_ip_addr.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (session_id_xr.is_set || is_set(session_id_xr.operation)) leaf_name_data.push_back(session_id_xr.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (sub_interface_name.is_set || is_set(sub_interface_name.operation)) leaf_name_data.push_back(sub_interface_name.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.operation)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "ipv4-table-id")
    {
        ipv4_table_id = value;
    }
    if(value_path == "ipv6-table-id")
    {
        ipv6_table_id = value;
    }
    if(value_path == "nhop-ip-addr")
    {
        nhop_ip_addr = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "session-id-xr")
    {
        session_id_xr = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "sub-interface-name")
    {
        sub_interface_name = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::Base()
{
    yang_name = "base"; yang_parent_name = "l2tpv2-session";
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032()
    :
    l2fib_g8032_rings(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings>())
{
    l2fib_g8032_rings->parent = this;

    yang_name = "l2fib-g8032"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibG8032::~L2FibG8032()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::has_data() const
{
    return (l2fib_g8032_rings !=  nullptr && l2fib_g8032_rings->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::has_operation() const
{
    return is_set(operation)
	|| (l2fib_g8032_rings !=  nullptr && l2fib_g8032_rings->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibG8032::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibG8032' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-g8032-rings")
    {
        if(l2fib_g8032_rings == nullptr)
        {
            l2fib_g8032_rings = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings>();
        }
        return l2fib_g8032_rings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2fib_g8032_rings != nullptr)
    {
        children["l2fib-g8032-rings"] = l2fib_g8032_rings;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Rings()
{
    yang_name = "l2fib-g8032-rings"; yang_parent_name = "l2fib-g8032";
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::~L2FibG8032Rings()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::has_data() const
{
    for (std::size_t index=0; index<l2fib_g8032_ring.size(); index++)
    {
        if(l2fib_g8032_ring[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::has_operation() const
{
    for (std::size_t index=0; index<l2fib_g8032_ring.size(); index++)
    {
        if(l2fib_g8032_ring[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-rings";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibG8032Rings' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-g8032-ring")
    {
        for(auto const & c : l2fib_g8032_ring)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring>();
        c->parent = this;
        l2fib_g8032_ring.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_g8032_ring)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032Ring()
    :
    ring_name{YType::str, "ring-name"}
    	,
    l2fib_g8032_ring_detail(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail>())
	,l2fib_g8032_ring_instance_details(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails>())
	,l2fib_g8032_ring_instance_summaries(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries>())
	,l2fib_g8032_ring_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary>())
{
    l2fib_g8032_ring_detail->parent = this;

    l2fib_g8032_ring_instance_details->parent = this;

    l2fib_g8032_ring_instance_summaries->parent = this;

    l2fib_g8032_ring_summary->parent = this;

    yang_name = "l2fib-g8032-ring"; yang_parent_name = "l2fib-g8032-rings";
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::~L2FibG8032Ring()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::has_data() const
{
    return ring_name.is_set
	|| (l2fib_g8032_ring_detail !=  nullptr && l2fib_g8032_ring_detail->has_data())
	|| (l2fib_g8032_ring_instance_details !=  nullptr && l2fib_g8032_ring_instance_details->has_data())
	|| (l2fib_g8032_ring_instance_summaries !=  nullptr && l2fib_g8032_ring_instance_summaries->has_data())
	|| (l2fib_g8032_ring_summary !=  nullptr && l2fib_g8032_ring_summary->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::has_operation() const
{
    return is_set(operation)
	|| is_set(ring_name.operation)
	|| (l2fib_g8032_ring_detail !=  nullptr && l2fib_g8032_ring_detail->has_operation())
	|| (l2fib_g8032_ring_instance_details !=  nullptr && l2fib_g8032_ring_instance_details->has_operation())
	|| (l2fib_g8032_ring_instance_summaries !=  nullptr && l2fib_g8032_ring_instance_summaries->has_operation())
	|| (l2fib_g8032_ring_summary !=  nullptr && l2fib_g8032_ring_summary->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring" <<"[ring-name='" <<ring_name <<"']";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibG8032Ring' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ring_name.is_set || is_set(ring_name.operation)) leaf_name_data.push_back(ring_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-g8032-ring-detail")
    {
        if(l2fib_g8032_ring_detail == nullptr)
        {
            l2fib_g8032_ring_detail = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail>();
        }
        return l2fib_g8032_ring_detail;
    }

    if(child_yang_name == "l2fib-g8032-ring-instance-details")
    {
        if(l2fib_g8032_ring_instance_details == nullptr)
        {
            l2fib_g8032_ring_instance_details = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails>();
        }
        return l2fib_g8032_ring_instance_details;
    }

    if(child_yang_name == "l2fib-g8032-ring-instance-summaries")
    {
        if(l2fib_g8032_ring_instance_summaries == nullptr)
        {
            l2fib_g8032_ring_instance_summaries = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries>();
        }
        return l2fib_g8032_ring_instance_summaries;
    }

    if(child_yang_name == "l2fib-g8032-ring-summary")
    {
        if(l2fib_g8032_ring_summary == nullptr)
        {
            l2fib_g8032_ring_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary>();
        }
        return l2fib_g8032_ring_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2fib_g8032_ring_detail != nullptr)
    {
        children["l2fib-g8032-ring-detail"] = l2fib_g8032_ring_detail;
    }

    if(l2fib_g8032_ring_instance_details != nullptr)
    {
        children["l2fib-g8032-ring-instance-details"] = l2fib_g8032_ring_instance_details;
    }

    if(l2fib_g8032_ring_instance_summaries != nullptr)
    {
        children["l2fib-g8032-ring-instance-summaries"] = l2fib_g8032_ring_instance_summaries;
    }

    if(l2fib_g8032_ring_summary != nullptr)
    {
        children["l2fib-g8032-ring-summary"] = l2fib_g8032_ring_summary;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ring-name")
    {
        ring_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::L2FibG8032RingDetail()
    :
    is_open_ring{YType::boolean, "is-open-ring"},
    monitor0{YType::str, "monitor0"},
    monitor1{YType::str, "monitor1"},
    port0{YType::str, "port0"},
    port1{YType::str, "port1"},
    ring_name{YType::str, "ring-name"}
{
    yang_name = "l2fib-g8032-ring-detail"; yang_parent_name = "l2fib-g8032-ring";
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::~L2FibG8032RingDetail()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::has_data() const
{
    return is_open_ring.is_set
	|| monitor0.is_set
	|| monitor1.is_set
	|| port0.is_set
	|| port1.is_set
	|| ring_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(is_open_ring.operation)
	|| is_set(monitor0.operation)
	|| is_set(monitor1.operation)
	|| is_set(port0.operation)
	|| is_set(port1.operation)
	|| is_set(ring_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring-detail";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibG8032RingDetail' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_open_ring.is_set || is_set(is_open_ring.operation)) leaf_name_data.push_back(is_open_ring.get_name_leafdata());
    if (monitor0.is_set || is_set(monitor0.operation)) leaf_name_data.push_back(monitor0.get_name_leafdata());
    if (monitor1.is_set || is_set(monitor1.operation)) leaf_name_data.push_back(monitor1.get_name_leafdata());
    if (port0.is_set || is_set(port0.operation)) leaf_name_data.push_back(port0.get_name_leafdata());
    if (port1.is_set || is_set(port1.operation)) leaf_name_data.push_back(port1.get_name_leafdata());
    if (ring_name.is_set || is_set(ring_name.operation)) leaf_name_data.push_back(ring_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-open-ring")
    {
        is_open_ring = value;
    }
    if(value_path == "monitor0")
    {
        monitor0 = value;
    }
    if(value_path == "monitor1")
    {
        monitor1 = value;
    }
    if(value_path == "port0")
    {
        port0 = value;
    }
    if(value_path == "port1")
    {
        port1 = value;
    }
    if(value_path == "ring-name")
    {
        ring_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::L2FibG8032RingSummary()
    :
    port0{YType::str, "port0"},
    port1{YType::str, "port1"},
    ring_name{YType::str, "ring-name"}
{
    yang_name = "l2fib-g8032-ring-summary"; yang_parent_name = "l2fib-g8032-ring";
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::~L2FibG8032RingSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::has_data() const
{
    return port0.is_set
	|| port1.is_set
	|| ring_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(port0.operation)
	|| is_set(port1.operation)
	|| is_set(ring_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring-summary";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibG8032RingSummary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port0.is_set || is_set(port0.operation)) leaf_name_data.push_back(port0.get_name_leafdata());
    if (port1.is_set || is_set(port1.operation)) leaf_name_data.push_back(port1.get_name_leafdata());
    if (ring_name.is_set || is_set(ring_name.operation)) leaf_name_data.push_back(ring_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port0")
    {
        port0 = value;
    }
    if(value_path == "port1")
    {
        port1 = value;
    }
    if(value_path == "ring-name")
    {
        ring_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummaries()
{
    yang_name = "l2fib-g8032-ring-instance-summaries"; yang_parent_name = "l2fib-g8032-ring";
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::~L2FibG8032RingInstanceSummaries()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::has_data() const
{
    for (std::size_t index=0; index<l2fib_g8032_ring_instance_summary.size(); index++)
    {
        if(l2fib_g8032_ring_instance_summary[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::has_operation() const
{
    for (std::size_t index=0; index<l2fib_g8032_ring_instance_summary.size(); index++)
    {
        if(l2fib_g8032_ring_instance_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring-instance-summaries";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibG8032RingInstanceSummaries' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-g8032-ring-instance-summary")
    {
        for(auto const & c : l2fib_g8032_ring_instance_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary>();
        c->parent = this;
        l2fib_g8032_ring_instance_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_g8032_ring_instance_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::L2FibG8032RingInstanceSummary()
    :
    instance{YType::int32, "instance"},
    aps_port0{YType::str, "aps-port0"},
    aps_port1{YType::str, "aps-port1"},
    ring_instance{YType::uint32, "ring-instance"}
{
    yang_name = "l2fib-g8032-ring-instance-summary"; yang_parent_name = "l2fib-g8032-ring-instance-summaries";
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::~L2FibG8032RingInstanceSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::has_data() const
{
    return instance.is_set
	|| aps_port0.is_set
	|| aps_port1.is_set
	|| ring_instance.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(instance.operation)
	|| is_set(aps_port0.operation)
	|| is_set(aps_port1.operation)
	|| is_set(ring_instance.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring-instance-summary" <<"[instance='" <<instance <<"']";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibG8032RingInstanceSummary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (aps_port0.is_set || is_set(aps_port0.operation)) leaf_name_data.push_back(aps_port0.get_name_leafdata());
    if (aps_port1.is_set || is_set(aps_port1.operation)) leaf_name_data.push_back(aps_port1.get_name_leafdata());
    if (ring_instance.is_set || is_set(ring_instance.operation)) leaf_name_data.push_back(ring_instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "aps-port0")
    {
        aps_port0 = value;
    }
    if(value_path == "aps-port1")
    {
        aps_port1 = value;
    }
    if(value_path == "ring-instance")
    {
        ring_instance = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetails()
{
    yang_name = "l2fib-g8032-ring-instance-details"; yang_parent_name = "l2fib-g8032-ring";
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::~L2FibG8032RingInstanceDetails()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::has_data() const
{
    for (std::size_t index=0; index<l2fib_g8032_ring_instance_detail.size(); index++)
    {
        if(l2fib_g8032_ring_instance_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::has_operation() const
{
    for (std::size_t index=0; index<l2fib_g8032_ring_instance_detail.size(); index++)
    {
        if(l2fib_g8032_ring_instance_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring-instance-details";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibG8032RingInstanceDetails' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-g8032-ring-instance-detail")
    {
        for(auto const & c : l2fib_g8032_ring_instance_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail>();
        c->parent = this;
        l2fib_g8032_ring_instance_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_g8032_ring_instance_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::L2FibG8032RingInstanceDetail()
    :
    instance{YType::int32, "instance"},
    aps_channel_level{YType::uint32, "aps-channel-level"},
    aps_port0{YType::str, "aps-port0"},
    aps_port1{YType::str, "aps-port1"},
    aps_port_status0{YType::enumeration, "aps-port-status0"},
    aps_port_status1{YType::enumeration, "aps-port-status1"},
    ring_instance{YType::uint32, "ring-instance"},
    ring_profile{YType::str, "ring-profile"},
    rpl{YType::enumeration, "rpl"},
    vlan_ids{YType::str, "vlan-ids"}
{
    yang_name = "l2fib-g8032-ring-instance-detail"; yang_parent_name = "l2fib-g8032-ring-instance-details";
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::~L2FibG8032RingInstanceDetail()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::has_data() const
{
    return instance.is_set
	|| aps_channel_level.is_set
	|| aps_port0.is_set
	|| aps_port1.is_set
	|| aps_port_status0.is_set
	|| aps_port_status1.is_set
	|| ring_instance.is_set
	|| ring_profile.is_set
	|| rpl.is_set
	|| vlan_ids.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(instance.operation)
	|| is_set(aps_channel_level.operation)
	|| is_set(aps_port0.operation)
	|| is_set(aps_port1.operation)
	|| is_set(aps_port_status0.operation)
	|| is_set(aps_port_status1.operation)
	|| is_set(ring_instance.operation)
	|| is_set(ring_profile.operation)
	|| is_set(rpl.operation)
	|| is_set(vlan_ids.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring-instance-detail" <<"[instance='" <<instance <<"']";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibG8032RingInstanceDetail' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (aps_channel_level.is_set || is_set(aps_channel_level.operation)) leaf_name_data.push_back(aps_channel_level.get_name_leafdata());
    if (aps_port0.is_set || is_set(aps_port0.operation)) leaf_name_data.push_back(aps_port0.get_name_leafdata());
    if (aps_port1.is_set || is_set(aps_port1.operation)) leaf_name_data.push_back(aps_port1.get_name_leafdata());
    if (aps_port_status0.is_set || is_set(aps_port_status0.operation)) leaf_name_data.push_back(aps_port_status0.get_name_leafdata());
    if (aps_port_status1.is_set || is_set(aps_port_status1.operation)) leaf_name_data.push_back(aps_port_status1.get_name_leafdata());
    if (ring_instance.is_set || is_set(ring_instance.operation)) leaf_name_data.push_back(ring_instance.get_name_leafdata());
    if (ring_profile.is_set || is_set(ring_profile.operation)) leaf_name_data.push_back(ring_profile.get_name_leafdata());
    if (rpl.is_set || is_set(rpl.operation)) leaf_name_data.push_back(rpl.get_name_leafdata());
    if (vlan_ids.is_set || is_set(vlan_ids.operation)) leaf_name_data.push_back(vlan_ids.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "aps-channel-level")
    {
        aps_channel_level = value;
    }
    if(value_path == "aps-port0")
    {
        aps_port0 = value;
    }
    if(value_path == "aps-port1")
    {
        aps_port1 = value;
    }
    if(value_path == "aps-port-status0")
    {
        aps_port_status0 = value;
    }
    if(value_path == "aps-port-status1")
    {
        aps_port_status1 = value;
    }
    if(value_path == "ring-instance")
    {
        ring_instance = value;
    }
    if(value_path == "ring-profile")
    {
        ring_profile = value;
    }
    if(value_path == "rpl")
    {
        rpl = value;
    }
    if(value_path == "vlan-ids")
    {
        vlan_ids = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePorts()
{
    yang_name = "l2fib-bridge-ports"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::~L2FibBridgePorts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::has_data() const
{
    for (std::size_t index=0; index<l2fib_bridge_port.size(); index++)
    {
        if(l2fib_bridge_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::has_operation() const
{
    for (std::size_t index=0; index<l2fib_bridge_port.size(); index++)
    {
        if(l2fib_bridge_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-bridge-ports";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibBridgePorts' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-bridge-port")
    {
        for(auto const & c : l2fib_bridge_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort>();
        c->parent = this;
        l2fib_bridge_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_bridge_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::L2FibBridgePort()
    :
    aging_time_out{YType::uint32, "aging-time-out"},
    bd_name{YType::str, "bd-name"},
    bridge_id{YType::uint32, "bridge-id"},
    flooding_disabled{YType::boolean, "flooding-disabled"},
    group_name{YType::str, "group-name"},
    mac_learning_disabled{YType::boolean, "mac-learning-disabled"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_port_down_flush_disabled{YType::boolean, "mac-port-down-flush-disabled"},
    mtu{YType::uint32, "mtu"},
    number_of_hw_mac{YType::uint32, "number-of-hw-mac"},
    number_of_sw_mac{YType::uint32, "number-of-sw-mac"},
    shg_id{YType::uint32, "shg-id"},
    xc_id{YType::uint32, "xc-id"},
    xc_uint_id{YType::str, "xc-uint-id"}
    	,
    bridge_port_operational_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo>())
	,segment(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment>())
{
    bridge_port_operational_info->parent = this;

    segment->parent = this;

    yang_name = "l2fib-bridge-port"; yang_parent_name = "l2fib-bridge-ports";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::~L2FibBridgePort()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::has_data() const
{
    return aging_time_out.is_set
	|| bd_name.is_set
	|| bridge_id.is_set
	|| flooding_disabled.is_set
	|| group_name.is_set
	|| mac_learning_disabled.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_port_down_flush_disabled.is_set
	|| mtu.is_set
	|| number_of_hw_mac.is_set
	|| number_of_sw_mac.is_set
	|| shg_id.is_set
	|| xc_id.is_set
	|| xc_uint_id.is_set
	|| (bridge_port_operational_info !=  nullptr && bridge_port_operational_info->has_data())
	|| (segment !=  nullptr && segment->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::has_operation() const
{
    return is_set(operation)
	|| is_set(aging_time_out.operation)
	|| is_set(bd_name.operation)
	|| is_set(bridge_id.operation)
	|| is_set(flooding_disabled.operation)
	|| is_set(group_name.operation)
	|| is_set(mac_learning_disabled.operation)
	|| is_set(mac_limit.operation)
	|| is_set(mac_limit_action.operation)
	|| is_set(mac_port_down_flush_disabled.operation)
	|| is_set(mtu.operation)
	|| is_set(number_of_hw_mac.operation)
	|| is_set(number_of_sw_mac.operation)
	|| is_set(shg_id.operation)
	|| is_set(xc_id.operation)
	|| is_set(xc_uint_id.operation)
	|| (bridge_port_operational_info !=  nullptr && bridge_port_operational_info->has_operation())
	|| (segment !=  nullptr && segment->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-bridge-port";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibBridgePort' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aging_time_out.is_set || is_set(aging_time_out.operation)) leaf_name_data.push_back(aging_time_out.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.operation)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (flooding_disabled.is_set || is_set(flooding_disabled.operation)) leaf_name_data.push_back(flooding_disabled.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.operation)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.operation)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.operation)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.operation)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (number_of_hw_mac.is_set || is_set(number_of_hw_mac.operation)) leaf_name_data.push_back(number_of_hw_mac.get_name_leafdata());
    if (number_of_sw_mac.is_set || is_set(number_of_sw_mac.operation)) leaf_name_data.push_back(number_of_sw_mac.get_name_leafdata());
    if (shg_id.is_set || is_set(shg_id.operation)) leaf_name_data.push_back(shg_id.get_name_leafdata());
    if (xc_id.is_set || is_set(xc_id.operation)) leaf_name_data.push_back(xc_id.get_name_leafdata());
    if (xc_uint_id.is_set || is_set(xc_uint_id.operation)) leaf_name_data.push_back(xc_uint_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-port-operational-info")
    {
        if(bridge_port_operational_info == nullptr)
        {
            bridge_port_operational_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo>();
        }
        return bridge_port_operational_info;
    }

    if(child_yang_name == "segment")
    {
        if(segment == nullptr)
        {
            segment = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment>();
        }
        return segment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bridge_port_operational_info != nullptr)
    {
        children["bridge-port-operational-info"] = bridge_port_operational_info;
    }

    if(segment != nullptr)
    {
        children["segment"] = segment;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aging-time-out")
    {
        aging_time_out = value;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "number-of-hw-mac")
    {
        number_of_hw_mac = value;
    }
    if(value_path == "number-of-sw-mac")
    {
        number_of_sw_mac = value;
    }
    if(value_path == "shg-id")
    {
        shg_id = value;
    }
    if(value_path == "xc-id")
    {
        xc_id = value;
    }
    if(value_path == "xc-uint-id")
    {
        xc_uint_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Segment()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac>())
	,evpn(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn>())
	,pbb(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw>())
	,vni(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni>())
{
    ac->parent = this;

    evpn->parent = this;

    pbb->parent = this;

    pw->parent = this;

    vni->parent = this;

    yang_name = "segment"; yang_parent_name = "l2fib-bridge-port";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::~Segment()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (pw !=  nullptr && pw->has_data())
	|| (vni !=  nullptr && vni->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| (ac !=  nullptr && ac->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (pw !=  nullptr && pw->has_operation())
	|| (vni !=  nullptr && vni->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Segment' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb>();
        }
        return pbb;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw>();
        }
        return pw;
    }

    if(child_yang_name == "vni")
    {
        if(vni == nullptr)
        {
            vni = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni>();
        }
        return vni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::get_children() const
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

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Ac()
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
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base>())
	,fxc_next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop>())
{
    base->parent = this;

    fxc_next_hop->parent = this;

    yang_name = "ac"; yang_parent_name = "segment";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::has_data() const
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

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::has_operation() const
{
    return is_set(operation)
	|| is_set(actype.operation)
	|| is_set(adjacency_address.operation)
	|| is_set(adjacency_valid.operation)
	|| is_set(attachment_circuit_id.operation)
	|| is_set(attachment_circuit_mtu.operation)
	|| is_set(bound.operation)
	|| is_set(evpn_internal_label.operation)
	|| is_set(fxc_next_hop_valid.operation)
	|| is_set(inter_working_mode.operation)
	|| is_set(interface_handle.operation)
	|| is_set(ip_inter_working_mac.operation)
	|| is_set(redundancy_group_id.operation)
	|| is_set(redundancy_object_id.operation)
	|| is_set(sub_interface_handle.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ac' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actype.is_set || is_set(actype.operation)) leaf_name_data.push_back(actype.get_name_leafdata());
    if (adjacency_address.is_set || is_set(adjacency_address.operation)) leaf_name_data.push_back(adjacency_address.get_name_leafdata());
    if (adjacency_valid.is_set || is_set(adjacency_valid.operation)) leaf_name_data.push_back(adjacency_valid.get_name_leafdata());
    if (attachment_circuit_id.is_set || is_set(attachment_circuit_id.operation)) leaf_name_data.push_back(attachment_circuit_id.get_name_leafdata());
    if (attachment_circuit_mtu.is_set || is_set(attachment_circuit_mtu.operation)) leaf_name_data.push_back(attachment_circuit_mtu.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.operation)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());
    if (fxc_next_hop_valid.is_set || is_set(fxc_next_hop_valid.operation)) leaf_name_data.push_back(fxc_next_hop_valid.get_name_leafdata());
    if (inter_working_mode.is_set || is_set(inter_working_mode.operation)) leaf_name_data.push_back(inter_working_mode.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (ip_inter_working_mac.is_set || is_set(ip_inter_working_mac.operation)) leaf_name_data.push_back(ip_inter_working_mac.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.operation)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.operation)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (sub_interface_handle.is_set || is_set(sub_interface_handle.operation)) leaf_name_data.push_back(sub_interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base>();
        }
        return base;
    }

    if(child_yang_name == "fxc-next-hop")
    {
        if(fxc_next_hop == nullptr)
        {
            fxc_next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop>();
        }
        return fxc_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::get_children() const
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

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actype")
    {
        actype = value;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address = value;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid = value;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id = value;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid = value;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac = value;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::Base()
{
    yang_name = "base"; yang_parent_name = "ac";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::FxcNextHop()
    :
    children_count{YType::uint32, "children-count"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    plaformt_data_valid{YType::boolean, "plaformt-data-valid"},
    platform_data_length{YType::uint32, "platform-data-length"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base>())
{
    base->parent = this;

    yang_name = "fxc-next-hop"; yang_parent_name = "ac";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::~FxcNextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::has_data() const
{
    return children_count.is_set
	|| next_hop_address.is_set
	|| next_hop_internal_label.is_set
	|| plaformt_data_valid.is_set
	|| platform_data_length.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(children_count.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_internal_label.operation)
	|| is_set(plaformt_data_valid.operation)
	|| is_set(platform_data_length.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxc-next-hop";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FxcNextHop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.operation)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.operation)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (plaformt_data_valid.is_set || is_set(plaformt_data_valid.operation)) leaf_name_data.push_back(plaformt_data_valid.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.operation)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "children-count")
    {
        children_count = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
    }
    if(value_path == "plaformt-data-valid")
    {
        plaformt_data_valid = value;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::Base()
{
    yang_name = "base"; yang_parent_name = "fxc-next-hop";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Pbb()
    :
    bound{YType::boolean, "bound"},
    core_pbb_evpn_enabled{YType::boolean, "core-pbb-evpn-enabled"},
    forward_class{YType::uint8, "forward-class"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base>())
	,pbb_union(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion>())
{
    base->parent = this;

    pbb_union->parent = this;

    yang_name = "pbb"; yang_parent_name = "segment";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::~Pbb()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::has_data() const
{
    return bound.is_set
	|| core_pbb_evpn_enabled.is_set
	|| forward_class.is_set
	|| (base !=  nullptr && base->has_data())
	|| (pbb_union !=  nullptr && pbb_union->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::has_operation() const
{
    return is_set(operation)
	|| is_set(bound.operation)
	|| is_set(core_pbb_evpn_enabled.operation)
	|| is_set(forward_class.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (pbb_union !=  nullptr && pbb_union->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pbb' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (core_pbb_evpn_enabled.is_set || is_set(core_pbb_evpn_enabled.operation)) leaf_name_data.push_back(core_pbb_evpn_enabled.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base>();
        }
        return base;
    }

    if(child_yang_name == "pbb-union")
    {
        if(pbb_union == nullptr)
        {
            pbb_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion>();
        }
        return pbb_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::get_children() const
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

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "core-pbb-evpn-enabled")
    {
        core_pbb_evpn_enabled = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::Base()
{
    yang_name = "base"; yang_parent_name = "pbb";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::PbbUnion()
    :
    pbb_type{YType::enumeration, "pbb-type"}
    	,
    core(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core>())
	,edge(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge>())
{
    core->parent = this;

    edge->parent = this;

    yang_name = "pbb-union"; yang_parent_name = "pbb";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::~PbbUnion()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::has_data() const
{
    return pbb_type.is_set
	|| (core !=  nullptr && core->has_data())
	|| (edge !=  nullptr && edge->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::has_operation() const
{
    return is_set(operation)
	|| is_set(pbb_type.operation)
	|| (core !=  nullptr && core->has_operation())
	|| (edge !=  nullptr && edge->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-union";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbUnion' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_type.is_set || is_set(pbb_type.operation)) leaf_name_data.push_back(pbb_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core")
    {
        if(core == nullptr)
        {
            core = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core>();
        }
        return core;
    }

    if(child_yang_name == "edge")
    {
        if(edge == nullptr)
        {
            edge = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge>();
        }
        return edge;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::get_children() const
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

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pbb-type")
    {
        pbb_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::Edge()
    :
    mac{YType::str, "mac"},
    mac_configured{YType::boolean, "mac-configured"}
{
    yang_name = "edge"; yang_parent_name = "pbb-union";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::~Edge()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::has_data() const
{
    return mac.is_set
	|| mac_configured.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::has_operation() const
{
    return is_set(operation)
	|| is_set(mac.operation)
	|| is_set(mac_configured.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Edge' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.operation)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (mac_configured.is_set || is_set(mac_configured.operation)) leaf_name_data.push_back(mac_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac")
    {
        mac = value;
    }
    if(value_path == "mac-configured")
    {
        mac_configured = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::Core()
    :
    vlan_id{YType::uint32, "vlan-id"}
{
    yang_name = "core"; yang_parent_name = "pbb-union";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::~Core()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::has_data() const
{
    return vlan_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Core' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Vni()
    :
    any_cast_ip{YType::str, "any-cast-ip"},
    anycast_mcast_ip{YType::str, "anycast-mcast-ip"},
    bound{YType::boolean, "bound"},
    encap{YType::uint32, "encap"},
    mcastip{YType::str, "mcastip"},
    parent_if{YType::str, "parent-if"},
    source_vtep_if{YType::str, "source-vtep-if"},
    srcip{YType::str, "srcip"},
    udp_port{YType::uint32, "udp-port"},
    vx_lan_mode{YType::uint32, "vx-lan-mode"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base>())
{
    base->parent = this;

    yang_name = "vni"; yang_parent_name = "segment";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::~Vni()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::has_data() const
{
    return any_cast_ip.is_set
	|| anycast_mcast_ip.is_set
	|| bound.is_set
	|| encap.is_set
	|| mcastip.is_set
	|| parent_if.is_set
	|| source_vtep_if.is_set
	|| srcip.is_set
	|| udp_port.is_set
	|| vx_lan_mode.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::has_operation() const
{
    return is_set(operation)
	|| is_set(any_cast_ip.operation)
	|| is_set(anycast_mcast_ip.operation)
	|| is_set(bound.operation)
	|| is_set(encap.operation)
	|| is_set(mcastip.operation)
	|| is_set(parent_if.operation)
	|| is_set(source_vtep_if.operation)
	|| is_set(srcip.operation)
	|| is_set(udp_port.operation)
	|| is_set(vx_lan_mode.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vni' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_cast_ip.is_set || is_set(any_cast_ip.operation)) leaf_name_data.push_back(any_cast_ip.get_name_leafdata());
    if (anycast_mcast_ip.is_set || is_set(anycast_mcast_ip.operation)) leaf_name_data.push_back(anycast_mcast_ip.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (encap.is_set || is_set(encap.operation)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (mcastip.is_set || is_set(mcastip.operation)) leaf_name_data.push_back(mcastip.get_name_leafdata());
    if (parent_if.is_set || is_set(parent_if.operation)) leaf_name_data.push_back(parent_if.get_name_leafdata());
    if (source_vtep_if.is_set || is_set(source_vtep_if.operation)) leaf_name_data.push_back(source_vtep_if.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.operation)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.operation)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (vx_lan_mode.is_set || is_set(vx_lan_mode.operation)) leaf_name_data.push_back(vx_lan_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any-cast-ip")
    {
        any_cast_ip = value;
    }
    if(value_path == "anycast-mcast-ip")
    {
        anycast_mcast_ip = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "encap")
    {
        encap = value;
    }
    if(value_path == "mcastip")
    {
        mcastip = value;
    }
    if(value_path == "parent-if")
    {
        parent_if = value;
    }
    if(value_path == "source-vtep-if")
    {
        source_vtep_if = value;
    }
    if(value_path == "srcip")
    {
        srcip = value;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
    }
    if(value_path == "vx-lan-mode")
    {
        vx_lan_mode = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::Base()
{
    yang_name = "base"; yang_parent_name = "vni";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Evpn()
    :
    bound{YType::boolean, "bound"},
    evi{YType::uint32, "evi"},
    forward_class{YType::uint8, "forward-class"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base>())
{
    base->parent = this;

    yang_name = "evpn"; yang_parent_name = "segment";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::~Evpn()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::has_data() const
{
    return bound.is_set
	|| evi.is_set
	|| forward_class.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::has_operation() const
{
    return is_set(operation)
	|| is_set(bound.operation)
	|| is_set(evi.operation)
	|| is_set(forward_class.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Evpn' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::Base()
{
    yang_name = "base"; yang_parent_name = "evpn";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Pw()
    :
    ac_id{YType::uint32, "ac-id"},
    active{YType::boolean, "active"},
    backup_configured{YType::boolean, "backup-configured"},
    bound{YType::boolean, "bound"},
    context{YType::uint16, "context"},
    forward_class{YType::uint8, "forward-class"},
    global_id{YType::uint32, "global-id"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    grouping_supported{YType::boolean, "grouping-supported"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    pw_id{YType::uint64, "pw-id"},
    pw_load_balance_type{YType::enumeration, "pw-load-balance-type"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    sequence_resync_threshold{YType::uint16, "sequence-resync-threshold"},
    signal_capability_flags{YType::uint32, "signal-capability-flags"}
    	,
    backup_pseudo_wire(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire>())
	,base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop>())
	,pseudo_wire_union(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion>())
{
    backup_pseudo_wire->parent = this;

    base->parent = this;

    next_hop->parent = this;

    pseudo_wire_union->parent = this;

    yang_name = "pw"; yang_parent_name = "segment";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::~Pw()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::has_data() const
{
    return ac_id.is_set
	|| active.is_set
	|| backup_configured.is_set
	|| bound.is_set
	|| context.is_set
	|| forward_class.is_set
	|| global_id.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| grouping_supported.is_set
	|| next_hop_valid.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_flow_label_tx.is_set
	|| pw_id.is_set
	|| pw_load_balance_type.is_set
	|| redundancy_role.is_set
	|| sequence_resync_threshold.is_set
	|| signal_capability_flags.is_set
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_data())
	|| (base !=  nullptr && base->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::has_operation() const
{
    return is_set(operation)
	|| is_set(ac_id.operation)
	|| is_set(active.operation)
	|| is_set(backup_configured.operation)
	|| is_set(bound.operation)
	|| is_set(context.operation)
	|| is_set(forward_class.operation)
	|| is_set(global_id.operation)
	|| is_set(group_id.operation)
	|| is_set(group_state.operation)
	|| is_set(grouping_supported.operation)
	|| is_set(next_hop_valid.operation)
	|| is_set(pseudo_wire_id_type.operation)
	|| is_set(pw_flow_label_tx.operation)
	|| is_set(pw_id.operation)
	|| is_set(pw_load_balance_type.operation)
	|| is_set(redundancy_role.operation)
	|| is_set(sequence_resync_threshold.operation)
	|| is_set(signal_capability_flags.operation)
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_operation())
	|| (base !=  nullptr && base->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_id.is_set || is_set(ac_id.operation)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (backup_configured.is_set || is_set(backup_configured.operation)) leaf_name_data.push_back(backup_configured.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.operation)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.operation)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.operation)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.operation)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.operation)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.operation)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (pw_load_balance_type.is_set || is_set(pw_load_balance_type.operation)) leaf_name_data.push_back(pw_load_balance_type.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.operation)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (sequence_resync_threshold.is_set || is_set(sequence_resync_threshold.operation)) leaf_name_data.push_back(sequence_resync_threshold.get_name_leafdata());
    if (signal_capability_flags.is_set || is_set(signal_capability_flags.operation)) leaf_name_data.push_back(signal_capability_flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-pseudo-wire")
    {
        if(backup_pseudo_wire == nullptr)
        {
            backup_pseudo_wire = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire>();
        }
        return backup_pseudo_wire;
    }

    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base>();
        }
        return base;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "pseudo-wire-union")
    {
        if(pseudo_wire_union == nullptr)
        {
            pseudo_wire_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion>();
        }
        return pseudo_wire_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_pseudo_wire != nullptr)
    {
        children["backup-pseudo-wire"] = backup_pseudo_wire;
    }

    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(pseudo_wire_union != nullptr)
    {
        children["pseudo-wire-union"] = pseudo_wire_union;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ac-id")
    {
        ac_id = value;
    }
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "backup-configured")
    {
        backup_configured = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "global-id")
    {
        global_id = value;
    }
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "group-state")
    {
        group_state = value;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type = value;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold = value;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::Base()
{
    yang_name = "base"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    plaformt_data_valid{YType::boolean, "plaformt-data-valid"},
    platform_data_length{YType::uint32, "platform-data-length"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::has_data() const
{
    return children_count.is_set
	|| next_hop_address.is_set
	|| next_hop_internal_label.is_set
	|| plaformt_data_valid.is_set
	|| platform_data_length.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(children_count.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_internal_label.operation)
	|| is_set(plaformt_data_valid.operation)
	|| is_set(platform_data_length.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.operation)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.operation)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (plaformt_data_valid.is_set || is_set(plaformt_data_valid.operation)) leaf_name_data.push_back(plaformt_data_valid.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.operation)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "children-count")
    {
        children_count = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
    }
    if(value_path == "plaformt-data-valid")
    {
        plaformt_data_valid = value;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::Base()
{
    yang_name = "base"; yang_parent_name = "next-hop";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::PseudoWireUnion()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    l2tp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp>())
	,l2tp_ipv6_ts(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts>())
	,l2tpv2(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2>())
	,mpls(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls>())
{
    l2tp->parent = this;

    l2tp_ipv6_ts->parent = this;

    l2tpv2->parent = this;

    mpls->parent = this;

    yang_name = "pseudo-wire-union"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::~PseudoWireUnion()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::has_data() const
{
    return data_type.is_set
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_data())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_operation())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-wire-union";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudoWireUnion' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tp")
    {
        if(l2tp == nullptr)
        {
            l2tp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp>();
        }
        return l2tp;
    }

    if(child_yang_name == "l2tp-ipv6-ts")
    {
        if(l2tp_ipv6_ts == nullptr)
        {
            l2tp_ipv6_ts = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts>();
        }
        return l2tp_ipv6_ts;
    }

    if(child_yang_name == "l2tpv2")
    {
        if(l2tpv2 == nullptr)
        {
            l2tpv2 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2>();
        }
        return l2tpv2;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2tp != nullptr)
    {
        children["l2tp"] = l2tp;
    }

    if(l2tp_ipv6_ts != nullptr)
    {
        children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
    }

    if(l2tpv2 != nullptr)
    {
        children["l2tpv2"] = l2tpv2;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::Mpls()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{
    yang_name = "mpls"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::~Mpls()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::has_operation() const
{
    return is_set(operation)
	|| is_set(pw_label.operation)
	|| is_set(pw_local_label.operation)
	|| is_set(pw_tunnel_interface.operation)
	|| is_set(pw_xcid.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.operation)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.operation)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.operation)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.operation)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::L2Tp()
    :
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote>())
{
    local->parent = this;

    remote->parent = this;

    yang_name = "l2tp"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::~L2Tp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::has_data() const
{
    return path_mtu.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::has_operation() const
{
    return is_set(operation)
	|| is_set(path_mtu.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation)
	|| is_set(tos_val.operation)
	|| is_set(ttl.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_mtu.is_set || is_set(path_mtu.operation)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.operation)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::get_children() const
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

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-mtu")
    {
        path_mtu = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::Local()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "local"; yang_parent_name = "l2tp";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::Remote()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "remote"; yang_parent_name = "l2tp";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::L2Tpv2()
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
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote>())
{
    local->parent = this;

    remote->parent = this;

    yang_name = "l2tpv2"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::~L2Tpv2()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::has_data() const
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

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(path_mtu.operation)
	|| is_set(protocol.operation)
	|| is_set(pw_flags.operation)
	|| is_set(rem_udp_port.operation)
	|| is_set(source_address.operation)
	|| is_set(tos_val.operation)
	|| is_set(ttl.operation)
	|| is_set(xconnect_id.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv2' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.operation)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (pw_flags.is_set || is_set(pw_flags.operation)) leaf_name_data.push_back(pw_flags.get_name_leafdata());
    if (rem_udp_port.is_set || is_set(rem_udp_port.operation)) leaf_name_data.push_back(rem_udp_port.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.operation)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.operation)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::get_children() const
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

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "pw-flags")
    {
        pw_flags = value;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "local"; yang_parent_name = "l2tpv2";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "remote"; yang_parent_name = "l2tpv2";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::L2TpIpv6Ts()
    :
    local_address{YType::str, "local-address"},
    path_mtu{YType::uint16, "path-mtu"},
    remote_address{YType::str, "remote-address"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>())
{
    local->parent = this;

    remote->parent = this;

    yang_name = "l2tp-ipv6-ts"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::~L2TpIpv6Ts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::has_data() const
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

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address.operation)
	|| is_set(path_mtu.operation)
	|| is_set(remote_address.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation)
	|| is_set(tos_val.operation)
	|| is_set(ttl.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-ipv6-ts";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpIpv6Ts' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.operation)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.operation)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::get_children() const
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

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::Local()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    secondary_cookie_high_value{YType::uint32, "secondary-cookie-high-value"},
    secondary_cookie_low_value{YType::uint32, "secondary-cookie-low-value"},
    secondary_cookie_size{YType::uint8, "secondary-cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "local"; yang_parent_name = "l2tp-ipv6-ts";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| secondary_cookie_high_value.is_set
	|| secondary_cookie_low_value.is_set
	|| secondary_cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(secondary_cookie_high_value.operation)
	|| is_set(secondary_cookie_low_value.operation)
	|| is_set(secondary_cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (secondary_cookie_high_value.is_set || is_set(secondary_cookie_high_value.operation)) leaf_name_data.push_back(secondary_cookie_high_value.get_name_leafdata());
    if (secondary_cookie_low_value.is_set || is_set(secondary_cookie_low_value.operation)) leaf_name_data.push_back(secondary_cookie_low_value.get_name_leafdata());
    if (secondary_cookie_size.is_set || is_set(secondary_cookie_size.operation)) leaf_name_data.push_back(secondary_cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value = value;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value = value;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::Remote()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "remote"; yang_parent_name = "l2tp-ipv6-ts";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::BackupPseudoWire()
    :
    active{YType::boolean, "active"},
    backup_next_hop{YType::str, "backup-next-hop"},
    backup_pseudo_wire_id{YType::uint32, "backup-pseudo-wire-id"},
    backup_pseudo_wire_id_type{YType::enumeration, "backup-pseudo-wire-id-type"},
    bound{YType::boolean, "bound"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    grouping_supported{YType::boolean, "grouping-supported"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    redundancy_role{YType::enumeration, "redundancy-role"}
    	,
    atom(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom>())
{
    atom->parent = this;

    yang_name = "backup-pseudo-wire"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::~BackupPseudoWire()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::has_data() const
{
    return active.is_set
	|| backup_next_hop.is_set
	|| backup_pseudo_wire_id.is_set
	|| backup_pseudo_wire_id_type.is_set
	|| bound.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| grouping_supported.is_set
	|| pw_flow_label_tx.is_set
	|| redundancy_role.is_set
	|| (atom !=  nullptr && atom->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(backup_next_hop.operation)
	|| is_set(backup_pseudo_wire_id.operation)
	|| is_set(backup_pseudo_wire_id_type.operation)
	|| is_set(bound.operation)
	|| is_set(group_id.operation)
	|| is_set(group_state.operation)
	|| is_set(grouping_supported.operation)
	|| is_set(pw_flow_label_tx.operation)
	|| is_set(redundancy_role.operation)
	|| (atom !=  nullptr && atom->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudo-wire";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPseudoWire' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (backup_next_hop.is_set || is_set(backup_next_hop.operation)) leaf_name_data.push_back(backup_next_hop.get_name_leafdata());
    if (backup_pseudo_wire_id.is_set || is_set(backup_pseudo_wire_id.operation)) leaf_name_data.push_back(backup_pseudo_wire_id.get_name_leafdata());
    if (backup_pseudo_wire_id_type.is_set || is_set(backup_pseudo_wire_id_type.operation)) leaf_name_data.push_back(backup_pseudo_wire_id_type.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.operation)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.operation)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.operation)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.operation)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atom")
    {
        if(atom == nullptr)
        {
            atom = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom>();
        }
        return atom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atom != nullptr)
    {
        children["atom"] = atom;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "backup-next-hop")
    {
        backup_next_hop = value;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id = value;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "group-state")
    {
        group_state = value;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::Atom()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{
    yang_name = "atom"; yang_parent_name = "backup-pseudo-wire";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::~Atom()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::has_operation() const
{
    return is_set(operation)
	|| is_set(pw_label.operation)
	|| is_set(pw_local_label.operation)
	|| is_set(pw_tunnel_interface.operation)
	|| is_set(pw_xcid.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atom' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.operation)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.operation)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.operation)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.operation)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::BridgePortOperationalInfo()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"}
    	,
    operational_information(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation>())
{
    operational_information->parent = this;

    yang_name = "bridge-port-operational-info"; yang_parent_name = "l2fib-bridge-port";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::~BridgePortOperationalInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| (operational_information !=  nullptr && operational_information->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_storm_control_kb_ps.operation)
	|| is_set(broadcast_storm_control_pps.operation)
	|| is_set(multicast_storm_control_kb_ps.operation)
	|| is_set(multicast_storm_control_pps.operation)
	|| is_set(unicast_storm_control_kb_ps.operation)
	|| is_set(unicast_storm_control_pps.operation)
	|| (operational_information !=  nullptr && operational_information->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-port-operational-info";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgePortOperationalInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.operation)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.operation)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.operation)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.operation)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operational-information")
    {
        if(operational_information == nullptr)
        {
            operational_information = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation>();
        }
        return operational_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(operational_information != nullptr)
    {
        children["operational-information"] = operational_information;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::OperationalInformation()
    :
    admin_disabled{YType::boolean, "admin-disabled"},
    bvi_configured{YType::boolean, "bvi-configured"},
    dhcp_enabled{YType::boolean, "dhcp-enabled"},
    dhcp_trusted{YType::boolean, "dhcp-trusted"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    flooding_disabled{YType::boolean, "flooding-disabled"},
    host_routing_enabled{YType::boolean, "host-routing-enabled"},
    igmp_flood_forward_enabled{YType::boolean, "igmp-flood-forward-enabled"},
    igmp_mroute_port_enabled{YType::boolean, "igmp-mroute-port-enabled"},
    igmp_route_guard_enabled{YType::boolean, "igmp-route-guard-enabled"},
    igmp_snoop_enabled{YType::boolean, "igmp-snoop-enabled"},
    igmp_snoop_profile_enabled{YType::boolean, "igmp-snoop-profile-enabled"},
    is_bvi_up{YType::boolean, "is-bvi-up"},
    is_dai_addr_validation_destination_mac_enabled{YType::boolean, "is-dai-addr-validation-destination-mac-enabled"},
    is_dai_addr_validation_ipv4_enabled{YType::boolean, "is-dai-addr-validation-ipv4-enabled"},
    is_dai_addr_validation_source_mac_enabled{YType::boolean, "is-dai-addr-validation-source-mac-enabled"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_evpn_cw_disable{YType::boolean, "is-evpn-cw-disable"},
    is_evpn_enabled{YType::boolean, "is-evpn-enabled"},
    is_evpn_flow_label{YType::boolean, "is-evpn-flow-label"},
    is_igmp_snoop_enabled{YType::boolean, "is-igmp-snoop-enabled"},
    is_ipsg_enabled{YType::boolean, "is-ipsg-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_mac_secure_accept_shutdown{YType::boolean, "is-mac-secure-accept-shutdown"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    is_p2mp_pw_enabled{YType::boolean, "is-p2mp-pw-enabled"},
    is_pbbevpn_enabled{YType::boolean, "is-pbbevpn-enabled"},
    is_swmac_learning{YType::boolean, "is-swmac-learning"},
    is_vni_enabled{YType::boolean, "is-vni-enabled"},
    is_vpls_flood_optimization_enabled{YType::boolean, "is-vpls-flood-optimization-enabled"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_aging_type{YType::boolean, "mac-aging-type"},
    mac_learning_disabled{YType::boolean, "mac-learning-disabled"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_notification_type{YType::enumeration, "mac-limit-notification-type"},
    mac_port_down_flush_disabled{YType::boolean, "mac-port-down-flush-disabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    mld_flood_forward_enabled{YType::boolean, "mld-flood-forward-enabled"},
    mld_mroute_port_enabled{YType::boolean, "mld-mroute-port-enabled"},
    mld_route_guard_enabled{YType::boolean, "mld-route-guard-enabled"},
    mld_snoop_enabled{YType::boolean, "mld-snoop-enabled"},
    mld_snoop_profile_enabled{YType::boolean, "mld-snoop-profile-enabled"},
    msti{YType::uint32, "msti"},
    mtu{YType::uint32, "mtu"},
    number_of_macs{YType::uint32, "number-of-macs"},
    nv_satellite_offload_ipv4_multicast_disabled{YType::boolean, "nv-satellite-offload-ipv4-multicast-disabled"},
    storm_control_broadcast_enabled{YType::boolean, "storm-control-broadcast-enabled"},
    storm_control_broadcast_rate_unit{YType::enumeration, "storm-control-broadcast-rate-unit"},
    storm_control_multicast_enabled{YType::boolean, "storm-control-multicast-enabled"},
    storm_control_multicast_rate_unit{YType::enumeration, "storm-control-multicast-rate-unit"},
    storm_control_unicast_enabled{YType::boolean, "storm-control-unicast-enabled"},
    storm_control_unicast_rate_unit{YType::enumeration, "storm-control-unicast-rate-unit"},
    stp_participating{YType::boolean, "stp-participating"},
    unknown_unicast_flooding_disabled{YType::boolean, "unknown-unicast-flooding-disabled"}
{
    yang_name = "operational-information"; yang_parent_name = "bridge-port-operational-info";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::~OperationalInformation()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::has_data() const
{
    for (std::size_t index=0; index<feature.size(); index++)
    {
        if(feature[index]->has_data())
            return true;
    }
    return admin_disabled.is_set
	|| bvi_configured.is_set
	|| dhcp_enabled.is_set
	|| dhcp_trusted.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| flooding_disabled.is_set
	|| host_routing_enabled.is_set
	|| igmp_flood_forward_enabled.is_set
	|| igmp_mroute_port_enabled.is_set
	|| igmp_route_guard_enabled.is_set
	|| igmp_snoop_enabled.is_set
	|| igmp_snoop_profile_enabled.is_set
	|| is_bvi_up.is_set
	|| is_dai_addr_validation_destination_mac_enabled.is_set
	|| is_dai_addr_validation_ipv4_enabled.is_set
	|| is_dai_addr_validation_source_mac_enabled.is_set
	|| is_dai_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_evpn_cw_disable.is_set
	|| is_evpn_enabled.is_set
	|| is_evpn_flow_label.is_set
	|| is_igmp_snoop_enabled.is_set
	|| is_ipsg_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_mac_secure_accept_shutdown.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| is_p2mp_pw_enabled.is_set
	|| is_pbbevpn_enabled.is_set
	|| is_swmac_learning.is_set
	|| is_vni_enabled.is_set
	|| is_vpls_flood_optimization_enabled.is_set
	|| mac_aging_time.is_set
	|| mac_aging_type.is_set
	|| mac_learning_disabled.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_limit_notification_type.is_set
	|| mac_port_down_flush_disabled.is_set
	|| mac_secure_action.is_set
	|| mld_flood_forward_enabled.is_set
	|| mld_mroute_port_enabled.is_set
	|| mld_route_guard_enabled.is_set
	|| mld_snoop_enabled.is_set
	|| mld_snoop_profile_enabled.is_set
	|| msti.is_set
	|| mtu.is_set
	|| number_of_macs.is_set
	|| nv_satellite_offload_ipv4_multicast_disabled.is_set
	|| storm_control_broadcast_enabled.is_set
	|| storm_control_broadcast_rate_unit.is_set
	|| storm_control_multicast_enabled.is_set
	|| storm_control_multicast_rate_unit.is_set
	|| storm_control_unicast_enabled.is_set
	|| storm_control_unicast_rate_unit.is_set
	|| stp_participating.is_set
	|| unknown_unicast_flooding_disabled.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::has_operation() const
{
    for (std::size_t index=0; index<feature.size(); index++)
    {
        if(feature[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(admin_disabled.operation)
	|| is_set(bvi_configured.operation)
	|| is_set(dhcp_enabled.operation)
	|| is_set(dhcp_trusted.operation)
	|| is_set(flood_unknown_unicast_enabled.operation)
	|| is_set(flooding_disabled.operation)
	|| is_set(host_routing_enabled.operation)
	|| is_set(igmp_flood_forward_enabled.operation)
	|| is_set(igmp_mroute_port_enabled.operation)
	|| is_set(igmp_route_guard_enabled.operation)
	|| is_set(igmp_snoop_enabled.operation)
	|| is_set(igmp_snoop_profile_enabled.operation)
	|| is_set(is_bvi_up.operation)
	|| is_set(is_dai_addr_validation_destination_mac_enabled.operation)
	|| is_set(is_dai_addr_validation_ipv4_enabled.operation)
	|| is_set(is_dai_addr_validation_source_mac_enabled.operation)
	|| is_set(is_dai_enabled.operation)
	|| is_set(is_dai_logging_enabled.operation)
	|| is_set(is_evpn_cw_disable.operation)
	|| is_set(is_evpn_enabled.operation)
	|| is_set(is_evpn_flow_label.operation)
	|| is_set(is_igmp_snoop_enabled.operation)
	|| is_set(is_ipsg_enabled.operation)
	|| is_set(is_ipsg_logging_enabled.operation)
	|| is_set(is_mac_secure_accept_shutdown.operation)
	|| is_set(is_mac_secure_enabled.operation)
	|| is_set(is_mac_secure_logging_enabled.operation)
	|| is_set(is_p2mp_pw_enabled.operation)
	|| is_set(is_pbbevpn_enabled.operation)
	|| is_set(is_swmac_learning.operation)
	|| is_set(is_vni_enabled.operation)
	|| is_set(is_vpls_flood_optimization_enabled.operation)
	|| is_set(mac_aging_time.operation)
	|| is_set(mac_aging_type.operation)
	|| is_set(mac_learning_disabled.operation)
	|| is_set(mac_limit.operation)
	|| is_set(mac_limit_action.operation)
	|| is_set(mac_limit_notification_type.operation)
	|| is_set(mac_port_down_flush_disabled.operation)
	|| is_set(mac_secure_action.operation)
	|| is_set(mld_flood_forward_enabled.operation)
	|| is_set(mld_mroute_port_enabled.operation)
	|| is_set(mld_route_guard_enabled.operation)
	|| is_set(mld_snoop_enabled.operation)
	|| is_set(mld_snoop_profile_enabled.operation)
	|| is_set(msti.operation)
	|| is_set(mtu.operation)
	|| is_set(number_of_macs.operation)
	|| is_set(nv_satellite_offload_ipv4_multicast_disabled.operation)
	|| is_set(storm_control_broadcast_enabled.operation)
	|| is_set(storm_control_broadcast_rate_unit.operation)
	|| is_set(storm_control_multicast_enabled.operation)
	|| is_set(storm_control_multicast_rate_unit.operation)
	|| is_set(storm_control_unicast_enabled.operation)
	|| is_set(storm_control_unicast_rate_unit.operation)
	|| is_set(stp_participating.operation)
	|| is_set(unknown_unicast_flooding_disabled.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-information";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OperationalInformation' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_disabled.is_set || is_set(admin_disabled.operation)) leaf_name_data.push_back(admin_disabled.get_name_leafdata());
    if (bvi_configured.is_set || is_set(bvi_configured.operation)) leaf_name_data.push_back(bvi_configured.get_name_leafdata());
    if (dhcp_enabled.is_set || is_set(dhcp_enabled.operation)) leaf_name_data.push_back(dhcp_enabled.get_name_leafdata());
    if (dhcp_trusted.is_set || is_set(dhcp_trusted.operation)) leaf_name_data.push_back(dhcp_trusted.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.operation)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flooding_disabled.is_set || is_set(flooding_disabled.operation)) leaf_name_data.push_back(flooding_disabled.get_name_leafdata());
    if (host_routing_enabled.is_set || is_set(host_routing_enabled.operation)) leaf_name_data.push_back(host_routing_enabled.get_name_leafdata());
    if (igmp_flood_forward_enabled.is_set || is_set(igmp_flood_forward_enabled.operation)) leaf_name_data.push_back(igmp_flood_forward_enabled.get_name_leafdata());
    if (igmp_mroute_port_enabled.is_set || is_set(igmp_mroute_port_enabled.operation)) leaf_name_data.push_back(igmp_mroute_port_enabled.get_name_leafdata());
    if (igmp_route_guard_enabled.is_set || is_set(igmp_route_guard_enabled.operation)) leaf_name_data.push_back(igmp_route_guard_enabled.get_name_leafdata());
    if (igmp_snoop_enabled.is_set || is_set(igmp_snoop_enabled.operation)) leaf_name_data.push_back(igmp_snoop_enabled.get_name_leafdata());
    if (igmp_snoop_profile_enabled.is_set || is_set(igmp_snoop_profile_enabled.operation)) leaf_name_data.push_back(igmp_snoop_profile_enabled.get_name_leafdata());
    if (is_bvi_up.is_set || is_set(is_bvi_up.operation)) leaf_name_data.push_back(is_bvi_up.get_name_leafdata());
    if (is_dai_addr_validation_destination_mac_enabled.is_set || is_set(is_dai_addr_validation_destination_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validation_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validation_ipv4_enabled.is_set || is_set(is_dai_addr_validation_ipv4_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validation_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validation_source_mac_enabled.is_set || is_set(is_dai_addr_validation_source_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validation_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.operation)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.operation)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_evpn_cw_disable.is_set || is_set(is_evpn_cw_disable.operation)) leaf_name_data.push_back(is_evpn_cw_disable.get_name_leafdata());
    if (is_evpn_enabled.is_set || is_set(is_evpn_enabled.operation)) leaf_name_data.push_back(is_evpn_enabled.get_name_leafdata());
    if (is_evpn_flow_label.is_set || is_set(is_evpn_flow_label.operation)) leaf_name_data.push_back(is_evpn_flow_label.get_name_leafdata());
    if (is_igmp_snoop_enabled.is_set || is_set(is_igmp_snoop_enabled.operation)) leaf_name_data.push_back(is_igmp_snoop_enabled.get_name_leafdata());
    if (is_ipsg_enabled.is_set || is_set(is_ipsg_enabled.operation)) leaf_name_data.push_back(is_ipsg_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.operation)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown.is_set || is_set(is_mac_secure_accept_shutdown.operation)) leaf_name_data.push_back(is_mac_secure_accept_shutdown.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.operation)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.operation)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (is_p2mp_pw_enabled.is_set || is_set(is_p2mp_pw_enabled.operation)) leaf_name_data.push_back(is_p2mp_pw_enabled.get_name_leafdata());
    if (is_pbbevpn_enabled.is_set || is_set(is_pbbevpn_enabled.operation)) leaf_name_data.push_back(is_pbbevpn_enabled.get_name_leafdata());
    if (is_swmac_learning.is_set || is_set(is_swmac_learning.operation)) leaf_name_data.push_back(is_swmac_learning.get_name_leafdata());
    if (is_vni_enabled.is_set || is_set(is_vni_enabled.operation)) leaf_name_data.push_back(is_vni_enabled.get_name_leafdata());
    if (is_vpls_flood_optimization_enabled.is_set || is_set(is_vpls_flood_optimization_enabled.operation)) leaf_name_data.push_back(is_vpls_flood_optimization_enabled.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.operation)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_aging_type.is_set || is_set(mac_aging_type.operation)) leaf_name_data.push_back(mac_aging_type.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.operation)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.operation)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.operation)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification_type.is_set || is_set(mac_limit_notification_type.operation)) leaf_name_data.push_back(mac_limit_notification_type.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.operation)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.operation)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_flood_forward_enabled.is_set || is_set(mld_flood_forward_enabled.operation)) leaf_name_data.push_back(mld_flood_forward_enabled.get_name_leafdata());
    if (mld_mroute_port_enabled.is_set || is_set(mld_mroute_port_enabled.operation)) leaf_name_data.push_back(mld_mroute_port_enabled.get_name_leafdata());
    if (mld_route_guard_enabled.is_set || is_set(mld_route_guard_enabled.operation)) leaf_name_data.push_back(mld_route_guard_enabled.get_name_leafdata());
    if (mld_snoop_enabled.is_set || is_set(mld_snoop_enabled.operation)) leaf_name_data.push_back(mld_snoop_enabled.get_name_leafdata());
    if (mld_snoop_profile_enabled.is_set || is_set(mld_snoop_profile_enabled.operation)) leaf_name_data.push_back(mld_snoop_profile_enabled.get_name_leafdata());
    if (msti.is_set || is_set(msti.operation)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (number_of_macs.is_set || is_set(number_of_macs.operation)) leaf_name_data.push_back(number_of_macs.get_name_leafdata());
    if (nv_satellite_offload_ipv4_multicast_disabled.is_set || is_set(nv_satellite_offload_ipv4_multicast_disabled.operation)) leaf_name_data.push_back(nv_satellite_offload_ipv4_multicast_disabled.get_name_leafdata());
    if (storm_control_broadcast_enabled.is_set || is_set(storm_control_broadcast_enabled.operation)) leaf_name_data.push_back(storm_control_broadcast_enabled.get_name_leafdata());
    if (storm_control_broadcast_rate_unit.is_set || is_set(storm_control_broadcast_rate_unit.operation)) leaf_name_data.push_back(storm_control_broadcast_rate_unit.get_name_leafdata());
    if (storm_control_multicast_enabled.is_set || is_set(storm_control_multicast_enabled.operation)) leaf_name_data.push_back(storm_control_multicast_enabled.get_name_leafdata());
    if (storm_control_multicast_rate_unit.is_set || is_set(storm_control_multicast_rate_unit.operation)) leaf_name_data.push_back(storm_control_multicast_rate_unit.get_name_leafdata());
    if (storm_control_unicast_enabled.is_set || is_set(storm_control_unicast_enabled.operation)) leaf_name_data.push_back(storm_control_unicast_enabled.get_name_leafdata());
    if (storm_control_unicast_rate_unit.is_set || is_set(storm_control_unicast_rate_unit.operation)) leaf_name_data.push_back(storm_control_unicast_rate_unit.get_name_leafdata());
    if (stp_participating.is_set || is_set(stp_participating.operation)) leaf_name_data.push_back(stp_participating.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.operation)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "feature")
    {
        for(auto const & c : feature)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature>();
        c->parent = this;
        feature.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : feature)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-disabled")
    {
        admin_disabled = value;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured = value;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled = value;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted = value;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled = value;
    }
    if(value_path == "host-routing-enabled")
    {
        host_routing_enabled = value;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled = value;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled = value;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled = value;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled = value;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled = value;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up = value;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled = value;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled = value;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled = value;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable = value;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled = value;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label = value;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled = value;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled = value;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown = value;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled = value;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled = value;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning = value;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled = value;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled = value;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type = value;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type = value;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled = value;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled = value;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled = value;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled = value;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled = value;
    }
    if(value_path == "msti")
    {
        msti = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs = value;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled = value;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled = value;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit = value;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled = value;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit = value;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled = value;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit = value;
    }
    if(value_path == "stp-participating")
    {
        stp_participating = value;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Feature()
    :
    feature_type{YType::enumeration, "feature-type"}
    	,
    dhcp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp>())
	,igmp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp>())
	,mld(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld>())
{
    dhcp->parent = this;

    igmp->parent = this;

    mld->parent = this;

    yang_name = "feature"; yang_parent_name = "operational-information";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::~Feature()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::has_data() const
{
    return feature_type.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (mld !=  nullptr && mld->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::has_operation() const
{
    return is_set(operation)
	|| is_set(feature_type.operation)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (mld !=  nullptr && mld->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Feature' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (feature_type.is_set || is_set(feature_type.operation)) leaf_name_data.push_back(feature_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "mld")
    {
        if(mld == nullptr)
        {
            mld = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld>();
        }
        return mld;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    if(mld != nullptr)
    {
        children["mld"] = mld;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "feature-type")
    {
        feature_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::Dhcp()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "dhcp"; yang_parent_name = "feature";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::~Dhcp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::Igmp()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "igmp"; yang_parent_name = "feature";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::~Igmp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igmp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::Mld()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "mld"; yang_parent_name = "feature";
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::~Mld()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mld' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetails()
{
    yang_name = "l2fibmac-details"; yang_parent_name = "node";
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
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibmac-details";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibmacDetails' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::set_value(const std::string & value_path, std::string value)
{
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

    yang_name = "l2fibmac-detail"; yang_parent_name = "l2fibmac-details";
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
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(bmac_configured.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(bridge_id.operation)
	|| is_set(flag_extension.operation)
	|| is_set(group_name.operation)
	|| is_set(l3_encapsulationvlan_id.operation)
	|| is_set(name.operation)
	|| is_set(next_hop_valid.operation)
	|| is_set(node_id.operation)
	|| is_set(pbb_bmac.operation)
	|| is_set(peer_vtep_ip.operation)
	|| is_set(platform_is_hw_learn.operation)
	|| is_set(vni.operation)
	|| is_set(vni_l3_flag.operation)
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

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibmacDetail' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bmac_configured.is_set || is_set(bmac_configured.operation)) leaf_name_data.push_back(bmac_configured.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.operation)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (flag_extension.is_set || is_set(flag_extension.operation)) leaf_name_data.push_back(flag_extension.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (l3_encapsulationvlan_id.is_set || is_set(l3_encapsulationvlan_id.operation)) leaf_name_data.push_back(l3_encapsulationvlan_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.operation)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (pbb_bmac.is_set || is_set(pbb_bmac.operation)) leaf_name_data.push_back(pbb_bmac.get_name_leafdata());
    if (peer_vtep_ip.is_set || is_set(peer_vtep_ip.operation)) leaf_name_data.push_back(peer_vtep_ip.get_name_leafdata());
    if (platform_is_hw_learn.is_set || is_set(platform_is_hw_learn.operation)) leaf_name_data.push_back(platform_is_hw_learn.get_name_leafdata());
    if (vni.is_set || is_set(vni.operation)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (vni_l3_flag.is_set || is_set(vni_l3_flag.operation)) leaf_name_data.push_back(vni_l3_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "bmac-configured")
    {
        bmac_configured = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
    }
    if(value_path == "flag-extension")
    {
        flag_extension = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "l3-encapsulationvlan-id")
    {
        l3_encapsulationvlan_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "pbb-bmac")
    {
        pbb_bmac = value;
    }
    if(value_path == "peer-vtep-ip")
    {
        peer_vtep_ip = value;
    }
    if(value_path == "platform-is-hw-learn")
    {
        platform_is_hw_learn = value;
    }
    if(value_path == "vni")
    {
        vni = value;
    }
    if(value_path == "vni-l3-flag")
    {
        vni_l3_flag = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::Base()
{
    yang_name = "base"; yang_parent_name = "l2fibmac-detail";
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
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::set_value(const std::string & value_path, std::string value)
{
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

    yang_name = "segment"; yang_parent_name = "l2fibmac-detail";
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
    return is_set(operation)
	|| is_set(data_type.operation)
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

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Segment' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::Ac()
    :
    interface_handle{YType::str, "interface-handle"}
{
    yang_name = "ac"; yang_parent_name = "segment";
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
    return is_set(operation)
	|| is_set(interface_handle.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ac' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::Pbb()
    :
    xcid{YType::uint32, "xcid"}
{
    yang_name = "pbb"; yang_parent_name = "segment";
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
    return is_set(operation)
	|| is_set(xcid.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pbb' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.operation)) leaf_name_data.push_back(xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "xcid")
    {
        xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::Vni()
    :
    parent_if{YType::str, "parent-if"},
    xcid{YType::uint32, "xcid"}
{
    yang_name = "vni"; yang_parent_name = "segment";
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
    return is_set(operation)
	|| is_set(parent_if.operation)
	|| is_set(xcid.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vni' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parent_if.is_set || is_set(parent_if.operation)) leaf_name_data.push_back(parent_if.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.operation)) leaf_name_data.push_back(xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "parent-if")
    {
        parent_if = value;
    }
    if(value_path == "xcid")
    {
        xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::Evpn()
    :
    xcid{YType::uint32, "xcid"}
{
    yang_name = "evpn"; yang_parent_name = "segment";
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
    return is_set(operation)
	|| is_set(xcid.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Evpn' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.operation)) leaf_name_data.push_back(xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "xcid")
    {
        xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::Pw()
    :
    next_hop_address{YType::str, "next-hop-address"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_id{YType::uint64, "pw-id"}
{
    yang_name = "pw"; yang_parent_name = "segment";
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
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(pseudo_wire_id_type.operation)
	|| is_set(pw_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.operation)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
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

    yang_name = "evpn-ctx"; yang_parent_name = "l2fibmac-detail";
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
    return is_set(operation)
	|| is_set(bp_ifh.operation)
	|| is_set(data_type.operation)
	|| is_set(esi_id.operation)
	|| is_set(local_label.operation)
	|| (mcast_ole !=  nullptr && mcast_ole->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-ctx";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnCtx' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bp_ifh.is_set || is_set(bp_ifh.operation)) leaf_name_data.push_back(bp_ifh.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (esi_id.is_set || is_set(esi_id.operation)) leaf_name_data.push_back(esi_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bp-ifh")
    {
        bp_ifh = value;
    }
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "esi-id")
    {
        esi_id = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::McastOle()
    :
    mcast_label{YType::uint32, "mcast-label"},
    next_hop_ipv6_addr{YType::str, "next-hop-ipv6-addr"}
{
    yang_name = "mcast-ole"; yang_parent_name = "evpn-ctx";
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
    return is_set(operation)
	|| is_set(mcast_label.operation)
	|| is_set(next_hop_ipv6_addr.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-ole";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'McastOle' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcast_label.is_set || is_set(mcast_label.operation)) leaf_name_data.push_back(mcast_label.get_name_leafdata());
    if (next_hop_ipv6_addr.is_set || is_set(next_hop_ipv6_addr.operation)) leaf_name_data.push_back(next_hop_ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mcast-label")
    {
        mcast_label = value;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    plaformt_data_valid{YType::boolean, "plaformt-data-valid"},
    platform_data_length{YType::uint32, "platform-data-length"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "l2fibmac-detail";
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::has_data() const
{
    return children_count.is_set
	|| next_hop_address.is_set
	|| next_hop_internal_label.is_set
	|| plaformt_data_valid.is_set
	|| platform_data_length.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(children_count.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_internal_label.operation)
	|| is_set(plaformt_data_valid.operation)
	|| is_set(platform_data_length.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.operation)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.operation)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (plaformt_data_valid.is_set || is_set(plaformt_data_valid.operation)) leaf_name_data.push_back(plaformt_data_valid.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.operation)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "children-count")
    {
        children_count = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
    }
    if(value_path == "plaformt-data-valid")
    {
        plaformt_data_valid = value;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::Base()
{
    yang_name = "base"; yang_parent_name = "next-hop";
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
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainNames()
{
    yang_name = "l2fib-bridge-domain-names"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::~L2FibBridgeDomainNames()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::has_data() const
{
    for (std::size_t index=0; index<l2fib_bridge_domain_name.size(); index++)
    {
        if(l2fib_bridge_domain_name[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::has_operation() const
{
    for (std::size_t index=0; index<l2fib_bridge_domain_name.size(); index++)
    {
        if(l2fib_bridge_domain_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-bridge-domain-names";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibBridgeDomainNames' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-bridge-domain-name")
    {
        for(auto const & c : l2fib_bridge_domain_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName>();
        c->parent = this;
        l2fib_bridge_domain_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_bridge_domain_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::L2FibBridgeDomainName()
    :
    admin_disabled{YType::boolean, "admin-disabled"},
    aging_time_out{YType::uint32, "aging-time-out"},
    bd_group_name{YType::str, "bd-group-name"},
    bridge_id{YType::uint32, "bridge-id"},
    bridge_name{YType::str, "bridge-name"},
    bridge_port_count{YType::uint32, "bridge-port-count"},
    flood_disabled{YType::boolean, "flood-disabled"},
    mac_learning_disabled{YType::boolean, "mac-learning-disabled"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_port_down_flush_disabled{YType::boolean, "mac-port-down-flush-disabled"},
    msti{YType::uint32, "msti"},
    mtu{YType::uint32, "mtu"},
    name{YType::str, "name"},
    number_of_hwmac{YType::uint32, "number-of-hwmac"},
    number_of_shg{YType::uint32, "number-of-shg"},
    number_of_swmac{YType::uint32, "number-of-swmac"}
{
    yang_name = "l2fib-bridge-domain-name"; yang_parent_name = "l2fib-bridge-domain-names";
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::~L2FibBridgeDomainName()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::has_data() const
{
    return admin_disabled.is_set
	|| aging_time_out.is_set
	|| bd_group_name.is_set
	|| bridge_id.is_set
	|| bridge_name.is_set
	|| bridge_port_count.is_set
	|| flood_disabled.is_set
	|| mac_learning_disabled.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_port_down_flush_disabled.is_set
	|| msti.is_set
	|| mtu.is_set
	|| name.is_set
	|| number_of_hwmac.is_set
	|| number_of_shg.is_set
	|| number_of_swmac.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_disabled.operation)
	|| is_set(aging_time_out.operation)
	|| is_set(bd_group_name.operation)
	|| is_set(bridge_id.operation)
	|| is_set(bridge_name.operation)
	|| is_set(bridge_port_count.operation)
	|| is_set(flood_disabled.operation)
	|| is_set(mac_learning_disabled.operation)
	|| is_set(mac_limit.operation)
	|| is_set(mac_limit_action.operation)
	|| is_set(mac_port_down_flush_disabled.operation)
	|| is_set(msti.operation)
	|| is_set(mtu.operation)
	|| is_set(name.operation)
	|| is_set(number_of_hwmac.operation)
	|| is_set(number_of_shg.operation)
	|| is_set(number_of_swmac.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-bridge-domain-name";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibBridgeDomainName' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_disabled.is_set || is_set(admin_disabled.operation)) leaf_name_data.push_back(admin_disabled.get_name_leafdata());
    if (aging_time_out.is_set || is_set(aging_time_out.operation)) leaf_name_data.push_back(aging_time_out.get_name_leafdata());
    if (bd_group_name.is_set || is_set(bd_group_name.operation)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.operation)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (bridge_name.is_set || is_set(bridge_name.operation)) leaf_name_data.push_back(bridge_name.get_name_leafdata());
    if (bridge_port_count.is_set || is_set(bridge_port_count.operation)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (flood_disabled.is_set || is_set(flood_disabled.operation)) leaf_name_data.push_back(flood_disabled.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.operation)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.operation)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.operation)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.operation)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (msti.is_set || is_set(msti.operation)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (number_of_hwmac.is_set || is_set(number_of_hwmac.operation)) leaf_name_data.push_back(number_of_hwmac.get_name_leafdata());
    if (number_of_shg.is_set || is_set(number_of_shg.operation)) leaf_name_data.push_back(number_of_shg.get_name_leafdata());
    if (number_of_swmac.is_set || is_set(number_of_swmac.operation)) leaf_name_data.push_back(number_of_swmac.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-disabled")
    {
        admin_disabled = value;
    }
    if(value_path == "aging-time-out")
    {
        aging_time_out = value;
    }
    if(value_path == "bd-group-name")
    {
        bd_group_name = value;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
    }
    if(value_path == "bridge-name")
    {
        bridge_name = value;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
    }
    if(value_path == "flood-disabled")
    {
        flood_disabled = value;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
    }
    if(value_path == "msti")
    {
        msti = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "number-of-hwmac")
    {
        number_of_hwmac = value;
    }
    if(value_path == "number-of-shg")
    {
        number_of_shg = value;
    }
    if(value_path == "number-of-swmac")
    {
        number_of_swmac = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePorts()
{
    yang_name = "l2fib-mroute-ports"; yang_parent_name = "node";
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
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute-ports";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutePorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMroutePorts' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::set_value(const std::string & value_path, std::string value)
{
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

    yang_name = "l2fib-mroute-port"; yang_parent_name = "l2fib-mroute-ports";
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
    return is_set(operation)
	|| is_set(ac_interface_handle.operation)
	|| is_set(bd_name.operation)
	|| is_set(bridge_id.operation)
	|| is_set(csfl.operation)
	|| is_set(group.operation)
	|| is_set(is_ole_master.operation)
	|| is_set(is_ole_offloaded.operation)
	|| is_set(is_topo_hub_and_spoke.operation)
	|| is_set(isid.operation)
	|| is_set(leaf_pointer.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(pw_id.operation)
	|| is_set(sat_id.operation)
	|| is_set(source.operation)
	|| is_set(xcid.operation)
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

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMroutePort' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_interface_handle.is_set || is_set(ac_interface_handle.operation)) leaf_name_data.push_back(ac_interface_handle.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.operation)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (csfl.is_set || is_set(csfl.operation)) leaf_name_data.push_back(csfl.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (is_ole_master.is_set || is_set(is_ole_master.operation)) leaf_name_data.push_back(is_ole_master.get_name_leafdata());
    if (is_ole_offloaded.is_set || is_set(is_ole_offloaded.operation)) leaf_name_data.push_back(is_ole_offloaded.get_name_leafdata());
    if (is_topo_hub_and_spoke.is_set || is_set(is_topo_hub_and_spoke.operation)) leaf_name_data.push_back(is_topo_hub_and_spoke.get_name_leafdata());
    if (isid.is_set || is_set(isid.operation)) leaf_name_data.push_back(isid.get_name_leafdata());
    if (leaf_pointer.is_set || is_set(leaf_pointer.operation)) leaf_name_data.push_back(leaf_pointer.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (sat_id.is_set || is_set(sat_id.operation)) leaf_name_data.push_back(sat_id.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.operation)) leaf_name_data.push_back(xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ac-interface-handle")
    {
        ac_interface_handle = value;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
    }
    if(value_path == "csfl")
    {
        csfl = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "is-ole-master")
    {
        is_ole_master = value;
    }
    if(value_path == "is-ole-offloaded")
    {
        is_ole_offloaded = value;
    }
    if(value_path == "is-topo-hub-and-spoke")
    {
        is_topo_hub_and_spoke = value;
    }
    if(value_path == "isid")
    {
        isid = value;
    }
    if(value_path == "leaf-pointer")
    {
        leaf_pointer = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "sat-id")
    {
        sat_id = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "xcid")
    {
        xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::BaseInformation()
{
    yang_name = "base-information"; yang_parent_name = "l2fib-mroute-port";
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
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-information";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BaseInformation' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStats()
    :
    forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat>())
{
    forward_stat->parent = this;

    yang_name = "forward-stats"; yang_parent_name = "l2fib-mroute-port";
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
    return is_set(operation)
	|| (forward_stat !=  nullptr && forward_stat->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stats";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardStats' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::ForwardStat()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    mulicast(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast>())
{
    mulicast->parent = this;

    yang_name = "forward-stat"; yang_parent_name = "forward-stats";
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
    return is_set(operation)
	|| is_set(data_type.operation)
	|| (mulicast !=  nullptr && mulicast->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stat";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
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

    yang_name = "mulicast"; yang_parent_name = "forward-stat";
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
    return is_set(operation)
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

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mulicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::MulticastForwardStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{
    yang_name = "multicast-forward-stat"; yang_parent_name = "mulicast";
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
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(packets.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-forward-stat";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastForwardStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::ReceivedStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{
    yang_name = "received-stat"; yang_parent_name = "mulicast";
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
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(packets.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-stat";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::Punt()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{
    yang_name = "punt"; yang_parent_name = "mulicast";
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
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(packets.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Punt' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::Drop()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{
    yang_name = "drop"; yang_parent_name = "mulicast";
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
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(packets.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Drop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::MulticastCoreForwardStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{
    yang_name = "multicast-core-forward-stat"; yang_parent_name = "mulicast";
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
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(packets.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-core-forward-stat";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastCoreForwardStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::CoreReceivedStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{
    yang_name = "core-received-stat"; yang_parent_name = "mulicast";
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
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(packets.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-received-stat";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CoreReceivedStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::SourcePrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint16, "prefix-length"},
    proto{YType::uint8, "proto"}
{
    yang_name = "source-prefix"; yang_parent_name = "l2fib-mroute-port";
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
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proto.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourcePrefix' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proto.is_set || is_set(proto.operation)) leaf_name_data.push_back(proto.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proto")
    {
        proto = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::DestinationPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint16, "prefix-length"},
    proto{YType::uint8, "proto"}
{
    yang_name = "destination-prefix"; yang_parent_name = "l2fib-mroute-port";
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
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proto.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationPrefix' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proto.is_set || is_set(proto.operation)) leaf_name_data.push_back(proto.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proto")
    {
        proto = value;
    }
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

    yang_name = "l2fib-summary"; yang_parent_name = "node";
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
    return is_set(operation)
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

const EntityPath L2VpnForwarding::Nodes::Node::L2FibSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibSummary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibSummary::set_value(const std::string & value_path, std::string value)
{
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
    yang_name = "xconnect-summary"; yang_parent_name = "l2fib-summary";
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
    return is_set(operation)
	|| is_set(ac_down_count_aib.operation)
	|| is_set(ac_down_count_l2vpn.operation)
	|| is_set(ac_down_count_l3fib.operation)
	|| is_set(ac_down_count_vpdn.operation)
	|| is_set(ac_to_ac_count.operation)
	|| is_set(ac_to_bp_count.operation)
	|| is_set(ac_to_pw_count_l2tp.operation)
	|| is_set(ac_to_pw_count_l2tp_ip_v6.operation)
	|| is_set(ac_to_pw_count_l2tpv2.operation)
	|| is_set(ac_to_pw_count_mpls.operation)
	|| is_set(ac_to_unknown_count.operation)
	|| is_set(bp_count.operation)
	|| is_set(bundle_ac_max_exceeded_drop_cnt.operation)
	|| is_set(evpn_invalid_xid_drop_count.operation)
	|| is_set(evpn_to_bp_count.operation)
	|| is_set(evpn_to_unknown_count.operation)
	|| is_set(mon_sess_to_pw_count.operation)
	|| is_set(mon_sess_to_unknown_count.operation)
	|| is_set(p2p_count.operation)
	|| is_set(pbb_invalid_xid_drop_count.operation)
	|| is_set(pbb_to_bp_count.operation)
	|| is_set(pbb_to_unknown_count.operation)
	|| is_set(pw_to_bp_count.operation)
	|| is_set(pw_to_unknown_count.operation)
	|| is_set(pwhe_l2_if_count.operation)
	|| is_set(virtual_ac_invalid_xid_drop_count.operation)
	|| is_set(vni_invalid_xid_drop_count.operation)
	|| is_set(vni_to_bp_count.operation)
	|| is_set(vni_to_unknown_count.operation)
	|| is_set(vpls_pw_invalid_xid_drop_count.operation)
	|| is_set(vpls_pw_max_exceeded_drop_cnt.operation)
	|| is_set(vpws_pw_invalid_xid_drop_count.operation)
	|| is_set(xconnect_count.operation)
	|| is_set(xconnect_down_count.operation)
	|| is_set(xconnect_up_count.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-summary";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectSummary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_down_count_aib.is_set || is_set(ac_down_count_aib.operation)) leaf_name_data.push_back(ac_down_count_aib.get_name_leafdata());
    if (ac_down_count_l2vpn.is_set || is_set(ac_down_count_l2vpn.operation)) leaf_name_data.push_back(ac_down_count_l2vpn.get_name_leafdata());
    if (ac_down_count_l3fib.is_set || is_set(ac_down_count_l3fib.operation)) leaf_name_data.push_back(ac_down_count_l3fib.get_name_leafdata());
    if (ac_down_count_vpdn.is_set || is_set(ac_down_count_vpdn.operation)) leaf_name_data.push_back(ac_down_count_vpdn.get_name_leafdata());
    if (ac_to_ac_count.is_set || is_set(ac_to_ac_count.operation)) leaf_name_data.push_back(ac_to_ac_count.get_name_leafdata());
    if (ac_to_bp_count.is_set || is_set(ac_to_bp_count.operation)) leaf_name_data.push_back(ac_to_bp_count.get_name_leafdata());
    if (ac_to_pw_count_l2tp.is_set || is_set(ac_to_pw_count_l2tp.operation)) leaf_name_data.push_back(ac_to_pw_count_l2tp.get_name_leafdata());
    if (ac_to_pw_count_l2tp_ip_v6.is_set || is_set(ac_to_pw_count_l2tp_ip_v6.operation)) leaf_name_data.push_back(ac_to_pw_count_l2tp_ip_v6.get_name_leafdata());
    if (ac_to_pw_count_l2tpv2.is_set || is_set(ac_to_pw_count_l2tpv2.operation)) leaf_name_data.push_back(ac_to_pw_count_l2tpv2.get_name_leafdata());
    if (ac_to_pw_count_mpls.is_set || is_set(ac_to_pw_count_mpls.operation)) leaf_name_data.push_back(ac_to_pw_count_mpls.get_name_leafdata());
    if (ac_to_unknown_count.is_set || is_set(ac_to_unknown_count.operation)) leaf_name_data.push_back(ac_to_unknown_count.get_name_leafdata());
    if (bp_count.is_set || is_set(bp_count.operation)) leaf_name_data.push_back(bp_count.get_name_leafdata());
    if (bundle_ac_max_exceeded_drop_cnt.is_set || is_set(bundle_ac_max_exceeded_drop_cnt.operation)) leaf_name_data.push_back(bundle_ac_max_exceeded_drop_cnt.get_name_leafdata());
    if (evpn_invalid_xid_drop_count.is_set || is_set(evpn_invalid_xid_drop_count.operation)) leaf_name_data.push_back(evpn_invalid_xid_drop_count.get_name_leafdata());
    if (evpn_to_bp_count.is_set || is_set(evpn_to_bp_count.operation)) leaf_name_data.push_back(evpn_to_bp_count.get_name_leafdata());
    if (evpn_to_unknown_count.is_set || is_set(evpn_to_unknown_count.operation)) leaf_name_data.push_back(evpn_to_unknown_count.get_name_leafdata());
    if (mon_sess_to_pw_count.is_set || is_set(mon_sess_to_pw_count.operation)) leaf_name_data.push_back(mon_sess_to_pw_count.get_name_leafdata());
    if (mon_sess_to_unknown_count.is_set || is_set(mon_sess_to_unknown_count.operation)) leaf_name_data.push_back(mon_sess_to_unknown_count.get_name_leafdata());
    if (p2p_count.is_set || is_set(p2p_count.operation)) leaf_name_data.push_back(p2p_count.get_name_leafdata());
    if (pbb_invalid_xid_drop_count.is_set || is_set(pbb_invalid_xid_drop_count.operation)) leaf_name_data.push_back(pbb_invalid_xid_drop_count.get_name_leafdata());
    if (pbb_to_bp_count.is_set || is_set(pbb_to_bp_count.operation)) leaf_name_data.push_back(pbb_to_bp_count.get_name_leafdata());
    if (pbb_to_unknown_count.is_set || is_set(pbb_to_unknown_count.operation)) leaf_name_data.push_back(pbb_to_unknown_count.get_name_leafdata());
    if (pw_to_bp_count.is_set || is_set(pw_to_bp_count.operation)) leaf_name_data.push_back(pw_to_bp_count.get_name_leafdata());
    if (pw_to_unknown_count.is_set || is_set(pw_to_unknown_count.operation)) leaf_name_data.push_back(pw_to_unknown_count.get_name_leafdata());
    if (pwhe_l2_if_count.is_set || is_set(pwhe_l2_if_count.operation)) leaf_name_data.push_back(pwhe_l2_if_count.get_name_leafdata());
    if (virtual_ac_invalid_xid_drop_count.is_set || is_set(virtual_ac_invalid_xid_drop_count.operation)) leaf_name_data.push_back(virtual_ac_invalid_xid_drop_count.get_name_leafdata());
    if (vni_invalid_xid_drop_count.is_set || is_set(vni_invalid_xid_drop_count.operation)) leaf_name_data.push_back(vni_invalid_xid_drop_count.get_name_leafdata());
    if (vni_to_bp_count.is_set || is_set(vni_to_bp_count.operation)) leaf_name_data.push_back(vni_to_bp_count.get_name_leafdata());
    if (vni_to_unknown_count.is_set || is_set(vni_to_unknown_count.operation)) leaf_name_data.push_back(vni_to_unknown_count.get_name_leafdata());
    if (vpls_pw_invalid_xid_drop_count.is_set || is_set(vpls_pw_invalid_xid_drop_count.operation)) leaf_name_data.push_back(vpls_pw_invalid_xid_drop_count.get_name_leafdata());
    if (vpls_pw_max_exceeded_drop_cnt.is_set || is_set(vpls_pw_max_exceeded_drop_cnt.operation)) leaf_name_data.push_back(vpls_pw_max_exceeded_drop_cnt.get_name_leafdata());
    if (vpws_pw_invalid_xid_drop_count.is_set || is_set(vpws_pw_invalid_xid_drop_count.operation)) leaf_name_data.push_back(vpws_pw_invalid_xid_drop_count.get_name_leafdata());
    if (xconnect_count.is_set || is_set(xconnect_count.operation)) leaf_name_data.push_back(xconnect_count.get_name_leafdata());
    if (xconnect_down_count.is_set || is_set(xconnect_down_count.operation)) leaf_name_data.push_back(xconnect_down_count.get_name_leafdata());
    if (xconnect_up_count.is_set || is_set(xconnect_up_count.operation)) leaf_name_data.push_back(xconnect_up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ac-down-count-aib")
    {
        ac_down_count_aib = value;
    }
    if(value_path == "ac-down-count-l2vpn")
    {
        ac_down_count_l2vpn = value;
    }
    if(value_path == "ac-down-count-l3fib")
    {
        ac_down_count_l3fib = value;
    }
    if(value_path == "ac-down-count-vpdn")
    {
        ac_down_count_vpdn = value;
    }
    if(value_path == "ac-to-ac-count")
    {
        ac_to_ac_count = value;
    }
    if(value_path == "ac-to-bp-count")
    {
        ac_to_bp_count = value;
    }
    if(value_path == "ac-to-pw-count-l2tp")
    {
        ac_to_pw_count_l2tp = value;
    }
    if(value_path == "ac-to-pw-count-l2tp-ip-v6")
    {
        ac_to_pw_count_l2tp_ip_v6 = value;
    }
    if(value_path == "ac-to-pw-count-l2tpv2")
    {
        ac_to_pw_count_l2tpv2 = value;
    }
    if(value_path == "ac-to-pw-count-mpls")
    {
        ac_to_pw_count_mpls = value;
    }
    if(value_path == "ac-to-unknown-count")
    {
        ac_to_unknown_count = value;
    }
    if(value_path == "bp-count")
    {
        bp_count = value;
    }
    if(value_path == "bundle-ac-max-exceeded-drop-cnt")
    {
        bundle_ac_max_exceeded_drop_cnt = value;
    }
    if(value_path == "evpn-invalid-xid-drop-count")
    {
        evpn_invalid_xid_drop_count = value;
    }
    if(value_path == "evpn-to-bp-count")
    {
        evpn_to_bp_count = value;
    }
    if(value_path == "evpn-to-unknown-count")
    {
        evpn_to_unknown_count = value;
    }
    if(value_path == "mon-sess-to-pw-count")
    {
        mon_sess_to_pw_count = value;
    }
    if(value_path == "mon-sess-to-unknown-count")
    {
        mon_sess_to_unknown_count = value;
    }
    if(value_path == "p2p-count")
    {
        p2p_count = value;
    }
    if(value_path == "pbb-invalid-xid-drop-count")
    {
        pbb_invalid_xid_drop_count = value;
    }
    if(value_path == "pbb-to-bp-count")
    {
        pbb_to_bp_count = value;
    }
    if(value_path == "pbb-to-unknown-count")
    {
        pbb_to_unknown_count = value;
    }
    if(value_path == "pw-to-bp-count")
    {
        pw_to_bp_count = value;
    }
    if(value_path == "pw-to-unknown-count")
    {
        pw_to_unknown_count = value;
    }
    if(value_path == "pwhe-l2-if-count")
    {
        pwhe_l2_if_count = value;
    }
    if(value_path == "virtual-ac-invalid-xid-drop-count")
    {
        virtual_ac_invalid_xid_drop_count = value;
    }
    if(value_path == "vni-invalid-xid-drop-count")
    {
        vni_invalid_xid_drop_count = value;
    }
    if(value_path == "vni-to-bp-count")
    {
        vni_to_bp_count = value;
    }
    if(value_path == "vni-to-unknown-count")
    {
        vni_to_unknown_count = value;
    }
    if(value_path == "vpls-pw-invalid-xid-drop-count")
    {
        vpls_pw_invalid_xid_drop_count = value;
    }
    if(value_path == "vpls-pw-max-exceeded-drop-cnt")
    {
        vpls_pw_max_exceeded_drop_cnt = value;
    }
    if(value_path == "vpws-pw-invalid-xid-drop-count")
    {
        vpws_pw_invalid_xid_drop_count = value;
    }
    if(value_path == "xconnect-count")
    {
        xconnect_count = value;
    }
    if(value_path == "xconnect-down-count")
    {
        xconnect_down_count = value;
    }
    if(value_path == "xconnect-up-count")
    {
        xconnect_up_count = value;
    }
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

    yang_name = "next-hop-summary"; yang_parent_name = "l2fib-summary";
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
    return is_set(operation)
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

const EntityPath L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHopSummary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::MplsIl()
    :
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    next_hop_count{YType::uint32, "next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"}
{
    yang_name = "mpls-il"; yang_parent_name = "next-hop-summary";
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
    return is_set(operation)
	|| is_set(bound_next_hop_count.operation)
	|| is_set(next_hop_count.operation)
	|| is_set(next_hop_pending_registration_count.operation)
	|| is_set(unbound_next_hop_count.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-il";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsIl' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.operation)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (next_hop_count.is_set || is_set(next_hop_count.operation)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.operation)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.operation)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
    }
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::Mpls()
    :
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    next_hop_count{YType::uint32, "next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"}
{
    yang_name = "mpls"; yang_parent_name = "next-hop-summary";
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
    return is_set(operation)
	|| is_set(bound_next_hop_count.operation)
	|| is_set(next_hop_count.operation)
	|| is_set(next_hop_pending_registration_count.operation)
	|| is_set(unbound_next_hop_count.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.operation)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (next_hop_count.is_set || is_set(next_hop_count.operation)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.operation)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.operation)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
    }
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::L2Tp()
    :
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    next_hop_count{YType::uint32, "next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"}
{
    yang_name = "l2tp"; yang_parent_name = "next-hop-summary";
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
    return is_set(operation)
	|| is_set(bound_next_hop_count.operation)
	|| is_set(next_hop_count.operation)
	|| is_set(next_hop_pending_registration_count.operation)
	|| is_set(unbound_next_hop_count.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.operation)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (next_hop_count.is_set || is_set(next_hop_count.operation)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.operation)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.operation)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
    }
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::Lsm()
    :
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    next_hop_count{YType::uint32, "next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"}
{
    yang_name = "lsm"; yang_parent_name = "next-hop-summary";
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
    return is_set(operation)
	|| is_set(bound_next_hop_count.operation)
	|| is_set(next_hop_count.operation)
	|| is_set(next_hop_pending_registration_count.operation)
	|| is_set(unbound_next_hop_count.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsm";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsm' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.operation)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (next_hop_count.is_set || is_set(next_hop_count.operation)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.operation)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.operation)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
    }
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::P2MpTunnels()
    :
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    next_hop_count{YType::uint32, "next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"}
{
    yang_name = "p2mp-tunnels"; yang_parent_name = "next-hop-summary";
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
    return is_set(operation)
	|| is_set(bound_next_hop_count.operation)
	|| is_set(next_hop_count.operation)
	|| is_set(next_hop_pending_registration_count.operation)
	|| is_set(unbound_next_hop_count.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-tunnels";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2MpTunnels' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.operation)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (next_hop_count.is_set || is_set(next_hop_count.operation)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.operation)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.operation)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
    }
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::L2TpDispositionSummary()
    :
    bound_l2tp_disposition_session_count{YType::uint32, "bound-l2tp-disposition-session-count"},
    l2tp_disposition_session_count{YType::uint32, "l2tp-disposition-session-count"},
    unbound_l2tp_disposition_session_count{YType::uint32, "unbound-l2tp-disposition-session-count"}
{
    yang_name = "l2tp-disposition-summary"; yang_parent_name = "l2fib-summary";
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
    return is_set(operation)
	|| is_set(bound_l2tp_disposition_session_count.operation)
	|| is_set(l2tp_disposition_session_count.operation)
	|| is_set(unbound_l2tp_disposition_session_count.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-disposition-summary";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpDispositionSummary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound_l2tp_disposition_session_count.is_set || is_set(bound_l2tp_disposition_session_count.operation)) leaf_name_data.push_back(bound_l2tp_disposition_session_count.get_name_leafdata());
    if (l2tp_disposition_session_count.is_set || is_set(l2tp_disposition_session_count.operation)) leaf_name_data.push_back(l2tp_disposition_session_count.get_name_leafdata());
    if (unbound_l2tp_disposition_session_count.is_set || is_set(unbound_l2tp_disposition_session_count.operation)) leaf_name_data.push_back(unbound_l2tp_disposition_session_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bound-l2tp-disposition-session-count")
    {
        bound_l2tp_disposition_session_count = value;
    }
    if(value_path == "l2tp-disposition-session-count")
    {
        l2tp_disposition_session_count = value;
    }
    if(value_path == "unbound-l2tp-disposition-session-count")
    {
        unbound_l2tp_disposition_session_count = value;
    }
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
    yang_name = "bridge-domain-summary"; yang_parent_name = "l2fib-summary";
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
    return is_set(operation)
	|| is_set(bridge_domain_count.operation)
	|| is_set(bridge_domain_drop_count.operation)
	|| is_set(bridge_domain_with_bvi_count.operation)
	|| is_set(bridge_domain_with_evpn_enabled.operation)
	|| is_set(bridge_domain_with_p2mp_enabled.operation)
	|| is_set(bridge_domain_with_pbbevpn_enabled.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-summary";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgeDomainSummary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_count.is_set || is_set(bridge_domain_count.operation)) leaf_name_data.push_back(bridge_domain_count.get_name_leafdata());
    if (bridge_domain_drop_count.is_set || is_set(bridge_domain_drop_count.operation)) leaf_name_data.push_back(bridge_domain_drop_count.get_name_leafdata());
    if (bridge_domain_with_bvi_count.is_set || is_set(bridge_domain_with_bvi_count.operation)) leaf_name_data.push_back(bridge_domain_with_bvi_count.get_name_leafdata());
    if (bridge_domain_with_evpn_enabled.is_set || is_set(bridge_domain_with_evpn_enabled.operation)) leaf_name_data.push_back(bridge_domain_with_evpn_enabled.get_name_leafdata());
    if (bridge_domain_with_p2mp_enabled.is_set || is_set(bridge_domain_with_p2mp_enabled.operation)) leaf_name_data.push_back(bridge_domain_with_p2mp_enabled.get_name_leafdata());
    if (bridge_domain_with_pbbevpn_enabled.is_set || is_set(bridge_domain_with_pbbevpn_enabled.operation)) leaf_name_data.push_back(bridge_domain_with_pbbevpn_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-domain-count")
    {
        bridge_domain_count = value;
    }
    if(value_path == "bridge-domain-drop-count")
    {
        bridge_domain_drop_count = value;
    }
    if(value_path == "bridge-domain-with-bvi-count")
    {
        bridge_domain_with_bvi_count = value;
    }
    if(value_path == "bridge-domain-with-evpn-enabled")
    {
        bridge_domain_with_evpn_enabled = value;
    }
    if(value_path == "bridge-domain-with-p2mp-enabled")
    {
        bridge_domain_with_p2mp_enabled = value;
    }
    if(value_path == "bridge-domain-with-pbbevpn-enabled")
    {
        bridge_domain_with_pbbevpn_enabled = value;
    }
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
    yang_name = "mac-summary"; yang_parent_name = "l2fib-summary";
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
    return is_set(operation)
	|| is_set(bmac_count.operation)
	|| is_set(local_mac_count.operation)
	|| is_set(mac_count.operation)
	|| is_set(remote_mac_count.operation)
	|| is_set(routed_mac_count.operation)
	|| is_set(sbmac_count.operation)
	|| is_set(static_mac_count.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-summary";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacSummary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bmac_count.is_set || is_set(bmac_count.operation)) leaf_name_data.push_back(bmac_count.get_name_leafdata());
    if (local_mac_count.is_set || is_set(local_mac_count.operation)) leaf_name_data.push_back(local_mac_count.get_name_leafdata());
    if (mac_count.is_set || is_set(mac_count.operation)) leaf_name_data.push_back(mac_count.get_name_leafdata());
    if (remote_mac_count.is_set || is_set(remote_mac_count.operation)) leaf_name_data.push_back(remote_mac_count.get_name_leafdata());
    if (routed_mac_count.is_set || is_set(routed_mac_count.operation)) leaf_name_data.push_back(routed_mac_count.get_name_leafdata());
    if (sbmac_count.is_set || is_set(sbmac_count.operation)) leaf_name_data.push_back(sbmac_count.get_name_leafdata());
    if (static_mac_count.is_set || is_set(static_mac_count.operation)) leaf_name_data.push_back(static_mac_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bmac-count")
    {
        bmac_count = value;
    }
    if(value_path == "local-mac-count")
    {
        local_mac_count = value;
    }
    if(value_path == "mac-count")
    {
        mac_count = value;
    }
    if(value_path == "remote-mac-count")
    {
        remote_mac_count = value;
    }
    if(value_path == "routed-mac-count")
    {
        routed_mac_count = value;
    }
    if(value_path == "sbmac-count")
    {
        sbmac_count = value;
    }
    if(value_path == "static-mac-count")
    {
        static_mac_count = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::QueueSummary()
    :
    del_cnt{YType::uint32, "del-cnt"},
    inline_cnt{YType::uint32, "inline-cnt"},
    retry_cnt{YType::uint32, "retry-cnt"},
    update_cnt{YType::uint32, "update-cnt"}
{
    yang_name = "queue-summary"; yang_parent_name = "l2fib-summary";
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
    return is_set(operation)
	|| is_set(del_cnt.operation)
	|| is_set(inline_cnt.operation)
	|| is_set(retry_cnt.operation)
	|| is_set(update_cnt.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-summary";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueSummary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (del_cnt.is_set || is_set(del_cnt.operation)) leaf_name_data.push_back(del_cnt.get_name_leafdata());
    if (inline_cnt.is_set || is_set(inline_cnt.operation)) leaf_name_data.push_back(inline_cnt.get_name_leafdata());
    if (retry_cnt.is_set || is_set(retry_cnt.operation)) leaf_name_data.push_back(retry_cnt.get_name_leafdata());
    if (update_cnt.is_set || is_set(update_cnt.operation)) leaf_name_data.push_back(update_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "del-cnt")
    {
        del_cnt = value;
    }
    if(value_path == "inline-cnt")
    {
        inline_cnt = value;
    }
    if(value_path == "retry-cnt")
    {
        retry_cnt = value;
    }
    if(value_path == "update-cnt")
    {
        update_cnt = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::EvpnSummary()
    :
    default_count{YType::uint32, "default-count"},
    isid_count{YType::uint32, "isid-count"},
    total_count{YType::uint32, "total-count"}
{
    yang_name = "evpn-summary"; yang_parent_name = "l2fib-summary";
}

L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::~EvpnSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::has_data() const
{
    return default_count.is_set
	|| isid_count.is_set
	|| total_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(default_count.operation)
	|| is_set(isid_count.operation)
	|| is_set(total_count.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-summary";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnSummary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_count.is_set || is_set(default_count.operation)) leaf_name_data.push_back(default_count.get_name_leafdata());
    if (isid_count.is_set || is_set(isid_count.operation)) leaf_name_data.push_back(isid_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-count")
    {
        default_count = value;
    }
    if(value_path == "isid-count")
    {
        isid_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
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

    yang_name = "global-cfg"; yang_parent_name = "l2fib-summary";
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
    return is_set(operation)
	|| is_set(evpn_imc_label_block_base.operation)
	|| is_set(evpn_imc_label_block_size.operation)
	|| is_set(load_balance_type.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-cfg";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalCfg' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpn_imc_label_block_base.is_set || is_set(evpn_imc_label_block_base.operation)) leaf_name_data.push_back(evpn_imc_label_block_base.get_name_leafdata());
    if (evpn_imc_label_block_size.is_set || is_set(evpn_imc_label_block_size.operation)) leaf_name_data.push_back(evpn_imc_label_block_size.get_name_leafdata());
    if (load_balance_type.is_set || is_set(load_balance_type.operation)) leaf_name_data.push_back(load_balance_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "evpn-imc-label-block-base")
    {
        evpn_imc_label_block_base = value;
    }
    if(value_path == "evpn-imc-label-block-size")
    {
        evpn_imc_label_block_size = value;
    }
    if(value_path == "load-balance-type")
    {
        load_balance_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::Base()
{
    yang_name = "base"; yang_parent_name = "global-cfg";
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
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::PtreeSummary()
    :
    lmrib_mldp_ptree_count{YType::uint32, "lmrib-mldp-ptree-count"},
    lmrib_rsvp_te_ptree_count{YType::uint32, "lmrib-rsvp-te-ptree-count"},
    mldp_enabled_ptree_count{YType::uint32, "mldp-enabled-ptree-count"},
    rsvp_te_enabled_ptree_count{YType::uint32, "rsvp-te-enabled-ptree-count"},
    total_ptree_count{YType::uint32, "total-ptree-count"}
{
    yang_name = "ptree-summary"; yang_parent_name = "l2fib-summary";
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
    return is_set(operation)
	|| is_set(lmrib_mldp_ptree_count.operation)
	|| is_set(lmrib_rsvp_te_ptree_count.operation)
	|| is_set(mldp_enabled_ptree_count.operation)
	|| is_set(rsvp_te_enabled_ptree_count.operation)
	|| is_set(total_ptree_count.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptree-summary";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PtreeSummary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lmrib_mldp_ptree_count.is_set || is_set(lmrib_mldp_ptree_count.operation)) leaf_name_data.push_back(lmrib_mldp_ptree_count.get_name_leafdata());
    if (lmrib_rsvp_te_ptree_count.is_set || is_set(lmrib_rsvp_te_ptree_count.operation)) leaf_name_data.push_back(lmrib_rsvp_te_ptree_count.get_name_leafdata());
    if (mldp_enabled_ptree_count.is_set || is_set(mldp_enabled_ptree_count.operation)) leaf_name_data.push_back(mldp_enabled_ptree_count.get_name_leafdata());
    if (rsvp_te_enabled_ptree_count.is_set || is_set(rsvp_te_enabled_ptree_count.operation)) leaf_name_data.push_back(rsvp_te_enabled_ptree_count.get_name_leafdata());
    if (total_ptree_count.is_set || is_set(total_ptree_count.operation)) leaf_name_data.push_back(total_ptree_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lmrib-mldp-ptree-count")
    {
        lmrib_mldp_ptree_count = value;
    }
    if(value_path == "lmrib-rsvp-te-ptree-count")
    {
        lmrib_rsvp_te_ptree_count = value;
    }
    if(value_path == "mldp-enabled-ptree-count")
    {
        mldp_enabled_ptree_count = value;
    }
    if(value_path == "rsvp-te-enabled-ptree-count")
    {
        rsvp_te_enabled_ptree_count = value;
    }
    if(value_path == "total-ptree-count")
    {
        total_ptree_count = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::PwGroupSummary()
    :
    plat_grouping_supported{YType::boolean, "plat-grouping-supported"},
    pw_groups_down{YType::uint32, "pw-groups-down"},
    total_pw_groups{YType::uint32, "total-pw-groups"}
{
    yang_name = "pw-group-summary"; yang_parent_name = "l2fib-summary";
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
    return is_set(operation)
	|| is_set(plat_grouping_supported.operation)
	|| is_set(pw_groups_down.operation)
	|| is_set(total_pw_groups.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-group-summary";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PwGroupSummary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plat_grouping_supported.is_set || is_set(plat_grouping_supported.operation)) leaf_name_data.push_back(plat_grouping_supported.get_name_leafdata());
    if (pw_groups_down.is_set || is_set(pw_groups_down.operation)) leaf_name_data.push_back(pw_groups_down.get_name_leafdata());
    if (total_pw_groups.is_set || is_set(total_pw_groups.operation)) leaf_name_data.push_back(total_pw_groups.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "plat-grouping-supported")
    {
        plat_grouping_supported = value;
    }
    if(value_path == "pw-groups-down")
    {
        pw_groups_down = value;
    }
    if(value_path == "total-pw-groups")
    {
        total_pw_groups = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::PwheMpSummary()
    :
    total_count{YType::uint32, "total-count"}
{
    yang_name = "pwhe-mp-summary"; yang_parent_name = "l2fib-summary";
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
    return is_set(operation)
	|| is_set(total_count.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwhe-mp-summary";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PwheMpSummary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-count")
    {
        total_count = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeers()
{
    yang_name = "l2fib-nve-peers"; yang_parent_name = "node";
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
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibNvePeers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-nve-peers";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibNvePeers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibNvePeers' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibNvePeers::set_value(const std::string & value_path, std::string value)
{
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
    yang_name = "l2fib-nve-peer"; yang_parent_name = "l2fib-nve-peers";
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
    return is_set(operation)
	|| is_set(nve_if.operation)
	|| is_set(vn_iid.operation)
	|| is_set(vniid.operation)
	|| is_set(vte_pip.operation)
	|| is_set(vtep_address.operation)
	|| is_set(xc_uint_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-nve-peer";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibNvePeer' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nve_if.is_set || is_set(nve_if.operation)) leaf_name_data.push_back(nve_if.get_name_leafdata());
    if (vn_iid.is_set || is_set(vn_iid.operation)) leaf_name_data.push_back(vn_iid.get_name_leafdata());
    if (vniid.is_set || is_set(vniid.operation)) leaf_name_data.push_back(vniid.get_name_leafdata());
    if (vte_pip.is_set || is_set(vte_pip.operation)) leaf_name_data.push_back(vte_pip.get_name_leafdata());
    if (vtep_address.is_set || is_set(vtep_address.operation)) leaf_name_data.push_back(vtep_address.get_name_leafdata());
    if (xc_uint_id.is_set || is_set(xc_uint_id.operation)) leaf_name_data.push_back(xc_uint_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nve-if")
    {
        nve_if = value;
    }
    if(value_path == "vn-iid")
    {
        vn_iid = value;
    }
    if(value_path == "vniid")
    {
        vniid = value;
    }
    if(value_path == "vte-pip")
    {
        vte_pip = value;
    }
    if(value_path == "vtep-address")
    {
        vtep_address = value;
    }
    if(value_path == "xc-uint-id")
    {
        xc_uint_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrps()
{
    yang_name = "l2fib-mmrps"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::~L2FibMmrps()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::has_data() const
{
    for (std::size_t index=0; index<l2fib_mmrp.size(); index++)
    {
        if(l2fib_mmrp[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mmrp.size(); index++)
    {
        if(l2fib_mmrp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mmrps";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMmrps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMmrps' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mmrp")
    {
        for(auto const & c : l2fib_mmrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp>();
        c->parent = this;
        l2fib_mmrp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_mmrp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::L2FibMmrp()
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
    destination_prefix(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix>())
	,forward_stats(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats>())
	,irb_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo>())
	,multicast_base_information(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation>())
	,source_prefix(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix>())
{
    destination_prefix->parent = this;

    forward_stats->parent = this;

    irb_info->parent = this;

    multicast_base_information->parent = this;

    source_prefix->parent = this;

    yang_name = "l2fib-mmrp"; yang_parent_name = "l2fib-mmrps";
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::~L2FibMmrp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::has_data() const
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

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_group_name.operation)
	|| is_set(bd_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(bridge_id.operation)
	|| is_set(group.operation)
	|| is_set(hardware_information.operation)
	|| is_set(platform_data.operation)
	|| is_set(platform_data_length.operation)
	|| is_set(source.operation)
	|| is_set(xid_count.operation)
	|| (destination_prefix !=  nullptr && destination_prefix->has_operation())
	|| (forward_stats !=  nullptr && forward_stats->has_operation())
	|| (irb_info !=  nullptr && irb_info->has_operation())
	|| (multicast_base_information !=  nullptr && multicast_base_information->has_operation())
	|| (source_prefix !=  nullptr && source_prefix->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mmrp";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMmrp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_group_name.is_set || is_set(bd_group_name.operation)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.operation)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.operation)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (platform_data.is_set || is_set(platform_data.operation)) leaf_name_data.push_back(platform_data.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.operation)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (xid_count.is_set || is_set(xid_count.operation)) leaf_name_data.push_back(xid_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-prefix")
    {
        if(destination_prefix == nullptr)
        {
            destination_prefix = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix>();
        }
        return destination_prefix;
    }

    if(child_yang_name == "forward-stats")
    {
        if(forward_stats == nullptr)
        {
            forward_stats = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats>();
        }
        return forward_stats;
    }

    if(child_yang_name == "irb-info")
    {
        if(irb_info == nullptr)
        {
            irb_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo>();
        }
        return irb_info;
    }

    if(child_yang_name == "multicast-base-information")
    {
        if(multicast_base_information == nullptr)
        {
            multicast_base_information = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation>();
        }
        return multicast_base_information;
    }

    if(child_yang_name == "source-prefix")
    {
        if(source_prefix == nullptr)
        {
            source_prefix = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix>();
        }
        return source_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::get_children() const
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

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name = value;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
    }
    if(value_path == "platform-data")
    {
        platform_data = value;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "xid-count")
    {
        xid_count = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::MulticastBaseInformation()
{
    yang_name = "multicast-base-information"; yang_parent_name = "l2fib-mmrp";
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::~MulticastBaseInformation()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-base-information";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastBaseInformation' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::SourcePrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint16, "prefix-length"},
    proto{YType::uint8, "proto"}
{
    yang_name = "source-prefix"; yang_parent_name = "l2fib-mmrp";
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::~SourcePrefix()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| proto.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proto.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourcePrefix' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proto.is_set || is_set(proto.operation)) leaf_name_data.push_back(proto.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proto")
    {
        proto = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::DestinationPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint16, "prefix-length"},
    proto{YType::uint8, "proto"}
{
    yang_name = "destination-prefix"; yang_parent_name = "l2fib-mmrp";
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::~DestinationPrefix()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| proto.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proto.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationPrefix' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proto.is_set || is_set(proto.operation)) leaf_name_data.push_back(proto.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proto")
    {
        proto = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStats()
    :
    forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat>())
{
    forward_stat->parent = this;

    yang_name = "forward-stats"; yang_parent_name = "l2fib-mmrp";
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::~ForwardStats()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::has_data() const
{
    return (forward_stat !=  nullptr && forward_stat->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::has_operation() const
{
    return is_set(operation)
	|| (forward_stat !=  nullptr && forward_stat->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stats";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardStats' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-stat")
    {
        if(forward_stat == nullptr)
        {
            forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat>();
        }
        return forward_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forward_stat != nullptr)
    {
        children["forward-stat"] = forward_stat;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::ForwardStat()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    mulicast(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast>())
{
    mulicast->parent = this;

    yang_name = "forward-stat"; yang_parent_name = "forward-stats";
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::~ForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::has_data() const
{
    return data_type.is_set
	|| (mulicast !=  nullptr && mulicast->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| (mulicast !=  nullptr && mulicast->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stat";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mulicast")
    {
        if(mulicast == nullptr)
        {
            mulicast = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast>();
        }
        return mulicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mulicast != nullptr)
    {
        children["mulicast"] = mulicast;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Mulicast()
    :
    core_received_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>())
	,drop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop>())
	,multicast_core_forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>())
	,multicast_forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>())
	,punt(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt>())
	,received_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat>())
{
    core_received_stat->parent = this;

    drop->parent = this;

    multicast_core_forward_stat->parent = this;

    multicast_forward_stat->parent = this;

    punt->parent = this;

    received_stat->parent = this;

    yang_name = "mulicast"; yang_parent_name = "forward-stat";
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::~Mulicast()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::has_data() const
{
    return (core_received_stat !=  nullptr && core_received_stat->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_data())
	|| (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_data())
	|| (punt !=  nullptr && punt->has_data())
	|| (received_stat !=  nullptr && received_stat->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::has_operation() const
{
    return is_set(operation)
	|| (core_received_stat !=  nullptr && core_received_stat->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_operation())
	|| (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_operation())
	|| (punt !=  nullptr && punt->has_operation())
	|| (received_stat !=  nullptr && received_stat->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mulicast";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mulicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-received-stat")
    {
        if(core_received_stat == nullptr)
        {
            core_received_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>();
        }
        return core_received_stat;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "multicast-core-forward-stat")
    {
        if(multicast_core_forward_stat == nullptr)
        {
            multicast_core_forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>();
        }
        return multicast_core_forward_stat;
    }

    if(child_yang_name == "multicast-forward-stat")
    {
        if(multicast_forward_stat == nullptr)
        {
            multicast_forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>();
        }
        return multicast_forward_stat;
    }

    if(child_yang_name == "punt")
    {
        if(punt == nullptr)
        {
            punt = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt>();
        }
        return punt;
    }

    if(child_yang_name == "received-stat")
    {
        if(received_stat == nullptr)
        {
            received_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat>();
        }
        return received_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::get_children() const
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

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::MulticastForwardStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{
    yang_name = "multicast-forward-stat"; yang_parent_name = "mulicast";
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::~MulticastForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(packets.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-forward-stat";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastForwardStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::ReceivedStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{
    yang_name = "received-stat"; yang_parent_name = "mulicast";
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::~ReceivedStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(packets.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-stat";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::Punt()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{
    yang_name = "punt"; yang_parent_name = "mulicast";
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::~Punt()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(packets.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Punt' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::Drop()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{
    yang_name = "drop"; yang_parent_name = "mulicast";
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::~Drop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(packets.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Drop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::MulticastCoreForwardStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{
    yang_name = "multicast-core-forward-stat"; yang_parent_name = "mulicast";
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::~MulticastCoreForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(packets.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-core-forward-stat";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastCoreForwardStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::CoreReceivedStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{
    yang_name = "core-received-stat"; yang_parent_name = "mulicast";
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::~CoreReceivedStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(packets.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-received-stat";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CoreReceivedStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::IrbInfo()
    :
    irb_plat_data{YType::uint32, "irb-plat-data"},
    irb_plat_data_len{YType::uint16, "irb-plat-data-len"},
    mxid_ac_interface_handle{YType::str, "mxid-ac-interface-handle"},
    mxid_next_hop_address{YType::str, "mxid-next-hop-address"},
    mxid_pw_id{YType::uint32, "mxid-pw-id"}
{
    yang_name = "irb-info"; yang_parent_name = "l2fib-mmrp";
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::~IrbInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::has_data() const
{
    for (auto const & leaf : irb_plat_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return irb_plat_data_len.is_set
	|| mxid_ac_interface_handle.is_set
	|| mxid_next_hop_address.is_set
	|| mxid_pw_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::has_operation() const
{
    for (auto const & leaf : irb_plat_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(irb_plat_data.operation)
	|| is_set(irb_plat_data_len.operation)
	|| is_set(mxid_ac_interface_handle.operation)
	|| is_set(mxid_next_hop_address.operation)
	|| is_set(mxid_pw_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "irb-info";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IrbInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (irb_plat_data_len.is_set || is_set(irb_plat_data_len.operation)) leaf_name_data.push_back(irb_plat_data_len.get_name_leafdata());
    if (mxid_ac_interface_handle.is_set || is_set(mxid_ac_interface_handle.operation)) leaf_name_data.push_back(mxid_ac_interface_handle.get_name_leafdata());
    if (mxid_next_hop_address.is_set || is_set(mxid_next_hop_address.operation)) leaf_name_data.push_back(mxid_next_hop_address.get_name_leafdata());
    if (mxid_pw_id.is_set || is_set(mxid_pw_id.operation)) leaf_name_data.push_back(mxid_pw_id.get_name_leafdata());

    auto irb_plat_data_name_datas = irb_plat_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), irb_plat_data_name_datas.begin(), irb_plat_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "irb-plat-data")
    {
        irb_plat_data.append(value);
    }
    if(value_path == "irb-plat-data-len")
    {
        irb_plat_data_len = value;
    }
    if(value_path == "mxid-ac-interface-handle")
    {
        mxid_ac_interface_handle = value;
    }
    if(value_path == "mxid-next-hop-address")
    {
        mxid_next_hop_address = value;
    }
    if(value_path == "mxid-pw-id")
    {
        mxid_pw_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Macs()
{
    yang_name = "l2fib-evpn-ip6macs"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::~L2FibEvpnIp6Macs()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::has_data() const
{
    for (std::size_t index=0; index<l2fib_evpn_ip6mac.size(); index++)
    {
        if(l2fib_evpn_ip6mac[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_ip6mac.size(); index++)
    {
        if(l2fib_evpn_ip6mac[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-ip6macs";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibEvpnIp6Macs' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-ip6mac")
    {
        for(auto const & c : l2fib_evpn_ip6mac)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac>();
        c->parent = this;
        l2fib_evpn_ip6mac.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_evpn_ip6mac)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::L2FibEvpnIp6Mac()
    :
    arp_nd_delete_pending{YType::boolean, "arp-nd-delete-pending"},
    arp_nd_probe_pending{YType::boolean, "arp-nd-probe-pending"},
    arp_nd_sync_pending{YType::boolean, "arp-nd-sync-pending"},
    bdid{YType::int32, "bdid"},
    bdid_xr{YType::uint32, "bdid-xr"},
    ip_address{YType::str, "ip-address"},
    is_local{YType::boolean, "is-local"},
    is_local_xr{YType::boolean, "is-local-xr"},
    mac_address{YType::str, "mac-address"},
    mac_address_xr{YType::str, "mac-address-xr"}
    	,
    ip_address_xr(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr>())
{
    ip_address_xr->parent = this;

    yang_name = "l2fib-evpn-ip6mac"; yang_parent_name = "l2fib-evpn-ip6macs";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::~L2FibEvpnIp6Mac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::has_data() const
{
    return arp_nd_delete_pending.is_set
	|| arp_nd_probe_pending.is_set
	|| arp_nd_sync_pending.is_set
	|| bdid.is_set
	|| bdid_xr.is_set
	|| ip_address.is_set
	|| is_local.is_set
	|| is_local_xr.is_set
	|| mac_address.is_set
	|| mac_address_xr.is_set
	|| (ip_address_xr !=  nullptr && ip_address_xr->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::has_operation() const
{
    return is_set(operation)
	|| is_set(arp_nd_delete_pending.operation)
	|| is_set(arp_nd_probe_pending.operation)
	|| is_set(arp_nd_sync_pending.operation)
	|| is_set(bdid.operation)
	|| is_set(bdid_xr.operation)
	|| is_set(ip_address.operation)
	|| is_set(is_local.operation)
	|| is_set(is_local_xr.operation)
	|| is_set(mac_address.operation)
	|| is_set(mac_address_xr.operation)
	|| (ip_address_xr !=  nullptr && ip_address_xr->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-ip6mac";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibEvpnIp6Mac' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp_nd_delete_pending.is_set || is_set(arp_nd_delete_pending.operation)) leaf_name_data.push_back(arp_nd_delete_pending.get_name_leafdata());
    if (arp_nd_probe_pending.is_set || is_set(arp_nd_probe_pending.operation)) leaf_name_data.push_back(arp_nd_probe_pending.get_name_leafdata());
    if (arp_nd_sync_pending.is_set || is_set(arp_nd_sync_pending.operation)) leaf_name_data.push_back(arp_nd_sync_pending.get_name_leafdata());
    if (bdid.is_set || is_set(bdid.operation)) leaf_name_data.push_back(bdid.get_name_leafdata());
    if (bdid_xr.is_set || is_set(bdid_xr.operation)) leaf_name_data.push_back(bdid_xr.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.operation)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_local_xr.is_set || is_set(is_local_xr.operation)) leaf_name_data.push_back(is_local_xr.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.operation)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address-xr")
    {
        if(ip_address_xr == nullptr)
        {
            ip_address_xr = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr>();
        }
        return ip_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_address_xr != nullptr)
    {
        children["ip-address-xr"] = ip_address_xr;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "arp-nd-delete-pending")
    {
        arp_nd_delete_pending = value;
    }
    if(value_path == "arp-nd-probe-pending")
    {
        arp_nd_probe_pending = value;
    }
    if(value_path == "arp-nd-sync-pending")
    {
        arp_nd_sync_pending = value;
    }
    if(value_path == "bdid")
    {
        bdid = value;
    }
    if(value_path == "bdid-xr")
    {
        bdid_xr = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "is-local")
    {
        is_local = value;
    }
    if(value_path == "is-local-xr")
    {
        is_local_xr = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::IpAddressXr()
    :
    addr_type{YType::enumeration, "addr-type"},
    ip{YType::str, "ip"}
{
    yang_name = "ip-address-xr"; yang_parent_name = "l2fib-evpn-ip6mac";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::~IpAddressXr()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::has_data() const
{
    return addr_type.is_set
	|| ip.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(addr_type.operation)
	|| is_set(ip.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address-xr";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpAddressXr' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.operation)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummaries()
{
    yang_name = "l2fib-dhcp-binding-summaries"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::~L2FibDhcpBindingSummaries()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::has_data() const
{
    for (std::size_t index=0; index<l2fib_dhcp_binding_summary.size(); index++)
    {
        if(l2fib_dhcp_binding_summary[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::has_operation() const
{
    for (std::size_t index=0; index<l2fib_dhcp_binding_summary.size(); index++)
    {
        if(l2fib_dhcp_binding_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-dhcp-binding-summaries";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibDhcpBindingSummaries' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-dhcp-binding-summary")
    {
        for(auto const & c : l2fib_dhcp_binding_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary>();
        c->parent = this;
        l2fib_dhcp_binding_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_dhcp_binding_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::L2FibDhcpBindingSummary()
    :
    xcid{YType::str, "xcid"},
    bindings{YType::uint32, "bindings"}
    	,
    port(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port>())
{
    port->parent = this;

    yang_name = "l2fib-dhcp-binding-summary"; yang_parent_name = "l2fib-dhcp-binding-summaries";
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::~L2FibDhcpBindingSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::has_data() const
{
    return xcid.is_set
	|| bindings.is_set
	|| (port !=  nullptr && port->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(xcid.operation)
	|| is_set(bindings.operation)
	|| (port !=  nullptr && port->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-dhcp-binding-summary" <<"[xcid='" <<xcid <<"']";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibDhcpBindingSummary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.operation)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (bindings.is_set || is_set(bindings.operation)) leaf_name_data.push_back(bindings.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "xcid")
    {
        xcid = value;
    }
    if(value_path == "bindings")
    {
        bindings = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Port()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw>())
{
    ac->parent = this;

    pw->parent = this;

    yang_name = "port"; yang_parent_name = "l2fib-dhcp-binding-summary";
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::~Port()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (pw !=  nullptr && pw->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| (ac !=  nullptr && ac->has_operation())
	|| (pw !=  nullptr && pw->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw>();
        }
        return pw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ac != nullptr)
    {
        children["ac"] = ac;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::Ac()
    :
    interface_handle{YType::str, "interface-handle"}
{
    yang_name = "ac"; yang_parent_name = "port";
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::has_data() const
{
    return interface_handle.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_handle.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ac' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::Pw()
    :
    next_hop_address{YType::str, "next-hop-address"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_id{YType::uint64, "pw-id"}
{
    yang_name = "pw"; yang_parent_name = "port";
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::~Pw()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::has_data() const
{
    return next_hop_address.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(pseudo_wire_id_type.operation)
	|| is_set(pw_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.operation)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCasts()
{
    yang_name = "l2fib-evpn-incl-m-casts"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::~L2FibEvpnInclMCasts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::has_data() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-casts";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibEvpnInclMCasts' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast")
    {
        for(auto const & c : l2fib_evpn_incl_m_cast)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast>();
        c->parent = this;
        l2fib_evpn_incl_m_cast.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_evpn_incl_m_cast)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCast()
    :
    bd_name{YType::str, "bd-name"}
    	,
    l2fib_evpn_incl_m_cast_oles(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles>())
	,mcast_replication_list(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList>())
{
    l2fib_evpn_incl_m_cast_oles->parent = this;

    mcast_replication_list->parent = this;

    yang_name = "l2fib-evpn-incl-m-cast"; yang_parent_name = "l2fib-evpn-incl-m-casts";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::~L2FibEvpnInclMCast()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::has_data() const
{
    return bd_name.is_set
	|| (l2fib_evpn_incl_m_cast_oles !=  nullptr && l2fib_evpn_incl_m_cast_oles->has_data())
	|| (mcast_replication_list !=  nullptr && mcast_replication_list->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_name.operation)
	|| (l2fib_evpn_incl_m_cast_oles !=  nullptr && l2fib_evpn_incl_m_cast_oles->has_operation())
	|| (mcast_replication_list !=  nullptr && mcast_replication_list->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast" <<"[bd-name='" <<bd_name <<"']";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibEvpnInclMCast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast-oles")
    {
        if(l2fib_evpn_incl_m_cast_oles == nullptr)
        {
            l2fib_evpn_incl_m_cast_oles = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles>();
        }
        return l2fib_evpn_incl_m_cast_oles;
    }

    if(child_yang_name == "mcast-replication-list")
    {
        if(mcast_replication_list == nullptr)
        {
            mcast_replication_list = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList>();
        }
        return mcast_replication_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2fib_evpn_incl_m_cast_oles != nullptr)
    {
        children["l2fib-evpn-incl-m-cast-oles"] = l2fib_evpn_incl_m_cast_oles;
    }

    if(mcast_replication_list != nullptr)
    {
        children["mcast-replication-list"] = mcast_replication_list;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::McastReplicationList()
    :
    bridge_domain_id{YType::uint32, "bridge-domain-id"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    is_bound{YType::boolean, "is-bound"}
{
    yang_name = "mcast-replication-list"; yang_parent_name = "l2fib-evpn-incl-m-cast";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::~McastReplicationList()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::has_data() const
{
    return bridge_domain_id.is_set
	|| bridge_domain_name.is_set
	|| is_bound.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::has_operation() const
{
    return is_set(operation)
	|| is_set(bridge_domain_id.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(is_bound.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-replication-list";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'McastReplicationList' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_id.is_set || is_set(bridge_domain_id.operation)) leaf_name_data.push_back(bridge_domain_id.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (is_bound.is_set || is_set(is_bound.operation)) leaf_name_data.push_back(is_bound.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
    }
    if(value_path == "is-bound")
    {
        is_bound = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOles()
{
    yang_name = "l2fib-evpn-incl-m-cast-oles"; yang_parent_name = "l2fib-evpn-incl-m-cast";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::~L2FibEvpnInclMCastOles()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::has_data() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_ole.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_ole[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_ole.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_ole[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-oles";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibEvpnInclMCastOles' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast-ole")
    {
        for(auto const & c : l2fib_evpn_incl_m_cast_ole)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle>();
        c->parent = this;
        l2fib_evpn_incl_m_cast_ole.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_evpn_incl_m_cast_ole)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::L2FibEvpnInclMCastOle()
    :
    next_hop_address{YType::str, "next-hop-address"},
    is_bound{YType::boolean, "is-bound"},
    next_hop_valid{YType::boolean, "next-hop-valid"}
    	,
    mcast_ole(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop>())
{
    mcast_ole->parent = this;

    next_hop->parent = this;

    yang_name = "l2fib-evpn-incl-m-cast-ole"; yang_parent_name = "l2fib-evpn-incl-m-cast-oles";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::~L2FibEvpnInclMCastOle()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::has_data() const
{
    return next_hop_address.is_set
	|| is_bound.is_set
	|| next_hop_valid.is_set
	|| (mcast_ole !=  nullptr && mcast_ole->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(is_bound.operation)
	|| is_set(next_hop_valid.operation)
	|| (mcast_ole !=  nullptr && mcast_ole->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-ole" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibEvpnInclMCastOle' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (is_bound.is_set || is_set(is_bound.operation)) leaf_name_data.push_back(is_bound.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.operation)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcast-ole")
    {
        if(mcast_ole == nullptr)
        {
            mcast_ole = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle>();
        }
        return mcast_ole;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mcast_ole != nullptr)
    {
        children["mcast-ole"] = mcast_ole;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "is-bound")
    {
        is_bound = value;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::McastOle()
    :
    mcast_label{YType::uint32, "mcast-label"},
    next_hop_ipv6_addr{YType::str, "next-hop-ipv6-addr"}
{
    yang_name = "mcast-ole"; yang_parent_name = "l2fib-evpn-incl-m-cast-ole";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::~McastOle()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::has_data() const
{
    return mcast_label.is_set
	|| next_hop_ipv6_addr.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::has_operation() const
{
    return is_set(operation)
	|| is_set(mcast_label.operation)
	|| is_set(next_hop_ipv6_addr.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-ole";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'McastOle' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcast_label.is_set || is_set(mcast_label.operation)) leaf_name_data.push_back(mcast_label.get_name_leafdata());
    if (next_hop_ipv6_addr.is_set || is_set(next_hop_ipv6_addr.operation)) leaf_name_data.push_back(next_hop_ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mcast-label")
    {
        mcast_label = value;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    plaformt_data_valid{YType::boolean, "plaformt-data-valid"},
    platform_data_length{YType::uint32, "platform-data-length"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "l2fib-evpn-incl-m-cast-ole";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::has_data() const
{
    return children_count.is_set
	|| next_hop_address.is_set
	|| next_hop_internal_label.is_set
	|| plaformt_data_valid.is_set
	|| platform_data_length.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(children_count.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_internal_label.operation)
	|| is_set(plaformt_data_valid.operation)
	|| is_set(platform_data_length.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.operation)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.operation)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (plaformt_data_valid.is_set || is_set(plaformt_data_valid.operation)) leaf_name_data.push_back(plaformt_data_valid.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.operation)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "children-count")
    {
        children_count = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
    }
    if(value_path == "plaformt-data-valid")
    {
        plaformt_data_valid = value;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::Base()
{
    yang_name = "base"; yang_parent_name = "next-hop";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::L2Vpnv2()
    :
    active(std::make_shared<L2Vpnv2::Active>())
	,nodes(std::make_shared<L2Vpnv2::Nodes>())
	,standby(std::make_shared<L2Vpnv2::Standby>())
{
    active->parent = this;

    nodes->parent = this;

    standby->parent = this;

    yang_name = "l2vpnv2"; yang_parent_name = "Cisco-IOS-XR-l2vpn-oper";
}

L2Vpnv2::~L2Vpnv2()
{
}

bool L2Vpnv2::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (nodes !=  nullptr && nodes->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool L2Vpnv2::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string L2Vpnv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<L2Vpnv2::Active>();
        }
        return active;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<L2Vpnv2::Nodes>();
        }
        return nodes;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<L2Vpnv2::Standby>();
        }
        return standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    return children;
}

void L2Vpnv2::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> L2Vpnv2::clone_ptr() const
{
    return std::make_shared<L2Vpnv2>();
}

std::string L2Vpnv2::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string L2Vpnv2::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function L2Vpnv2::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

L2Vpnv2::Standby::Standby()
    :
    bridge_domains(std::make_shared<L2Vpnv2::Standby::BridgeDomains>())
	,bridge_summary(std::make_shared<L2Vpnv2::Standby::BridgeSummary>())
	,discoveries(std::make_shared<L2Vpnv2::Standby::Discoveries>())
	,discovery_summary(std::make_shared<L2Vpnv2::Standby::DiscoverySummary>())
	,flexible_xconnect_service_summary(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServiceSummary>())
	,flexible_xconnect_services(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices>())
	,g8032(std::make_shared<L2Vpnv2::Standby::G8032>())
	,generic_interface_list_details(std::make_shared<L2Vpnv2::Standby::GenericInterfaceListDetails>())
	,generic_interfaces(std::make_shared<L2Vpnv2::Standby::GenericInterfaces>())
	,global_settings(std::make_shared<L2Vpnv2::Standby::GlobalSettings>())
	,iccp_sm(std::make_shared<L2Vpnv2::Standby::IccpSm>())
	,indexes(std::make_shared<L2Vpnv2::Standby::Indexes>())
	,l2vpn_collaborators(std::make_shared<L2Vpnv2::Standby::L2VpnCollaborators>())
	,l2vpn_pbb_bsa(std::make_shared<L2Vpnv2::Standby::L2VpnPbbBsa>())
	,l2vpn_resource_state(std::make_shared<L2Vpnv2::Standby::L2VpnResourceState>())
	,main_interfaces(std::make_shared<L2Vpnv2::Standby::MainInterfaces>())
	,mstp_ports(std::make_shared<L2Vpnv2::Standby::MstpPorts>())
	,mstp_vlans(std::make_shared<L2Vpnv2::Standby::MstpVlans>())
	,mvrp(std::make_shared<L2Vpnv2::Standby::Mvrp>())
	,nsr(std::make_shared<L2Vpnv2::Standby::Nsr>())
	,proc_fsm(std::make_shared<L2Vpnv2::Standby::ProcFsm>())
	,pseudowire_classes(std::make_shared<L2Vpnv2::Standby::PseudowireClasses>())
	,pwr(std::make_shared<L2Vpnv2::Standby::Pwr>())
	,xconnect_brief(std::make_shared<L2Vpnv2::Standby::XconnectBrief>())
	,xconnect_groups(std::make_shared<L2Vpnv2::Standby::XconnectGroups>())
	,xconnect_mp2mp_ce2ces(std::make_shared<L2Vpnv2::Standby::XconnectMp2MpCe2Ces>())
	,xconnect_mp2mps(std::make_shared<L2Vpnv2::Standby::XconnectMp2Mps>())
	,xconnect_summary(std::make_shared<L2Vpnv2::Standby::XconnectSummary>())
	,xconnects(std::make_shared<L2Vpnv2::Standby::Xconnects>())
{
    bridge_domains->parent = this;

    bridge_summary->parent = this;

    discoveries->parent = this;

    discovery_summary->parent = this;

    flexible_xconnect_service_summary->parent = this;

    flexible_xconnect_services->parent = this;

    g8032->parent = this;

    generic_interface_list_details->parent = this;

    generic_interfaces->parent = this;

    global_settings->parent = this;

    iccp_sm->parent = this;

    indexes->parent = this;

    l2vpn_collaborators->parent = this;

    l2vpn_pbb_bsa->parent = this;

    l2vpn_resource_state->parent = this;

    main_interfaces->parent = this;

    mstp_ports->parent = this;

    mstp_vlans->parent = this;

    mvrp->parent = this;

    nsr->parent = this;

    proc_fsm->parent = this;

    pseudowire_classes->parent = this;

    pwr->parent = this;

    xconnect_brief->parent = this;

    xconnect_groups->parent = this;

    xconnect_mp2mp_ce2ces->parent = this;

    xconnect_mp2mps->parent = this;

    xconnect_summary->parent = this;

    xconnects->parent = this;

    yang_name = "standby"; yang_parent_name = "l2vpnv2";
}

L2Vpnv2::Standby::~Standby()
{
}

bool L2Vpnv2::Standby::has_data() const
{
    return (bridge_domains !=  nullptr && bridge_domains->has_data())
	|| (bridge_summary !=  nullptr && bridge_summary->has_data())
	|| (discoveries !=  nullptr && discoveries->has_data())
	|| (discovery_summary !=  nullptr && discovery_summary->has_data())
	|| (flexible_xconnect_service_summary !=  nullptr && flexible_xconnect_service_summary->has_data())
	|| (flexible_xconnect_services !=  nullptr && flexible_xconnect_services->has_data())
	|| (g8032 !=  nullptr && g8032->has_data())
	|| (generic_interface_list_details !=  nullptr && generic_interface_list_details->has_data())
	|| (generic_interfaces !=  nullptr && generic_interfaces->has_data())
	|| (global_settings !=  nullptr && global_settings->has_data())
	|| (iccp_sm !=  nullptr && iccp_sm->has_data())
	|| (indexes !=  nullptr && indexes->has_data())
	|| (l2vpn_collaborators !=  nullptr && l2vpn_collaborators->has_data())
	|| (l2vpn_pbb_bsa !=  nullptr && l2vpn_pbb_bsa->has_data())
	|| (l2vpn_resource_state !=  nullptr && l2vpn_resource_state->has_data())
	|| (main_interfaces !=  nullptr && main_interfaces->has_data())
	|| (mstp_ports !=  nullptr && mstp_ports->has_data())
	|| (mstp_vlans !=  nullptr && mstp_vlans->has_data())
	|| (mvrp !=  nullptr && mvrp->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (proc_fsm !=  nullptr && proc_fsm->has_data())
	|| (pseudowire_classes !=  nullptr && pseudowire_classes->has_data())
	|| (pwr !=  nullptr && pwr->has_data())
	|| (xconnect_brief !=  nullptr && xconnect_brief->has_data())
	|| (xconnect_groups !=  nullptr && xconnect_groups->has_data())
	|| (xconnect_mp2mp_ce2ces !=  nullptr && xconnect_mp2mp_ce2ces->has_data())
	|| (xconnect_mp2mps !=  nullptr && xconnect_mp2mps->has_data())
	|| (xconnect_summary !=  nullptr && xconnect_summary->has_data())
	|| (xconnects !=  nullptr && xconnects->has_data());
}

bool L2Vpnv2::Standby::has_operation() const
{
    return is_set(operation)
	|| (bridge_domains !=  nullptr && bridge_domains->has_operation())
	|| (bridge_summary !=  nullptr && bridge_summary->has_operation())
	|| (discoveries !=  nullptr && discoveries->has_operation())
	|| (discovery_summary !=  nullptr && discovery_summary->has_operation())
	|| (flexible_xconnect_service_summary !=  nullptr && flexible_xconnect_service_summary->has_operation())
	|| (flexible_xconnect_services !=  nullptr && flexible_xconnect_services->has_operation())
	|| (g8032 !=  nullptr && g8032->has_operation())
	|| (generic_interface_list_details !=  nullptr && generic_interface_list_details->has_operation())
	|| (generic_interfaces !=  nullptr && generic_interfaces->has_operation())
	|| (global_settings !=  nullptr && global_settings->has_operation())
	|| (iccp_sm !=  nullptr && iccp_sm->has_operation())
	|| (indexes !=  nullptr && indexes->has_operation())
	|| (l2vpn_collaborators !=  nullptr && l2vpn_collaborators->has_operation())
	|| (l2vpn_pbb_bsa !=  nullptr && l2vpn_pbb_bsa->has_operation())
	|| (l2vpn_resource_state !=  nullptr && l2vpn_resource_state->has_operation())
	|| (main_interfaces !=  nullptr && main_interfaces->has_operation())
	|| (mstp_ports !=  nullptr && mstp_ports->has_operation())
	|| (mstp_vlans !=  nullptr && mstp_vlans->has_operation())
	|| (mvrp !=  nullptr && mvrp->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (proc_fsm !=  nullptr && proc_fsm->has_operation())
	|| (pseudowire_classes !=  nullptr && pseudowire_classes->has_operation())
	|| (pwr !=  nullptr && pwr->has_operation())
	|| (xconnect_brief !=  nullptr && xconnect_brief->has_operation())
	|| (xconnect_groups !=  nullptr && xconnect_groups->has_operation())
	|| (xconnect_mp2mp_ce2ces !=  nullptr && xconnect_mp2mp_ce2ces->has_operation())
	|| (xconnect_mp2mps !=  nullptr && xconnect_mp2mps->has_operation())
	|| (xconnect_summary !=  nullptr && xconnect_summary->has_operation())
	|| (xconnects !=  nullptr && xconnects->has_operation());
}

std::string L2Vpnv2::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Standby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domains")
    {
        if(bridge_domains == nullptr)
        {
            bridge_domains = std::make_shared<L2Vpnv2::Standby::BridgeDomains>();
        }
        return bridge_domains;
    }

    if(child_yang_name == "bridge-summary")
    {
        if(bridge_summary == nullptr)
        {
            bridge_summary = std::make_shared<L2Vpnv2::Standby::BridgeSummary>();
        }
        return bridge_summary;
    }

    if(child_yang_name == "discoveries")
    {
        if(discoveries == nullptr)
        {
            discoveries = std::make_shared<L2Vpnv2::Standby::Discoveries>();
        }
        return discoveries;
    }

    if(child_yang_name == "discovery-summary")
    {
        if(discovery_summary == nullptr)
        {
            discovery_summary = std::make_shared<L2Vpnv2::Standby::DiscoverySummary>();
        }
        return discovery_summary;
    }

    if(child_yang_name == "flexible-xconnect-service-summary")
    {
        if(flexible_xconnect_service_summary == nullptr)
        {
            flexible_xconnect_service_summary = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServiceSummary>();
        }
        return flexible_xconnect_service_summary;
    }

    if(child_yang_name == "flexible-xconnect-services")
    {
        if(flexible_xconnect_services == nullptr)
        {
            flexible_xconnect_services = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices>();
        }
        return flexible_xconnect_services;
    }

    if(child_yang_name == "g8032")
    {
        if(g8032 == nullptr)
        {
            g8032 = std::make_shared<L2Vpnv2::Standby::G8032>();
        }
        return g8032;
    }

    if(child_yang_name == "generic-interface-list-details")
    {
        if(generic_interface_list_details == nullptr)
        {
            generic_interface_list_details = std::make_shared<L2Vpnv2::Standby::GenericInterfaceListDetails>();
        }
        return generic_interface_list_details;
    }

    if(child_yang_name == "generic-interfaces")
    {
        if(generic_interfaces == nullptr)
        {
            generic_interfaces = std::make_shared<L2Vpnv2::Standby::GenericInterfaces>();
        }
        return generic_interfaces;
    }

    if(child_yang_name == "global-settings")
    {
        if(global_settings == nullptr)
        {
            global_settings = std::make_shared<L2Vpnv2::Standby::GlobalSettings>();
        }
        return global_settings;
    }

    if(child_yang_name == "iccp-sm")
    {
        if(iccp_sm == nullptr)
        {
            iccp_sm = std::make_shared<L2Vpnv2::Standby::IccpSm>();
        }
        return iccp_sm;
    }

    if(child_yang_name == "indexes")
    {
        if(indexes == nullptr)
        {
            indexes = std::make_shared<L2Vpnv2::Standby::Indexes>();
        }
        return indexes;
    }

    if(child_yang_name == "l2vpn-collaborators")
    {
        if(l2vpn_collaborators == nullptr)
        {
            l2vpn_collaborators = std::make_shared<L2Vpnv2::Standby::L2VpnCollaborators>();
        }
        return l2vpn_collaborators;
    }

    if(child_yang_name == "l2vpn-pbb-bsa")
    {
        if(l2vpn_pbb_bsa == nullptr)
        {
            l2vpn_pbb_bsa = std::make_shared<L2Vpnv2::Standby::L2VpnPbbBsa>();
        }
        return l2vpn_pbb_bsa;
    }

    if(child_yang_name == "l2vpn-resource-state")
    {
        if(l2vpn_resource_state == nullptr)
        {
            l2vpn_resource_state = std::make_shared<L2Vpnv2::Standby::L2VpnResourceState>();
        }
        return l2vpn_resource_state;
    }

    if(child_yang_name == "main-interfaces")
    {
        if(main_interfaces == nullptr)
        {
            main_interfaces = std::make_shared<L2Vpnv2::Standby::MainInterfaces>();
        }
        return main_interfaces;
    }

    if(child_yang_name == "mstp-ports")
    {
        if(mstp_ports == nullptr)
        {
            mstp_ports = std::make_shared<L2Vpnv2::Standby::MstpPorts>();
        }
        return mstp_ports;
    }

    if(child_yang_name == "mstp-vlans")
    {
        if(mstp_vlans == nullptr)
        {
            mstp_vlans = std::make_shared<L2Vpnv2::Standby::MstpVlans>();
        }
        return mstp_vlans;
    }

    if(child_yang_name == "mvrp")
    {
        if(mvrp == nullptr)
        {
            mvrp = std::make_shared<L2Vpnv2::Standby::Mvrp>();
        }
        return mvrp;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<L2Vpnv2::Standby::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "proc-fsm")
    {
        if(proc_fsm == nullptr)
        {
            proc_fsm = std::make_shared<L2Vpnv2::Standby::ProcFsm>();
        }
        return proc_fsm;
    }

    if(child_yang_name == "pseudowire-classes")
    {
        if(pseudowire_classes == nullptr)
        {
            pseudowire_classes = std::make_shared<L2Vpnv2::Standby::PseudowireClasses>();
        }
        return pseudowire_classes;
    }

    if(child_yang_name == "pwr")
    {
        if(pwr == nullptr)
        {
            pwr = std::make_shared<L2Vpnv2::Standby::Pwr>();
        }
        return pwr;
    }

    if(child_yang_name == "xconnect-brief")
    {
        if(xconnect_brief == nullptr)
        {
            xconnect_brief = std::make_shared<L2Vpnv2::Standby::XconnectBrief>();
        }
        return xconnect_brief;
    }

    if(child_yang_name == "xconnect-groups")
    {
        if(xconnect_groups == nullptr)
        {
            xconnect_groups = std::make_shared<L2Vpnv2::Standby::XconnectGroups>();
        }
        return xconnect_groups;
    }

    if(child_yang_name == "xconnect-mp2mp-ce2ces")
    {
        if(xconnect_mp2mp_ce2ces == nullptr)
        {
            xconnect_mp2mp_ce2ces = std::make_shared<L2Vpnv2::Standby::XconnectMp2MpCe2Ces>();
        }
        return xconnect_mp2mp_ce2ces;
    }

    if(child_yang_name == "xconnect-mp2mps")
    {
        if(xconnect_mp2mps == nullptr)
        {
            xconnect_mp2mps = std::make_shared<L2Vpnv2::Standby::XconnectMp2Mps>();
        }
        return xconnect_mp2mps;
    }

    if(child_yang_name == "xconnect-summary")
    {
        if(xconnect_summary == nullptr)
        {
            xconnect_summary = std::make_shared<L2Vpnv2::Standby::XconnectSummary>();
        }
        return xconnect_summary;
    }

    if(child_yang_name == "xconnects")
    {
        if(xconnects == nullptr)
        {
            xconnects = std::make_shared<L2Vpnv2::Standby::Xconnects>();
        }
        return xconnects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bridge_domains != nullptr)
    {
        children["bridge-domains"] = bridge_domains;
    }

    if(bridge_summary != nullptr)
    {
        children["bridge-summary"] = bridge_summary;
    }

    if(discoveries != nullptr)
    {
        children["discoveries"] = discoveries;
    }

    if(discovery_summary != nullptr)
    {
        children["discovery-summary"] = discovery_summary;
    }

    if(flexible_xconnect_service_summary != nullptr)
    {
        children["flexible-xconnect-service-summary"] = flexible_xconnect_service_summary;
    }

    if(flexible_xconnect_services != nullptr)
    {
        children["flexible-xconnect-services"] = flexible_xconnect_services;
    }

    if(g8032 != nullptr)
    {
        children["g8032"] = g8032;
    }

    if(generic_interface_list_details != nullptr)
    {
        children["generic-interface-list-details"] = generic_interface_list_details;
    }

    if(generic_interfaces != nullptr)
    {
        children["generic-interfaces"] = generic_interfaces;
    }

    if(global_settings != nullptr)
    {
        children["global-settings"] = global_settings;
    }

    if(iccp_sm != nullptr)
    {
        children["iccp-sm"] = iccp_sm;
    }

    if(indexes != nullptr)
    {
        children["indexes"] = indexes;
    }

    if(l2vpn_collaborators != nullptr)
    {
        children["l2vpn-collaborators"] = l2vpn_collaborators;
    }

    if(l2vpn_pbb_bsa != nullptr)
    {
        children["l2vpn-pbb-bsa"] = l2vpn_pbb_bsa;
    }

    if(l2vpn_resource_state != nullptr)
    {
        children["l2vpn-resource-state"] = l2vpn_resource_state;
    }

    if(main_interfaces != nullptr)
    {
        children["main-interfaces"] = main_interfaces;
    }

    if(mstp_ports != nullptr)
    {
        children["mstp-ports"] = mstp_ports;
    }

    if(mstp_vlans != nullptr)
    {
        children["mstp-vlans"] = mstp_vlans;
    }

    if(mvrp != nullptr)
    {
        children["mvrp"] = mvrp;
    }

    if(nsr != nullptr)
    {
        children["nsr"] = nsr;
    }

    if(proc_fsm != nullptr)
    {
        children["proc-fsm"] = proc_fsm;
    }

    if(pseudowire_classes != nullptr)
    {
        children["pseudowire-classes"] = pseudowire_classes;
    }

    if(pwr != nullptr)
    {
        children["pwr"] = pwr;
    }

    if(xconnect_brief != nullptr)
    {
        children["xconnect-brief"] = xconnect_brief;
    }

    if(xconnect_groups != nullptr)
    {
        children["xconnect-groups"] = xconnect_groups;
    }

    if(xconnect_mp2mp_ce2ces != nullptr)
    {
        children["xconnect-mp2mp-ce2ces"] = xconnect_mp2mp_ce2ces;
    }

    if(xconnect_mp2mps != nullptr)
    {
        children["xconnect-mp2mps"] = xconnect_mp2mps;
    }

    if(xconnect_summary != nullptr)
    {
        children["xconnect-summary"] = xconnect_summary;
    }

    if(xconnects != nullptr)
    {
        children["xconnects"] = xconnects;
    }

    return children;
}

void L2Vpnv2::Standby::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Standby::Discoveries::Discoveries()
{
    yang_name = "discoveries"; yang_parent_name = "standby";
}

L2Vpnv2::Standby::Discoveries::~Discoveries()
{
}

bool L2Vpnv2::Standby::Discoveries::has_data() const
{
    for (std::size_t index=0; index<discovery.size(); index++)
    {
        if(discovery[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::Discoveries::has_operation() const
{
    for (std::size_t index=0; index<discovery.size(); index++)
    {
        if(discovery[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpnv2::Standby::Discoveries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discoveries";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Standby::Discoveries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        for(auto const & c : discovery)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery>();
        c->parent = this;
        discovery.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : discovery)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Discoveries::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Standby::Discoveries::Discovery::Discovery()
    :
    group_name{YType::str, "group-name"},
    group_name_xr{YType::str, "group-name-xr"},
    is_service_connected{YType::boolean, "is-service-connected"},
    mtu_mismatch_ignore{YType::boolean, "mtu-mismatch-ignore"},
    number_vpn{YType::uint32, "number-vpn"},
    service_name{YType::enumeration, "service-name"},
    service_name_xr{YType::str, "service-name-xr"},
    vpn_id{YType::uint32, "vpn-id"},
    vpn_name{YType::str, "vpn-name"},
    vpn_name_xr{YType::str, "vpn-name-xr"}
    	,
    signalling_info(std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo>())
{
    signalling_info->parent = this;

    yang_name = "discovery"; yang_parent_name = "discoveries";
}

L2Vpnv2::Standby::Discoveries::Discovery::~Discovery()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::has_data() const
{
    return group_name.is_set
	|| group_name_xr.is_set
	|| is_service_connected.is_set
	|| mtu_mismatch_ignore.is_set
	|| number_vpn.is_set
	|| service_name.is_set
	|| service_name_xr.is_set
	|| vpn_id.is_set
	|| vpn_name.is_set
	|| vpn_name_xr.is_set
	|| (signalling_info !=  nullptr && signalling_info->has_data());
}

bool L2Vpnv2::Standby::Discoveries::Discovery::has_operation() const
{
    return is_set(operation)
	|| is_set(group_name.operation)
	|| is_set(group_name_xr.operation)
	|| is_set(is_service_connected.operation)
	|| is_set(mtu_mismatch_ignore.operation)
	|| is_set(number_vpn.operation)
	|| is_set(service_name.operation)
	|| is_set(service_name_xr.operation)
	|| is_set(vpn_id.operation)
	|| is_set(vpn_name.operation)
	|| is_set(vpn_name_xr.operation)
	|| (signalling_info !=  nullptr && signalling_info->has_operation());
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Standby::Discoveries::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.operation)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (is_service_connected.is_set || is_set(is_service_connected.operation)) leaf_name_data.push_back(is_service_connected.get_name_leafdata());
    if (mtu_mismatch_ignore.is_set || is_set(mtu_mismatch_ignore.operation)) leaf_name_data.push_back(mtu_mismatch_ignore.get_name_leafdata());
    if (number_vpn.is_set || is_set(number_vpn.operation)) leaf_name_data.push_back(number_vpn.get_name_leafdata());
    if (service_name.is_set || is_set(service_name.operation)) leaf_name_data.push_back(service_name.get_name_leafdata());
    if (service_name_xr.is_set || is_set(service_name_xr.operation)) leaf_name_data.push_back(service_name_xr.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.operation)) leaf_name_data.push_back(vpn_id.get_name_leafdata());
    if (vpn_name.is_set || is_set(vpn_name.operation)) leaf_name_data.push_back(vpn_name.get_name_leafdata());
    if (vpn_name_xr.is_set || is_set(vpn_name_xr.operation)) leaf_name_data.push_back(vpn_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalling-info")
    {
        if(signalling_info == nullptr)
        {
            signalling_info = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo>();
        }
        return signalling_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(signalling_info != nullptr)
    {
        children["signalling-info"] = signalling_info;
    }

    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
    }
    if(value_path == "is-service-connected")
    {
        is_service_connected = value;
    }
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore = value;
    }
    if(value_path == "number-vpn")
    {
        number_vpn = value;
    }
    if(value_path == "service-name")
    {
        service_name = value;
    }
    if(value_path == "service-name-xr")
    {
        service_name_xr = value;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
    }
    if(value_path == "vpn-name")
    {
        vpn_name = value;
    }
    if(value_path == "vpn-name-xr")
    {
        vpn_name_xr = value;
    }
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::SignallingInfo()
    :
    ad_signalling_method{YType::enumeration, "ad-signalling-method"}
    	,
    bgp_sig_info(std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo>())
	,ldp_sig_info(std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo>())
{
    bgp_sig_info->parent = this;

    ldp_sig_info->parent = this;

    yang_name = "signalling-info"; yang_parent_name = "discovery";
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::~SignallingInfo()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::has_data() const
{
    return ad_signalling_method.is_set
	|| (bgp_sig_info !=  nullptr && bgp_sig_info->has_data())
	|| (ldp_sig_info !=  nullptr && ldp_sig_info->has_data());
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(ad_signalling_method.operation)
	|| (bgp_sig_info !=  nullptr && bgp_sig_info->has_operation())
	|| (ldp_sig_info !=  nullptr && ldp_sig_info->has_operation());
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-info";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_signalling_method.is_set || is_set(ad_signalling_method.operation)) leaf_name_data.push_back(ad_signalling_method.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-sig-info")
    {
        if(bgp_sig_info == nullptr)
        {
            bgp_sig_info = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo>();
        }
        return bgp_sig_info;
    }

    if(child_yang_name == "ldp-sig-info")
    {
        if(ldp_sig_info == nullptr)
        {
            ldp_sig_info = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo>();
        }
        return ldp_sig_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_sig_info != nullptr)
    {
        children["bgp-sig-info"] = bgp_sig_info;
    }

    if(ldp_sig_info != nullptr)
    {
        children["ldp-sig-info"] = ldp_sig_info;
    }

    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method = value;
    }
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::BgpSigInfo()
    :
    number_edges{YType::uint32, "number-edges"},
    number_remote_edges{YType::uint32, "number-remote-edges"}
{
    yang_name = "bgp-sig-info"; yang_parent_name = "signalling-info";
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::~BgpSigInfo()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::has_data() const
{
    for (std::size_t index=0; index<edge.size(); index++)
    {
        if(edge[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redge.size(); index++)
    {
        if(redge[index]->has_data())
            return true;
    }
    return number_edges.is_set
	|| number_remote_edges.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::has_operation() const
{
    for (std::size_t index=0; index<edge.size(); index++)
    {
        if(edge[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redge.size(); index++)
    {
        if(redge[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(number_edges.operation)
	|| is_set(number_remote_edges.operation);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-sig-info";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_edges.is_set || is_set(number_edges.operation)) leaf_name_data.push_back(number_edges.get_name_leafdata());
    if (number_remote_edges.is_set || is_set(number_remote_edges.operation)) leaf_name_data.push_back(number_remote_edges.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "edge")
    {
        for(auto const & c : edge)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge>();
        c->parent = this;
        edge.push_back(c);
        return c;
    }

    if(child_yang_name == "redge")
    {
        for(auto const & c : redge)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge>();
        c->parent = this;
        redge.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : edge)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : redge)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number-edges")
    {
        number_edges = value;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges = value;
    }
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::Edge()
    :
    edge_id{YType::uint32, "edge-id"},
    label_count{YType::uint32, "label-count"}
{
    yang_name = "edge"; yang_parent_name = "bgp-sig-info";
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::~Edge()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::has_data() const
{
    for (std::size_t index=0; index<label_block.size(); index++)
    {
        if(label_block[index]->has_data())
            return true;
    }
    return edge_id.is_set
	|| label_count.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::has_operation() const
{
    for (std::size_t index=0; index<label_block.size(); index++)
    {
        if(label_block[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(edge_id.operation)
	|| is_set(label_count.operation);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/bgp-sig-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (edge_id.is_set || is_set(edge_id.operation)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (label_count.is_set || is_set(label_count.operation)) leaf_name_data.push_back(label_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-block")
    {
        for(auto const & c : label_block)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock>();
        c->parent = this;
        label_block.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_block)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "edge-id")
    {
        edge_id = value;
    }
    if(value_path == "label-count")
    {
        label_count = value;
    }
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::LabelBlock()
    :
    block_offset{YType::uint32, "block-offset"},
    block_size{YType::uint32, "block-size"},
    label_base{YType::uint32, "label-base"},
    label_error{YType::enumeration, "label-error"},
    label_time_created{YType::uint32, "label-time-created"},
    local_edge_id{YType::uint32, "local-edge-id"},
    next_hop{YType::str, "next-hop"},
    status_vector{YType::uint8, "status-vector"}
{
    yang_name = "label-block"; yang_parent_name = "edge";
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::~LabelBlock()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::has_data() const
{
    for (auto const & leaf : status_vector.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return block_offset.is_set
	|| block_size.is_set
	|| label_base.is_set
	|| label_error.is_set
	|| label_time_created.is_set
	|| local_edge_id.is_set
	|| next_hop.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::has_operation() const
{
    for (auto const & leaf : status_vector.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(block_offset.operation)
	|| is_set(block_size.operation)
	|| is_set(label_base.operation)
	|| is_set(label_error.operation)
	|| is_set(label_time_created.operation)
	|| is_set(local_edge_id.operation)
	|| is_set(next_hop.operation)
	|| is_set(status_vector.operation);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/bgp-sig-info/edge/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_offset.is_set || is_set(block_offset.operation)) leaf_name_data.push_back(block_offset.get_name_leafdata());
    if (block_size.is_set || is_set(block_size.operation)) leaf_name_data.push_back(block_size.get_name_leafdata());
    if (label_base.is_set || is_set(label_base.operation)) leaf_name_data.push_back(label_base.get_name_leafdata());
    if (label_error.is_set || is_set(label_error.operation)) leaf_name_data.push_back(label_error.get_name_leafdata());
    if (label_time_created.is_set || is_set(label_time_created.operation)) leaf_name_data.push_back(label_time_created.get_name_leafdata());
    if (local_edge_id.is_set || is_set(local_edge_id.operation)) leaf_name_data.push_back(local_edge_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    auto status_vector_name_datas = status_vector.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), status_vector_name_datas.begin(), status_vector_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "block-offset")
    {
        block_offset = value;
    }
    if(value_path == "block-size")
    {
        block_size = value;
    }
    if(value_path == "label-base")
    {
        label_base = value;
    }
    if(value_path == "label-error")
    {
        label_error = value;
    }
    if(value_path == "label-time-created")
    {
        label_time_created = value;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "status-vector")
    {
        status_vector.append(value);
    }
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::Redge()
    :
    edge_id{YType::uint32, "edge-id"},
    label_count{YType::uint32, "label-count"}
{
    yang_name = "redge"; yang_parent_name = "bgp-sig-info";
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::~Redge()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::has_data() const
{
    for (std::size_t index=0; index<label_block.size(); index++)
    {
        if(label_block[index]->has_data())
            return true;
    }
    return edge_id.is_set
	|| label_count.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::has_operation() const
{
    for (std::size_t index=0; index<label_block.size(); index++)
    {
        if(label_block[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(edge_id.operation)
	|| is_set(label_count.operation);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redge";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/bgp-sig-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (edge_id.is_set || is_set(edge_id.operation)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (label_count.is_set || is_set(label_count.operation)) leaf_name_data.push_back(label_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-block")
    {
        for(auto const & c : label_block)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock>();
        c->parent = this;
        label_block.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_block)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "edge-id")
    {
        edge_id = value;
    }
    if(value_path == "label-count")
    {
        label_count = value;
    }
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::LabelBlock()
    :
    block_offset{YType::uint32, "block-offset"},
    block_size{YType::uint32, "block-size"},
    label_base{YType::uint32, "label-base"},
    label_error{YType::enumeration, "label-error"},
    label_time_created{YType::uint32, "label-time-created"},
    local_edge_id{YType::uint32, "local-edge-id"},
    next_hop{YType::str, "next-hop"},
    status_vector{YType::uint8, "status-vector"}
{
    yang_name = "label-block"; yang_parent_name = "redge";
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::~LabelBlock()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::has_data() const
{
    for (auto const & leaf : status_vector.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return block_offset.is_set
	|| block_size.is_set
	|| label_base.is_set
	|| label_error.is_set
	|| label_time_created.is_set
	|| local_edge_id.is_set
	|| next_hop.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::has_operation() const
{
    for (auto const & leaf : status_vector.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(block_offset.operation)
	|| is_set(block_size.operation)
	|| is_set(label_base.operation)
	|| is_set(label_error.operation)
	|| is_set(label_time_created.operation)
	|| is_set(local_edge_id.operation)
	|| is_set(next_hop.operation)
	|| is_set(status_vector.operation);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/bgp-sig-info/redge/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_offset.is_set || is_set(block_offset.operation)) leaf_name_data.push_back(block_offset.get_name_leafdata());
    if (block_size.is_set || is_set(block_size.operation)) leaf_name_data.push_back(block_size.get_name_leafdata());
    if (label_base.is_set || is_set(label_base.operation)) leaf_name_data.push_back(label_base.get_name_leafdata());
    if (label_error.is_set || is_set(label_error.operation)) leaf_name_data.push_back(label_error.get_name_leafdata());
    if (label_time_created.is_set || is_set(label_time_created.operation)) leaf_name_data.push_back(label_time_created.get_name_leafdata());
    if (local_edge_id.is_set || is_set(local_edge_id.operation)) leaf_name_data.push_back(local_edge_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    auto status_vector_name_datas = status_vector.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), status_vector_name_datas.begin(), status_vector_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "block-offset")
    {
        block_offset = value;
    }
    if(value_path == "block-size")
    {
        block_size = value;
    }
    if(value_path == "label-base")
    {
        label_base = value;
    }
    if(value_path == "label-error")
    {
        label_error = value;
    }
    if(value_path == "label-time-created")
    {
        label_time_created = value;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "status-vector")
    {
        status_vector.append(value);
    }
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LdpSigInfo()
    :
    local_l2_router_id{YType::str, "local-l2-router-id"},
    number_remote_edges{YType::uint32, "number-remote-edges"}
    	,
    local_vpls_id(std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId>())
{
    local_vpls_id->parent = this;

    yang_name = "ldp-sig-info"; yang_parent_name = "signalling-info";
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::~LdpSigInfo()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::has_data() const
{
    for (std::size_t index=0; index<remote_nlri.size(); index++)
    {
        if(remote_nlri[index]->has_data())
            return true;
    }
    return local_l2_router_id.is_set
	|| number_remote_edges.is_set
	|| (local_vpls_id !=  nullptr && local_vpls_id->has_data());
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::has_operation() const
{
    for (std::size_t index=0; index<remote_nlri.size(); index++)
    {
        if(remote_nlri[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(local_l2_router_id.operation)
	|| is_set(number_remote_edges.operation)
	|| (local_vpls_id !=  nullptr && local_vpls_id->has_operation());
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-sig-info";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_l2_router_id.is_set || is_set(local_l2_router_id.operation)) leaf_name_data.push_back(local_l2_router_id.get_name_leafdata());
    if (number_remote_edges.is_set || is_set(number_remote_edges.operation)) leaf_name_data.push_back(number_remote_edges.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-vpls-id")
    {
        if(local_vpls_id == nullptr)
        {
            local_vpls_id = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId>();
        }
        return local_vpls_id;
    }

    if(child_yang_name == "remote-nlri")
    {
        for(auto const & c : remote_nlri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri>();
        c->parent = this;
        remote_nlri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_vpls_id != nullptr)
    {
        children["local-vpls-id"] = local_vpls_id;
    }

    for (auto const & c : remote_nlri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-l2-router-id")
    {
        local_l2_router_id = value;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges = value;
    }
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::LocalVplsId()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr>())
{
    auto_->parent = this;

    two_byte_as->parent = this;

    v4_addr->parent = this;

    yang_name = "local-vpls-id"; yang_parent_name = "ldp-sig-info";
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::~LocalVplsId()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::has_operation() const
{
    return is_set(operation)
	|| is_set(vpls_id_type.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-vpls-id";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/ldp-sig-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.operation)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
    }
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{
    yang_name = "auto"; yang_parent_name = "local-vpls-id";
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::~Auto_()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(asn.operation)
	|| is_set(vpn_id.operation);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/ldp-sig-info/local-vpls-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.operation)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.operation)) leaf_name_data.push_back(vpn_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn")
    {
        asn = value;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
    }
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "local-vpls-id";
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/ldp-sig-info/local-vpls-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "local-vpls-id";
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/ldp-sig-info/local-vpls-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::RemoteNlri()
    :
    local_address{YType::str, "local-address"},
    nlri_time_created{YType::uint32, "nlri-time-created"},
    remote_address{YType::str, "remote-address"},
    remote_l2_router_id{YType::str, "remote-l2-router-id"}
{
    yang_name = "remote-nlri"; yang_parent_name = "ldp-sig-info";
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::~RemoteNlri()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::has_data() const
{
    return local_address.is_set
	|| nlri_time_created.is_set
	|| remote_address.is_set
	|| remote_l2_router_id.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address.operation)
	|| is_set(nlri_time_created.operation)
	|| is_set(remote_address.operation)
	|| is_set(remote_l2_router_id.operation);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-nlri";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/ldp-sig-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (nlri_time_created.is_set || is_set(nlri_time_created.operation)) leaf_name_data.push_back(nlri_time_created.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (remote_l2_router_id.is_set || is_set(remote_l2_router_id.operation)) leaf_name_data.push_back(remote_l2_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "nlri-time-created")
    {
        nlri_time_created = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "remote-l2-router-id")
    {
        remote_l2_router_id = value;
    }
}

L2Vpnv2::Standby::FlexibleXconnectServiceSummary::FlexibleXconnectServiceSummary()
    :
    number_fxc{YType::uint32, "number-fxc"},
    number_fxc_down{YType::uint32, "number-fxc-down"},
    number_fxc_up{YType::uint32, "number-fxc-up"}
{
    yang_name = "flexible-xconnect-service-summary"; yang_parent_name = "standby";
}

L2Vpnv2::Standby::FlexibleXconnectServiceSummary::~FlexibleXconnectServiceSummary()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServiceSummary::has_data() const
{
    return number_fxc.is_set
	|| number_fxc_down.is_set
	|| number_fxc_up.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServiceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(number_fxc.operation)
	|| is_set(number_fxc_down.operation)
	|| is_set(number_fxc_up.operation);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServiceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-service-summary";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Standby::FlexibleXconnectServiceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_fxc.is_set || is_set(number_fxc.operation)) leaf_name_data.push_back(number_fxc.get_name_leafdata());
    if (number_fxc_down.is_set || is_set(number_fxc_down.operation)) leaf_name_data.push_back(number_fxc_down.get_name_leafdata());
    if (number_fxc_up.is_set || is_set(number_fxc_up.operation)) leaf_name_data.push_back(number_fxc_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServiceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServiceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServiceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number-fxc")
    {
        number_fxc = value;
    }
    if(value_path == "number-fxc-down")
    {
        number_fxc_down = value;
    }
    if(value_path == "number-fxc-up")
    {
        number_fxc_up = value;
    }
}


}
}

