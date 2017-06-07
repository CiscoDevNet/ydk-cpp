
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tunnel_l2tun_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_tunnel_l2tun_cfg {

L2Tp::L2Tp()
    :
    classes(std::make_shared<L2Tp::Classes>())
{
    classes->parent = this;

    yang_name = "l2tp"; yang_parent_name = "Cisco-IOS-XR-tunnel-l2tun-cfg";
}

L2Tp::~L2Tp()
{
}

bool L2Tp::has_data() const
{
    return (classes !=  nullptr && classes->has_data());
}

bool L2Tp::has_operation() const
{
    return is_set(operation)
	|| (classes !=  nullptr && classes->has_operation());
}

std::string L2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-cfg:l2tp";

    return path_buffer.str();

}

const EntityPath L2Tp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> L2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classes")
    {
        if(classes == nullptr)
        {
            classes = std::make_shared<L2Tp::Classes>();
        }
        return classes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Tp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(classes != nullptr)
    {
        children["classes"] = classes;
    }

    return children;
}

void L2Tp::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> L2Tp::clone_ptr() const
{
    return std::make_shared<L2Tp>();
}

std::string L2Tp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string L2Tp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function L2Tp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

L2Tp::Classes::Classes()
{
    yang_name = "classes"; yang_parent_name = "l2tp";
}

L2Tp::Classes::~Classes()
{
}

bool L2Tp::Classes::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool L2Tp::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Tp::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";

    return path_buffer.str();

}

const EntityPath L2Tp::Classes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-cfg:l2tp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Tp::Classes::Class_>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Tp::Classes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Tp::Classes::set_value(const std::string & value_path, std::string value)
{
}

L2Tp::Classes::Class_::Class_()
    :
    class_name{YType::str, "class-name"},
    authentication{YType::int32, "authentication"},
    congestion_control{YType::empty, "congestion-control"},
    enable{YType::empty, "enable"},
    hello_interval{YType::uint32, "hello-interval"},
    hidden{YType::empty, "hidden"},
    host_name{YType::str, "host-name"},
    password{YType::str, "password"},
    receive_window{YType::uint32, "receive-window"},
    timeout_no_user{YType::uint32, "timeout-no-user"},
    timeout_setup{YType::uint32, "timeout-setup"}
    	,
    digest(std::make_shared<L2Tp::Classes::Class_::Digest>())
	,ip(std::make_shared<L2Tp::Classes::Class_::Ip>())
	,retransmit(std::make_shared<L2Tp::Classes::Class_::Retransmit>())
	,security(std::make_shared<L2Tp::Classes::Class_::Security>())
	,tunnel(std::make_shared<L2Tp::Classes::Class_::Tunnel>())
{
    digest->parent = this;

    ip->parent = this;

    retransmit->parent = this;

    security->parent = this;

    tunnel->parent = this;

    yang_name = "class"; yang_parent_name = "classes";
}

L2Tp::Classes::Class_::~Class_()
{
}

bool L2Tp::Classes::Class_::has_data() const
{
    return class_name.is_set
	|| authentication.is_set
	|| congestion_control.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| hidden.is_set
	|| host_name.is_set
	|| password.is_set
	|| receive_window.is_set
	|| timeout_no_user.is_set
	|| timeout_setup.is_set
	|| (digest !=  nullptr && digest->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (security !=  nullptr && security->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool L2Tp::Classes::Class_::has_operation() const
{
    return is_set(operation)
	|| is_set(class_name.operation)
	|| is_set(authentication.operation)
	|| is_set(congestion_control.operation)
	|| is_set(enable.operation)
	|| is_set(hello_interval.operation)
	|| is_set(hidden.operation)
	|| is_set(host_name.operation)
	|| is_set(password.operation)
	|| is_set(receive_window.operation)
	|| is_set(timeout_no_user.operation)
	|| is_set(timeout_setup.operation)
	|| (digest !=  nullptr && digest->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (security !=  nullptr && security->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string L2Tp::Classes::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[class-name='" <<class_name <<"']";

    return path_buffer.str();

}

const EntityPath L2Tp::Classes::Class_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-cfg:l2tp/classes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (authentication.is_set || is_set(authentication.operation)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (congestion_control.is_set || is_set(congestion_control.operation)) leaf_name_data.push_back(congestion_control.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hidden.is_set || is_set(hidden.operation)) leaf_name_data.push_back(hidden.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (receive_window.is_set || is_set(receive_window.operation)) leaf_name_data.push_back(receive_window.get_name_leafdata());
    if (timeout_no_user.is_set || is_set(timeout_no_user.operation)) leaf_name_data.push_back(timeout_no_user.get_name_leafdata());
    if (timeout_setup.is_set || is_set(timeout_setup.operation)) leaf_name_data.push_back(timeout_setup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Classes::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "digest")
    {
        if(digest == nullptr)
        {
            digest = std::make_shared<L2Tp::Classes::Class_::Digest>();
        }
        return digest;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<L2Tp::Classes::Class_::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<L2Tp::Classes::Class_::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<L2Tp::Classes::Class_::Security>();
        }
        return security;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<L2Tp::Classes::Class_::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Tp::Classes::Class_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(digest != nullptr)
    {
        children["digest"] = digest;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(retransmit != nullptr)
    {
        children["retransmit"] = retransmit;
    }

    if(security != nullptr)
    {
        children["security"] = security;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void L2Tp::Classes::Class_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "authentication")
    {
        authentication = value;
    }
    if(value_path == "congestion-control")
    {
        congestion_control = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "hidden")
    {
        hidden = value;
    }
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "receive-window")
    {
        receive_window = value;
    }
    if(value_path == "timeout-no-user")
    {
        timeout_no_user = value;
    }
    if(value_path == "timeout-setup")
    {
        timeout_setup = value;
    }
}

L2Tp::Classes::Class_::Security::Security()
    :
    ip(std::make_shared<L2Tp::Classes::Class_::Security::Ip>())
{
    ip->parent = this;

    yang_name = "security"; yang_parent_name = "class";
}

L2Tp::Classes::Class_::Security::~Security()
{
}

bool L2Tp::Classes::Class_::Security::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool L2Tp::Classes::Class_::Security::has_operation() const
{
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string L2Tp::Classes::Class_::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";

    return path_buffer.str();

}

const EntityPath L2Tp::Classes::Class_::Security::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Security' in Cisco_IOS_XR_tunnel_l2tun_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Classes::Class_::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<L2Tp::Classes::Class_::Security::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Tp::Classes::Class_::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void L2Tp::Classes::Class_::Security::set_value(const std::string & value_path, std::string value)
{
}

L2Tp::Classes::Class_::Security::Ip::Ip()
    :
    address_check{YType::empty, "address-check"}
{
    yang_name = "ip"; yang_parent_name = "security";
}

L2Tp::Classes::Class_::Security::Ip::~Ip()
{
}

bool L2Tp::Classes::Class_::Security::Ip::has_data() const
{
    return address_check.is_set;
}

bool L2Tp::Classes::Class_::Security::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(address_check.operation);
}

std::string L2Tp::Classes::Class_::Security::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath L2Tp::Classes::Class_::Security::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XR_tunnel_l2tun_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_check.is_set || is_set(address_check.operation)) leaf_name_data.push_back(address_check.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Classes::Class_::Security::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Tp::Classes::Class_::Security::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Tp::Classes::Class_::Security::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-check")
    {
        address_check = value;
    }
}

L2Tp::Classes::Class_::Retransmit::Retransmit()
    :
    retry{YType::uint32, "retry"}
    	,
    initial(std::make_shared<L2Tp::Classes::Class_::Retransmit::Initial>())
	,timeout(std::make_shared<L2Tp::Classes::Class_::Retransmit::Timeout>())
{
    initial->parent = this;

    timeout->parent = this;

    yang_name = "retransmit"; yang_parent_name = "class";
}

L2Tp::Classes::Class_::Retransmit::~Retransmit()
{
}

bool L2Tp::Classes::Class_::Retransmit::has_data() const
{
    return retry.is_set
	|| (initial !=  nullptr && initial->has_data())
	|| (timeout !=  nullptr && timeout->has_data());
}

bool L2Tp::Classes::Class_::Retransmit::has_operation() const
{
    return is_set(operation)
	|| is_set(retry.operation)
	|| (initial !=  nullptr && initial->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string L2Tp::Classes::Class_::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";

    return path_buffer.str();

}

const EntityPath L2Tp::Classes::Class_::Retransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Retransmit' in Cisco_IOS_XR_tunnel_l2tun_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retry.is_set || is_set(retry.operation)) leaf_name_data.push_back(retry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Classes::Class_::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "initial")
    {
        if(initial == nullptr)
        {
            initial = std::make_shared<L2Tp::Classes::Class_::Retransmit::Initial>();
        }
        return initial;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<L2Tp::Classes::Class_::Retransmit::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Tp::Classes::Class_::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(initial != nullptr)
    {
        children["initial"] = initial;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void L2Tp::Classes::Class_::Retransmit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "retry")
    {
        retry = value;
    }
}

L2Tp::Classes::Class_::Retransmit::Initial::Initial()
    :
    retry{YType::uint32, "retry"}
    	,
    timeout(std::make_shared<L2Tp::Classes::Class_::Retransmit::Initial::Timeout>())
{
    timeout->parent = this;

    yang_name = "initial"; yang_parent_name = "retransmit";
}

L2Tp::Classes::Class_::Retransmit::Initial::~Initial()
{
}

bool L2Tp::Classes::Class_::Retransmit::Initial::has_data() const
{
    return retry.is_set
	|| (timeout !=  nullptr && timeout->has_data());
}

bool L2Tp::Classes::Class_::Retransmit::Initial::has_operation() const
{
    return is_set(operation)
	|| is_set(retry.operation)
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string L2Tp::Classes::Class_::Retransmit::Initial::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initial";

    return path_buffer.str();

}

const EntityPath L2Tp::Classes::Class_::Retransmit::Initial::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Initial' in Cisco_IOS_XR_tunnel_l2tun_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retry.is_set || is_set(retry.operation)) leaf_name_data.push_back(retry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Classes::Class_::Retransmit::Initial::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<L2Tp::Classes::Class_::Retransmit::Initial::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Tp::Classes::Class_::Retransmit::Initial::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void L2Tp::Classes::Class_::Retransmit::Initial::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "retry")
    {
        retry = value;
    }
}

L2Tp::Classes::Class_::Retransmit::Initial::Timeout::Timeout()
    :
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"}
{
    yang_name = "timeout"; yang_parent_name = "initial";
}

L2Tp::Classes::Class_::Retransmit::Initial::Timeout::~Timeout()
{
}

bool L2Tp::Classes::Class_::Retransmit::Initial::Timeout::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool L2Tp::Classes::Class_::Retransmit::Initial::Timeout::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation);
}

std::string L2Tp::Classes::Class_::Retransmit::Initial::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";

    return path_buffer.str();

}

const EntityPath L2Tp::Classes::Class_::Retransmit::Initial::Timeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timeout' in Cisco_IOS_XR_tunnel_l2tun_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Classes::Class_::Retransmit::Initial::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Tp::Classes::Class_::Retransmit::Initial::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Tp::Classes::Class_::Retransmit::Initial::Timeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
}

L2Tp::Classes::Class_::Retransmit::Timeout::Timeout()
    :
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"}
{
    yang_name = "timeout"; yang_parent_name = "retransmit";
}

L2Tp::Classes::Class_::Retransmit::Timeout::~Timeout()
{
}

bool L2Tp::Classes::Class_::Retransmit::Timeout::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool L2Tp::Classes::Class_::Retransmit::Timeout::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation);
}

std::string L2Tp::Classes::Class_::Retransmit::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";

    return path_buffer.str();

}

const EntityPath L2Tp::Classes::Class_::Retransmit::Timeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timeout' in Cisco_IOS_XR_tunnel_l2tun_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Classes::Class_::Retransmit::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Tp::Classes::Class_::Retransmit::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Tp::Classes::Class_::Retransmit::Timeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
}

L2Tp::Classes::Class_::Tunnel::Tunnel()
    :
    accounting{YType::str, "accounting"}
{
    yang_name = "tunnel"; yang_parent_name = "class";
}

L2Tp::Classes::Class_::Tunnel::~Tunnel()
{
}

bool L2Tp::Classes::Class_::Tunnel::has_data() const
{
    return accounting.is_set;
}

bool L2Tp::Classes::Class_::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(accounting.operation);
}

std::string L2Tp::Classes::Class_::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

const EntityPath L2Tp::Classes::Class_::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tunnel' in Cisco_IOS_XR_tunnel_l2tun_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.operation)) leaf_name_data.push_back(accounting.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Classes::Class_::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Tp::Classes::Class_::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Tp::Classes::Class_::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accounting")
    {
        accounting = value;
    }
}

L2Tp::Classes::Class_::Digest::Digest()
    :
    check_disable{YType::empty, "check-disable"},
    hash{YType::enumeration, "hash"}
    	,
    secrets(std::make_shared<L2Tp::Classes::Class_::Digest::Secrets>())
{
    secrets->parent = this;

    yang_name = "digest"; yang_parent_name = "class";
}

L2Tp::Classes::Class_::Digest::~Digest()
{
}

bool L2Tp::Classes::Class_::Digest::has_data() const
{
    return check_disable.is_set
	|| hash.is_set
	|| (secrets !=  nullptr && secrets->has_data());
}

bool L2Tp::Classes::Class_::Digest::has_operation() const
{
    return is_set(operation)
	|| is_set(check_disable.operation)
	|| is_set(hash.operation)
	|| (secrets !=  nullptr && secrets->has_operation());
}

std::string L2Tp::Classes::Class_::Digest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "digest";

    return path_buffer.str();

}

const EntityPath L2Tp::Classes::Class_::Digest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Digest' in Cisco_IOS_XR_tunnel_l2tun_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (check_disable.is_set || is_set(check_disable.operation)) leaf_name_data.push_back(check_disable.get_name_leafdata());
    if (hash.is_set || is_set(hash.operation)) leaf_name_data.push_back(hash.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Classes::Class_::Digest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secrets")
    {
        if(secrets == nullptr)
        {
            secrets = std::make_shared<L2Tp::Classes::Class_::Digest::Secrets>();
        }
        return secrets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Tp::Classes::Class_::Digest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(secrets != nullptr)
    {
        children["secrets"] = secrets;
    }

    return children;
}

void L2Tp::Classes::Class_::Digest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "check-disable")
    {
        check_disable = value;
    }
    if(value_path == "hash")
    {
        hash = value;
    }
}

L2Tp::Classes::Class_::Digest::Secrets::Secrets()
{
    yang_name = "secrets"; yang_parent_name = "digest";
}

L2Tp::Classes::Class_::Digest::Secrets::~Secrets()
{
}

bool L2Tp::Classes::Class_::Digest::Secrets::has_data() const
{
    for (std::size_t index=0; index<secret.size(); index++)
    {
        if(secret[index]->has_data())
            return true;
    }
    return false;
}

bool L2Tp::Classes::Class_::Digest::Secrets::has_operation() const
{
    for (std::size_t index=0; index<secret.size(); index++)
    {
        if(secret[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Tp::Classes::Class_::Digest::Secrets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secrets";

    return path_buffer.str();

}

const EntityPath L2Tp::Classes::Class_::Digest::Secrets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Secrets' in Cisco_IOS_XR_tunnel_l2tun_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Classes::Class_::Digest::Secrets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secret")
    {
        for(auto const & c : secret)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Tp::Classes::Class_::Digest::Secrets::Secret>();
        c->parent = this;
        secret.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Tp::Classes::Class_::Digest::Secrets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : secret)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Tp::Classes::Class_::Digest::Secrets::set_value(const std::string & value_path, std::string value)
{
}

L2Tp::Classes::Class_::Digest::Secrets::Secret::Secret()
    :
    secret_name{YType::str, "secret-name"},
    hash{YType::enumeration, "hash"}
{
    yang_name = "secret"; yang_parent_name = "secrets";
}

L2Tp::Classes::Class_::Digest::Secrets::Secret::~Secret()
{
}

bool L2Tp::Classes::Class_::Digest::Secrets::Secret::has_data() const
{
    return secret_name.is_set
	|| hash.is_set;
}

bool L2Tp::Classes::Class_::Digest::Secrets::Secret::has_operation() const
{
    return is_set(operation)
	|| is_set(secret_name.operation)
	|| is_set(hash.operation);
}

std::string L2Tp::Classes::Class_::Digest::Secrets::Secret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secret" <<"[secret-name='" <<secret_name <<"']";

    return path_buffer.str();

}

const EntityPath L2Tp::Classes::Class_::Digest::Secrets::Secret::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Secret' in Cisco_IOS_XR_tunnel_l2tun_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secret_name.is_set || is_set(secret_name.operation)) leaf_name_data.push_back(secret_name.get_name_leafdata());
    if (hash.is_set || is_set(hash.operation)) leaf_name_data.push_back(hash.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Classes::Class_::Digest::Secrets::Secret::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Tp::Classes::Class_::Digest::Secrets::Secret::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Tp::Classes::Class_::Digest::Secrets::Secret::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "secret-name")
    {
        secret_name = value;
    }
    if(value_path == "hash")
    {
        hash = value;
    }
}

L2Tp::Classes::Class_::Ip::Ip()
    :
    tos{YType::uint32, "tos"}
{
    yang_name = "ip"; yang_parent_name = "class";
}

L2Tp::Classes::Class_::Ip::~Ip()
{
}

bool L2Tp::Classes::Class_::Ip::has_data() const
{
    return tos.is_set;
}

bool L2Tp::Classes::Class_::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(tos.operation);
}

std::string L2Tp::Classes::Class_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath L2Tp::Classes::Class_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XR_tunnel_l2tun_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Classes::Class_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Tp::Classes::Class_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Tp::Classes::Class_::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tos")
    {
        tos = value;
    }
}

const Enum::YLeaf L2TpDigestHashMethodEnum::md5 {1, "md5"};
const Enum::YLeaf L2TpDigestHashMethodEnum::sha1 {2, "sha1"};

const Enum::YLeaf L2TpHashMethodEnum::md5 {1, "md5"};
const Enum::YLeaf L2TpHashMethodEnum::sha1 {2, "sha1"};
const Enum::YLeaf L2TpHashMethodEnum::none {3, "none"};


}
}

