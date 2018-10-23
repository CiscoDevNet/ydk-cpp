
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_64.hpp"
#include "Cisco_IOS_XE_native_65.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::TwentyFiveGigE::Macro::Auto::Auto()
    :
    processing{YType::boolean, "processing"}
        ,
    port(std::make_shared<Native::Interface::TwentyFiveGigE::Macro::Auto::Port>())
    , control(std::make_shared<Native::Interface::TwentyFiveGigE::Macro::Auto::Control>())
{
    port->parent = this;
    control->parent = this;

    yang_name = "auto"; yang_parent_name = "macro"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Macro::Auto::~Auto()
{
}

bool Native::Interface::TwentyFiveGigE::Macro::Auto::has_data() const
{
    if (is_presence_container) return true;
    return processing.is_set
	|| (port !=  nullptr && port->has_data())
	|| (control !=  nullptr && control->has_data());
}

bool Native::Interface::TwentyFiveGigE::Macro::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processing.yfilter)
	|| (port !=  nullptr && port->has_operation())
	|| (control !=  nullptr && control->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Macro::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Macro::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processing.is_set || is_set(processing.yfilter)) leaf_name_data.push_back(processing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Macro::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::TwentyFiveGigE::Macro::Auto::Port>();
        }
        return port;
    }

    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Interface::TwentyFiveGigE::Macro::Auto::Control>();
        }
        return control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Macro::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port != nullptr)
    {
        _children["port"] = port;
    }

    if(control != nullptr)
    {
        _children["control"] = control;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Macro::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processing")
    {
        processing = value;
        processing.value_namespace = name_space;
        processing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Macro::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processing")
    {
        processing.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Macro::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "control" || name == "processing")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Macro::Auto::Port::Port()
    :
    sticky{YType::empty, "sticky"}
{

    yang_name = "port"; yang_parent_name = "auto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Macro::Auto::Port::~Port()
{
}

bool Native::Interface::TwentyFiveGigE::Macro::Auto::Port::has_data() const
{
    if (is_presence_container) return true;
    return sticky.is_set;
}

bool Native::Interface::TwentyFiveGigE::Macro::Auto::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sticky.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Macro::Auto::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Macro::Auto::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Macro::Auto::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Macro::Auto::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Macro::Auto::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Macro::Auto::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Macro::Auto::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sticky")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Macro::Auto::Control::Control()
    :
    device(std::make_shared<Native::Interface::TwentyFiveGigE::Macro::Auto::Control::Device>())
{
    device->parent = this;

    yang_name = "control"; yang_parent_name = "auto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Macro::Auto::Control::~Control()
{
}

bool Native::Interface::TwentyFiveGigE::Macro::Auto::Control::has_data() const
{
    if (is_presence_container) return true;
    return (device !=  nullptr && device->has_data());
}

bool Native::Interface::TwentyFiveGigE::Macro::Auto::Control::has_operation() const
{
    return is_set(yfilter)
	|| (device !=  nullptr && device->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Macro::Auto::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Macro::Auto::Control::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Macro::Auto::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device")
    {
        if(device == nullptr)
        {
            device = std::make_shared<Native::Interface::TwentyFiveGigE::Macro::Auto::Control::Device>();
        }
        return device;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Macro::Auto::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(device != nullptr)
    {
        _children["device"] = device;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Macro::Auto::Control::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Macro::Auto::Control::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Macro::Auto::Control::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Macro::Auto::Control::Device::Device()
    :
    phone{YType::empty, "phone"}
{

    yang_name = "device"; yang_parent_name = "control"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Macro::Auto::Control::Device::~Device()
{
}

bool Native::Interface::TwentyFiveGigE::Macro::Auto::Control::Device::has_data() const
{
    if (is_presence_container) return true;
    return phone.is_set;
}

bool Native::Interface::TwentyFiveGigE::Macro::Auto::Control::Device::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(phone.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Macro::Auto::Control::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Macro::Auto::Control::Device::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (phone.is_set || is_set(phone.yfilter)) leaf_name_data.push_back(phone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Macro::Auto::Control::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Macro::Auto::Control::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Macro::Auto::Control::Device::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "phone")
    {
        phone = value;
        phone.value_namespace = name_space;
        phone.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Macro::Auto::Control::Device::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "phone")
    {
        phone.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Macro::Auto::Control::Device::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "phone")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::DualActive::DualActive()
    :
    fast_hello{YType::empty, "fast-hello"}
{

    yang_name = "dual-active"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::DualActive::~DualActive()
{
}

bool Native::Interface::TwentyFiveGigE::DualActive::has_data() const
{
    if (is_presence_container) return true;
    return fast_hello.is_set;
}

bool Native::Interface::TwentyFiveGigE::DualActive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_hello.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::DualActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:dual-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::DualActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_hello.is_set || is_set(fast_hello.yfilter)) leaf_name_data.push_back(fast_hello.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::DualActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::DualActive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::DualActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-hello")
    {
        fast_hello = value;
        fast_hello.value_namespace = name_space;
        fast_hello.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::DualActive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-hello")
    {
        fast_hello.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::DualActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-hello")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::LoadBalancing::LoadBalancing()
    :
    flow{YType::empty, "flow"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "load-balancing"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::LoadBalancing::~LoadBalancing()
{
}

bool Native::Interface::TwentyFiveGigE::LoadBalancing::has_data() const
{
    if (is_presence_container) return true;
    return flow.is_set
	|| vlan.is_set;
}

bool Native::Interface::TwentyFiveGigE::LoadBalancing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::LoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:load-balancing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::LoadBalancing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow.is_set || is_set(flow.yfilter)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::LoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::LoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::LoadBalancing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow")
    {
        flow = value;
        flow.value_namespace = name_space;
        flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::LoadBalancing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow")
    {
        flow.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::LoadBalancing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow" || name == "vlan")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::VlanRange::VlanRange()
    :
    id{YType::str, "id"}
        ,
    service_policy(std::make_shared<Native::Interface::TwentyFiveGigE::VlanRange::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "vlan-range"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::VlanRange::~VlanRange()
{
}

bool Native::Interface::TwentyFiveGigE::VlanRange::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::Interface::TwentyFiveGigE::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:vlan-range";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::TwentyFiveGigE::VlanRange::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "id")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::VlanRange::ServicePolicy::ServicePolicy()
    :
    input{YType::str, "input"},
    output{YType::str, "output"}
{

    yang_name = "service-policy"; yang_parent_name = "vlan-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::VlanRange::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::TwentyFiveGigE::VlanRange::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return input.is_set
	|| output.is_set;
}

bool Native::Interface::TwentyFiveGigE::VlanRange::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::VlanRange::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::VlanRange::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::VlanRange::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::VlanRange::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::VlanRange::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::VlanRange::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::VlanRange::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switch::Switch()
    :
    virtual_(std::make_shared<Native::Interface::TwentyFiveGigE::Switch::Virtual>())
{
    virtual_->parent = this;

    yang_name = "switch"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switch::~Switch()
{
}

bool Native::Interface::TwentyFiveGigE::Switch::has_data() const
{
    if (is_presence_container) return true;
    return (virtual_ !=  nullptr && virtual_->has_data());
}

bool Native::Interface::TwentyFiveGigE::Switch::has_operation() const
{
    return is_set(yfilter)
	|| (virtual_ !=  nullptr && virtual_->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual")
    {
        if(virtual_ == nullptr)
        {
            virtual_ = std::make_shared<Native::Interface::TwentyFiveGigE::Switch::Virtual>();
        }
        return virtual_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(virtual_ != nullptr)
    {
        _children["virtual"] = virtual_;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switch::Virtual::Virtual()
    :
    link{YType::uint8, "link"}
{

    yang_name = "virtual"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switch::Virtual::~Virtual()
{
}

bool Native::Interface::TwentyFiveGigE::Switch::Virtual::has_data() const
{
    if (is_presence_container) return true;
    return link.is_set;
}

bool Native::Interface::TwentyFiveGigE::Switch::Virtual::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Switch::Virtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switch::Virtual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switch::Virtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switch::Virtual::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Switch::Virtual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Switch::Virtual::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Switch::Virtual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::SrrQueue::SrrQueue()
    :
    bandwidth(std::make_shared<Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "srr-queue"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::SrrQueue::~SrrQueue()
{
}

bool Native::Interface::TwentyFiveGigE::SrrQueue::has_data() const
{
    if (is_presence_container) return true;
    return (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::TwentyFiveGigE::SrrQueue::has_operation() const
{
    return is_set(yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::SrrQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:srr-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::SrrQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::SrrQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::SrrQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::SrrQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::SrrQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::SrrQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Bandwidth()
    :
    shape(std::make_shared<Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Shape>())
    , share(std::make_shared<Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Share>())
{
    shape->parent = this;
    share->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "srr-queue"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return (shape !=  nullptr && shape->has_data())
	|| (share !=  nullptr && share->has_data());
}

bool Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (shape !=  nullptr && shape->has_operation())
	|| (share !=  nullptr && share->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "share")
    {
        if(share == nullptr)
        {
            share = std::make_shared<Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Share>();
        }
        return share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(shape != nullptr)
    {
        _children["shape"] = shape;
    }

    if(share != nullptr)
    {
        _children["share"] = share;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shape" || name == "share")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Shape::Shape()
    :
    weight1{YType::uint16, "weight1"},
    weight2{YType::uint16, "weight2"},
    weight3{YType::uint16, "weight3"},
    weight4{YType::uint16, "weight4"}
{

    yang_name = "shape"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Shape::~Shape()
{
}

bool Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Shape::has_data() const
{
    if (is_presence_container) return true;
    return weight1.is_set
	|| weight2.is_set
	|| weight3.is_set
	|| weight4.is_set;
}

bool Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Shape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(weight1.yfilter)
	|| ydk::is_set(weight2.yfilter)
	|| ydk::is_set(weight3.yfilter)
	|| ydk::is_set(weight4.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight1.is_set || is_set(weight1.yfilter)) leaf_name_data.push_back(weight1.get_name_leafdata());
    if (weight2.is_set || is_set(weight2.yfilter)) leaf_name_data.push_back(weight2.get_name_leafdata());
    if (weight3.is_set || is_set(weight3.yfilter)) leaf_name_data.push_back(weight3.get_name_leafdata());
    if (weight4.is_set || is_set(weight4.yfilter)) leaf_name_data.push_back(weight4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight1")
    {
        weight1 = value;
        weight1.value_namespace = name_space;
        weight1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight2")
    {
        weight2 = value;
        weight2.value_namespace = name_space;
        weight2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight3")
    {
        weight3 = value;
        weight3.value_namespace = name_space;
        weight3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight4")
    {
        weight4 = value;
        weight4.value_namespace = name_space;
        weight4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight1")
    {
        weight1.yfilter = yfilter;
    }
    if(value_path == "weight2")
    {
        weight2.yfilter = yfilter;
    }
    if(value_path == "weight3")
    {
        weight3.yfilter = yfilter;
    }
    if(value_path == "weight4")
    {
        weight4.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "weight1" || name == "weight2" || name == "weight3" || name == "weight4")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Share::Share()
    :
    weight1{YType::uint8, "weight1"},
    weight2{YType::uint8, "weight2"},
    weight3{YType::uint8, "weight3"},
    weight4{YType::uint8, "weight4"}
{

    yang_name = "share"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Share::~Share()
{
}

bool Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Share::has_data() const
{
    if (is_presence_container) return true;
    return weight1.is_set
	|| weight2.is_set
	|| weight3.is_set
	|| weight4.is_set;
}

bool Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Share::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(weight1.yfilter)
	|| ydk::is_set(weight2.yfilter)
	|| ydk::is_set(weight3.yfilter)
	|| ydk::is_set(weight4.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Share::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Share::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight1.is_set || is_set(weight1.yfilter)) leaf_name_data.push_back(weight1.get_name_leafdata());
    if (weight2.is_set || is_set(weight2.yfilter)) leaf_name_data.push_back(weight2.get_name_leafdata());
    if (weight3.is_set || is_set(weight3.yfilter)) leaf_name_data.push_back(weight3.get_name_leafdata());
    if (weight4.is_set || is_set(weight4.yfilter)) leaf_name_data.push_back(weight4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Share::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Share::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Share::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight1")
    {
        weight1 = value;
        weight1.value_namespace = name_space;
        weight1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight2")
    {
        weight2 = value;
        weight2.value_namespace = name_space;
        weight2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight3")
    {
        weight3 = value;
        weight3.value_namespace = name_space;
        weight3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight4")
    {
        weight4 = value;
        weight4.value_namespace = name_space;
        weight4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Share::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight1")
    {
        weight1.yfilter = yfilter;
    }
    if(value_path == "weight2")
    {
        weight2.yfilter = yfilter;
    }
    if(value_path == "weight3")
    {
        weight3.yfilter = yfilter;
    }
    if(value_path == "weight4")
    {
        weight4.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::SrrQueue::Bandwidth::Share::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "weight1" || name == "weight2" || name == "weight3" || name == "weight4")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::CiscoIOSXESwitchMacsecOption()
    :
    macsec(std::make_shared<Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec>())
{
    macsec->parent = this;

    yang_name = "macsec-option"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::~CiscoIOSXESwitchMacsecOption()
{
}

bool Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::has_data() const
{
    if (is_presence_container) return true;
    return (macsec !=  nullptr && macsec->has_data());
}

bool Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::has_operation() const
{
    return is_set(yfilter)
	|| (macsec !=  nullptr && macsec->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:macsec-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec")
    {
        if(macsec == nullptr)
        {
            macsec = std::make_shared<Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec>();
        }
        return macsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(macsec != nullptr)
    {
        _children["macsec"] = macsec;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::Macsec()
    :
    network_link{YType::empty, "network-link"}
        ,
    replay_protection(std::make_shared<Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection>())
{
    replay_protection->parent = this;

    yang_name = "macsec"; yang_parent_name = "macsec-option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::~Macsec()
{
}

bool Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::has_data() const
{
    if (is_presence_container) return true;
    return network_link.is_set
	|| (replay_protection !=  nullptr && replay_protection->has_data());
}

bool Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(network_link.yfilter)
	|| (replay_protection !=  nullptr && replay_protection->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_link.is_set || is_set(network_link.yfilter)) leaf_name_data.push_back(network_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "replay-protection")
    {
        if(replay_protection == nullptr)
        {
            replay_protection = std::make_shared<Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection>();
        }
        return replay_protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(replay_protection != nullptr)
    {
        _children["replay-protection"] = replay_protection;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-link")
    {
        network_link = value;
        network_link.value_namespace = name_space;
        network_link.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-link")
    {
        network_link.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replay-protection" || name == "network-link")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::ReplayProtection()
    :
    window_size{YType::uint32, "window-size"}
{

    yang_name = "replay-protection"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::~ReplayProtection()
{
}

bool Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::has_data() const
{
    if (is_presence_container) return true;
    return window_size.is_set;
}

bool Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window-size")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Snmp::Snmp()
    :
    ifindex(std::make_shared<Native::Interface::TwentyFiveGigE::Snmp::Ifindex>())
    , trap(std::make_shared<Native::Interface::TwentyFiveGigE::Snmp::Trap>())
{
    ifindex->parent = this;
    trap->parent = this;

    yang_name = "snmp"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Snmp::~Snmp()
{
}

bool Native::Interface::TwentyFiveGigE::Snmp::has_data() const
{
    if (is_presence_container) return true;
    return (ifindex !=  nullptr && ifindex->has_data())
	|| (trap !=  nullptr && trap->has_data());
}

bool Native::Interface::TwentyFiveGigE::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (ifindex !=  nullptr && ifindex->has_operation())
	|| (trap !=  nullptr && trap->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Interface::TwentyFiveGigE::Snmp::Ifindex>();
        }
        return ifindex;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Interface::TwentyFiveGigE::Snmp::Trap>();
        }
        return trap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ifindex != nullptr)
    {
        _children["ifindex"] = ifindex;
    }

    if(trap != nullptr)
    {
        _children["trap"] = trap;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifindex" || name == "trap")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Snmp::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"},
    clear{YType::boolean, "clear"}
{

    yang_name = "ifindex"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::TwentyFiveGigE::Snmp::Ifindex::has_data() const
{
    if (is_presence_container) return true;
    return persist.is_set
	|| clear.is_set;
}

bool Native::Interface::TwentyFiveGigE::Snmp::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter)
	|| ydk::is_set(clear.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Snmp::Ifindex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());
    if (clear.is_set || is_set(clear.yfilter)) leaf_name_data.push_back(clear.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Snmp::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear")
    {
        clear = value;
        clear.value_namespace = name_space;
        clear.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Snmp::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
    if(value_path == "clear")
    {
        clear.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Snmp::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist" || name == "clear")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Snmp::Trap::Trap()
    :
    link_status{YType::boolean, "link-status"}
        ,
    link_status_capas(std::make_shared<Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas>())
{
    link_status_capas->parent = this;

    yang_name = "trap"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Snmp::Trap::~Trap()
{
}

bool Native::Interface::TwentyFiveGigE::Snmp::Trap::has_data() const
{
    if (is_presence_container) return true;
    return link_status.is_set
	|| (link_status_capas !=  nullptr && link_status_capas->has_data());
}

bool Native::Interface::TwentyFiveGigE::Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_status.yfilter)
	|| (link_status_capas !=  nullptr && link_status_capas->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Snmp::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status-capas")
    {
        if(link_status_capas == nullptr)
        {
            link_status_capas = std::make_shared<Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas>();
        }
        return link_status_capas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link_status_capas != nullptr)
    {
        _children["link-status-capas"] = link_status_capas;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status-capas" || name == "link-status")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatusCapas()
    :
    link_status(std::make_shared<Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus>())
{
    link_status->parent = this;

    yang_name = "link-status-capas"; yang_parent_name = "trap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::~LinkStatusCapas()
{
}

bool Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::has_data() const
{
    if (is_presence_container) return true;
    return (link_status !=  nullptr && link_status->has_data());
}

bool Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::has_operation() const
{
    return is_set(yfilter)
	|| (link_status !=  nullptr && link_status->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status-capas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status")
    {
        if(link_status == nullptr)
        {
            link_status = std::make_shared<Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus>();
        }
        return link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link_status != nullptr)
    {
        _children["link-status"] = link_status;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::LinkStatus()
    :
    permit(std::make_shared<Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit>())
{
    permit->parent = this;

    yang_name = "link-status"; yang_parent_name = "link-status-capas"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::~LinkStatus()
{
}

bool Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::has_data() const
{
    if (is_presence_container) return true;
    return (permit !=  nullptr && permit->has_data());
}

bool Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::has_operation() const
{
    return is_set(yfilter)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::Permit()
    :
    duplicates{YType::empty, "duplicates"}
{

    yang_name = "permit"; yang_parent_name = "link-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::~Permit()
{
}

bool Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_data() const
{
    if (is_presence_container) return true;
    return duplicates.is_set;
}

bool Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duplicates.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplicates.is_set || is_set(duplicates.yfilter)) leaf_name_data.push_back(duplicates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duplicates")
    {
        duplicates = value;
        duplicates.value_namespace = name_space;
        duplicates.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duplicates")
    {
        duplicates.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duplicates")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Crypto::Crypto()
    :
    map(std::make_shared<Native::Interface::TwentyFiveGigE::Crypto::Map>())
    , ipsec(std::make_shared<Native::Interface::TwentyFiveGigE::Crypto::Ipsec>())
{
    map->parent = this;
    ipsec->parent = this;

    yang_name = "crypto"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Crypto::~Crypto()
{
}

bool Native::Interface::TwentyFiveGigE::Crypto::has_data() const
{
    if (is_presence_container) return true;
    return (map !=  nullptr && map->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::TwentyFiveGigE::Crypto::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Crypto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::TwentyFiveGigE::Crypto::Map>();
        }
        return map;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::TwentyFiveGigE::Crypto::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map != nullptr)
    {
        _children["map"] = map;
    }

    if(ipsec != nullptr)
    {
        _children["ipsec"] = ipsec;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map" || name == "ipsec")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Crypto::Map::Map()
    :
    tag{YType::str, "tag"},
    redundancy{YType::str, "redundancy"},
    stateful{YType::empty, "stateful"}
{

    yang_name = "map"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Crypto::Map::~Map()
{
}

bool Native::Interface::TwentyFiveGigE::Crypto::Map::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set
	|| redundancy.is_set
	|| stateful.is_set;
}

bool Native::Interface::TwentyFiveGigE::Crypto::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(stateful.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Crypto::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Crypto::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Crypto::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Crypto::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Crypto::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Crypto::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Crypto::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag" || name == "redundancy" || name == "stateful")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Crypto::Ipsec::Ipsec()
    :
    df_bit{YType::enumeration, "df-bit"},
    fragmentation{YType::enumeration, "fragmentation"}
{

    yang_name = "ipsec"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Crypto::Ipsec::~Ipsec()
{
}

bool Native::Interface::TwentyFiveGigE::Crypto::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return df_bit.is_set
	|| fragmentation.is_set;
}

bool Native::Interface::TwentyFiveGigE::Crypto::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(df_bit.yfilter)
	|| ydk::is_set(fragmentation.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Crypto::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Crypto::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.yfilter)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Crypto::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Crypto::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Crypto::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "df-bit")
    {
        df_bit = value;
        df_bit.value_namespace = name_space;
        df_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
        fragmentation.value_namespace = name_space;
        fragmentation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Crypto::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "df-bit")
    {
        df_bit.yfilter = yfilter;
    }
    if(value_path == "fragmentation")
    {
        fragmentation.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Crypto::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "df-bit" || name == "fragmentation")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Mka::Mka()
    :
    policy(std::make_shared<Native::Interface::TwentyFiveGigE::Mka::Policy>())
    , pre_shared_key(std::make_shared<Native::Interface::TwentyFiveGigE::Mka::PreSharedKey>())
{
    policy->parent = this;
    pre_shared_key->parent = this;

    yang_name = "mka"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Mka::~Mka()
{
}

bool Native::Interface::TwentyFiveGigE::Mka::has_data() const
{
    if (is_presence_container) return true;
    return (policy !=  nullptr && policy->has_data())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_data());
}

bool Native::Interface::TwentyFiveGigE::Mka::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Mka::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mka:mka";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Mka::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Mka::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::TwentyFiveGigE::Mka::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "pre-shared-key")
    {
        if(pre_shared_key == nullptr)
        {
            pre_shared_key = std::make_shared<Native::Interface::TwentyFiveGigE::Mka::PreSharedKey>();
        }
        return pre_shared_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Mka::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(pre_shared_key != nullptr)
    {
        _children["pre-shared-key"] = pre_shared_key;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Mka::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Mka::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Mka::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "pre-shared-key")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Mka::Policy::Policy()
    :
    name{YType::str, "name"}
{

    yang_name = "policy"; yang_parent_name = "mka"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Mka::Policy::~Policy()
{
}

bool Native::Interface::TwentyFiveGigE::Mka::Policy::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::TwentyFiveGigE::Mka::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Mka::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Mka::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Mka::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Mka::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Mka::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Mka::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Mka::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::PreSharedKey()
    :
    key_chain(std::make_shared<Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::KeyChain>())
{
    key_chain->parent = this;

    yang_name = "pre-shared-key"; yang_parent_name = "mka"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::~PreSharedKey()
{
}

bool Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::has_data() const
{
    if (is_presence_container) return true;
    return (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::has_operation() const
{
    return is_set(yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_chain != nullptr)
    {
        _children["key-chain"] = key_chain;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::KeyChain::~KeyChain()
{
}

bool Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Mka::PreSharedKey::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::EtAnalytics::EtAnalytics()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "et-analytics"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::EtAnalytics::~EtAnalytics()
{
}

bool Native::Interface::TwentyFiveGigE::EtAnalytics::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Interface::TwentyFiveGigE::EtAnalytics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::EtAnalytics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eta:et-analytics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::EtAnalytics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::EtAnalytics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::EtAnalytics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::EtAnalytics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::EtAnalytics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::EtAnalytics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::ZoneMember::ZoneMember()
    :
    security{YType::str, "security"}
{

    yang_name = "zone-member"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::ZoneMember::~ZoneMember()
{
}

bool Native::Interface::TwentyFiveGigE::ZoneMember::has_data() const
{
    if (is_presence_container) return true;
    return security.is_set;
}

bool Native::Interface::TwentyFiveGigE::ZoneMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::ZoneMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:zone-member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::ZoneMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::ZoneMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::ZoneMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::ZoneMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::ZoneMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::ZoneMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Utd::Utd()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "utd"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Utd::~Utd()
{
}

bool Native::Interface::TwentyFiveGigE::Utd::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Interface::TwentyFiveGigE::Utd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd:utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    sequence{YType::enumeration, "sequence"},
    pw_class{YType::str, "pw-class"}
{

    yang_name = "xconnect"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Xconnect::~Xconnect()
{
}

bool Native::Interface::TwentyFiveGigE::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| sequence.is_set
	|| pw_class.is_set;
}

bool Native::Interface::TwentyFiveGigE::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(pw_class.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual")
    {
        manual = value;
        manual.value_namespace = name_space;
        manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "sequence" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Evpn::Evpn()
    :
    ethernet_segment(this, {"es_value"})
{

    yang_name = "evpn"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Evpn::~Evpn()
{
}

bool Native::Interface::TwentyFiveGigE::Evpn::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet_segment.len(); index++)
    {
        if(ethernet_segment[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::TwentyFiveGigE::Evpn::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment.len(); index++)
    {
        if(ethernet_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment")
    {
        auto ent_ = std::make_shared<Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment>();
        ent_->parent = this;
        ethernet_segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet_segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::EthernetSegment()
    :
    es_value{YType::uint16, "es-value"},
    sytem_mac{YType::str, "sytem-mac"}
        ,
    df_election(std::make_shared<Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::DfElection>())
    , redundancy(std::make_shared<Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::Redundancy>())
{
    df_election->parent = this;
    redundancy->parent = this;

    yang_name = "ethernet-segment"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::~EthernetSegment()
{
}

bool Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::has_data() const
{
    if (is_presence_container) return true;
    return es_value.is_set
	|| sytem_mac.is_set
	|| (df_election !=  nullptr && df_election->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(es_value.yfilter)
	|| ydk::is_set(sytem_mac.yfilter)
	|| (df_election !=  nullptr && df_election->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment";
    ADD_KEY_TOKEN(es_value, "es-value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (es_value.is_set || is_set(es_value.yfilter)) leaf_name_data.push_back(es_value.get_name_leafdata());
    if (sytem_mac.is_set || is_set(sytem_mac.yfilter)) leaf_name_data.push_back(sytem_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "df-election")
    {
        if(df_election == nullptr)
        {
            df_election = std::make_shared<Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::DfElection>();
        }
        return df_election;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(df_election != nullptr)
    {
        _children["df-election"] = df_election;
    }

    if(redundancy != nullptr)
    {
        _children["redundancy"] = redundancy;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "es-value")
    {
        es_value = value;
        es_value.value_namespace = name_space;
        es_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sytem-mac")
    {
        sytem_mac = value;
        sytem_mac.value_namespace = name_space;
        sytem_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "es-value")
    {
        es_value.yfilter = yfilter;
    }
    if(value_path == "sytem-mac")
    {
        sytem_mac.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "df-election" || name == "redundancy" || name == "es-value" || name == "sytem-mac")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::DfElection::DfElection()
    :
    wait_time{YType::uint8, "wait-time"}
{

    yang_name = "df-election"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::DfElection::~DfElection()
{
}

bool Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::DfElection::has_data() const
{
    if (is_presence_container) return true;
    return wait_time.is_set;
}

bool Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::DfElection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::DfElection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "df-election";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::DfElection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::DfElection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::DfElection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::DfElection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::DfElection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::DfElection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wait-time")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::Redundancy::Redundancy()
    :
    all_active{YType::empty, "all-active"},
    single_active{YType::empty, "single-active"}
{

    yang_name = "redundancy"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::Redundancy::~Redundancy()
{
}

bool Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return all_active.is_set
	|| single_active.is_set;
}

bool Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_active.yfilter)
	|| ydk::is_set(single_active.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_active.is_set || is_set(all_active.yfilter)) leaf_name_data.push_back(all_active.get_name_leafdata());
    if (single_active.is_set || is_set(single_active.yfilter)) leaf_name_data.push_back(single_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-active")
    {
        all_active = value;
        all_active.value_namespace = name_space;
        all_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "single-active")
    {
        single_active = value;
        single_active.value_namespace = name_space;
        single_active.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-active")
    {
        all_active.yfilter = yfilter;
    }
    if(value_path == "single-active")
    {
        single_active.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Evpn::EthernetSegment::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-active" || name == "single-active")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::FabricDomain::FabricDomain()
    :
    iwan_fabric(std::make_shared<Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric>())
{
    iwan_fabric->parent = this;

    yang_name = "fabric-domain"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::FabricDomain::~FabricDomain()
{
}

bool Native::Interface::TwentyFiveGigE::FabricDomain::has_data() const
{
    if (is_presence_container) return true;
    return (iwan_fabric !=  nullptr && iwan_fabric->has_data());
}

bool Native::Interface::TwentyFiveGigE::FabricDomain::has_operation() const
{
    return is_set(yfilter)
	|| (iwan_fabric !=  nullptr && iwan_fabric->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::FabricDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-iwanfabric:fabric-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::FabricDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::FabricDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iwan-fabric")
    {
        if(iwan_fabric == nullptr)
        {
            iwan_fabric = std::make_shared<Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric>();
        }
        return iwan_fabric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::FabricDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iwan_fabric != nullptr)
    {
        _children["iwan-fabric"] = iwan_fabric;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::FabricDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::FabricDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::FabricDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iwan-fabric")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::IwanFabric()
    :
    word(this, {"word"})
{

    yang_name = "iwan-fabric"; yang_parent_name = "fabric-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::~IwanFabric()
{
}

bool Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::has_operation() const
{
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iwan-fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "word")
    {
        auto ent_ = std::make_shared<Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::Word>();
        ent_->parent = this;
        word.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : word.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::Word::Word()
    :
    word{YType::str, "word"},
    interface_id{YType::uint8, "interface-id"}
{

    yang_name = "word"; yang_parent_name = "iwan-fabric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::Word::~Word()
{
}

bool Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::Word::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| interface_id.is_set;
}

bool Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::Word::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(interface_id.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::Word::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "word";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::Word::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::Word::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::Word::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::Word::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::Word::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::FabricDomain::IwanFabric::Word::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "interface-id")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Mvrp::Mvrp()
    :
    mvrp{YType::empty, "mvrp"}
        ,
    registration(std::make_shared<Native::Interface::TwentyFiveGigE::Mvrp::Registration>())
    , timer(std::make_shared<Native::Interface::TwentyFiveGigE::Mvrp::Timer>())
{
    registration->parent = this;
    timer->parent = this;

    yang_name = "mvrp"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Mvrp::~Mvrp()
{
}

bool Native::Interface::TwentyFiveGigE::Mvrp::has_data() const
{
    if (is_presence_container) return true;
    return mvrp.is_set
	|| (registration !=  nullptr && registration->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Interface::TwentyFiveGigE::Mvrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mvrp.yfilter)
	|| (registration !=  nullptr && registration->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Mvrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mvrp:mvrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Mvrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mvrp.is_set || is_set(mvrp.yfilter)) leaf_name_data.push_back(mvrp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Mvrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Interface::TwentyFiveGigE::Mvrp::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Interface::TwentyFiveGigE::Mvrp::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Mvrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(registration != nullptr)
    {
        _children["registration"] = registration;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Mvrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mvrp")
    {
        mvrp = value;
        mvrp.value_namespace = name_space;
        mvrp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Mvrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mvrp")
    {
        mvrp.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Mvrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "registration" || name == "timer" || name == "mvrp")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Mvrp::Registration::Registration()
    :
    fixed{YType::empty, "fixed"},
    forbidden{YType::empty, "forbidden"},
    normal{YType::empty, "normal"}
{

    yang_name = "registration"; yang_parent_name = "mvrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Mvrp::Registration::~Registration()
{
}

bool Native::Interface::TwentyFiveGigE::Mvrp::Registration::has_data() const
{
    if (is_presence_container) return true;
    return fixed.is_set
	|| forbidden.is_set
	|| normal.is_set;
}

bool Native::Interface::TwentyFiveGigE::Mvrp::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed.yfilter)
	|| ydk::is_set(forbidden.yfilter)
	|| ydk::is_set(normal.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Mvrp::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Mvrp::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed.is_set || is_set(fixed.yfilter)) leaf_name_data.push_back(fixed.get_name_leafdata());
    if (forbidden.is_set || is_set(forbidden.yfilter)) leaf_name_data.push_back(forbidden.get_name_leafdata());
    if (normal.is_set || is_set(normal.yfilter)) leaf_name_data.push_back(normal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Mvrp::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Mvrp::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Mvrp::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed")
    {
        fixed = value;
        fixed.value_namespace = name_space;
        fixed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forbidden")
    {
        forbidden = value;
        forbidden.value_namespace = name_space;
        forbidden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "normal")
    {
        normal = value;
        normal.value_namespace = name_space;
        normal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Mvrp::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed")
    {
        fixed.yfilter = yfilter;
    }
    if(value_path == "forbidden")
    {
        forbidden.yfilter = yfilter;
    }
    if(value_path == "normal")
    {
        normal.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Mvrp::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed" || name == "forbidden" || name == "normal")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Mvrp::Timer::Timer()
    :
    periodic{YType::empty, "periodic"}
        ,
    join(nullptr) // presence node
    , leave(nullptr) // presence node
    , leave_all(nullptr) // presence node
{

    yang_name = "timer"; yang_parent_name = "mvrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Mvrp::Timer::~Timer()
{
}

bool Native::Interface::TwentyFiveGigE::Mvrp::Timer::has_data() const
{
    if (is_presence_container) return true;
    return periodic.is_set
	|| (join !=  nullptr && join->has_data())
	|| (leave !=  nullptr && leave->has_data())
	|| (leave_all !=  nullptr && leave_all->has_data());
}

bool Native::Interface::TwentyFiveGigE::Mvrp::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(periodic.yfilter)
	|| (join !=  nullptr && join->has_operation())
	|| (leave !=  nullptr && leave->has_operation())
	|| (leave_all !=  nullptr && leave_all->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Mvrp::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Mvrp::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Mvrp::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join")
    {
        if(join == nullptr)
        {
            join = std::make_shared<Native::Interface::TwentyFiveGigE::Mvrp::Timer::Join>();
        }
        return join;
    }

    if(child_yang_name == "leave")
    {
        if(leave == nullptr)
        {
            leave = std::make_shared<Native::Interface::TwentyFiveGigE::Mvrp::Timer::Leave>();
        }
        return leave;
    }

    if(child_yang_name == "leave-all")
    {
        if(leave_all == nullptr)
        {
            leave_all = std::make_shared<Native::Interface::TwentyFiveGigE::Mvrp::Timer::LeaveAll>();
        }
        return leave_all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Mvrp::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(join != nullptr)
    {
        _children["join"] = join;
    }

    if(leave != nullptr)
    {
        _children["leave"] = leave;
    }

    if(leave_all != nullptr)
    {
        _children["leave-all"] = leave_all;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Mvrp::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Mvrp::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Mvrp::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "join" || name == "leave" || name == "leave-all" || name == "periodic")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Mvrp::Timer::Join::Join()
    :
    y_range{YType::uint32, "_range"}
{

    yang_name = "join"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Mvrp::Timer::Join::~Join()
{
}

bool Native::Interface::TwentyFiveGigE::Mvrp::Timer::Join::has_data() const
{
    if (is_presence_container) return true;
    return y_range.is_set;
}

bool Native::Interface::TwentyFiveGigE::Mvrp::Timer::Join::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_range.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Mvrp::Timer::Join::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Mvrp::Timer::Join::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_range.is_set || is_set(y_range.yfilter)) leaf_name_data.push_back(y_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Mvrp::Timer::Join::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Mvrp::Timer::Join::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Mvrp::Timer::Join::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_range")
    {
        y_range = value;
        y_range.value_namespace = name_space;
        y_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Mvrp::Timer::Join::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_range")
    {
        y_range.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Mvrp::Timer::Join::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_range")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Mvrp::Timer::Leave::Leave()
    :
    y_range{YType::uint32, "_range"}
{

    yang_name = "leave"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Mvrp::Timer::Leave::~Leave()
{
}

bool Native::Interface::TwentyFiveGigE::Mvrp::Timer::Leave::has_data() const
{
    if (is_presence_container) return true;
    return y_range.is_set;
}

bool Native::Interface::TwentyFiveGigE::Mvrp::Timer::Leave::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_range.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Mvrp::Timer::Leave::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leave";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Mvrp::Timer::Leave::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_range.is_set || is_set(y_range.yfilter)) leaf_name_data.push_back(y_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Mvrp::Timer::Leave::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Mvrp::Timer::Leave::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Mvrp::Timer::Leave::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_range")
    {
        y_range = value;
        y_range.value_namespace = name_space;
        y_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Mvrp::Timer::Leave::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_range")
    {
        y_range.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Mvrp::Timer::Leave::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_range")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Mvrp::Timer::LeaveAll::LeaveAll()
    :
    y_range{YType::uint32, "_range"}
{

    yang_name = "leave-all"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Mvrp::Timer::LeaveAll::~LeaveAll()
{
}

bool Native::Interface::TwentyFiveGigE::Mvrp::Timer::LeaveAll::has_data() const
{
    if (is_presence_container) return true;
    return y_range.is_set;
}

bool Native::Interface::TwentyFiveGigE::Mvrp::Timer::LeaveAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_range.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Mvrp::Timer::LeaveAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leave-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Mvrp::Timer::LeaveAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_range.is_set || is_set(y_range.yfilter)) leaf_name_data.push_back(y_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Mvrp::Timer::LeaveAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Mvrp::Timer::LeaveAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Mvrp::Timer::LeaveAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_range")
    {
        y_range = value;
        y_range.value_namespace = name_space;
        y_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Mvrp::Timer::LeaveAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_range")
    {
        y_range.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Mvrp::Timer::LeaveAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_range")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Lisp::Lisp()
    :
    extended_subnet_mode{YType::empty, "extended-subnet-mode"}
        ,
    mobility(std::make_shared<Native::Interface::TwentyFiveGigE::Lisp::Mobility>())
{
    mobility->parent = this;

    yang_name = "lisp"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Lisp::~Lisp()
{
}

bool Native::Interface::TwentyFiveGigE::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return extended_subnet_mode.is_set
	|| (mobility !=  nullptr && mobility->has_data());
}

bool Native::Interface::TwentyFiveGigE::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_subnet_mode.yfilter)
	|| (mobility !=  nullptr && mobility->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_subnet_mode.is_set || is_set(extended_subnet_mode.yfilter)) leaf_name_data.push_back(extended_subnet_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mobility")
    {
        if(mobility == nullptr)
        {
            mobility = std::make_shared<Native::Interface::TwentyFiveGigE::Lisp::Mobility>();
        }
        return mobility;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mobility != nullptr)
    {
        _children["mobility"] = mobility;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode = value;
        extended_subnet_mode.value_namespace = name_space;
        extended_subnet_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mobility" || name == "extended-subnet-mode")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Lisp::Mobility::Mobility()
    :
    dynamic_eid(this, {"dynamic_eid_name"})
    , discover(std::make_shared<Native::Interface::TwentyFiveGigE::Lisp::Mobility::Discover>())
    , liveness(std::make_shared<Native::Interface::TwentyFiveGigE::Lisp::Mobility::Liveness>())
{
    discover->parent = this;
    liveness->parent = this;

    yang_name = "mobility"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Lisp::Mobility::~Mobility()
{
}

bool Native::Interface::TwentyFiveGigE::Lisp::Mobility::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dynamic_eid.len(); index++)
    {
        if(dynamic_eid[index]->has_data())
            return true;
    }
    return (discover !=  nullptr && discover->has_data())
	|| (liveness !=  nullptr && liveness->has_data());
}

bool Native::Interface::TwentyFiveGigE::Lisp::Mobility::has_operation() const
{
    for (std::size_t index=0; index<dynamic_eid.len(); index++)
    {
        if(dynamic_eid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (discover !=  nullptr && discover->has_operation())
	|| (liveness !=  nullptr && liveness->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Lisp::Mobility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Lisp::Mobility::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Lisp::Mobility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic-eid")
    {
        auto ent_ = std::make_shared<Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid>();
        ent_->parent = this;
        dynamic_eid.append(ent_);
        return ent_;
    }

    if(child_yang_name == "discover")
    {
        if(discover == nullptr)
        {
            discover = std::make_shared<Native::Interface::TwentyFiveGigE::Lisp::Mobility::Discover>();
        }
        return discover;
    }

    if(child_yang_name == "liveness")
    {
        if(liveness == nullptr)
        {
            liveness = std::make_shared<Native::Interface::TwentyFiveGigE::Lisp::Mobility::Liveness>();
        }
        return liveness;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Lisp::Mobility::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dynamic_eid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(discover != nullptr)
    {
        _children["discover"] = discover;
    }

    if(liveness != nullptr)
    {
        _children["liveness"] = liveness;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Lisp::Mobility::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Lisp::Mobility::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Lisp::Mobility::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-eid" || name == "discover" || name == "liveness")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::DynamicEid()
    :
    dynamic_eid_name{YType::str, "dynamic-eid-name"}
        ,
    nbr_proxy_reply(nullptr) // presence node
{

    yang_name = "dynamic-eid"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::~DynamicEid()
{
}

bool Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::has_data() const
{
    if (is_presence_container) return true;
    return dynamic_eid_name.is_set
	|| (nbr_proxy_reply !=  nullptr && nbr_proxy_reply->has_data());
}

bool Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic_eid_name.yfilter)
	|| (nbr_proxy_reply !=  nullptr && nbr_proxy_reply->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-eid";
    ADD_KEY_TOKEN(dynamic_eid_name, "dynamic-eid-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_eid_name.is_set || is_set(dynamic_eid_name.yfilter)) leaf_name_data.push_back(dynamic_eid_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbr-proxy-reply")
    {
        if(nbr_proxy_reply == nullptr)
        {
            nbr_proxy_reply = std::make_shared<Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::NbrProxyReply>();
        }
        return nbr_proxy_reply;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nbr_proxy_reply != nullptr)
    {
        _children["nbr-proxy-reply"] = nbr_proxy_reply;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name = value;
        dynamic_eid_name.value_namespace = name_space;
        dynamic_eid_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr-proxy-reply" || name == "dynamic-eid-name")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::NbrProxyReply::NbrProxyReply()
    :
    requests{YType::uint8, "requests"}
{

    yang_name = "nbr-proxy-reply"; yang_parent_name = "dynamic-eid"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::NbrProxyReply::~NbrProxyReply()
{
}

bool Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::NbrProxyReply::has_data() const
{
    if (is_presence_container) return true;
    return requests.is_set;
}

bool Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::NbrProxyReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(requests.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::NbrProxyReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-proxy-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::NbrProxyReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::NbrProxyReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::NbrProxyReply::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::NbrProxyReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::NbrProxyReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Lisp::Mobility::DynamicEid::NbrProxyReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "requests")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Lisp::Mobility::Discover::Discover()
    :
    arp{YType::boolean, "arp"}
{

    yang_name = "discover"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Lisp::Mobility::Discover::~Discover()
{
}

bool Native::Interface::TwentyFiveGigE::Lisp::Mobility::Discover::has_data() const
{
    if (is_presence_container) return true;
    return arp.is_set;
}

bool Native::Interface::TwentyFiveGigE::Lisp::Mobility::Discover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arp.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Lisp::Mobility::Discover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Lisp::Mobility::Discover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp.is_set || is_set(arp.yfilter)) leaf_name_data.push_back(arp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Lisp::Mobility::Discover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Lisp::Mobility::Discover::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Lisp::Mobility::Discover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arp")
    {
        arp = value;
        arp.value_namespace = name_space;
        arp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Lisp::Mobility::Discover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arp")
    {
        arp.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Lisp::Mobility::Discover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Lisp::Mobility::Liveness::Liveness()
    :
    test{YType::boolean, "test"},
    ttl{YType::uint8, "ttl"}
{

    yang_name = "liveness"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Lisp::Mobility::Liveness::~Liveness()
{
}

bool Native::Interface::TwentyFiveGigE::Lisp::Mobility::Liveness::has_data() const
{
    if (is_presence_container) return true;
    return test.is_set
	|| ttl.is_set;
}

bool Native::Interface::TwentyFiveGigE::Lisp::Mobility::Liveness::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Lisp::Mobility::Liveness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "liveness";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Lisp::Mobility::Liveness::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test.is_set || is_set(test.yfilter)) leaf_name_data.push_back(test.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Lisp::Mobility::Liveness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Lisp::Mobility::Liveness::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Lisp::Mobility::Liveness::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test")
    {
        test = value;
        test.value_namespace = name_space;
        test.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Lisp::Mobility::Liveness::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test")
    {
        test.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Lisp::Mobility::Liveness::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "ttl")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Power::Power()
    :
    inline_(std::make_shared<Native::Interface::TwentyFiveGigE::Power::Inline>())
{
    inline_->parent = this;

    yang_name = "power"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Power::~Power()
{
}

bool Native::Interface::TwentyFiveGigE::Power::has_data() const
{
    if (is_presence_container) return true;
    return (inline_ !=  nullptr && inline_->has_data());
}

bool Native::Interface::TwentyFiveGigE::Power::has_operation() const
{
    return is_set(yfilter)
	|| (inline_ !=  nullptr && inline_->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-power:power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inline")
    {
        if(inline_ == nullptr)
        {
            inline_ = std::make_shared<Native::Interface::TwentyFiveGigE::Power::Inline>();
        }
        return inline_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Power::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inline_ != nullptr)
    {
        _children["inline"] = inline_;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Power::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inline")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Power::Inline::Inline()
    :
    consumption{YType::uint16, "consumption"},
    never{YType::empty, "never"}
        ,
    auto_(nullptr) // presence node
    , four_pair(std::make_shared<Native::Interface::TwentyFiveGigE::Power::Inline::FourPair>())
    , police(nullptr) // presence node
    , port(std::make_shared<Native::Interface::TwentyFiveGigE::Power::Inline::Port>())
    , static_(nullptr) // presence node
{
    four_pair->parent = this;
    port->parent = this;

    yang_name = "inline"; yang_parent_name = "power"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Power::Inline::~Inline()
{
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::has_data() const
{
    if (is_presence_container) return true;
    return consumption.is_set
	|| never.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_pair !=  nullptr && four_pair->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(consumption.yfilter)
	|| ydk::is_set(never.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_pair !=  nullptr && four_pair->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Power::Inline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inline";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Power::Inline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (consumption.is_set || is_set(consumption.yfilter)) leaf_name_data.push_back(consumption.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Power::Inline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::TwentyFiveGigE::Power::Inline::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "four-pair")
    {
        if(four_pair == nullptr)
        {
            four_pair = std::make_shared<Native::Interface::TwentyFiveGigE::Power::Inline::FourPair>();
        }
        return four_pair;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Interface::TwentyFiveGigE::Power::Inline::Police>();
        }
        return police;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::TwentyFiveGigE::Power::Inline::Port>();
        }
        return port;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Interface::TwentyFiveGigE::Power::Inline::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Power::Inline::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_ != nullptr)
    {
        _children["auto"] = auto_;
    }

    if(four_pair != nullptr)
    {
        _children["four-pair"] = four_pair;
    }

    if(police != nullptr)
    {
        _children["police"] = police;
    }

    if(port != nullptr)
    {
        _children["port"] = port;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Power::Inline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "consumption")
    {
        consumption = value;
        consumption.value_namespace = name_space;
        consumption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Power::Inline::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "consumption")
    {
        consumption.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "four-pair" || name == "police" || name == "port" || name == "static" || name == "consumption" || name == "never")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Power::Inline::Auto::Auto()
    :
    max{YType::int32, "max"}
{

    yang_name = "auto"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Power::Inline::Auto::~Auto()
{
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::Auto::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set;
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Power::Inline::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Power::Inline::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Power::Inline::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Power::Inline::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Power::Inline::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Power::Inline::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Power::Inline::FourPair::FourPair()
    :
    forced{YType::empty, "forced"}
{

    yang_name = "four-pair"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Power::Inline::FourPair::~FourPair()
{
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::FourPair::has_data() const
{
    if (is_presence_container) return true;
    return forced.is_set;
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::FourPair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forced.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Power::Inline::FourPair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-pair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Power::Inline::FourPair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Power::Inline::FourPair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Power::Inline::FourPair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Power::Inline::FourPair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Power::Inline::FourPair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::FourPair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forced")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Power::Inline::Police::Police()
    :
    action(std::make_shared<Native::Interface::TwentyFiveGigE::Power::Inline::Police::Action>())
{
    action->parent = this;

    yang_name = "police"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Power::Inline::Police::~Police()
{
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::Police::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::Police::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Power::Inline::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Power::Inline::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Power::Inline::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::TwentyFiveGigE::Power::Inline::Police::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Power::Inline::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Power::Inline::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Power::Inline::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Power::Inline::Police::Action::Action()
    :
    errdisable{YType::empty, "errdisable"},
    log{YType::empty, "log"}
{

    yang_name = "action"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Power::Inline::Police::Action::~Action()
{
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::Police::Action::has_data() const
{
    if (is_presence_container) return true;
    return errdisable.is_set
	|| log.is_set;
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::Police::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(errdisable.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Power::Inline::Police::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Power::Inline::Police::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (errdisable.is_set || is_set(errdisable.yfilter)) leaf_name_data.push_back(errdisable.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Power::Inline::Police::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Power::Inline::Police::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Power::Inline::Police::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "errdisable")
    {
        errdisable = value;
        errdisable.value_namespace = name_space;
        errdisable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Power::Inline::Police::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "errdisable")
    {
        errdisable.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::Police::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "errdisable" || name == "log")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Power::Inline::Port::Port()
    :
    poe_ha{YType::empty, "poe-ha"},
    perpetual_poe_ha{YType::empty, "perpetual-poe-ha"},
    two_event{YType::empty, "two-event"}
{

    yang_name = "port"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Power::Inline::Port::~Port()
{
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::Port::has_data() const
{
    if (is_presence_container) return true;
    return poe_ha.is_set
	|| perpetual_poe_ha.is_set
	|| two_event.is_set;
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(poe_ha.yfilter)
	|| ydk::is_set(perpetual_poe_ha.yfilter)
	|| ydk::is_set(two_event.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Power::Inline::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Power::Inline::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (poe_ha.is_set || is_set(poe_ha.yfilter)) leaf_name_data.push_back(poe_ha.get_name_leafdata());
    if (perpetual_poe_ha.is_set || is_set(perpetual_poe_ha.yfilter)) leaf_name_data.push_back(perpetual_poe_ha.get_name_leafdata());
    if (two_event.is_set || is_set(two_event.yfilter)) leaf_name_data.push_back(two_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Power::Inline::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Power::Inline::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Power::Inline::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "poe-ha")
    {
        poe_ha = value;
        poe_ha.value_namespace = name_space;
        poe_ha.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "perpetual-poe-ha")
    {
        perpetual_poe_ha = value;
        perpetual_poe_ha.value_namespace = name_space;
        perpetual_poe_ha.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-event")
    {
        two_event = value;
        two_event.value_namespace = name_space;
        two_event.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Power::Inline::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "poe-ha")
    {
        poe_ha.yfilter = yfilter;
    }
    if(value_path == "perpetual-poe-ha")
    {
        perpetual_poe_ha.yfilter = yfilter;
    }
    if(value_path == "two-event")
    {
        two_event.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "poe-ha" || name == "perpetual-poe-ha" || name == "two-event")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Power::Inline::Static::Static()
    :
    max{YType::int32, "max"}
{

    yang_name = "static"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Power::Inline::Static::~Static()
{
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::Static::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set;
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Power::Inline::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Power::Inline::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Power::Inline::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Power::Inline::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Power::Inline::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Power::Inline::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Power::Inline::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Cdp::Cdp()
    :
    enable{YType::boolean, "enable"}
        ,
    tlv(std::make_shared<Native::Interface::TwentyFiveGigE::Cdp::Tlv>())
{
    tlv->parent = this;

    yang_name = "cdp"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Cdp::~Cdp()
{
}

bool Native::Interface::TwentyFiveGigE::Cdp::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (tlv !=  nullptr && tlv->has_data());
}

bool Native::Interface::TwentyFiveGigE::Cdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (tlv !=  nullptr && tlv->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cdp:cdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Cdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<Native::Interface::TwentyFiveGigE::Cdp::Tlv>();
        }
        return tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv != nullptr)
    {
        _children["tlv"] = tlv;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Cdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Cdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Cdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv" || name == "enable")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Cdp::Tlv::Tlv()
    :
    server_location{YType::empty, "server-location"},
    location{YType::empty, "location"}
        ,
    app(nullptr) // presence node
{

    yang_name = "tlv"; yang_parent_name = "cdp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Cdp::Tlv::~Tlv()
{
}

bool Native::Interface::TwentyFiveGigE::Cdp::Tlv::has_data() const
{
    if (is_presence_container) return true;
    return server_location.is_set
	|| location.is_set
	|| (app !=  nullptr && app->has_data());
}

bool Native::Interface::TwentyFiveGigE::Cdp::Tlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_location.yfilter)
	|| ydk::is_set(location.yfilter)
	|| (app !=  nullptr && app->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Cdp::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Cdp::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_location.is_set || is_set(server_location.yfilter)) leaf_name_data.push_back(server_location.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Cdp::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "app")
    {
        if(app == nullptr)
        {
            app = std::make_shared<Native::Interface::TwentyFiveGigE::Cdp::Tlv::App>();
        }
        return app;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Cdp::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(app != nullptr)
    {
        _children["app"] = app;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Cdp::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-location")
    {
        server_location = value;
        server_location.value_namespace = name_space;
        server_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Cdp::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-location")
    {
        server_location.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Cdp::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app" || name == "server-location" || name == "location")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Cdp::Tlv::App::App()
    :
    tlvtype{YType::uint16, "tlvtype"},
    value_{YType::str, "value"}
{

    yang_name = "app"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Cdp::Tlv::App::~App()
{
}

bool Native::Interface::TwentyFiveGigE::Cdp::Tlv::App::has_data() const
{
    if (is_presence_container) return true;
    return tlvtype.is_set
	|| value_.is_set;
}

bool Native::Interface::TwentyFiveGigE::Cdp::Tlv::App::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tlvtype.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Cdp::Tlv::App::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Cdp::Tlv::App::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlvtype.is_set || is_set(tlvtype.yfilter)) leaf_name_data.push_back(tlvtype.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Cdp::Tlv::App::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Cdp::Tlv::App::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Cdp::Tlv::App::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlvtype")
    {
        tlvtype = value;
        tlvtype.value_namespace = name_space;
        tlvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Cdp::Tlv::App::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlvtype")
    {
        tlvtype.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Cdp::Tlv::App::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlvtype" || name == "value")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ntp::Ntp()
    :
    broadcast{YType::empty, "broadcast"}
        ,
    broadcast_option(std::make_shared<Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption>())
{
    broadcast_option->parent = this;

    yang_name = "ntp"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ntp::~Ntp()
{
}

bool Native::Interface::TwentyFiveGigE::Ntp::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| (broadcast_option !=  nullptr && broadcast_option->has_data());
}

bool Native::Interface::TwentyFiveGigE::Ntp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| (broadcast_option !=  nullptr && broadcast_option->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:ntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-option")
    {
        if(broadcast_option == nullptr)
        {
            broadcast_option = std::make_shared<Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption>();
        }
        return broadcast_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(broadcast_option != nullptr)
    {
        _children["broadcast-option"] = broadcast_option;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Ntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-option" || name == "broadcast")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::BroadcastOption()
    :
    broadcast(std::make_shared<Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::Broadcast>())
{
    broadcast->parent = this;

    yang_name = "broadcast-option"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::~BroadcastOption()
{
}

bool Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::has_data() const
{
    if (is_presence_container) return true;
    return (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(broadcast != nullptr)
    {
        _children["broadcast"] = broadcast;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::Broadcast::Broadcast()
    :
    client{YType::empty, "client"}
{

    yang_name = "broadcast"; yang_parent_name = "broadcast-option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::Broadcast::~Broadcast()
{
}

bool Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::Broadcast::has_data() const
{
    if (is_presence_container) return true;
    return client.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ntp::BroadcastOption::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Authentication()
    :
    control_direction{YType::enumeration, "control-direction"},
    fallback{YType::str, "fallback"},
    host_mode{YType::enumeration, "host-mode"},
    open{YType::empty, "open"},
    port_control{YType::enumeration, "port-control"},
    periodic{YType::empty, "periodic"},
    violation{YType::enumeration, "violation"}
        ,
    event(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event>())
    , order(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Order>())
    , priority(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Priority>())
    , timer(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Timer>())
{
    event->parent = this;
    order->parent = this;
    priority->parent = this;
    timer->parent = this;

    yang_name = "authentication"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::~Authentication()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return control_direction.is_set
	|| fallback.is_set
	|| host_mode.is_set
	|| open.is_set
	|| port_control.is_set
	|| periodic.is_set
	|| violation.is_set
	|| (event !=  nullptr && event->has_data())
	|| (order !=  nullptr && order->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Interface::TwentyFiveGigE::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control_direction.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(host_mode.yfilter)
	|| ydk::is_set(open.yfilter)
	|| ydk::is_set(port_control.yfilter)
	|| ydk::is_set(periodic.yfilter)
	|| ydk::is_set(violation.yfilter)
	|| (event !=  nullptr && event->has_operation())
	|| (order !=  nullptr && order->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_direction.is_set || is_set(control_direction.yfilter)) leaf_name_data.push_back(control_direction.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.yfilter)) leaf_name_data.push_back(host_mode.get_name_leafdata());
    if (open.is_set || is_set(open.yfilter)) leaf_name_data.push_back(open.get_name_leafdata());
    if (port_control.is_set || is_set(port_control.yfilter)) leaf_name_data.push_back(port_control.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());
    if (violation.is_set || is_set(violation.yfilter)) leaf_name_data.push_back(violation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event>();
        }
        return event;
    }

    if(child_yang_name == "order")
    {
        if(order == nullptr)
        {
            order = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Order>();
        }
        return order;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(event != nullptr)
    {
        _children["event"] = event;
    }

    if(order != nullptr)
    {
        _children["order"] = order;
    }

    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control-direction")
    {
        control_direction = value;
        control_direction.value_namespace = name_space;
        control_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
        host_mode.value_namespace = name_space;
        host_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open")
    {
        open = value;
        open.value_namespace = name_space;
        open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-control")
    {
        port_control = value;
        port_control.value_namespace = name_space;
        port_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violation")
    {
        violation = value;
        violation.value_namespace = name_space;
        violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control-direction")
    {
        control_direction.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "host-mode")
    {
        host_mode.yfilter = yfilter;
    }
    if(value_path == "open")
    {
        open.yfilter = yfilter;
    }
    if(value_path == "port-control")
    {
        port_control.yfilter = yfilter;
    }
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
    if(value_path == "violation")
    {
        violation.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "order" || name == "priority" || name == "timer" || name == "control-direction" || name == "fallback" || name == "host-mode" || name == "open" || name == "port-control" || name == "periodic" || name == "violation")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Event()
    :
    server(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Server>())
    , fail(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Fail>())
    , no_response(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse>())
{
    server->parent = this;
    fail->parent = this;
    no_response->parent = this;

    yang_name = "event"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Event::~Event()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::has_data() const
{
    if (is_presence_container) return true;
    return (server !=  nullptr && server->has_data())
	|| (fail !=  nullptr && fail->has_data())
	|| (no_response !=  nullptr && no_response->has_data());
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::has_operation() const
{
    return is_set(yfilter)
	|| (server !=  nullptr && server->has_operation())
	|| (fail !=  nullptr && fail->has_operation())
	|| (no_response !=  nullptr && no_response->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Server>();
        }
        return server;
    }

    if(child_yang_name == "fail")
    {
        if(fail == nullptr)
        {
            fail = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Fail>();
        }
        return fail;
    }

    if(child_yang_name == "no-response")
    {
        if(no_response == nullptr)
        {
            no_response = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse>();
        }
        return no_response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(server != nullptr)
    {
        _children["server"] = server;
    }

    if(fail != nullptr)
    {
        _children["fail"] = fail;
    }

    if(no_response != nullptr)
    {
        _children["no-response"] = no_response;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server" || name == "fail" || name == "no-response")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Server()
    :
    alive(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive>())
    , dead(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead>())
{
    alive->parent = this;
    dead->parent = this;

    yang_name = "server"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Server::~Server()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::has_data() const
{
    if (is_presence_container) return true;
    return (alive !=  nullptr && alive->has_data())
	|| (dead !=  nullptr && dead->has_data());
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::has_operation() const
{
    return is_set(yfilter)
	|| (alive !=  nullptr && alive->has_operation())
	|| (dead !=  nullptr && dead->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Event::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Event::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Event::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alive")
    {
        if(alive == nullptr)
        {
            alive = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive>();
        }
        return alive;
    }

    if(child_yang_name == "dead")
    {
        if(dead == nullptr)
        {
            dead = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead>();
        }
        return dead;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Event::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(alive != nullptr)
    {
        _children["alive"] = alive;
    }

    if(dead != nullptr)
    {
        _children["dead"] = dead;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alive" || name == "dead")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::Alive()
    :
    action(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::Action>())
{
    action->parent = this;

    yang_name = "alive"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::~Alive()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::Action::Action()
    :
    reinitialize{YType::empty, "reinitialize"}
{

    yang_name = "action"; yang_parent_name = "alive"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::Action::~Action()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::Action::has_data() const
{
    if (is_presence_container) return true;
    return reinitialize.is_set;
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reinitialize.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reinitialize.is_set || is_set(reinitialize.yfilter)) leaf_name_data.push_back(reinitialize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reinitialize")
    {
        reinitialize = value;
        reinitialize.value_namespace = name_space;
        reinitialize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reinitialize")
    {
        reinitialize.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Alive::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reinitialize")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Dead()
    :
    action(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action>())
{
    action->parent = this;

    yang_name = "dead"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::~Dead()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Action()
    :
    authorize(nullptr) // presence node
    , reinitialize(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Reinitialize>())
{
    reinitialize->parent = this;

    yang_name = "action"; yang_parent_name = "dead"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::~Action()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::has_data() const
{
    if (is_presence_container) return true;
    return (authorize !=  nullptr && authorize->has_data())
	|| (reinitialize !=  nullptr && reinitialize->has_data());
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::has_operation() const
{
    return is_set(yfilter)
	|| (authorize !=  nullptr && authorize->has_operation())
	|| (reinitialize !=  nullptr && reinitialize->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Authorize>();
        }
        return authorize;
    }

    if(child_yang_name == "reinitialize")
    {
        if(reinitialize == nullptr)
        {
            reinitialize = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Reinitialize>();
        }
        return reinitialize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorize != nullptr)
    {
        _children["authorize"] = authorize;
    }

    if(reinitialize != nullptr)
    {
        _children["reinitialize"] = reinitialize;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorize" || name == "reinitialize")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"},
    voice{YType::empty, "voice"}
{

    yang_name = "authorize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Authorize::~Authorize()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Authorize::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| voice.is_set;
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Authorize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(voice.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Authorize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (voice.is_set || is_set(voice.yfilter)) leaf_name_data.push_back(voice.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Authorize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voice")
    {
        voice = value;
        voice.value_namespace = name_space;
        voice.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Authorize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "voice")
    {
        voice.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Authorize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "voice")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Reinitialize::Reinitialize()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "reinitialize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Reinitialize::~Reinitialize()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Reinitialize::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Reinitialize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Reinitialize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reinitialize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Reinitialize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Reinitialize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Reinitialize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Reinitialize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Reinitialize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Server::Dead::Action::Reinitialize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Fail()
    :
    action(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action>())
{
    action->parent = this;

    yang_name = "fail"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::~Fail()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::Action()
    :
    authorize(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::Authorize>())
{
    authorize->parent = this;

    yang_name = "action"; yang_parent_name = "fail"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::~Action()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::has_data() const
{
    if (is_presence_container) return true;
    return (authorize !=  nullptr && authorize->has_data());
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::has_operation() const
{
    return is_set(yfilter)
	|| (authorize !=  nullptr && authorize->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::Authorize>();
        }
        return authorize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorize != nullptr)
    {
        _children["authorize"] = authorize;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorize")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "authorize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::Authorize::~Authorize()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::Authorize::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::Authorize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::Authorize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::Authorize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::Authorize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::Fail::Action::Authorize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::NoResponse()
    :
    action(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action>())
{
    action->parent = this;

    yang_name = "no-response"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::~NoResponse()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::Action()
    :
    authorize(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::Authorize>())
{
    authorize->parent = this;

    yang_name = "action"; yang_parent_name = "no-response"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::~Action()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::has_data() const
{
    if (is_presence_container) return true;
    return (authorize !=  nullptr && authorize->has_data());
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::has_operation() const
{
    return is_set(yfilter)
	|| (authorize !=  nullptr && authorize->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::Authorize>();
        }
        return authorize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorize != nullptr)
    {
        _children["authorize"] = authorize;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorize")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "authorize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::Authorize::~Authorize()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::Authorize::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::Authorize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::Authorize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::Authorize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::Authorize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Authentication::Event::NoResponse::Action::Authorize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Order::Order()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "order"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Order::~Order()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Order::has_data() const
{
    if (is_presence_container) return true;
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Interface::TwentyFiveGigE::Authentication::Order::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Order::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "order";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Order::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Order::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Order::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Order::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Authentication::Order::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Authentication::Order::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Priority::Priority()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "priority"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Priority::~Priority()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Priority::has_data() const
{
    if (is_presence_container) return true;
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Interface::TwentyFiveGigE::Authentication::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Authentication::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Authentication::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Timer::Timer()
    :
    restart{YType::uint16, "restart"}
        ,
    reauthenticate(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Timer::Reauthenticate>())
    , inactivity(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity>())
{
    reauthenticate->parent = this;
    inactivity->parent = this;

    yang_name = "timer"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Timer::~Timer()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Timer::has_data() const
{
    if (is_presence_container) return true;
    return restart.is_set
	|| (reauthenticate !=  nullptr && reauthenticate->has_data())
	|| (inactivity !=  nullptr && inactivity->has_data());
}

bool Native::Interface::TwentyFiveGigE::Authentication::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart.yfilter)
	|| (reauthenticate !=  nullptr && reauthenticate->has_operation())
	|| (inactivity !=  nullptr && inactivity->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reauthenticate")
    {
        if(reauthenticate == nullptr)
        {
            reauthenticate = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Timer::Reauthenticate>();
        }
        return reauthenticate;
    }

    if(child_yang_name == "inactivity")
    {
        if(inactivity == nullptr)
        {
            inactivity = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity>();
        }
        return inactivity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reauthenticate != nullptr)
    {
        _children["reauthenticate"] = reauthenticate;
    }

    if(inactivity != nullptr)
    {
        _children["inactivity"] = inactivity;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Authentication::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Authentication::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reauthenticate" || name == "inactivity" || name == "restart")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Timer::Reauthenticate::Reauthenticate()
    :
    value_{YType::uint16, "value"},
    server{YType::empty, "server"}
{

    yang_name = "reauthenticate"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Timer::Reauthenticate::~Reauthenticate()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Timer::Reauthenticate::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| server.is_set;
}

bool Native::Interface::TwentyFiveGigE::Authentication::Timer::Reauthenticate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(server.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Timer::Reauthenticate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reauthenticate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Timer::Reauthenticate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Timer::Reauthenticate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Timer::Reauthenticate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Timer::Reauthenticate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Authentication::Timer::Reauthenticate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Authentication::Timer::Reauthenticate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "server")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Inactivity()
    :
    value_(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Value>())
    , server(nullptr) // presence node
{
    value_->parent = this;

    yang_name = "inactivity"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::~Inactivity()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::has_data() const
{
    if (is_presence_container) return true;
    return (value_ !=  nullptr && value_->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::has_operation() const
{
    return is_set(yfilter)
	|| (value_ !=  nullptr && value_->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactivity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Value>();
        }
        return value_;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(value_ != nullptr)
    {
        _children["value"] = value_;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "server")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Value::Value()
    :
    value_{YType::uint16, "value"},
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "value"; yang_parent_name = "inactivity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Value::~Value()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Value::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| dynamic.is_set;
}

bool Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Value::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Value::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Value::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Value::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Value::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Value::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Value::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Value::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "dynamic")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Server::Server()
    :
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "server"; yang_parent_name = "inactivity"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Server::~Server()
{
}

bool Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Server::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set;
}

bool Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Authentication::Timer::Inactivity::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Mab::Mab()
    :
    eap{YType::empty, "eap"}
{

    yang_name = "mab"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Mab::~Mab()
{
}

bool Native::Interface::TwentyFiveGigE::Mab::has_data() const
{
    if (is_presence_container) return true;
    return eap.is_set;
}

bool Native::Interface::TwentyFiveGigE::Mab::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eap.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:mab";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Mab::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eap.is_set || is_set(eap.yfilter)) leaf_name_data.push_back(eap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Mab::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eap")
    {
        eap = value;
        eap.value_namespace = name_space;
        eap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Mab::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eap")
    {
        eap.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Mab::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Dot1x::Dot1x()
    :
    credentials{YType::str, "credentials"},
    max_reauth_req{YType::uint8, "max-reauth-req"},
    max_req{YType::uint8, "max-req"},
    max_start{YType::uint8, "max-start"},
    pae{YType::enumeration, "pae"}
        ,
    authenticator(std::make_shared<Native::Interface::TwentyFiveGigE::Dot1x::Authenticator>())
    , supplicant(std::make_shared<Native::Interface::TwentyFiveGigE::Dot1x::Supplicant>())
    , timeout(std::make_shared<Native::Interface::TwentyFiveGigE::Dot1x::Timeout>())
{
    authenticator->parent = this;
    supplicant->parent = this;
    timeout->parent = this;

    yang_name = "dot1x"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Dot1x::~Dot1x()
{
}

bool Native::Interface::TwentyFiveGigE::Dot1x::has_data() const
{
    if (is_presence_container) return true;
    return credentials.is_set
	|| max_reauth_req.is_set
	|| max_req.is_set
	|| max_start.is_set
	|| pae.is_set
	|| (authenticator !=  nullptr && authenticator->has_data())
	|| (supplicant !=  nullptr && supplicant->has_data())
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::Interface::TwentyFiveGigE::Dot1x::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(credentials.yfilter)
	|| ydk::is_set(max_reauth_req.yfilter)
	|| ydk::is_set(max_req.yfilter)
	|| ydk::is_set(max_start.yfilter)
	|| ydk::is_set(pae.yfilter)
	|| (authenticator !=  nullptr && authenticator->has_operation())
	|| (supplicant !=  nullptr && supplicant->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Dot1x::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Dot1x::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (credentials.is_set || is_set(credentials.yfilter)) leaf_name_data.push_back(credentials.get_name_leafdata());
    if (max_reauth_req.is_set || is_set(max_reauth_req.yfilter)) leaf_name_data.push_back(max_reauth_req.get_name_leafdata());
    if (max_req.is_set || is_set(max_req.yfilter)) leaf_name_data.push_back(max_req.get_name_leafdata());
    if (max_start.is_set || is_set(max_start.yfilter)) leaf_name_data.push_back(max_start.get_name_leafdata());
    if (pae.is_set || is_set(pae.yfilter)) leaf_name_data.push_back(pae.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Dot1x::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authenticator")
    {
        if(authenticator == nullptr)
        {
            authenticator = std::make_shared<Native::Interface::TwentyFiveGigE::Dot1x::Authenticator>();
        }
        return authenticator;
    }

    if(child_yang_name == "supplicant")
    {
        if(supplicant == nullptr)
        {
            supplicant = std::make_shared<Native::Interface::TwentyFiveGigE::Dot1x::Supplicant>();
        }
        return supplicant;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Interface::TwentyFiveGigE::Dot1x::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Dot1x::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authenticator != nullptr)
    {
        _children["authenticator"] = authenticator;
    }

    if(supplicant != nullptr)
    {
        _children["supplicant"] = supplicant;
    }

    if(timeout != nullptr)
    {
        _children["timeout"] = timeout;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Dot1x::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "credentials")
    {
        credentials = value;
        credentials.value_namespace = name_space;
        credentials.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reauth-req")
    {
        max_reauth_req = value;
        max_reauth_req.value_namespace = name_space;
        max_reauth_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-req")
    {
        max_req = value;
        max_req.value_namespace = name_space;
        max_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-start")
    {
        max_start = value;
        max_start.value_namespace = name_space;
        max_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pae")
    {
        pae = value;
        pae.value_namespace = name_space;
        pae.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Dot1x::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "credentials")
    {
        credentials.yfilter = yfilter;
    }
    if(value_path == "max-reauth-req")
    {
        max_reauth_req.yfilter = yfilter;
    }
    if(value_path == "max-req")
    {
        max_req.yfilter = yfilter;
    }
    if(value_path == "max-start")
    {
        max_start.yfilter = yfilter;
    }
    if(value_path == "pae")
    {
        pae.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Dot1x::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authenticator" || name == "supplicant" || name == "timeout" || name == "credentials" || name == "max-reauth-req" || name == "max-req" || name == "max-start" || name == "pae")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::Authenticator()
    :
    eap(std::make_shared<Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::Eap>())
{
    eap->parent = this;

    yang_name = "authenticator"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::~Authenticator()
{
}

bool Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::has_data() const
{
    if (is_presence_container) return true;
    return (eap !=  nullptr && eap->has_data());
}

bool Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::has_operation() const
{
    return is_set(yfilter)
	|| (eap !=  nullptr && eap->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::Eap>();
        }
        return eap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(eap != nullptr)
    {
        _children["eap"] = eap;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::Eap::Eap()
    :
    profile{YType::str, "profile"}
{

    yang_name = "eap"; yang_parent_name = "authenticator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::Eap::~Eap()
{
}

bool Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::Eap::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set;
}

bool Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::Eap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Dot1x::Authenticator::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::Supplicant()
    :
    eap(std::make_shared<Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::Eap>())
{
    eap->parent = this;

    yang_name = "supplicant"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::~Supplicant()
{
}

bool Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::has_data() const
{
    if (is_presence_container) return true;
    return (eap !=  nullptr && eap->has_data());
}

bool Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::has_operation() const
{
    return is_set(yfilter)
	|| (eap !=  nullptr && eap->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supplicant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::Eap>();
        }
        return eap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(eap != nullptr)
    {
        _children["eap"] = eap;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::Eap::Eap()
    :
    profile{YType::str, "profile"}
{

    yang_name = "eap"; yang_parent_name = "supplicant"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::Eap::~Eap()
{
}

bool Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::Eap::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set;
}

bool Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::Eap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Dot1x::Supplicant::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Dot1x::Timeout::Timeout()
    :
    auth_period{YType::uint16, "auth-period"},
    held_period{YType::uint16, "held-period"},
    quiet_period{YType::uint16, "quiet-period"},
    ratelimit_period{YType::uint16, "ratelimit-period"},
    server_timeout{YType::uint16, "server-timeout"},
    start_period{YType::uint16, "start-period"},
    supp_timeout{YType::uint16, "supp-timeout"},
    tx_period{YType::uint16, "tx-period"}
{

    yang_name = "timeout"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Dot1x::Timeout::~Timeout()
{
}

bool Native::Interface::TwentyFiveGigE::Dot1x::Timeout::has_data() const
{
    if (is_presence_container) return true;
    return auth_period.is_set
	|| held_period.is_set
	|| quiet_period.is_set
	|| ratelimit_period.is_set
	|| server_timeout.is_set
	|| start_period.is_set
	|| supp_timeout.is_set
	|| tx_period.is_set;
}

bool Native::Interface::TwentyFiveGigE::Dot1x::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_period.yfilter)
	|| ydk::is_set(held_period.yfilter)
	|| ydk::is_set(quiet_period.yfilter)
	|| ydk::is_set(ratelimit_period.yfilter)
	|| ydk::is_set(server_timeout.yfilter)
	|| ydk::is_set(start_period.yfilter)
	|| ydk::is_set(supp_timeout.yfilter)
	|| ydk::is_set(tx_period.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Dot1x::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Dot1x::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_period.is_set || is_set(auth_period.yfilter)) leaf_name_data.push_back(auth_period.get_name_leafdata());
    if (held_period.is_set || is_set(held_period.yfilter)) leaf_name_data.push_back(held_period.get_name_leafdata());
    if (quiet_period.is_set || is_set(quiet_period.yfilter)) leaf_name_data.push_back(quiet_period.get_name_leafdata());
    if (ratelimit_period.is_set || is_set(ratelimit_period.yfilter)) leaf_name_data.push_back(ratelimit_period.get_name_leafdata());
    if (server_timeout.is_set || is_set(server_timeout.yfilter)) leaf_name_data.push_back(server_timeout.get_name_leafdata());
    if (start_period.is_set || is_set(start_period.yfilter)) leaf_name_data.push_back(start_period.get_name_leafdata());
    if (supp_timeout.is_set || is_set(supp_timeout.yfilter)) leaf_name_data.push_back(supp_timeout.get_name_leafdata());
    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Dot1x::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Dot1x::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Dot1x::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-period")
    {
        auth_period = value;
        auth_period.value_namespace = name_space;
        auth_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "held-period")
    {
        held_period = value;
        held_period.value_namespace = name_space;
        held_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quiet-period")
    {
        quiet_period = value;
        quiet_period.value_namespace = name_space;
        quiet_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit-period")
    {
        ratelimit_period = value;
        ratelimit_period.value_namespace = name_space;
        ratelimit_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-timeout")
    {
        server_timeout = value;
        server_timeout.value_namespace = name_space;
        server_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-period")
    {
        start_period = value;
        start_period.value_namespace = name_space;
        start_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supp-timeout")
    {
        supp_timeout = value;
        supp_timeout.value_namespace = name_space;
        supp_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Dot1x::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-period")
    {
        auth_period.yfilter = yfilter;
    }
    if(value_path == "held-period")
    {
        held_period.yfilter = yfilter;
    }
    if(value_path == "quiet-period")
    {
        quiet_period.yfilter = yfilter;
    }
    if(value_path == "ratelimit-period")
    {
        ratelimit_period.yfilter = yfilter;
    }
    if(value_path == "server-timeout")
    {
        server_timeout.yfilter = yfilter;
    }
    if(value_path == "start-period")
    {
        start_period.yfilter = yfilter;
    }
    if(value_path == "supp-timeout")
    {
        supp_timeout.yfilter = yfilter;
    }
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Dot1x::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-period" || name == "held-period" || name == "quiet-period" || name == "ratelimit-period" || name == "server-timeout" || name == "start-period" || name == "supp-timeout" || name == "tx-period")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::SpanningTree::SpanningTree()
    :
    bpdufilter{YType::enumeration, "bpdufilter"},
    cost{YType::uint32, "cost"},
    guard{YType::enumeration, "guard"},
    link_type{YType::enumeration, "link-type"},
    port_priority{YType::uint8, "port-priority"}
        ,
    bpduguard(std::make_shared<Native::Interface::TwentyFiveGigE::SpanningTree::Bpduguard>())
    , portfast(nullptr) // presence node
    , vlan(this, {"vlan_ids"})
    , loopguard(std::make_shared<Native::Interface::TwentyFiveGigE::SpanningTree::Loopguard>())
    , mst(std::make_shared<Native::Interface::TwentyFiveGigE::SpanningTree::Mst>())
{
    bpduguard->parent = this;
    loopguard->parent = this;
    mst->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::SpanningTree::~SpanningTree()
{
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return bpdufilter.is_set
	|| cost.is_set
	|| guard.is_set
	|| link_type.is_set
	|| port_priority.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data())
	|| (loopguard !=  nullptr && loopguard->has_data())
	|| (mst !=  nullptr && mst->has_data());
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::has_operation() const
{
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bpdufilter.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(guard.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation())
	|| (loopguard !=  nullptr && loopguard->has_operation())
	|| (mst !=  nullptr && mst->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bpdufilter.is_set || is_set(bpdufilter.yfilter)) leaf_name_data.push_back(bpdufilter.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (guard.is_set || is_set(guard.yfilter)) leaf_name_data.push_back(guard.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::Interface::TwentyFiveGigE::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::Interface::TwentyFiveGigE::SpanningTree::Portfast>();
        }
        return portfast;
    }

    if(child_yang_name == "vlan")
    {
        auto ent_ = std::make_shared<Native::Interface::TwentyFiveGigE::SpanningTree::Vlan>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    if(child_yang_name == "loopguard")
    {
        if(loopguard == nullptr)
        {
            loopguard = std::make_shared<Native::Interface::TwentyFiveGigE::SpanningTree::Loopguard>();
        }
        return loopguard;
    }

    if(child_yang_name == "mst")
    {
        if(mst == nullptr)
        {
            mst = std::make_shared<Native::Interface::TwentyFiveGigE::SpanningTree::Mst>();
        }
        return mst;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bpduguard != nullptr)
    {
        _children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        _children["portfast"] = portfast;
    }

    count_ = 0;
    for (auto ent_ : vlan.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(loopguard != nullptr)
    {
        _children["loopguard"] = loopguard;
    }

    if(mst != nullptr)
    {
        _children["mst"] = mst;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bpdufilter")
    {
        bpdufilter = value;
        bpdufilter.value_namespace = name_space;
        bpdufilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "guard")
    {
        guard = value;
        guard.value_namespace = name_space;
        guard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bpdufilter")
    {
        bpdufilter.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "guard")
    {
        guard.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "vlan" || name == "loopguard" || name == "mst" || name == "bpdufilter" || name == "cost" || name == "guard" || name == "link-type" || name == "port-priority")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::SpanningTree::Bpduguard::Bpduguard()
    :
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"}
{

    yang_name = "bpduguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::Bpduguard::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| enable.is_set;
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::SpanningTree::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "enable")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    trunk{YType::empty, "trunk"},
    edge{YType::empty, "edge"}
{

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::SpanningTree::Portfast::~Portfast()
{
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::Portfast::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| trunk.is_set
	|| edge.is_set;
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(edge.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "trunk" || name == "edge")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::SpanningTree::Vlan::Vlan()
    :
    vlan_ids{YType::str, "vlan-ids"},
    cost{YType::uint32, "cost"},
    port_priority{YType::uint16, "port-priority"}
{

    yang_name = "vlan"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::SpanningTree::Vlan::~Vlan()
{
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return vlan_ids.is_set
	|| cost.is_set
	|| port_priority.is_set;
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_ids.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(port_priority.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::SpanningTree::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    ADD_KEY_TOKEN(vlan_ids, "vlan-ids");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::SpanningTree::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_ids.is_set || is_set(vlan_ids.yfilter)) leaf_name_data.push_back(vlan_ids.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::SpanningTree::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::SpanningTree::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::SpanningTree::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-ids")
    {
        vlan_ids = value;
        vlan_ids.value_namespace = name_space;
        vlan_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::SpanningTree::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-ids")
    {
        vlan_ids.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-ids" || name == "cost" || name == "port-priority")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::SpanningTree::Loopguard::Loopguard()
    :
    default_{YType::empty, "default"}
{

    yang_name = "loopguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::SpanningTree::Loopguard::~Loopguard()
{
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::Loopguard::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set;
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::Loopguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::SpanningTree::Loopguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::SpanningTree::Loopguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::SpanningTree::Loopguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::SpanningTree::Loopguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::SpanningTree::Loopguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::SpanningTree::Loopguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::Loopguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::SpanningTree::Mst::Mst()
    :
    pre_standard{YType::empty, "pre-standard"}
        ,
    mst_instance(this, {"instance"})
{

    yang_name = "mst"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::SpanningTree::Mst::~Mst()
{
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::Mst::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mst_instance.len(); index++)
    {
        if(mst_instance[index]->has_data())
            return true;
    }
    return pre_standard.is_set;
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::Mst::has_operation() const
{
    for (std::size_t index=0; index<mst_instance.len(); index++)
    {
        if(mst_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pre_standard.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::SpanningTree::Mst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::SpanningTree::Mst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_standard.is_set || is_set(pre_standard.yfilter)) leaf_name_data.push_back(pre_standard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::SpanningTree::Mst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mst-instance")
    {
        auto ent_ = std::make_shared<Native::Interface::TwentyFiveGigE::SpanningTree::Mst::MstInstance>();
        ent_->parent = this;
        mst_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::SpanningTree::Mst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mst_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::SpanningTree::Mst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-standard")
    {
        pre_standard = value;
        pre_standard.value_namespace = name_space;
        pre_standard.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::SpanningTree::Mst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-standard")
    {
        pre_standard.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::Mst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst-instance" || name == "pre-standard")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::SpanningTree::Mst::MstInstance::MstInstance()
    :
    instance{YType::str, "instance"},
    cost{YType::uint32, "cost"},
    port_priority{YType::uint16, "port-priority"}
{

    yang_name = "mst-instance"; yang_parent_name = "mst"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::SpanningTree::Mst::MstInstance::~MstInstance()
{
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::Mst::MstInstance::has_data() const
{
    if (is_presence_container) return true;
    return instance.is_set
	|| cost.is_set
	|| port_priority.is_set;
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::Mst::MstInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(port_priority.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::SpanningTree::Mst::MstInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mst-instance";
    ADD_KEY_TOKEN(instance, "instance");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::SpanningTree::Mst::MstInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::SpanningTree::Mst::MstInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::SpanningTree::Mst::MstInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::SpanningTree::Mst::MstInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::SpanningTree::Mst::MstInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::SpanningTree::Mst::MstInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "cost" || name == "port-priority")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Performance::Performance()
    :
    monitor(std::make_shared<Native::Interface::TwentyFiveGigE::Performance::Monitor>())
{
    monitor->parent = this;

    yang_name = "performance"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Performance::~Performance()
{
}

bool Native::Interface::TwentyFiveGigE::Performance::has_data() const
{
    if (is_presence_container) return true;
    return (monitor !=  nullptr && monitor->has_data());
}

bool Native::Interface::TwentyFiveGigE::Performance::has_operation() const
{
    return is_set(yfilter)
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Performance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ezpm:performance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Performance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Performance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Interface::TwentyFiveGigE::Performance::Monitor>();
        }
        return monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Performance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(monitor != nullptr)
    {
        _children["monitor"] = monitor;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Performance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Performance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Performance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Performance::Monitor::Monitor()
    :
    context{YType::str, "context"}
{

    yang_name = "monitor"; yang_parent_name = "performance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Performance::Monitor::~Monitor()
{
}

bool Native::Interface::TwentyFiveGigE::Performance::Monitor::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : context.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::TwentyFiveGigE::Performance::Monitor::has_operation() const
{
    for (auto const & leaf : context.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(context.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Performance::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Performance::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto context_name_datas = context.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), context_name_datas.begin(), context_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Performance::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Performance::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Performance::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context")
    {
        context.append(value);
    }
}

void Native::Interface::TwentyFiveGigE::Performance::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Performance::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Umbrella::Umbrella()
    :
    out{YType::empty, "out"},
    in{YType::str, "in"}
{

    yang_name = "umbrella"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Umbrella::~Umbrella()
{
}

bool Native::Interface::TwentyFiveGigE::Umbrella::has_data() const
{
    if (is_presence_container) return true;
    return out.is_set
	|| in.is_set;
}

bool Native::Interface::TwentyFiveGigE::Umbrella::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Umbrella::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-umbrella:umbrella";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Umbrella::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Umbrella::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Umbrella::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Umbrella::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Umbrella::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Umbrella::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Lldp::Lldp()
    :
    receive{YType::boolean, "receive"},
    transmit{YType::boolean, "transmit"}
{

    yang_name = "lldp"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Lldp::~Lldp()
{
}

bool Native::Interface::TwentyFiveGigE::Lldp::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set
	|| transmit.is_set;
}

bool Native::Interface::TwentyFiveGigE::Lldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lldp:lldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Lldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Lldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Lldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Lldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "transmit")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::Ospfv3()
    :
    dead_interval{YType::uint16, "dead-interval"},
    flood_reduction{YType::empty, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    mtu_ignore{YType::empty, "mtu-ignore"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    shutdown{YType::empty, "shutdown"},
    transmit_delay{YType::uint32, "transmit-delay"}
        ,
    process_id(this, {"id"})
    , authentication(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::Authentication>())
    , bfd(nullptr) // presence node
    , cost(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::Cost>())
    , database_filter(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::DatabaseFilter>())
    , demand_circuit(nullptr) // presence node
    , encryption(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::Encryption>())
    , manet(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::Manet>())
    , multi_area(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::MultiArea>())
    , neighbor(this, {"id"})
    , network(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::Network>())
    , prefix_suppression(nullptr) // presence node
{
    authentication->parent = this;
    cost->parent = this;
    database_filter->parent = this;
    encryption->parent = this;
    manet->parent = this;
    multi_area->parent = this;
    network->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::~Ospfv3()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process_id.len(); index++)
    {
        if(process_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return dead_interval.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| mtu_ignore.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| shutdown.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (encryption !=  nullptr && encryption->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data());
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::has_operation() const
{
    for (std::size_t index=0; index<process_id.len(); index++)
    {
        if(process_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospfv3:ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-id")
    {
        auto ent_ = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId>();
        ent_->parent = this;
        process_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : process_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(cost != nullptr)
    {
        _children["cost"] = cost;
    }

    if(database_filter != nullptr)
    {
        _children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        _children["demand-circuit"] = demand_circuit;
    }

    if(encryption != nullptr)
    {
        _children["encryption"] = encryption;
    }

    if(manet != nullptr)
    {
        _children["manet"] = manet;
    }

    if(multi_area != nullptr)
    {
        _children["multi-area"] = multi_area;
    }

    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(prefix_suppression != nullptr)
    {
        _children["prefix-suppression"] = prefix_suppression;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-id" || name == "authentication" || name == "bfd" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "encryption" || name == "manet" || name == "multi-area" || name == "neighbor" || name == "network" || name == "prefix-suppression" || name == "dead-interval" || name == "flood-reduction" || name == "hello-interval" || name == "mtu-ignore" || name == "priority" || name == "retransmit-interval" || name == "shutdown" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::ProcessId()
    :
    id{YType::uint16, "id"},
    dead_interval{YType::uint16, "dead-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
        ,
    authentication(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Authentication>())
    , bfd(nullptr) // presence node
    , cost(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost>())
    , database_filter(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DatabaseFilter>())
    , demand_circuit(nullptr) // presence node
    , flood_reduction(nullptr) // presence node
    , manet(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet>())
    , mtu_ignore(nullptr) // presence node
    , multi_area(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MultiArea>())
    , neighbor(this, {"id"})
    , network(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network>())
    , prefix_suppression(nullptr) // presence node
    , shutdown(nullptr) // presence node
    , ipv4(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4>())
    , ipv6(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv6>())
{
    authentication->parent = this;
    cost->parent = this;
    database_filter->parent = this;
    manet->parent = this;
    multi_area->parent = this;
    network->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "process-id"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::~ProcessId()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return id.is_set
	|| dead_interval.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (flood_reduction !=  nullptr && flood_reduction->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (flood_reduction !=  nullptr && flood_reduction->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-id";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "flood-reduction")
    {
        if(flood_reduction == nullptr)
        {
            flood_reduction = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::FloodReduction>();
        }
        return flood_reduction;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "mtu-ignore")
    {
        if(mtu_ignore == nullptr)
        {
            mtu_ignore = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MtuIgnore>();
        }
        return mtu_ignore;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Shutdown>();
        }
        return shutdown;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(cost != nullptr)
    {
        _children["cost"] = cost;
    }

    if(database_filter != nullptr)
    {
        _children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        _children["demand-circuit"] = demand_circuit;
    }

    if(flood_reduction != nullptr)
    {
        _children["flood-reduction"] = flood_reduction;
    }

    if(manet != nullptr)
    {
        _children["manet"] = manet;
    }

    if(mtu_ignore != nullptr)
    {
        _children["mtu-ignore"] = mtu_ignore;
    }

    if(multi_area != nullptr)
    {
        _children["multi-area"] = multi_area;
    }

    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(prefix_suppression != nullptr)
    {
        _children["prefix-suppression"] = prefix_suppression;
    }

    if(shutdown != nullptr)
    {
        _children["shutdown"] = shutdown;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bfd" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "flood-reduction" || name == "manet" || name == "mtu-ignore" || name == "multi-area" || name == "neighbor" || name == "network" || name == "prefix-suppression" || name == "shutdown" || name == "ipv4" || name == "ipv6" || name == "id" || name == "dead-interval" || name == "hello-interval" || name == "priority" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
{

    yang_name = "authentication"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Authentication::~Authentication()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return key_chain.is_set
	|| null.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "null")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Bfd::~Bfd()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Cost()
    :
    value_{YType::uint32, "value"}
        ,
    dynamic(nullptr) // presence node
{

    yang_name = "cost"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::~Cost()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "value")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
        ,
    hysteresis(nullptr) // presence node
    , weight(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hysteresis != nullptr)
    {
        _children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        _children["weight"] = weight;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hysteresis" || name == "weight" || name == "default")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "hysteresis"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::has_data() const
{
    if (is_presence_container) return true;
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
    , latency(nullptr) // presence node
    , resources(nullptr) // presence node
    , throughput(nullptr) // presence node
{

    yang_name = "weight"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::has_data() const
{
    if (is_presence_container) return true;
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(yfilter)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2_factor != nullptr)
    {
        _children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        _children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        _children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        _children["throughput"] = throughput;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "L2-factor" || name == "latency" || name == "resources" || name == "throughput")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "L2-factor"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "latency"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "resources"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "throughput"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"},
    disable{YType::empty, "disable"}
{

    yang_name = "database-filter"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DatabaseFilter::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| disable.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "disable")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DemandCircuit::DemandCircuit()
    :
    disable{YType::empty, "disable"},
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DemandCircuit::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| ignore.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "ignore")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flood-reduction"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::FloodReduction::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::FloodReduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::FloodReduction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::FloodReduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::FloodReduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::FloodReduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::~Manet()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::has_data() const
{
    if (is_presence_container) return true;
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::has_operation() const
{
    return is_set(yfilter)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peering != nullptr)
    {
        _children["peering"] = peering;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peering")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
        ,
    cost(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::~Peering()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::has_data() const
{
    if (is_presence_container) return true;
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_metrics.yfilter)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.yfilter)) leaf_name_data.push_back(link_metrics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cost != nullptr)
    {
        _children["cost"] = cost;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
        link_metrics.value_namespace = name_space;
        link_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-metrics")
    {
        link_metrics.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "link-metrics")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost"; yang_parent_name = "peering"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::Cost::has_data() const
{
    if (is_presence_container) return true;
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Manet::Peering::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "mtu-ignore"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MtuIgnore::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MtuIgnore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MtuIgnore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MtuIgnore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MtuIgnore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MtuIgnore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MultiArea::MultiArea()
    :
    id{YType::str, "id"},
    cost{YType::uint32, "cost"},
    disable{YType::empty, "disable"}
{

    yang_name = "multi-area"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MultiArea::~MultiArea()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MultiArea::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| cost.is_set
	|| disable.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "cost" || name == "disable")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
        ,
    database_filter(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::~Neighbor()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_filter != nullptr)
    {
        _children["database-filter"] = database_filter;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-filter" || name == "id" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{

    yang_name = "database-filter"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::DatabaseFilter::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
        ,
    point_to_multipoint(nullptr) // presence node
{

    yang_name = "network"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::~Network()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(manet.yfilter)
	|| ydk::is_set(non_broadcast.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.yfilter)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(point_to_multipoint != nullptr)
    {
        _children["point-to-multipoint"] = point_to_multipoint;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manet")
    {
        manet = value;
        manet.value_namespace = name_space;
        manet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "manet")
    {
        manet.yfilter = yfilter;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point-to-multipoint" || name == "broadcast" || name == "manet" || name == "non-broadcast" || name == "point-to-point")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{

    yang_name = "point-to-multipoint"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::PointToMultipoint::has_data() const
{
    if (is_presence_container) return true;
    return non_broadcast.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::PointToMultipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_broadcast.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::PointToMultipoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::PointToMultipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::PointToMultipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Network::PointToMultipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-broadcast")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "prefix-suppression"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::PrefixSuppression::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::PrefixSuppression::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::PrefixSuppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::PrefixSuppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::PrefixSuppression::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::PrefixSuppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Shutdown::Shutdown()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "shutdown"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Shutdown::~Shutdown()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Shutdown::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Ipv4()
    :
    dead_interval{YType::uint16, "dead-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
        ,
    area(this, {"id"})
    , authentication(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Authentication>())
    , bfd(nullptr) // presence node
    , cost(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost>())
    , database_filter(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DatabaseFilter>())
    , demand_circuit(nullptr) // presence node
    , flood_reduction(nullptr) // presence node
    , manet(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet>())
    , mtu_ignore(nullptr) // presence node
    , multi_area(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::MultiArea>())
    , neighbor(this, {"id"})
    , network(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Network>())
    , prefix_suppression(nullptr) // presence node
    , shutdown(nullptr) // presence node
{
    authentication->parent = this;
    cost->parent = this;
    database_filter->parent = this;
    manet->parent = this;
    multi_area->parent = this;
    network->parent = this;

    yang_name = "ipv4"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::~Ipv4()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<area.len(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return dead_interval.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (flood_reduction !=  nullptr && flood_reduction->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<area.len(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (flood_reduction !=  nullptr && flood_reduction->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        auto ent_ = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Area>();
        ent_->parent = this;
        area.append(ent_);
        return ent_;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "flood-reduction")
    {
        if(flood_reduction == nullptr)
        {
            flood_reduction = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::FloodReduction>();
        }
        return flood_reduction;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "mtu-ignore")
    {
        if(mtu_ignore == nullptr)
        {
            mtu_ignore = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::MtuIgnore>();
        }
        return mtu_ignore;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : area.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(cost != nullptr)
    {
        _children["cost"] = cost;
    }

    if(database_filter != nullptr)
    {
        _children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        _children["demand-circuit"] = demand_circuit;
    }

    if(flood_reduction != nullptr)
    {
        _children["flood-reduction"] = flood_reduction;
    }

    if(manet != nullptr)
    {
        _children["manet"] = manet;
    }

    if(mtu_ignore != nullptr)
    {
        _children["mtu-ignore"] = mtu_ignore;
    }

    if(multi_area != nullptr)
    {
        _children["multi-area"] = multi_area;
    }

    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(prefix_suppression != nullptr)
    {
        _children["prefix-suppression"] = prefix_suppression;
    }

    if(shutdown != nullptr)
    {
        _children["shutdown"] = shutdown;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "authentication" || name == "bfd" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "flood-reduction" || name == "manet" || name == "mtu-ignore" || name == "multi-area" || name == "neighbor" || name == "network" || name == "prefix-suppression" || name == "shutdown" || name == "dead-interval" || name == "hello-interval" || name == "priority" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Area::Area()
    :
    id{YType::str, "id"},
    instance{YType::uint8, "instance"}
{

    yang_name = "area"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Area::~Area()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Area::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| instance.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(instance.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "instance")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
{

    yang_name = "authentication"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Authentication::~Authentication()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return key_chain.is_set
	|| null.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "null")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Bfd::~Bfd()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Cost()
    :
    value_{YType::uint32, "value"}
        ,
    dynamic(nullptr) // presence node
{

    yang_name = "cost"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::~Cost()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "value")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
        ,
    hysteresis(nullptr) // presence node
    , weight(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hysteresis != nullptr)
    {
        _children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        _children["weight"] = weight;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hysteresis" || name == "weight" || name == "default")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "hysteresis"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::has_data() const
{
    if (is_presence_container) return true;
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
    , latency(nullptr) // presence node
    , resources(nullptr) // presence node
    , throughput(nullptr) // presence node
{

    yang_name = "weight"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::has_data() const
{
    if (is_presence_container) return true;
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(yfilter)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2_factor != nullptr)
    {
        _children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        _children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        _children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        _children["throughput"] = throughput;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "L2-factor" || name == "latency" || name == "resources" || name == "throughput")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "L2-factor"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "latency"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "resources"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "throughput"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"},
    disable{YType::empty, "disable"}
{

    yang_name = "database-filter"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DatabaseFilter::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| disable.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "disable")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DemandCircuit::DemandCircuit()
    :
    disable{YType::empty, "disable"},
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DemandCircuit::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| ignore.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "ignore")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flood-reduction"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::FloodReduction::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::FloodReduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::FloodReduction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::FloodReduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::FloodReduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::FloodReduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::~Manet()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::has_data() const
{
    if (is_presence_container) return true;
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::has_operation() const
{
    return is_set(yfilter)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peering != nullptr)
    {
        _children["peering"] = peering;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peering")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
        ,
    cost(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::Peering::~Peering()
{
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::Peering::has_data() const
{
    if (is_presence_container) return true;
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_metrics.yfilter)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.yfilter)) leaf_name_data.push_back(link_metrics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cost != nullptr)
    {
        _children["cost"] = cost;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
        link_metrics.value_namespace = name_space;
        link_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-metrics")
    {
        link_metrics.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "link-metrics")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Crypto::Ipsec::DfBit::clear {0, "clear"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Crypto::Ipsec::DfBit::copy {1, "copy"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Crypto::Ipsec::DfBit::set {2, "set"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Crypto::Ipsec::Fragmentation::after_encryption {0, "after-encryption"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Crypto::Ipsec::Fragmentation::before_encryption {1, "before-encryption"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Xconnect::Sequence::both {0, "both"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Xconnect::Sequence::receive {1, "receive"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Xconnect::Sequence::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Authentication::ControlDirection::both {0, "both"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Authentication::ControlDirection::in {1, "in"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Authentication::HostMode::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Authentication::HostMode::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Authentication::HostMode::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Authentication::HostMode::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Authentication::PortControl::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Authentication::PortControl::force_authorized {1, "force-authorized"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Authentication::PortControl::force_unauthorized {2, "force-unauthorized"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Authentication::Violation::protect {0, "protect"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Authentication::Violation::replace {1, "replace"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Authentication::Violation::restrict {2, "restrict"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Authentication::Violation::shutdown {3, "shutdown"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Dot1x::Pae::authenticator {0, "authenticator"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Dot1x::Pae::supplicant {1, "supplicant"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Dot1x::Pae::both {2, "both"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::SpanningTree::Bpdufilter::disable {0, "disable"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::SpanningTree::Bpdufilter::enable {1, "enable"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::SpanningTree::Guard::loop {0, "loop"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::SpanningTree::Guard::none {1, "none"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::SpanningTree::Guard::root {2, "root"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::SpanningTree::LinkType::point_to_point {0, "point-to-point"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::SpanningTree::LinkType::shared {1, "shared"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Neighbor::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Ospfv3::ProcessId::Ipv4::DatabaseFilter::All::out {0, "out"};


}
}

