
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tunnel_l2tun_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tunnel_l2tun_cfg {

L2tp::L2tp()
    :
    classes(std::make_shared<L2tp::Classes>())
{
    classes->parent = this;

    yang_name = "l2tp"; yang_parent_name = "Cisco-IOS-XR-tunnel-l2tun-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

L2tp::~L2tp()
{
}

bool L2tp::has_data() const
{
    if (is_presence_container) return true;
    return (classes !=  nullptr && classes->has_data());
}

bool L2tp::has_operation() const
{
    return is_set(yfilter)
	|| (classes !=  nullptr && classes->has_operation());
}

std::string L2tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-cfg:l2tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classes")
    {
        if(classes == nullptr)
        {
            classes = std::make_shared<L2tp::Classes>();
        }
        return classes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2tp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(classes != nullptr)
    {
        _children["classes"] = classes;
    }

    return _children;
}

void L2tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> L2tp::clone_ptr() const
{
    return std::make_shared<L2tp>();
}

std::string L2tp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string L2tp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function L2tp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> L2tp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool L2tp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classes")
        return true;
    return false;
}

L2tp::Classes::Classes()
    :
    class_(this, {"class_name"})
{

    yang_name = "classes"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Classes::~Classes()
{
}

bool L2tp::Classes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool L2tp::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2tp::Classes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-cfg:l2tp/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Classes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2tp::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto ent_ = std::make_shared<L2tp::Classes::Class>();
        ent_->parent = this;
        class_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2tp::Classes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : class_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2tp::Classes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tp::Classes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tp::Classes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

L2tp::Classes::Class::Class()
    :
    class_name{YType::str, "class-name"},
    host_name{YType::str, "host-name"},
    hidden{YType::empty, "hidden"},
    hello_interval{YType::uint32, "hello-interval"},
    timeout_setup{YType::uint32, "timeout-setup"},
    receive_window{YType::uint32, "receive-window"},
    congestion_control{YType::empty, "congestion-control"},
    timeout_no_user{YType::uint32, "timeout-no-user"},
    authentication{YType::uint32, "authentication"},
    enable{YType::empty, "enable"},
    password{YType::str, "password"}
        ,
    security(std::make_shared<L2tp::Classes::Class::Security>())
    , retransmit(std::make_shared<L2tp::Classes::Class::Retransmit>())
    , tunnel(std::make_shared<L2tp::Classes::Class::Tunnel>())
    , digest(std::make_shared<L2tp::Classes::Class::Digest>())
    , ip(std::make_shared<L2tp::Classes::Class::Ip>())
{
    security->parent = this;
    retransmit->parent = this;
    tunnel->parent = this;
    digest->parent = this;
    ip->parent = this;

    yang_name = "class"; yang_parent_name = "classes"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Classes::Class::~Class()
{
}

bool L2tp::Classes::Class::has_data() const
{
    if (is_presence_container) return true;
    return class_name.is_set
	|| host_name.is_set
	|| hidden.is_set
	|| hello_interval.is_set
	|| timeout_setup.is_set
	|| receive_window.is_set
	|| congestion_control.is_set
	|| timeout_no_user.is_set
	|| authentication.is_set
	|| enable.is_set
	|| password.is_set
	|| (security !=  nullptr && security->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (digest !=  nullptr && digest->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool L2tp::Classes::Class::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(hidden.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(timeout_setup.yfilter)
	|| ydk::is_set(receive_window.yfilter)
	|| ydk::is_set(congestion_control.yfilter)
	|| ydk::is_set(timeout_no_user.yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(password.yfilter)
	|| (security !=  nullptr && security->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (digest !=  nullptr && digest->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string L2tp::Classes::Class::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-cfg:l2tp/classes/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Classes::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(class_name, "class-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Classes::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (hidden.is_set || is_set(hidden.yfilter)) leaf_name_data.push_back(hidden.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (timeout_setup.is_set || is_set(timeout_setup.yfilter)) leaf_name_data.push_back(timeout_setup.get_name_leafdata());
    if (receive_window.is_set || is_set(receive_window.yfilter)) leaf_name_data.push_back(receive_window.get_name_leafdata());
    if (congestion_control.is_set || is_set(congestion_control.yfilter)) leaf_name_data.push_back(congestion_control.get_name_leafdata());
    if (timeout_no_user.is_set || is_set(timeout_no_user.yfilter)) leaf_name_data.push_back(timeout_no_user.get_name_leafdata());
    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2tp::Classes::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<L2tp::Classes::Class::Security>();
        }
        return security;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<L2tp::Classes::Class::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<L2tp::Classes::Class::Tunnel>();
        }
        return tunnel;
    }

    if(child_yang_name == "digest")
    {
        if(digest == nullptr)
        {
            digest = std::make_shared<L2tp::Classes::Class::Digest>();
        }
        return digest;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<L2tp::Classes::Class::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2tp::Classes::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(security != nullptr)
    {
        _children["security"] = security;
    }

    if(retransmit != nullptr)
    {
        _children["retransmit"] = retransmit;
    }

    if(tunnel != nullptr)
    {
        _children["tunnel"] = tunnel;
    }

    if(digest != nullptr)
    {
        _children["digest"] = digest;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void L2tp::Classes::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hidden")
    {
        hidden = value;
        hidden.value_namespace = name_space;
        hidden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-setup")
    {
        timeout_setup = value;
        timeout_setup.value_namespace = name_space;
        timeout_setup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-window")
    {
        receive_window = value;
        receive_window.value_namespace = name_space;
        receive_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "congestion-control")
    {
        congestion_control = value;
        congestion_control.value_namespace = name_space;
        congestion_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-no-user")
    {
        timeout_no_user = value;
        timeout_no_user.value_namespace = name_space;
        timeout_no_user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Classes::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "hidden")
    {
        hidden.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "timeout-setup")
    {
        timeout_setup.yfilter = yfilter;
    }
    if(value_path == "receive-window")
    {
        receive_window.yfilter = yfilter;
    }
    if(value_path == "congestion-control")
    {
        congestion_control.yfilter = yfilter;
    }
    if(value_path == "timeout-no-user")
    {
        timeout_no_user.yfilter = yfilter;
    }
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool L2tp::Classes::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security" || name == "retransmit" || name == "tunnel" || name == "digest" || name == "ip" || name == "class-name" || name == "host-name" || name == "hidden" || name == "hello-interval" || name == "timeout-setup" || name == "receive-window" || name == "congestion-control" || name == "timeout-no-user" || name == "authentication" || name == "enable" || name == "password")
        return true;
    return false;
}

L2tp::Classes::Class::Security::Security()
    :
    ip(std::make_shared<L2tp::Classes::Class::Security::Ip>())
{
    ip->parent = this;

    yang_name = "security"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Classes::Class::Security::~Security()
{
}

bool L2tp::Classes::Class::Security::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool L2tp::Classes::Class::Security::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string L2tp::Classes::Class::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Classes::Class::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2tp::Classes::Class::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<L2tp::Classes::Class::Security::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2tp::Classes::Class::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void L2tp::Classes::Class::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tp::Classes::Class::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tp::Classes::Class::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

L2tp::Classes::Class::Security::Ip::Ip()
    :
    address_check{YType::empty, "address-check"}
{

    yang_name = "ip"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Classes::Class::Security::Ip::~Ip()
{
}

bool L2tp::Classes::Class::Security::Ip::has_data() const
{
    if (is_presence_container) return true;
    return address_check.is_set;
}

bool L2tp::Classes::Class::Security::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_check.yfilter);
}

std::string L2tp::Classes::Class::Security::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Classes::Class::Security::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_check.is_set || is_set(address_check.yfilter)) leaf_name_data.push_back(address_check.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2tp::Classes::Class::Security::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2tp::Classes::Class::Security::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2tp::Classes::Class::Security::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-check")
    {
        address_check = value;
        address_check.value_namespace = name_space;
        address_check.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Classes::Class::Security::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-check")
    {
        address_check.yfilter = yfilter;
    }
}

bool L2tp::Classes::Class::Security::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-check")
        return true;
    return false;
}

L2tp::Classes::Class::Retransmit::Retransmit()
    :
    retry{YType::uint32, "retry"}
        ,
    initial(std::make_shared<L2tp::Classes::Class::Retransmit::Initial>())
    , timeout(std::make_shared<L2tp::Classes::Class::Retransmit::Timeout>())
{
    initial->parent = this;
    timeout->parent = this;

    yang_name = "retransmit"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Classes::Class::Retransmit::~Retransmit()
{
}

bool L2tp::Classes::Class::Retransmit::has_data() const
{
    if (is_presence_container) return true;
    return retry.is_set
	|| (initial !=  nullptr && initial->has_data())
	|| (timeout !=  nullptr && timeout->has_data());
}

bool L2tp::Classes::Class::Retransmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retry.yfilter)
	|| (initial !=  nullptr && initial->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string L2tp::Classes::Class::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Classes::Class::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2tp::Classes::Class::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "initial")
    {
        if(initial == nullptr)
        {
            initial = std::make_shared<L2tp::Classes::Class::Retransmit::Initial>();
        }
        return initial;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<L2tp::Classes::Class::Retransmit::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2tp::Classes::Class::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(initial != nullptr)
    {
        _children["initial"] = initial;
    }

    if(timeout != nullptr)
    {
        _children["timeout"] = timeout;
    }

    return _children;
}

void L2tp::Classes::Class::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Classes::Class::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
}

bool L2tp::Classes::Class::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial" || name == "timeout" || name == "retry")
        return true;
    return false;
}

L2tp::Classes::Class::Retransmit::Initial::Initial()
    :
    retry{YType::uint32, "retry"}
        ,
    timeout(std::make_shared<L2tp::Classes::Class::Retransmit::Initial::Timeout>())
{
    timeout->parent = this;

    yang_name = "initial"; yang_parent_name = "retransmit"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Classes::Class::Retransmit::Initial::~Initial()
{
}

bool L2tp::Classes::Class::Retransmit::Initial::has_data() const
{
    if (is_presence_container) return true;
    return retry.is_set
	|| (timeout !=  nullptr && timeout->has_data());
}

bool L2tp::Classes::Class::Retransmit::Initial::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retry.yfilter)
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string L2tp::Classes::Class::Retransmit::Initial::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initial";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Classes::Class::Retransmit::Initial::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2tp::Classes::Class::Retransmit::Initial::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<L2tp::Classes::Class::Retransmit::Initial::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2tp::Classes::Class::Retransmit::Initial::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(timeout != nullptr)
    {
        _children["timeout"] = timeout;
    }

    return _children;
}

void L2tp::Classes::Class::Retransmit::Initial::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Classes::Class::Retransmit::Initial::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
}

bool L2tp::Classes::Class::Retransmit::Initial::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "retry")
        return true;
    return false;
}

L2tp::Classes::Class::Retransmit::Initial::Timeout::Timeout()
    :
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"}
{

    yang_name = "timeout"; yang_parent_name = "initial"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Classes::Class::Retransmit::Initial::Timeout::~Timeout()
{
}

bool L2tp::Classes::Class::Retransmit::Initial::Timeout::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set
	|| maximum.is_set;
}

bool L2tp::Classes::Class::Retransmit::Initial::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter);
}

std::string L2tp::Classes::Class::Retransmit::Initial::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Classes::Class::Retransmit::Initial::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2tp::Classes::Class::Retransmit::Initial::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2tp::Classes::Class::Retransmit::Initial::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2tp::Classes::Class::Retransmit::Initial::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Classes::Class::Retransmit::Initial::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
}

bool L2tp::Classes::Class::Retransmit::Initial::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "maximum")
        return true;
    return false;
}

L2tp::Classes::Class::Retransmit::Timeout::Timeout()
    :
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"}
{

    yang_name = "timeout"; yang_parent_name = "retransmit"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Classes::Class::Retransmit::Timeout::~Timeout()
{
}

bool L2tp::Classes::Class::Retransmit::Timeout::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set
	|| maximum.is_set;
}

bool L2tp::Classes::Class::Retransmit::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter);
}

std::string L2tp::Classes::Class::Retransmit::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Classes::Class::Retransmit::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2tp::Classes::Class::Retransmit::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2tp::Classes::Class::Retransmit::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2tp::Classes::Class::Retransmit::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Classes::Class::Retransmit::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
}

bool L2tp::Classes::Class::Retransmit::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "maximum")
        return true;
    return false;
}

L2tp::Classes::Class::Tunnel::Tunnel()
    :
    accounting{YType::str, "accounting"}
{

    yang_name = "tunnel"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Classes::Class::Tunnel::~Tunnel()
{
}

bool L2tp::Classes::Class::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return accounting.is_set;
}

bool L2tp::Classes::Class::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter);
}

std::string L2tp::Classes::Class::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Classes::Class::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2tp::Classes::Class::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2tp::Classes::Class::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2tp::Classes::Class::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Classes::Class::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
}

bool L2tp::Classes::Class::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting")
        return true;
    return false;
}

L2tp::Classes::Class::Digest::Digest()
    :
    hash{YType::enumeration, "hash"},
    check_disable{YType::empty, "check-disable"}
        ,
    secrets(std::make_shared<L2tp::Classes::Class::Digest::Secrets>())
{
    secrets->parent = this;

    yang_name = "digest"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Classes::Class::Digest::~Digest()
{
}

bool L2tp::Classes::Class::Digest::has_data() const
{
    if (is_presence_container) return true;
    return hash.is_set
	|| check_disable.is_set
	|| (secrets !=  nullptr && secrets->has_data());
}

bool L2tp::Classes::Class::Digest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hash.yfilter)
	|| ydk::is_set(check_disable.yfilter)
	|| (secrets !=  nullptr && secrets->has_operation());
}

std::string L2tp::Classes::Class::Digest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "digest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Classes::Class::Digest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash.is_set || is_set(hash.yfilter)) leaf_name_data.push_back(hash.get_name_leafdata());
    if (check_disable.is_set || is_set(check_disable.yfilter)) leaf_name_data.push_back(check_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2tp::Classes::Class::Digest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secrets")
    {
        if(secrets == nullptr)
        {
            secrets = std::make_shared<L2tp::Classes::Class::Digest::Secrets>();
        }
        return secrets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2tp::Classes::Class::Digest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(secrets != nullptr)
    {
        _children["secrets"] = secrets;
    }

    return _children;
}

void L2tp::Classes::Class::Digest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hash")
    {
        hash = value;
        hash.value_namespace = name_space;
        hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "check-disable")
    {
        check_disable = value;
        check_disable.value_namespace = name_space;
        check_disable.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Classes::Class::Digest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hash")
    {
        hash.yfilter = yfilter;
    }
    if(value_path == "check-disable")
    {
        check_disable.yfilter = yfilter;
    }
}

bool L2tp::Classes::Class::Digest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secrets" || name == "hash" || name == "check-disable")
        return true;
    return false;
}

L2tp::Classes::Class::Digest::Secrets::Secrets()
    :
    secret(this, {"secret_name"})
{

    yang_name = "secrets"; yang_parent_name = "digest"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Classes::Class::Digest::Secrets::~Secrets()
{
}

bool L2tp::Classes::Class::Digest::Secrets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secret.len(); index++)
    {
        if(secret[index]->has_data())
            return true;
    }
    return false;
}

bool L2tp::Classes::Class::Digest::Secrets::has_operation() const
{
    for (std::size_t index=0; index<secret.len(); index++)
    {
        if(secret[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2tp::Classes::Class::Digest::Secrets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secrets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Classes::Class::Digest::Secrets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2tp::Classes::Class::Digest::Secrets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secret")
    {
        auto ent_ = std::make_shared<L2tp::Classes::Class::Digest::Secrets::Secret>();
        ent_->parent = this;
        secret.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2tp::Classes::Class::Digest::Secrets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : secret.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2tp::Classes::Class::Digest::Secrets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tp::Classes::Class::Digest::Secrets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tp::Classes::Class::Digest::Secrets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secret")
        return true;
    return false;
}

L2tp::Classes::Class::Digest::Secrets::Secret::Secret()
    :
    secret_name{YType::str, "secret-name"},
    hash{YType::enumeration, "hash"}
{

    yang_name = "secret"; yang_parent_name = "secrets"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Classes::Class::Digest::Secrets::Secret::~Secret()
{
}

bool L2tp::Classes::Class::Digest::Secrets::Secret::has_data() const
{
    if (is_presence_container) return true;
    return secret_name.is_set
	|| hash.is_set;
}

bool L2tp::Classes::Class::Digest::Secrets::Secret::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secret_name.yfilter)
	|| ydk::is_set(hash.yfilter);
}

std::string L2tp::Classes::Class::Digest::Secrets::Secret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secret";
    ADD_KEY_TOKEN(secret_name, "secret-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Classes::Class::Digest::Secrets::Secret::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secret_name.is_set || is_set(secret_name.yfilter)) leaf_name_data.push_back(secret_name.get_name_leafdata());
    if (hash.is_set || is_set(hash.yfilter)) leaf_name_data.push_back(hash.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2tp::Classes::Class::Digest::Secrets::Secret::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2tp::Classes::Class::Digest::Secrets::Secret::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2tp::Classes::Class::Digest::Secrets::Secret::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secret-name")
    {
        secret_name = value;
        secret_name.value_namespace = name_space;
        secret_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash")
    {
        hash = value;
        hash.value_namespace = name_space;
        hash.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Classes::Class::Digest::Secrets::Secret::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secret-name")
    {
        secret_name.yfilter = yfilter;
    }
    if(value_path == "hash")
    {
        hash.yfilter = yfilter;
    }
}

bool L2tp::Classes::Class::Digest::Secrets::Secret::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secret-name" || name == "hash")
        return true;
    return false;
}

L2tp::Classes::Class::Ip::Ip()
    :
    tos{YType::uint32, "tos"}
{

    yang_name = "ip"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Classes::Class::Ip::~Ip()
{
}

bool L2tp::Classes::Class::Ip::has_data() const
{
    if (is_presence_container) return true;
    return tos.is_set;
}

bool L2tp::Classes::Class::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos.yfilter);
}

std::string L2tp::Classes::Class::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Classes::Class::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2tp::Classes::Class::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2tp::Classes::Class::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2tp::Classes::Class::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Classes::Class::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
}

bool L2tp::Classes::Class::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tos")
        return true;
    return false;
}

const Enum::YLeaf L2tpHashMethod::md5 {1, "md5"};
const Enum::YLeaf L2tpHashMethod::sha1 {2, "sha1"};
const Enum::YLeaf L2tpHashMethod::none {3, "none"};

const Enum::YLeaf L2tpDigestHashMethod::md5 {1, "md5"};
const Enum::YLeaf L2tpDigestHashMethod::sha1 {2, "sha1"};


}
}

