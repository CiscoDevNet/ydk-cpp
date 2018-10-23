
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_121.hpp"
#include "Cisco_IOS_XE_native_122.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::SpanningTree::Vlan::Root::Root()
    :
    primary(std::make_shared<Native::SpanningTree::Vlan::Root::Primary>())
    , secondary(std::make_shared<Native::SpanningTree::Vlan::Root::Secondary>())
{
    primary->parent = this;
    secondary->parent = this;

    yang_name = "root"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SpanningTree::Vlan::Root::~Root()
{
}

bool Native::SpanningTree::Vlan::Root::has_data() const
{
    if (is_presence_container) return true;
    return (primary !=  nullptr && primary->has_data())
	|| (secondary !=  nullptr && secondary->has_data());
}

bool Native::SpanningTree::Vlan::Root::has_operation() const
{
    return is_set(yfilter)
	|| (primary !=  nullptr && primary->has_operation())
	|| (secondary !=  nullptr && secondary->has_operation());
}

std::string Native::SpanningTree::Vlan::Root::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "root";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Vlan::Root::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Vlan::Root::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::SpanningTree::Vlan::Root::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        if(secondary == nullptr)
        {
            secondary = std::make_shared<Native::SpanningTree::Vlan::Root::Secondary>();
        }
        return secondary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Vlan::Root::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    if(secondary != nullptr)
    {
        _children["secondary"] = secondary;
    }

    return _children;
}

void Native::SpanningTree::Vlan::Root::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Vlan::Root::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Vlan::Root::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Native::SpanningTree::Vlan::Root::Primary::Primary()
    :
    diameter{YType::uint8, "diameter"},
    hello_time{YType::uint8, "hello-time"}
{

    yang_name = "primary"; yang_parent_name = "root"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SpanningTree::Vlan::Root::Primary::~Primary()
{
}

bool Native::SpanningTree::Vlan::Root::Primary::has_data() const
{
    if (is_presence_container) return true;
    return diameter.is_set
	|| hello_time.is_set;
}

bool Native::SpanningTree::Vlan::Root::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diameter.yfilter)
	|| ydk::is_set(hello_time.yfilter);
}

std::string Native::SpanningTree::Vlan::Root::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Vlan::Root::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diameter.is_set || is_set(diameter.yfilter)) leaf_name_data.push_back(diameter.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Vlan::Root::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Vlan::Root::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Vlan::Root::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diameter")
    {
        diameter = value;
        diameter.value_namespace = name_space;
        diameter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Vlan::Root::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diameter")
    {
        diameter.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Vlan::Root::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diameter" || name == "hello-time")
        return true;
    return false;
}

Native::SpanningTree::Vlan::Root::Secondary::Secondary()
    :
    diameter{YType::uint8, "diameter"},
    hello_time{YType::uint8, "hello-time"}
{

    yang_name = "secondary"; yang_parent_name = "root"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SpanningTree::Vlan::Root::Secondary::~Secondary()
{
}

bool Native::SpanningTree::Vlan::Root::Secondary::has_data() const
{
    if (is_presence_container) return true;
    return diameter.is_set
	|| hello_time.is_set;
}

bool Native::SpanningTree::Vlan::Root::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diameter.yfilter)
	|| ydk::is_set(hello_time.yfilter);
}

std::string Native::SpanningTree::Vlan::Root::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Vlan::Root::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diameter.is_set || is_set(diameter.yfilter)) leaf_name_data.push_back(diameter.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Vlan::Root::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Vlan::Root::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Vlan::Root::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diameter")
    {
        diameter = value;
        diameter.value_namespace = name_space;
        diameter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Vlan::Root::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diameter")
    {
        diameter.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Vlan::Root::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diameter" || name == "hello-time")
        return true;
    return false;
}

Native::Subscriber::Subscriber()
    :
    templating{YType::empty, "templating"}
{

    yang_name = "subscriber"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Subscriber::~Subscriber()
{
}

bool Native::Subscriber::has_data() const
{
    if (is_presence_container) return true;
    return templating.is_set;
}

bool Native::Subscriber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(templating.yfilter);
}

std::string Native::Subscriber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Subscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Subscriber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (templating.is_set || is_set(templating.yfilter)) leaf_name_data.push_back(templating.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Subscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Subscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Subscriber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "templating")
    {
        templating = value;
        templating.value_namespace = name_space;
        templating.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Subscriber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "templating")
    {
        templating.yfilter = yfilter;
    }
}

bool Native::Subscriber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "templating")
        return true;
    return false;
}

Native::Track::Track()
    :
    tracked_object(this, {"object_number"})
    , resolution(std::make_shared<Native::Track::Resolution>())
    , timer(std::make_shared<Native::Track::Timer>())
{
    resolution->parent = this;
    timer->parent = this;

    yang_name = "track"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Track::~Track()
{
}

bool Native::Track::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tracked_object.len(); index++)
    {
        if(tracked_object[index]->has_data())
            return true;
    }
    return (resolution !=  nullptr && resolution->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Track::has_operation() const
{
    for (std::size_t index=0; index<tracked_object.len(); index++)
    {
        if(tracked_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (resolution !=  nullptr && resolution->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Track::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-track:tracked-object")
    {
        auto ent_ = std::make_shared<Native::Track::TrackedObject>();
        ent_->parent = this;
        tracked_object.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-track:resolution")
    {
        if(resolution == nullptr)
        {
            resolution = std::make_shared<Native::Track::Resolution>();
        }
        return resolution;
    }

    if(child_yang_name == "Cisco-IOS-XE-track:timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Track::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tracked_object.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(resolution != nullptr)
    {
        _children["Cisco-IOS-XE-track:resolution"] = resolution;
    }

    if(timer != nullptr)
    {
        _children["Cisco-IOS-XE-track:timer"] = timer;
    }

    return _children;
}

void Native::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-object" || name == "resolution" || name == "timer")
        return true;
    return false;
}

Native::Track::TrackedObject::TrackedObject()
    :
    object_number{YType::uint32, "object-number"},
    stub_object{YType::empty, "stub-object"},
    default_state{YType::enumeration, "default-state"}
        ,
    interface(std::make_shared<Native::Track::TrackedObject::Interface>())
    , ip(std::make_shared<Native::Track::TrackedObject::Ip>())
    , ipv6(std::make_shared<Native::Track::TrackedObject::Ipv6>())
    , list(std::make_shared<Native::Track::TrackedObject::List>())
    , default_(std::make_shared<Native::Track::TrackedObject::Default>())
    , delay(std::make_shared<Native::Track::TrackedObject::Delay>())
    , object(this, {"number"})
    , ipv6_object(std::make_shared<Native::Track::TrackedObject::Ipv6Object>())
    , ip_object(std::make_shared<Native::Track::TrackedObject::IpObject>())
{
    interface->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    list->parent = this;
    default_->parent = this;
    delay->parent = this;
    ipv6_object->parent = this;
    ip_object->parent = this;

    yang_name = "tracked-object"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Track::TrackedObject::~TrackedObject()
{
}

bool Native::Track::TrackedObject::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<object.len(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return object_number.is_set
	|| stub_object.is_set
	|| default_state.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (list !=  nullptr && list->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (ipv6_object !=  nullptr && ipv6_object->has_data())
	|| (ip_object !=  nullptr && ip_object->has_data());
}

bool Native::Track::TrackedObject::has_operation() const
{
    for (std::size_t index=0; index<object.len(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object_number.yfilter)
	|| ydk::is_set(stub_object.yfilter)
	|| ydk::is_set(default_state.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (list !=  nullptr && list->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (ipv6_object !=  nullptr && ipv6_object->has_operation())
	|| (ip_object !=  nullptr && ip_object->has_operation());
}

std::string Native::Track::TrackedObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-track:tracked-object";
    ADD_KEY_TOKEN(object_number, "object-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_number.is_set || is_set(object_number.yfilter)) leaf_name_data.push_back(object_number.get_name_leafdata());
    if (stub_object.is_set || is_set(stub_object.yfilter)) leaf_name_data.push_back(stub_object.get_name_leafdata());
    if (default_state.is_set || is_set(default_state.yfilter)) leaf_name_data.push_back(default_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Track::TrackedObject::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::TrackedObject::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Track::TrackedObject::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Track::TrackedObject::List>();
        }
        return list;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Track::TrackedObject::Default>();
        }
        return default_;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Track::TrackedObject::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "object")
    {
        auto ent_ = std::make_shared<Native::Track::TrackedObject::Object>();
        ent_->parent = this;
        object.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6-object")
    {
        if(ipv6_object == nullptr)
        {
            ipv6_object = std::make_shared<Native::Track::TrackedObject::Ipv6Object>();
        }
        return ipv6_object;
    }

    if(child_yang_name == "ip-object")
    {
        if(ip_object == nullptr)
        {
            ip_object = std::make_shared<Native::Track::TrackedObject::IpObject>();
        }
        return ip_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(list != nullptr)
    {
        _children["list"] = list;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    count_ = 0;
    for (auto ent_ : object.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(ipv6_object != nullptr)
    {
        _children["ipv6-object"] = ipv6_object;
    }

    if(ip_object != nullptr)
    {
        _children["ip-object"] = ip_object;
    }

    return _children;
}

void Native::Track::TrackedObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-number")
    {
        object_number = value;
        object_number.value_namespace = name_space;
        object_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-object")
    {
        stub_object = value;
        stub_object.value_namespace = name_space;
        stub_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-state")
    {
        default_state = value;
        default_state.value_namespace = name_space;
        default_state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-number")
    {
        object_number.yfilter = yfilter;
    }
    if(value_path == "stub-object")
    {
        stub_object.yfilter = yfilter;
    }
    if(value_path == "default-state")
    {
        default_state.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ip" || name == "ipv6" || name == "list" || name == "default" || name == "delay" || name == "object" || name == "ipv6-object" || name == "ip-object" || name == "object-number" || name == "stub-object" || name == "default-state")
        return true;
    return false;
}

Native::Track::TrackedObject::Interface::Interface()
    :
    name{YType::str, "name"},
    protocol{YType::enumeration, "protocol"},
    routing{YType::empty, "routing"}
{

    yang_name = "interface"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Track::TrackedObject::Interface::~Interface()
{
}

bool Native::Track::TrackedObject::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| protocol.is_set
	|| routing.is_set;
}

bool Native::Track::TrackedObject::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(routing.yfilter);
}

std::string Native::Track::TrackedObject::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::TrackedObject::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing")
    {
        routing = value;
        routing.value_namespace = name_space;
        routing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "protocol" || name == "routing")
        return true;
    return false;
}

Native::Track::TrackedObject::Ip::Ip()
    :
    route(std::make_shared<Native::Track::TrackedObject::Ip::Route>())
    , sla(std::make_shared<Native::Track::TrackedObject::Ip::Sla>())
{
    route->parent = this;
    sla->parent = this;

    yang_name = "ip"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Track::TrackedObject::Ip::~Ip()
{
}

bool Native::Track::TrackedObject::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (route !=  nullptr && route->has_data())
	|| (sla !=  nullptr && sla->has_data());
}

bool Native::Track::TrackedObject::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation())
	|| (sla !=  nullptr && sla->has_operation());
}

std::string Native::Track::TrackedObject::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::TrackedObject::Ip::Route>();
        }
        return route;
    }

    if(child_yang_name == "sla")
    {
        if(sla == nullptr)
        {
            sla = std::make_shared<Native::Track::TrackedObject::Ip::Sla>();
        }
        return sla;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route != nullptr)
    {
        _children["route"] = route;
    }

    if(sla != nullptr)
    {
        _children["sla"] = sla;
    }

    return _children;
}

void Native::Track::TrackedObject::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::TrackedObject::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::TrackedObject::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route" || name == "sla")
        return true;
    return false;
}

Native::Track::TrackedObject::Ip::Route::Route()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    reachability{YType::empty, "reachability"},
    metric{YType::enumeration, "metric"}
{

    yang_name = "route"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Track::TrackedObject::Ip::Route::~Route()
{
}

bool Native::Track::TrackedObject::Ip::Route::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set
	|| reachability.is_set
	|| metric.is_set;
}

bool Native::Track::TrackedObject::Ip::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(reachability.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Track::TrackedObject::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ip::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.yfilter)) leaf_name_data.push_back(reachability.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::TrackedObject::Ip::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability")
    {
        reachability = value;
        reachability.value_namespace = name_space;
        reachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Ip::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "reachability")
    {
        reachability.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Ip::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "reachability" || name == "metric")
        return true;
    return false;
}

Native::Track::TrackedObject::Ip::Sla::Sla()
    :
    number{YType::uint32, "number"},
    reachability{YType::empty, "reachability"},
    state{YType::empty, "state"}
{

    yang_name = "sla"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Track::TrackedObject::Ip::Sla::~Sla()
{
}

bool Native::Track::TrackedObject::Ip::Sla::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| reachability.is_set
	|| state.is_set;
}

bool Native::Track::TrackedObject::Ip::Sla::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(reachability.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Native::Track::TrackedObject::Ip::Sla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ip::Sla::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.yfilter)) leaf_name_data.push_back(reachability.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::Ip::Sla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::Ip::Sla::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::TrackedObject::Ip::Sla::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability")
    {
        reachability = value;
        reachability.value_namespace = name_space;
        reachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Ip::Sla::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "reachability")
    {
        reachability.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Ip::Sla::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "reachability" || name == "state")
        return true;
    return false;
}

Native::Track::TrackedObject::Ipv6::Ipv6()
    :
    route(std::make_shared<Native::Track::TrackedObject::Ipv6::Route>())
{
    route->parent = this;

    yang_name = "ipv6"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Track::TrackedObject::Ipv6::~Ipv6()
{
}

bool Native::Track::TrackedObject::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (route !=  nullptr && route->has_data());
}

bool Native::Track::TrackedObject::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Track::TrackedObject::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::TrackedObject::Ipv6::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route != nullptr)
    {
        _children["route"] = route;
    }

    return _children;
}

void Native::Track::TrackedObject::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::TrackedObject::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::TrackedObject::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Native::Track::TrackedObject::Ipv6::Route::Route()
    :
    address{YType::str, "address"},
    reachability{YType::empty, "reachability"},
    metric{YType::enumeration, "metric"}
{

    yang_name = "route"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Track::TrackedObject::Ipv6::Route::~Route()
{
}

bool Native::Track::TrackedObject::Ipv6::Route::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| reachability.is_set
	|| metric.is_set;
}

bool Native::Track::TrackedObject::Ipv6::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(reachability.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Track::TrackedObject::Ipv6::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ipv6::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.yfilter)) leaf_name_data.push_back(reachability.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::Ipv6::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::Ipv6::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::TrackedObject::Ipv6::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability")
    {
        reachability = value;
        reachability.value_namespace = name_space;
        reachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Ipv6::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "reachability")
    {
        reachability.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Ipv6::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "reachability" || name == "metric")
        return true;
    return false;
}

Native::Track::TrackedObject::List::List()
    :
    boolean{YType::enumeration, "boolean"},
    threshold{YType::enumeration, "threshold"}
{

    yang_name = "list"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Track::TrackedObject::List::~List()
{
}

bool Native::Track::TrackedObject::List::has_data() const
{
    if (is_presence_container) return true;
    return boolean.is_set
	|| threshold.is_set;
}

bool Native::Track::TrackedObject::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boolean.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Track::TrackedObject::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boolean.is_set || is_set(boolean.yfilter)) leaf_name_data.push_back(boolean.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::TrackedObject::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boolean")
    {
        boolean = value;
        boolean.value_namespace = name_space;
        boolean.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boolean")
    {
        boolean.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boolean" || name == "threshold")
        return true;
    return false;
}

Native::Track::TrackedObject::Default::Default()
    :
    default_state{YType::enumeration, "default-state"}
        ,
    delay(nullptr) // presence node
    , ip(std::make_shared<Native::Track::TrackedObject::Default::Ip>())
    , ipv6(std::make_shared<Native::Track::TrackedObject::Default::Ipv6>())
{
    ip->parent = this;
    ipv6->parent = this;

    yang_name = "default"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Track::TrackedObject::Default::~Default()
{
}

bool Native::Track::TrackedObject::Default::has_data() const
{
    if (is_presence_container) return true;
    return default_state.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Track::TrackedObject::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_state.yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Track::TrackedObject::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_state.is_set || is_set(default_state.yfilter)) leaf_name_data.push_back(default_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Track::TrackedObject::Default::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::TrackedObject::Default::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Track::TrackedObject::Default::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::Track::TrackedObject::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-state")
    {
        default_state = value;
        default_state.value_namespace = name_space;
        default_state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-state")
    {
        default_state.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "ip" || name == "ipv6" || name == "default-state")
        return true;
    return false;
}

Native::Track::TrackedObject::Default::Delay::Delay()
{

    yang_name = "delay"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Track::TrackedObject::Default::Delay::~Delay()
{
}

bool Native::Track::TrackedObject::Default::Delay::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Track::TrackedObject::Default::Delay::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Track::TrackedObject::Default::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Default::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::Default::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::Default::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::TrackedObject::Default::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::TrackedObject::Default::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::TrackedObject::Default::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Track::TrackedObject::Default::Ip::Ip()
    :
    vrf{YType::empty, "vrf"}
{

    yang_name = "ip"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Track::TrackedObject::Default::Ip::~Ip()
{
}

bool Native::Track::TrackedObject::Default::Ip::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set;
}

bool Native::Track::TrackedObject::Default::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Track::TrackedObject::Default::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Default::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::Default::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::Default::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::TrackedObject::Default::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Default::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Default::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Track::TrackedObject::Default::Ipv6::Ipv6()
    :
    vrf{YType::empty, "vrf"}
{

    yang_name = "ipv6"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Track::TrackedObject::Default::Ipv6::~Ipv6()
{
}

bool Native::Track::TrackedObject::Default::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set;
}

bool Native::Track::TrackedObject::Default::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Track::TrackedObject::Default::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Default::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::Default::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::Default::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::TrackedObject::Default::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Default::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Default::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Track::TrackedObject::Delay::Delay()
    :
    down{YType::uint32, "down"},
    up{YType::uint32, "up"}
{

    yang_name = "delay"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Track::TrackedObject::Delay::~Delay()
{
}

bool Native::Track::TrackedObject::Delay::has_data() const
{
    if (is_presence_container) return true;
    return down.is_set
	|| up.is_set;
}

bool Native::Track::TrackedObject::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(up.yfilter);
}

std::string Native::Track::TrackedObject::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::TrackedObject::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "up")
        return true;
    return false;
}

Native::Track::TrackedObject::Object::Object()
    :
    number{YType::uint32, "number"},
    not_{YType::empty, "not"}
{

    yang_name = "object"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Track::TrackedObject::Object::~Object()
{
}

bool Native::Track::TrackedObject::Object::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| not_.is_set;
}

bool Native::Track::TrackedObject::Object::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(not_.yfilter);
}

std::string Native::Track::TrackedObject::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Object::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (not_.is_set || is_set(not_.yfilter)) leaf_name_data.push_back(not_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::Object::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::TrackedObject::Object::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not")
    {
        not_ = value;
        not_.value_namespace = name_space;
        not_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Object::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "not")
    {
        not_.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Object::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "not")
        return true;
    return false;
}

Native::Track::TrackedObject::Ipv6Object::Ipv6Object()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "ipv6-object"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Track::TrackedObject::Ipv6Object::~Ipv6Object()
{
}

bool Native::Track::TrackedObject::Ipv6Object::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set;
}

bool Native::Track::TrackedObject::Ipv6Object::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Track::TrackedObject::Ipv6Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ipv6Object::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::Ipv6Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::Ipv6Object::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::TrackedObject::Ipv6Object::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Ipv6Object::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Ipv6Object::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Track::TrackedObject::IpObject::IpObject()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "ip-object"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Track::TrackedObject::IpObject::~IpObject()
{
}

bool Native::Track::TrackedObject::IpObject::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set;
}

bool Native::Track::TrackedObject::IpObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Track::TrackedObject::IpObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::IpObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::IpObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::IpObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::TrackedObject::IpObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::IpObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::IpObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Track::Resolution::Resolution()
    :
    ip(std::make_shared<Native::Track::Resolution::Ip>())
{
    ip->parent = this;

    yang_name = "resolution"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Track::Resolution::~Resolution()
{
}

bool Native::Track::Resolution::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Track::Resolution::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Track::Resolution::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Resolution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-track:resolution";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Resolution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::Resolution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::Resolution::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::Resolution::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Track::Resolution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Resolution::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Resolution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Track::Resolution::Ip::Ip()
    :
    route(std::make_shared<Native::Track::Resolution::Ip::Route>())
{
    route->parent = this;

    yang_name = "ip"; yang_parent_name = "resolution"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Track::Resolution::Ip::~Ip()
{
}

bool Native::Track::Resolution::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (route !=  nullptr && route->has_data());
}

bool Native::Track::Resolution::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Track::Resolution::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:resolution/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Resolution::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Resolution::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::Resolution::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::Resolution::Ip::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::Resolution::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route != nullptr)
    {
        _children["route"] = route;
    }

    return _children;
}

void Native::Track::Resolution::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Resolution::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Resolution::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Native::Track::Resolution::Ip::Route::Route()
    :
    bgp{YType::uint32, "bgp"},
    eigrp{YType::uint32, "eigrp"},
    isis{YType::uint32, "isis"},
    ospf{YType::uint32, "ospf"},
    static_{YType::uint32, "static"}
{

    yang_name = "route"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Track::Resolution::Ip::Route::~Route()
{
}

bool Native::Track::Resolution::Ip::Route::has_data() const
{
    if (is_presence_container) return true;
    return bgp.is_set
	|| eigrp.is_set
	|| isis.is_set
	|| ospf.is_set
	|| static_.is_set;
}

bool Native::Track::Resolution::Ip::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(isis.yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string Native::Track::Resolution::Ip::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:resolution/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Resolution::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Resolution::Ip::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (isis.is_set || is_set(isis.yfilter)) leaf_name_data.push_back(isis.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::Resolution::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::Resolution::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::Resolution::Ip::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis")
    {
        isis = value;
        isis.value_namespace = name_space;
        isis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Resolution::Ip::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "isis")
    {
        isis.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Track::Resolution::Ip::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "eigrp" || name == "isis" || name == "ospf" || name == "static")
        return true;
    return false;
}

Native::Track::Timer::Timer()
    :
    interface(std::make_shared<Native::Track::Timer::Interface>())
    , ip(std::make_shared<Native::Track::Timer::Ip>())
    , ipv6(std::make_shared<Native::Track::Timer::Ipv6>())
    , list(std::make_shared<Native::Track::Timer::List>())
    , stub_object(std::make_shared<Native::Track::Timer::StubObject>())
{
    interface->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    list->parent = this;
    stub_object->parent = this;

    yang_name = "timer"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Track::Timer::~Timer()
{
}

bool Native::Track::Timer::has_data() const
{
    if (is_presence_container) return true;
    return (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (list !=  nullptr && list->has_data())
	|| (stub_object !=  nullptr && stub_object->has_data());
}

bool Native::Track::Timer::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (list !=  nullptr && list->has_operation())
	|| (stub_object !=  nullptr && stub_object->has_operation());
}

std::string Native::Track::Timer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-track:timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Track::Timer::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::Timer::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Track::Timer::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Track::Timer::List>();
        }
        return list;
    }

    if(child_yang_name == "stub-object")
    {
        if(stub_object == nullptr)
        {
            stub_object = std::make_shared<Native::Track::Timer::StubObject>();
        }
        return stub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(list != nullptr)
    {
        _children["list"] = list;
    }

    if(stub_object != nullptr)
    {
        _children["stub-object"] = stub_object;
    }

    return _children;
}

void Native::Track::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ip" || name == "ipv6" || name == "list" || name == "stub-object")
        return true;
    return false;
}

Native::Track::Timer::Interface::Interface()
    :
    seconds{YType::uint32, "seconds"},
    ms{YType::uint32, "ms"}
{

    yang_name = "interface"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Track::Timer::Interface::~Interface()
{
}

bool Native::Track::Timer::Interface::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| ms.is_set;
}

bool Native::Track::Timer::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Track::Timer::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::Timer::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::Timer::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::Timer::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Track::Timer::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "ms")
        return true;
    return false;
}

Native::Track::Timer::Ip::Ip()
    :
    route(std::make_shared<Native::Track::Timer::Ip::Route>())
    , sla(std::make_shared<Native::Track::Timer::Ip::Sla>())
{
    route->parent = this;
    sla->parent = this;

    yang_name = "ip"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Track::Timer::Ip::~Ip()
{
}

bool Native::Track::Timer::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (route !=  nullptr && route->has_data())
	|| (sla !=  nullptr && sla->has_data());
}

bool Native::Track::Timer::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation())
	|| (sla !=  nullptr && sla->has_operation());
}

std::string Native::Track::Timer::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::Timer::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::Timer::Ip::Route>();
        }
        return route;
    }

    if(child_yang_name == "sla")
    {
        if(sla == nullptr)
        {
            sla = std::make_shared<Native::Track::Timer::Ip::Sla>();
        }
        return sla;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::Timer::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route != nullptr)
    {
        _children["route"] = route;
    }

    if(sla != nullptr)
    {
        _children["sla"] = sla;
    }

    return _children;
}

void Native::Track::Timer::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Timer::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Timer::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route" || name == "sla")
        return true;
    return false;
}

Native::Track::Timer::Ip::Route::Route()
    :
    seconds{YType::uint32, "seconds"},
    ms{YType::uint32, "ms"}
{

    yang_name = "route"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Track::Timer::Ip::Route::~Route()
{
}

bool Native::Track::Timer::Ip::Route::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| ms.is_set;
}

bool Native::Track::Timer::Ip::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Track::Timer::Ip::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ip::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::Timer::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::Timer::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::Timer::Ip::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::Ip::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Track::Timer::Ip::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "ms")
        return true;
    return false;
}

Native::Track::Timer::Ip::Sla::Sla()
    :
    seconds{YType::uint32, "seconds"},
    ms{YType::uint32, "ms"}
{

    yang_name = "sla"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Track::Timer::Ip::Sla::~Sla()
{
}

bool Native::Track::Timer::Ip::Sla::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| ms.is_set;
}

bool Native::Track::Timer::Ip::Sla::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Track::Timer::Ip::Sla::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ip::Sla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ip::Sla::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::Timer::Ip::Sla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::Timer::Ip::Sla::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::Timer::Ip::Sla::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::Ip::Sla::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Track::Timer::Ip::Sla::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "ms")
        return true;
    return false;
}

Native::Track::Timer::Ipv6::Ipv6()
    :
    route(std::make_shared<Native::Track::Timer::Ipv6::Route>())
{
    route->parent = this;

    yang_name = "ipv6"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Track::Timer::Ipv6::~Ipv6()
{
}

bool Native::Track::Timer::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (route !=  nullptr && route->has_data());
}

bool Native::Track::Timer::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Track::Timer::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::Timer::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::Timer::Ipv6::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::Timer::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route != nullptr)
    {
        _children["route"] = route;
    }

    return _children;
}

void Native::Track::Timer::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Timer::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Timer::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Native::Track::Timer::Ipv6::Route::Route()
    :
    seconds{YType::uint32, "seconds"},
    ms{YType::uint32, "ms"}
{

    yang_name = "route"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Track::Timer::Ipv6::Route::~Route()
{
}

bool Native::Track::Timer::Ipv6::Route::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| ms.is_set;
}

bool Native::Track::Timer::Ipv6::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Track::Timer::Ipv6::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ipv6::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ipv6::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::Timer::Ipv6::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::Timer::Ipv6::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::Timer::Ipv6::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::Ipv6::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Track::Timer::Ipv6::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "ms")
        return true;
    return false;
}

Native::Track::Timer::List::List()
    :
    seconds{YType::uint32, "seconds"},
    ms{YType::uint32, "ms"}
{

    yang_name = "list"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Track::Timer::List::~List()
{
}

bool Native::Track::Timer::List::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| ms.is_set;
}

bool Native::Track::Timer::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Track::Timer::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::Timer::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::Timer::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::Timer::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Track::Timer::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "ms")
        return true;
    return false;
}

Native::Track::Timer::StubObject::StubObject()
    :
    seconds{YType::uint32, "seconds"},
    ms{YType::uint32, "ms"}
{

    yang_name = "stub-object"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Track::Timer::StubObject::~StubObject()
{
}

bool Native::Track::Timer::StubObject::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| ms.is_set;
}

bool Native::Track::Timer::StubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Track::Timer::StubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::StubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::StubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::Timer::StubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::Timer::StubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::Timer::StubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::StubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Track::Timer::StubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "ms")
        return true;
    return false;
}

Native::Dot1x::Dot1x()
    :
    system_auth_control{YType::empty, "Cisco-IOS-XE-dot1x:system-auth-control"}
        ,
    credentials(this, {"profile_name"})
    , critical(std::make_shared<Native::Dot1x::Critical>())
    , test(std::make_shared<Native::Dot1x::Test>())
    , logging(std::make_shared<Native::Dot1x::Logging>())
    , supplicant(std::make_shared<Native::Dot1x::Supplicant>())
{
    critical->parent = this;
    test->parent = this;
    logging->parent = this;
    supplicant->parent = this;

    yang_name = "dot1x"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Dot1x::~Dot1x()
{
}

bool Native::Dot1x::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<credentials.len(); index++)
    {
        if(credentials[index]->has_data())
            return true;
    }
    return system_auth_control.is_set
	|| (critical !=  nullptr && critical->has_data())
	|| (test !=  nullptr && test->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (supplicant !=  nullptr && supplicant->has_data());
}

bool Native::Dot1x::has_operation() const
{
    for (std::size_t index=0; index<credentials.len(); index++)
    {
        if(credentials[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(system_auth_control.yfilter)
	|| (critical !=  nullptr && critical->has_operation())
	|| (test !=  nullptr && test->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (supplicant !=  nullptr && supplicant->has_operation());
}

std::string Native::Dot1x::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1x::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1x::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_auth_control.is_set || is_set(system_auth_control.yfilter)) leaf_name_data.push_back(system_auth_control.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Dot1x::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-dot1x:credentials")
    {
        auto ent_ = std::make_shared<Native::Dot1x::Credentials>();
        ent_->parent = this;
        credentials.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-dot1x:critical")
    {
        if(critical == nullptr)
        {
            critical = std::make_shared<Native::Dot1x::Critical>();
        }
        return critical;
    }

    if(child_yang_name == "Cisco-IOS-XE-dot1x:test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Dot1x::Test>();
        }
        return test;
    }

    if(child_yang_name == "Cisco-IOS-XE-dot1x:logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Dot1x::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "Cisco-IOS-XE-dot1x:supplicant")
    {
        if(supplicant == nullptr)
        {
            supplicant = std::make_shared<Native::Dot1x::Supplicant>();
        }
        return supplicant;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Dot1x::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : credentials.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(critical != nullptr)
    {
        _children["Cisco-IOS-XE-dot1x:critical"] = critical;
    }

    if(test != nullptr)
    {
        _children["Cisco-IOS-XE-dot1x:test"] = test;
    }

    if(logging != nullptr)
    {
        _children["Cisco-IOS-XE-dot1x:logging"] = logging;
    }

    if(supplicant != nullptr)
    {
        _children["Cisco-IOS-XE-dot1x:supplicant"] = supplicant;
    }

    return _children;
}

void Native::Dot1x::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-dot1x:system-auth-control")
    {
        system_auth_control = value;
        system_auth_control.value_namespace = name_space;
        system_auth_control.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1x::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-auth-control")
    {
        system_auth_control.yfilter = yfilter;
    }
}

bool Native::Dot1x::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "credentials" || name == "critical" || name == "test" || name == "logging" || name == "supplicant" || name == "system-auth-control")
        return true;
    return false;
}

Native::Dot1x::Credentials::Credentials()
    :
    profile_name{YType::str, "profile-name"},
    username{YType::str, "username"},
    pki_trustpoint{YType::str, "pki-trustpoint"}
        ,
    password(std::make_shared<Native::Dot1x::Credentials::Password>())
{
    password->parent = this;

    yang_name = "credentials"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Dot1x::Credentials::~Credentials()
{
}

bool Native::Dot1x::Credentials::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set
	|| username.is_set
	|| pki_trustpoint.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Dot1x::Credentials::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(pki_trustpoint.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Dot1x::Credentials::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1x::Credentials::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:credentials";
    ADD_KEY_TOKEN(profile_name, "profile-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1x::Credentials::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (pki_trustpoint.is_set || is_set(pki_trustpoint.yfilter)) leaf_name_data.push_back(pki_trustpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Dot1x::Credentials::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Dot1x::Credentials::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Dot1x::Credentials::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Dot1x::Credentials::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pki-trustpoint")
    {
        pki_trustpoint = value;
        pki_trustpoint.value_namespace = name_space;
        pki_trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1x::Credentials::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "pki-trustpoint")
    {
        pki_trustpoint.yfilter = yfilter;
    }
}

bool Native::Dot1x::Credentials::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "profile-name" || name == "username" || name == "pki-trustpoint")
        return true;
    return false;
}

Native::Dot1x::Credentials::Password::Password()
    :
    type{YType::enumeration, "type"},
    secret{YType::str, "secret"}
{

    yang_name = "password"; yang_parent_name = "credentials"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Dot1x::Credentials::Password::~Password()
{
}

bool Native::Dot1x::Credentials::Password::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| secret.is_set;
}

bool Native::Dot1x::Credentials::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Dot1x::Credentials::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1x::Credentials::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Dot1x::Credentials::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Dot1x::Credentials::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Dot1x::Credentials::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1x::Credentials::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Dot1x::Credentials::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "secret")
        return true;
    return false;
}

Native::Dot1x::Critical::Critical()
    :
    eapol{YType::empty, "eapol"}
        ,
    recovery(std::make_shared<Native::Dot1x::Critical::Recovery>())
{
    recovery->parent = this;

    yang_name = "critical"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Dot1x::Critical::~Critical()
{
}

bool Native::Dot1x::Critical::has_data() const
{
    if (is_presence_container) return true;
    return eapol.is_set
	|| (recovery !=  nullptr && recovery->has_data());
}

bool Native::Dot1x::Critical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eapol.yfilter)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Dot1x::Critical::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1x::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:critical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1x::Critical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eapol.is_set || is_set(eapol.yfilter)) leaf_name_data.push_back(eapol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Dot1x::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Dot1x::Critical::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Dot1x::Critical::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(recovery != nullptr)
    {
        _children["recovery"] = recovery;
    }

    return _children;
}

void Native::Dot1x::Critical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eapol")
    {
        eapol = value;
        eapol.value_namespace = name_space;
        eapol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1x::Critical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eapol")
    {
        eapol.yfilter = yfilter;
    }
}

bool Native::Dot1x::Critical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery" || name == "eapol")
        return true;
    return false;
}

Native::Dot1x::Critical::Recovery::Recovery()
    :
    delay{YType::uint16, "delay"}
{

    yang_name = "recovery"; yang_parent_name = "critical"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Dot1x::Critical::Recovery::~Recovery()
{
}

bool Native::Dot1x::Critical::Recovery::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set;
}

bool Native::Dot1x::Critical::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Dot1x::Critical::Recovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/Cisco-IOS-XE-dot1x:critical/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1x::Critical::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1x::Critical::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Dot1x::Critical::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Dot1x::Critical::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Dot1x::Critical::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1x::Critical::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Dot1x::Critical::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Dot1x::Test::Test()
    :
    timeout{YType::uint16, "timeout"}
{

    yang_name = "test"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Dot1x::Test::~Test()
{
}

bool Native::Dot1x::Test::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set;
}

bool Native::Dot1x::Test::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Dot1x::Test::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1x::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1x::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Dot1x::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Dot1x::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Dot1x::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1x::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Dot1x::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Dot1x::Logging::Logging()
    :
    verbose{YType::empty, "verbose"}
{

    yang_name = "logging"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Dot1x::Logging::~Logging()
{
}

bool Native::Dot1x::Logging::has_data() const
{
    if (is_presence_container) return true;
    return verbose.is_set;
}

bool Native::Dot1x::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(verbose.yfilter);
}

std::string Native::Dot1x::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1x::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1x::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (verbose.is_set || is_set(verbose.yfilter)) leaf_name_data.push_back(verbose.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Dot1x::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Dot1x::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Dot1x::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "verbose")
    {
        verbose = value;
        verbose.value_namespace = name_space;
        verbose.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1x::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "verbose")
    {
        verbose.yfilter = yfilter;
    }
}

bool Native::Dot1x::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "verbose")
        return true;
    return false;
}

Native::Dot1x::Supplicant::Supplicant()
    :
    force_multicast{YType::empty, "force-multicast"}
{

    yang_name = "supplicant"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Dot1x::Supplicant::~Supplicant()
{
}

bool Native::Dot1x::Supplicant::has_data() const
{
    if (is_presence_container) return true;
    return force_multicast.is_set;
}

bool Native::Dot1x::Supplicant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(force_multicast.yfilter);
}

std::string Native::Dot1x::Supplicant::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1x::Supplicant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:supplicant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1x::Supplicant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (force_multicast.is_set || is_set(force_multicast.yfilter)) leaf_name_data.push_back(force_multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Dot1x::Supplicant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Dot1x::Supplicant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Dot1x::Supplicant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "force-multicast")
    {
        force_multicast = value;
        force_multicast.value_namespace = name_space;
        force_multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1x::Supplicant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "force-multicast")
    {
        force_multicast.yfilter = yfilter;
    }
}

bool Native::Dot1x::Supplicant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "force-multicast")
        return true;
    return false;
}

Native::Mab::Mab()
    :
    logging(std::make_shared<Native::Mab::Logging>())
{
    logging->parent = this;

    yang_name = "mab"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mab::~Mab()
{
}

bool Native::Mab::has_data() const
{
    if (is_presence_container) return true;
    return (logging !=  nullptr && logging->has_data());
}

bool Native::Mab::has_operation() const
{
    return is_set(yfilter)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::Mab::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mab";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mab::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Mab::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    return _children;
}

void Native::Mab::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mab::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mab::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

Native::Mab::Logging::Logging()
    :
    verbose{YType::empty, "verbose"}
{

    yang_name = "logging"; yang_parent_name = "mab"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mab::Logging::~Logging()
{
}

bool Native::Mab::Logging::has_data() const
{
    if (is_presence_container) return true;
    return verbose.is_set;
}

bool Native::Mab::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(verbose.yfilter);
}

std::string Native::Mab::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mab/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mab::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mab::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (verbose.is_set || is_set(verbose.yfilter)) leaf_name_data.push_back(verbose.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mab::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mab::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mab::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "verbose")
    {
        verbose = value;
        verbose.value_namespace = name_space;
        verbose.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mab::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "verbose")
    {
        verbose.yfilter = yfilter;
    }
}

bool Native::Mab::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "verbose")
        return true;
    return false;
}

Native::Fallback::Fallback()
    :
    profile(std::make_shared<Native::Fallback::Profile>())
{
    profile->parent = this;

    yang_name = "fallback"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Fallback::~Fallback()
{
}

bool Native::Fallback::has_data() const
{
    if (is_presence_container) return true;
    return (profile !=  nullptr && profile->has_data());
}

bool Native::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Native::Fallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-dot1x:profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Fallback::Profile>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(profile != nullptr)
    {
        _children["Cisco-IOS-XE-dot1x:profile"] = profile;
    }

    return _children;
}

void Native::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Fallback::Profile::Profile()
    :
    fallback_list(this, {"name"})
{

    yang_name = "profile"; yang_parent_name = "fallback"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Fallback::Profile::~Profile()
{
}

bool Native::Fallback::Profile::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fallback_list.len(); index++)
    {
        if(fallback_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Fallback::Profile::has_operation() const
{
    for (std::size_t index=0; index<fallback_list.len(); index++)
    {
        if(fallback_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Fallback::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fallback/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fallback::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Fallback::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback-list")
    {
        auto ent_ = std::make_shared<Native::Fallback::Profile::FallbackList>();
        ent_->parent = this;
        fallback_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Fallback::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fallback_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Fallback::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fallback::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fallback::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback-list")
        return true;
    return false;
}

Native::Fallback::Profile::FallbackList::FallbackList()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
        ,
    ip(std::make_shared<Native::Fallback::Profile::FallbackList::Ip>())
{
    ip->parent = this;

    yang_name = "fallback-list"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Fallback::Profile::FallbackList::~FallbackList()
{
}

bool Native::Fallback::Profile::FallbackList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Fallback::Profile::FallbackList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Fallback::Profile::FallbackList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fallback/Cisco-IOS-XE-dot1x:profile/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fallback::Profile::FallbackList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::Profile::FallbackList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Fallback::Profile::FallbackList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Fallback::Profile::FallbackList::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Fallback::Profile::FallbackList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Fallback::Profile::FallbackList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fallback::Profile::FallbackList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Fallback::Profile::FallbackList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "name" || name == "description")
        return true;
    return false;
}

Native::Fallback::Profile::FallbackList::Ip::Ip()
    :
    admission{YType::str, "admission"}
        ,
    access_group(this, {"name"})
{

    yang_name = "ip"; yang_parent_name = "fallback-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Fallback::Profile::FallbackList::Ip::~Ip()
{
}

bool Native::Fallback::Profile::FallbackList::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_group.len(); index++)
    {
        if(access_group[index]->has_data())
            return true;
    }
    return admission.is_set;
}

bool Native::Fallback::Profile::FallbackList::Ip::has_operation() const
{
    for (std::size_t index=0; index<access_group.len(); index++)
    {
        if(access_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admission.yfilter);
}

std::string Native::Fallback::Profile::FallbackList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::Profile::FallbackList::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admission.is_set || is_set(admission.yfilter)) leaf_name_data.push_back(admission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Fallback::Profile::FallbackList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        auto ent_ = std::make_shared<Native::Fallback::Profile::FallbackList::Ip::AccessGroup>();
        ent_->parent = this;
        access_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Fallback::Profile::FallbackList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Fallback::Profile::FallbackList::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admission")
    {
        admission = value;
        admission.value_namespace = name_space;
        admission.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fallback::Profile::FallbackList::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admission")
    {
        admission.yfilter = yfilter;
    }
}

bool Native::Fallback::Profile::FallbackList::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "admission")
        return true;
    return false;
}

Native::Fallback::Profile::FallbackList::Ip::AccessGroup::AccessGroup()
    :
    name{YType::str, "name"},
    in{YType::empty, "in"}
{

    yang_name = "access-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Fallback::Profile::FallbackList::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Fallback::Profile::FallbackList::Ip::AccessGroup::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| in.is_set;
}

bool Native::Fallback::Profile::FallbackList::Ip::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Fallback::Profile::FallbackList::Ip::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fallback::Profile::FallbackList::Ip::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Fallback::Profile::FallbackList::Ip::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "in")
        return true;
    return false;
}

Native::ParameterMap::ParameterMap()
    :
    type(std::make_shared<Native::ParameterMap::Type>())
{
    type->parent = this;

    yang_name = "parameter-map"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::~ParameterMap()
{
}

bool Native::ParameterMap::has_data() const
{
    if (is_presence_container) return true;
    return (type !=  nullptr && type->has_data());
}

bool Native::ParameterMap::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::ParameterMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::ParameterMap::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(type != nullptr)
    {
        _children["type"] = type;
    }

    return _children;
}

void Native::ParameterMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::ParameterMap::Type::Type()
    :
    cws_tunnel(std::make_shared<Native::ParameterMap::Type::CwsTunnel>())
    , inspect(this, {"name"})
    , inspect_global_deprecate(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate>())
    , inspect_global(nullptr) // presence node
    , inspect_vrf(this, {"name"})
    , inspect_zone(this, {"name"})
    , regex(this, {"name"})
    , webauth(this, {"name"})
    , webauth_global(std::make_shared<Native::ParameterMap::Type::WebauthGlobal>())
    , umbrella(std::make_shared<Native::ParameterMap::Type::Umbrella>())
{
    cws_tunnel->parent = this;
    inspect_global_deprecate->parent = this;
    webauth_global->parent = this;
    umbrella->parent = this;

    yang_name = "type"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::~Type()
{
}

bool Native::ParameterMap::Type::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inspect.len(); index++)
    {
        if(inspect[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<inspect_vrf.len(); index++)
    {
        if(inspect_vrf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<inspect_zone.len(); index++)
    {
        if(inspect_zone[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<regex.len(); index++)
    {
        if(regex[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<webauth.len(); index++)
    {
        if(webauth[index]->has_data())
            return true;
    }
    return (cws_tunnel !=  nullptr && cws_tunnel->has_data())
	|| (inspect_global_deprecate !=  nullptr && inspect_global_deprecate->has_data())
	|| (inspect_global !=  nullptr && inspect_global->has_data())
	|| (webauth_global !=  nullptr && webauth_global->has_data())
	|| (umbrella !=  nullptr && umbrella->has_data());
}

bool Native::ParameterMap::Type::has_operation() const
{
    for (std::size_t index=0; index<inspect.len(); index++)
    {
        if(inspect[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<inspect_vrf.len(); index++)
    {
        if(inspect_vrf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<inspect_zone.len(); index++)
    {
        if(inspect_zone[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<regex.len(); index++)
    {
        if(regex[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<webauth.len(); index++)
    {
        if(webauth[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_operation())
	|| (inspect_global_deprecate !=  nullptr && inspect_global_deprecate->has_operation())
	|| (inspect_global !=  nullptr && inspect_global->has_operation())
	|| (webauth_global !=  nullptr && webauth_global->has_operation())
	|| (umbrella !=  nullptr && umbrella->has_operation());
}

std::string Native::ParameterMap::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-policy:cws-tunnel")
    {
        if(cws_tunnel == nullptr)
        {
            cws_tunnel = std::make_shared<Native::ParameterMap::Type::CwsTunnel>();
        }
        return cws_tunnel;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:inspect")
    {
        auto ent_ = std::make_shared<Native::ParameterMap::Type::Inspect>();
        ent_->parent = this;
        inspect.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:inspect-global-deprecate")
    {
        if(inspect_global_deprecate == nullptr)
        {
            inspect_global_deprecate = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate>();
        }
        return inspect_global_deprecate;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:inspect-global")
    {
        if(inspect_global == nullptr)
        {
            inspect_global = std::make_shared<Native::ParameterMap::Type::InspectGlobal>();
        }
        return inspect_global;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:inspect-vrf")
    {
        auto ent_ = std::make_shared<Native::ParameterMap::Type::InspectVrf>();
        ent_->parent = this;
        inspect_vrf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:inspect-zone")
    {
        auto ent_ = std::make_shared<Native::ParameterMap::Type::InspectZone>();
        ent_->parent = this;
        inspect_zone.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:regex")
    {
        auto ent_ = std::make_shared<Native::ParameterMap::Type::Regex>();
        ent_->parent = this;
        regex.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:webauth")
    {
        auto ent_ = std::make_shared<Native::ParameterMap::Type::Webauth>();
        ent_->parent = this;
        webauth.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:webauth-global")
    {
        if(webauth_global == nullptr)
        {
            webauth_global = std::make_shared<Native::ParameterMap::Type::WebauthGlobal>();
        }
        return webauth_global;
    }

    if(child_yang_name == "Cisco-IOS-XE-umbrella:umbrella")
    {
        if(umbrella == nullptr)
        {
            umbrella = std::make_shared<Native::ParameterMap::Type::Umbrella>();
        }
        return umbrella;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cws_tunnel != nullptr)
    {
        _children["Cisco-IOS-XE-policy:cws-tunnel"] = cws_tunnel;
    }

    count_ = 0;
    for (auto ent_ : inspect.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(inspect_global_deprecate != nullptr)
    {
        _children["Cisco-IOS-XE-policy:inspect-global-deprecate"] = inspect_global_deprecate;
    }

    if(inspect_global != nullptr)
    {
        _children["Cisco-IOS-XE-policy:inspect-global"] = inspect_global;
    }

    count_ = 0;
    for (auto ent_ : inspect_vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : inspect_zone.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : regex.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : webauth.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(webauth_global != nullptr)
    {
        _children["Cisco-IOS-XE-policy:webauth-global"] = webauth_global;
    }

    if(umbrella != nullptr)
    {
        _children["Cisco-IOS-XE-umbrella:umbrella"] = umbrella;
    }

    return _children;
}

void Native::ParameterMap::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cws-tunnel" || name == "inspect" || name == "inspect-global-deprecate" || name == "inspect-global" || name == "inspect-vrf" || name == "inspect-zone" || name == "regex" || name == "webauth" || name == "webauth-global" || name == "umbrella")
        return true;
    return false;
}

Native::ParameterMap::Type::CwsTunnel::CwsTunnel()
    :
    global(nullptr) // presence node
{

    yang_name = "cws-tunnel"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::CwsTunnel::~CwsTunnel()
{
}

bool Native::ParameterMap::Type::CwsTunnel::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data());
}

bool Native::ParameterMap::Type::CwsTunnel::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::ParameterMap::Type::CwsTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::CwsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:cws-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::CwsTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::CwsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::CwsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    return _children;
}

void Native::ParameterMap::Type::CwsTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::CwsTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::CwsTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

Native::ParameterMap::Type::CwsTunnel::Global::Global()
    :
    fail_open{YType::empty, "fail-open"},
    logging{YType::empty, "logging"},
    redirect_list{YType::str, "redirect-list"}
        ,
    license(std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global::License>())
    , primary(nullptr) // presence node
    , secondary(nullptr) // presence node
    , whitelist(nullptr) // presence node
{
    license->parent = this;

    yang_name = "global"; yang_parent_name = "cws-tunnel"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::ParameterMap::Type::CwsTunnel::Global::~Global()
{
}

bool Native::ParameterMap::Type::CwsTunnel::Global::has_data() const
{
    if (is_presence_container) return true;
    return fail_open.is_set
	|| logging.is_set
	|| redirect_list.is_set
	|| (license !=  nullptr && license->has_data())
	|| (primary !=  nullptr && primary->has_data())
	|| (secondary !=  nullptr && secondary->has_data())
	|| (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::ParameterMap::Type::CwsTunnel::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fail_open.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(redirect_list.yfilter)
	|| (license !=  nullptr && license->has_operation())
	|| (primary !=  nullptr && primary->has_operation())
	|| (secondary !=  nullptr && secondary->has_operation())
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:cws-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::CwsTunnel::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fail_open.is_set || is_set(fail_open.yfilter)) leaf_name_data.push_back(fail_open.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (redirect_list.is_set || is_set(redirect_list.yfilter)) leaf_name_data.push_back(redirect_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::CwsTunnel::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "license")
    {
        if(license == nullptr)
        {
            license = std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global::License>();
        }
        return license;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        if(secondary == nullptr)
        {
            secondary = std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global::Secondary>();
        }
        return secondary;
    }

    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::CwsTunnel::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(license != nullptr)
    {
        _children["license"] = license;
    }

    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    if(secondary != nullptr)
    {
        _children["secondary"] = secondary;
    }

    if(whitelist != nullptr)
    {
        _children["whitelist"] = whitelist;
    }

    return _children;
}

void Native::ParameterMap::Type::CwsTunnel::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fail-open")
    {
        fail_open = value;
        fail_open.value_namespace = name_space;
        fail_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect-list")
    {
        redirect_list = value;
        redirect_list.value_namespace = name_space;
        redirect_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::CwsTunnel::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fail-open")
    {
        fail_open.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "redirect-list")
    {
        redirect_list.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::CwsTunnel::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "license" || name == "primary" || name == "secondary" || name == "whitelist" || name == "fail-open" || name == "logging" || name == "redirect-list")
        return true;
    return false;
}

Native::ParameterMap::Type::CwsTunnel::Global::License::License()
    :
    unencypted(std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global::License::Unencypted>())
    , encrypted(std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global::License::Encrypted>())
{
    unencypted->parent = this;
    encrypted->parent = this;

    yang_name = "license"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::CwsTunnel::Global::License::~License()
{
}

bool Native::ParameterMap::Type::CwsTunnel::Global::License::has_data() const
{
    if (is_presence_container) return true;
    return (unencypted !=  nullptr && unencypted->has_data())
	|| (encrypted !=  nullptr && encrypted->has_data());
}

bool Native::ParameterMap::Type::CwsTunnel::Global::License::has_operation() const
{
    return is_set(yfilter)
	|| (unencypted !=  nullptr && unencypted->has_operation())
	|| (encrypted !=  nullptr && encrypted->has_operation());
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::License::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:cws-tunnel/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::License::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::CwsTunnel::Global::License::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::CwsTunnel::Global::License::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unencypted")
    {
        if(unencypted == nullptr)
        {
            unencypted = std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global::License::Unencypted>();
        }
        return unencypted;
    }

    if(child_yang_name == "encrypted")
    {
        if(encrypted == nullptr)
        {
            encrypted = std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global::License::Encrypted>();
        }
        return encrypted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::CwsTunnel::Global::License::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(unencypted != nullptr)
    {
        _children["unencypted"] = unencypted;
    }

    if(encrypted != nullptr)
    {
        _children["encrypted"] = encrypted;
    }

    return _children;
}

void Native::ParameterMap::Type::CwsTunnel::Global::License::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::CwsTunnel::Global::License::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::CwsTunnel::Global::License::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unencypted" || name == "encrypted")
        return true;
    return false;
}

Native::ParameterMap::Type::CwsTunnel::Global::License::Unencypted::Unencypted()
    :
    hex_string{YType::str, "hex-string"}
{

    yang_name = "unencypted"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::CwsTunnel::Global::License::Unencypted::~Unencypted()
{
}

bool Native::ParameterMap::Type::CwsTunnel::Global::License::Unencypted::has_data() const
{
    if (is_presence_container) return true;
    return hex_string.is_set;
}

bool Native::ParameterMap::Type::CwsTunnel::Global::License::Unencypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::License::Unencypted::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:cws-tunnel/global/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::License::Unencypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unencypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::CwsTunnel::Global::License::Unencypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::CwsTunnel::Global::License::Unencypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::CwsTunnel::Global::License::Unencypted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::CwsTunnel::Global::License::Unencypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::CwsTunnel::Global::License::Unencypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::CwsTunnel::Global::License::Unencypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex-string")
        return true;
    return false;
}

Native::ParameterMap::Type::CwsTunnel::Global::License::Encrypted::Encrypted()
    :
    hex_string{YType::str, "hex-string"}
{

    yang_name = "encrypted"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::CwsTunnel::Global::License::Encrypted::~Encrypted()
{
}

bool Native::ParameterMap::Type::CwsTunnel::Global::License::Encrypted::has_data() const
{
    if (is_presence_container) return true;
    return hex_string.is_set;
}

bool Native::ParameterMap::Type::CwsTunnel::Global::License::Encrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::License::Encrypted::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:cws-tunnel/global/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::License::Encrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::CwsTunnel::Global::License::Encrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::CwsTunnel::Global::License::Encrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::CwsTunnel::Global::License::Encrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::CwsTunnel::Global::License::Encrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::CwsTunnel::Global::License::Encrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::CwsTunnel::Global::License::Encrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex-string")
        return true;
    return false;
}

Native::ParameterMap::Type::CwsTunnel::Global::Primary::Primary()
    :
    tower(std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global::Primary::Tower>())
{
    tower->parent = this;

    yang_name = "primary"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::ParameterMap::Type::CwsTunnel::Global::Primary::~Primary()
{
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Primary::has_data() const
{
    if (is_presence_container) return true;
    return (tower !=  nullptr && tower->has_data());
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Primary::has_operation() const
{
    return is_set(yfilter)
	|| (tower !=  nullptr && tower->has_operation());
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::Primary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:cws-tunnel/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::CwsTunnel::Global::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::CwsTunnel::Global::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tower")
    {
        if(tower == nullptr)
        {
            tower = std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global::Primary::Tower>();
        }
        return tower;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::CwsTunnel::Global::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tower != nullptr)
    {
        _children["tower"] = tower;
    }

    return _children;
}

void Native::ParameterMap::Type::CwsTunnel::Global::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::CwsTunnel::Global::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tower")
        return true;
    return false;
}

Native::ParameterMap::Type::CwsTunnel::Global::Primary::Tower::Tower()
    :
    ipv4{YType::str, "ipv4"},
    name{YType::str, "name"}
{

    yang_name = "tower"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::CwsTunnel::Global::Primary::Tower::~Tower()
{
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Primary::Tower::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Primary::Tower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::Primary::Tower::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:cws-tunnel/global/primary/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::Primary::Tower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tower";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::CwsTunnel::Global::Primary::Tower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::CwsTunnel::Global::Primary::Tower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::CwsTunnel::Global::Primary::Tower::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::CwsTunnel::Global::Primary::Tower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::CwsTunnel::Global::Primary::Tower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Primary::Tower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Secondary()
    :
    tower(std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Tower>())
{
    tower->parent = this;

    yang_name = "secondary"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::ParameterMap::Type::CwsTunnel::Global::Secondary::~Secondary()
{
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Secondary::has_data() const
{
    if (is_presence_container) return true;
    return (tower !=  nullptr && tower->has_data());
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| (tower !=  nullptr && tower->has_operation());
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::Secondary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:cws-tunnel/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::CwsTunnel::Global::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::CwsTunnel::Global::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tower")
    {
        if(tower == nullptr)
        {
            tower = std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Tower>();
        }
        return tower;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::CwsTunnel::Global::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tower != nullptr)
    {
        _children["tower"] = tower;
    }

    return _children;
}

void Native::ParameterMap::Type::CwsTunnel::Global::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::CwsTunnel::Global::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tower")
        return true;
    return false;
}

Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Tower::Tower()
    :
    ipv4{YType::str, "ipv4"},
    name{YType::str, "name"}
{

    yang_name = "tower"; yang_parent_name = "secondary"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Tower::~Tower()
{
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Tower::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Tower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Tower::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:cws-tunnel/global/secondary/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Tower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tower";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Tower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Tower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Tower::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Tower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Tower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Tower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Whitelist()
    :
    acl(std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Acl>())
    , domain_name(std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::DomainName>())
    , download(nullptr) // presence node
{
    acl->parent = this;
    domain_name->parent = this;

    yang_name = "whitelist"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::~Whitelist()
{
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::has_data() const
{
    if (is_presence_container) return true;
    return (acl !=  nullptr && acl->has_data())
	|| (domain_name !=  nullptr && domain_name->has_data())
	|| (download !=  nullptr && download->has_data());
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (domain_name !=  nullptr && domain_name->has_operation())
	|| (download !=  nullptr && download->has_operation());
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:cws-tunnel/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::DomainName>();
        }
        return domain_name;
    }

    if(child_yang_name == "download")
    {
        if(download == nullptr)
        {
            download = std::make_shared<Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Download>();
        }
        return download;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl != nullptr)
    {
        _children["acl"] = acl;
    }

    if(domain_name != nullptr)
    {
        _children["domain-name"] = domain_name;
    }

    if(download != nullptr)
    {
        _children["download"] = download;
    }

    return _children;
}

void Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "domain-name" || name == "download")
        return true;
    return false;
}

Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Acl::Acl()
    :
    acl_number{YType::str, "acl-number"},
    name{YType::str, "name"}
{

    yang_name = "acl"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Acl::~Acl()
{
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Acl::has_data() const
{
    if (is_presence_container) return true;
    return acl_number.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_number.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Acl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:cws-tunnel/global/whitelist/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_number.is_set || is_set(acl_number.yfilter)) leaf_name_data.push_back(acl_number.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-number")
    {
        acl_number = value;
        acl_number.value_namespace = name_space;
        acl_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-number")
    {
        acl_number.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-number" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::DomainName::DomainName()
    :
    regex{YType::str, "regex"}
{

    yang_name = "domain-name"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::DomainName::~DomainName()
{
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::DomainName::has_data() const
{
    if (is_presence_container) return true;
    return regex.is_set;
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regex.yfilter);
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::DomainName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:cws-tunnel/global/whitelist/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regex")
        return true;
    return false;
}

Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Download::Download()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "download"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Download::~Download()
{
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Download::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Download::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Download::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:cws-tunnel/global/whitelist/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Download::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Download::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Download::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Download::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Download::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Download::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Download::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Inspect()
    :
    name{YType::str, "name"},
    dns_timeout{YType::uint32, "dns-timeout"},
    icmp_unreachable_allow{YType::empty, "icmp-unreachable-allow"}
        ,
    alert(std::make_shared<Native::ParameterMap::Type::Inspect::Alert>())
    , application_inspect(std::make_shared<Native::ParameterMap::Type::Inspect::ApplicationInspect>())
    , audit_trail(std::make_shared<Native::ParameterMap::Type::Inspect::AuditTrail>())
    , icmp(std::make_shared<Native::ParameterMap::Type::Inspect::Icmp>())
    , log(std::make_shared<Native::ParameterMap::Type::Inspect::Log>())
    , max_incomplete(std::make_shared<Native::ParameterMap::Type::Inspect::MaxIncomplete>())
    , one_minute(std::make_shared<Native::ParameterMap::Type::Inspect::OneMinute>())
    , sessions(std::make_shared<Native::ParameterMap::Type::Inspect::Sessions>())
    , tcp(std::make_shared<Native::ParameterMap::Type::Inspect::Tcp>())
    , udp(std::make_shared<Native::ParameterMap::Type::Inspect::Udp>())
    , zone_mismatch(std::make_shared<Native::ParameterMap::Type::Inspect::ZoneMismatch>())
{
    alert->parent = this;
    application_inspect->parent = this;
    audit_trail->parent = this;
    icmp->parent = this;
    log->parent = this;
    max_incomplete->parent = this;
    one_minute->parent = this;
    sessions->parent = this;
    tcp->parent = this;
    udp->parent = this;
    zone_mismatch->parent = this;

    yang_name = "inspect"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::Inspect::~Inspect()
{
}

bool Native::ParameterMap::Type::Inspect::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| dns_timeout.is_set
	|| icmp_unreachable_allow.is_set
	|| (alert !=  nullptr && alert->has_data())
	|| (application_inspect !=  nullptr && application_inspect->has_data())
	|| (audit_trail !=  nullptr && audit_trail->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (log !=  nullptr && log->has_data())
	|| (max_incomplete !=  nullptr && max_incomplete->has_data())
	|| (one_minute !=  nullptr && one_minute->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (udp !=  nullptr && udp->has_data())
	|| (zone_mismatch !=  nullptr && zone_mismatch->has_data());
}

bool Native::ParameterMap::Type::Inspect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(dns_timeout.yfilter)
	|| ydk::is_set(icmp_unreachable_allow.yfilter)
	|| (alert !=  nullptr && alert->has_operation())
	|| (application_inspect !=  nullptr && application_inspect->has_operation())
	|| (audit_trail !=  nullptr && audit_trail->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (log !=  nullptr && log->has_operation())
	|| (max_incomplete !=  nullptr && max_incomplete->has_operation())
	|| (one_minute !=  nullptr && one_minute->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (udp !=  nullptr && udp->has_operation())
	|| (zone_mismatch !=  nullptr && zone_mismatch->has_operation());
}

std::string Native::ParameterMap::Type::Inspect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::Inspect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:inspect";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (dns_timeout.is_set || is_set(dns_timeout.yfilter)) leaf_name_data.push_back(dns_timeout.get_name_leafdata());
    if (icmp_unreachable_allow.is_set || is_set(icmp_unreachable_allow.yfilter)) leaf_name_data.push_back(icmp_unreachable_allow.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alert")
    {
        if(alert == nullptr)
        {
            alert = std::make_shared<Native::ParameterMap::Type::Inspect::Alert>();
        }
        return alert;
    }

    if(child_yang_name == "application-inspect")
    {
        if(application_inspect == nullptr)
        {
            application_inspect = std::make_shared<Native::ParameterMap::Type::Inspect::ApplicationInspect>();
        }
        return application_inspect;
    }

    if(child_yang_name == "audit-trail")
    {
        if(audit_trail == nullptr)
        {
            audit_trail = std::make_shared<Native::ParameterMap::Type::Inspect::AuditTrail>();
        }
        return audit_trail;
    }

    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::ParameterMap::Type::Inspect::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::ParameterMap::Type::Inspect::Log>();
        }
        return log;
    }

    if(child_yang_name == "max-incomplete")
    {
        if(max_incomplete == nullptr)
        {
            max_incomplete = std::make_shared<Native::ParameterMap::Type::Inspect::MaxIncomplete>();
        }
        return max_incomplete;
    }

    if(child_yang_name == "one-minute")
    {
        if(one_minute == nullptr)
        {
            one_minute = std::make_shared<Native::ParameterMap::Type::Inspect::OneMinute>();
        }
        return one_minute;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Native::ParameterMap::Type::Inspect::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ParameterMap::Type::Inspect::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::ParameterMap::Type::Inspect::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "zone-mismatch")
    {
        if(zone_mismatch == nullptr)
        {
            zone_mismatch = std::make_shared<Native::ParameterMap::Type::Inspect::ZoneMismatch>();
        }
        return zone_mismatch;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(alert != nullptr)
    {
        _children["alert"] = alert;
    }

    if(application_inspect != nullptr)
    {
        _children["application-inspect"] = application_inspect;
    }

    if(audit_trail != nullptr)
    {
        _children["audit-trail"] = audit_trail;
    }

    if(icmp != nullptr)
    {
        _children["icmp"] = icmp;
    }

    if(log != nullptr)
    {
        _children["log"] = log;
    }

    if(max_incomplete != nullptr)
    {
        _children["max-incomplete"] = max_incomplete;
    }

    if(one_minute != nullptr)
    {
        _children["one-minute"] = one_minute;
    }

    if(sessions != nullptr)
    {
        _children["sessions"] = sessions;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    if(zone_mismatch != nullptr)
    {
        _children["zone-mismatch"] = zone_mismatch;
    }

    return _children;
}

void Native::ParameterMap::Type::Inspect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dns-timeout")
    {
        dns_timeout = value;
        dns_timeout.value_namespace = name_space;
        dns_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmp-unreachable-allow")
    {
        icmp_unreachable_allow = value;
        icmp_unreachable_allow.value_namespace = name_space;
        icmp_unreachable_allow.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "dns-timeout")
    {
        dns_timeout.yfilter = yfilter;
    }
    if(value_path == "icmp-unreachable-allow")
    {
        icmp_unreachable_allow.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alert" || name == "application-inspect" || name == "audit-trail" || name == "icmp" || name == "log" || name == "max-incomplete" || name == "one-minute" || name == "sessions" || name == "tcp" || name == "udp" || name == "zone-mismatch" || name == "name" || name == "dns-timeout" || name == "icmp-unreachable-allow")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Alert::Alert()
    :
    on{YType::empty, "on"}
{

    yang_name = "alert"; yang_parent_name = "inspect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Alert::~Alert()
{
}

bool Native::ParameterMap::Type::Inspect::Alert::has_data() const
{
    if (is_presence_container) return true;
    return on.is_set;
}

bool Native::ParameterMap::Type::Inspect::Alert::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::Alert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Alert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Alert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Alert::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::Alert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::Alert::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::Alert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::ApplicationInspect::ApplicationInspect()
    :
    dns{YType::boolean, "dns"},
    exec{YType::boolean, "exec"},
    ftp{YType::boolean, "ftp"},
    gtp{YType::boolean, "gtp"},
    h323{YType::boolean, "h323"},
    http{YType::boolean, "http"},
    imap{YType::boolean, "imap"},
    login{YType::boolean, "login"},
    msrpc{YType::boolean, "msrpc"},
    netbios{YType::boolean, "netbios"},
    pop3{YType::boolean, "pop3"},
    rtsp{YType::boolean, "rtsp"},
    shell{YType::boolean, "shell"},
    sip{YType::boolean, "sip"},
    skinny{YType::boolean, "skinny"},
    smtp{YType::boolean, "smtp"},
    sunrpc{YType::boolean, "sunrpc"},
    tftp{YType::boolean, "tftp"}
{

    yang_name = "application-inspect"; yang_parent_name = "inspect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::ApplicationInspect::~ApplicationInspect()
{
}

bool Native::ParameterMap::Type::Inspect::ApplicationInspect::has_data() const
{
    if (is_presence_container) return true;
    return dns.is_set
	|| exec.is_set
	|| ftp.is_set
	|| gtp.is_set
	|| h323.is_set
	|| http.is_set
	|| imap.is_set
	|| login.is_set
	|| msrpc.is_set
	|| netbios.is_set
	|| pop3.is_set
	|| rtsp.is_set
	|| shell.is_set
	|| sip.is_set
	|| skinny.is_set
	|| smtp.is_set
	|| sunrpc.is_set
	|| tftp.is_set;
}

bool Native::ParameterMap::Type::Inspect::ApplicationInspect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dns.yfilter)
	|| ydk::is_set(exec.yfilter)
	|| ydk::is_set(ftp.yfilter)
	|| ydk::is_set(gtp.yfilter)
	|| ydk::is_set(h323.yfilter)
	|| ydk::is_set(http.yfilter)
	|| ydk::is_set(imap.yfilter)
	|| ydk::is_set(login.yfilter)
	|| ydk::is_set(msrpc.yfilter)
	|| ydk::is_set(netbios.yfilter)
	|| ydk::is_set(pop3.yfilter)
	|| ydk::is_set(rtsp.yfilter)
	|| ydk::is_set(shell.yfilter)
	|| ydk::is_set(sip.yfilter)
	|| ydk::is_set(skinny.yfilter)
	|| ydk::is_set(smtp.yfilter)
	|| ydk::is_set(sunrpc.yfilter)
	|| ydk::is_set(tftp.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::ApplicationInspect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-inspect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::ApplicationInspect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns.is_set || is_set(dns.yfilter)) leaf_name_data.push_back(dns.get_name_leafdata());
    if (exec.is_set || is_set(exec.yfilter)) leaf_name_data.push_back(exec.get_name_leafdata());
    if (ftp.is_set || is_set(ftp.yfilter)) leaf_name_data.push_back(ftp.get_name_leafdata());
    if (gtp.is_set || is_set(gtp.yfilter)) leaf_name_data.push_back(gtp.get_name_leafdata());
    if (h323.is_set || is_set(h323.yfilter)) leaf_name_data.push_back(h323.get_name_leafdata());
    if (http.is_set || is_set(http.yfilter)) leaf_name_data.push_back(http.get_name_leafdata());
    if (imap.is_set || is_set(imap.yfilter)) leaf_name_data.push_back(imap.get_name_leafdata());
    if (login.is_set || is_set(login.yfilter)) leaf_name_data.push_back(login.get_name_leafdata());
    if (msrpc.is_set || is_set(msrpc.yfilter)) leaf_name_data.push_back(msrpc.get_name_leafdata());
    if (netbios.is_set || is_set(netbios.yfilter)) leaf_name_data.push_back(netbios.get_name_leafdata());
    if (pop3.is_set || is_set(pop3.yfilter)) leaf_name_data.push_back(pop3.get_name_leafdata());
    if (rtsp.is_set || is_set(rtsp.yfilter)) leaf_name_data.push_back(rtsp.get_name_leafdata());
    if (shell.is_set || is_set(shell.yfilter)) leaf_name_data.push_back(shell.get_name_leafdata());
    if (sip.is_set || is_set(sip.yfilter)) leaf_name_data.push_back(sip.get_name_leafdata());
    if (skinny.is_set || is_set(skinny.yfilter)) leaf_name_data.push_back(skinny.get_name_leafdata());
    if (smtp.is_set || is_set(smtp.yfilter)) leaf_name_data.push_back(smtp.get_name_leafdata());
    if (sunrpc.is_set || is_set(sunrpc.yfilter)) leaf_name_data.push_back(sunrpc.get_name_leafdata());
    if (tftp.is_set || is_set(tftp.yfilter)) leaf_name_data.push_back(tftp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::ApplicationInspect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::ApplicationInspect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::ApplicationInspect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns")
    {
        dns = value;
        dns.value_namespace = name_space;
        dns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec")
    {
        exec = value;
        exec.value_namespace = name_space;
        exec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ftp")
    {
        ftp = value;
        ftp.value_namespace = name_space;
        ftp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gtp")
    {
        gtp = value;
        gtp.value_namespace = name_space;
        gtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "h323")
    {
        h323 = value;
        h323.value_namespace = name_space;
        h323.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "http")
    {
        http = value;
        http.value_namespace = name_space;
        http.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imap")
    {
        imap = value;
        imap.value_namespace = name_space;
        imap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "login")
    {
        login = value;
        login.value_namespace = name_space;
        login.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msrpc")
    {
        msrpc = value;
        msrpc.value_namespace = name_space;
        msrpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netbios")
    {
        netbios = value;
        netbios.value_namespace = name_space;
        netbios.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pop3")
    {
        pop3 = value;
        pop3.value_namespace = name_space;
        pop3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtsp")
    {
        rtsp = value;
        rtsp.value_namespace = name_space;
        rtsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shell")
    {
        shell = value;
        shell.value_namespace = name_space;
        shell.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sip")
    {
        sip = value;
        sip.value_namespace = name_space;
        sip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skinny")
    {
        skinny = value;
        skinny.value_namespace = name_space;
        skinny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "smtp")
    {
        smtp = value;
        smtp.value_namespace = name_space;
        smtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sunrpc")
    {
        sunrpc = value;
        sunrpc.value_namespace = name_space;
        sunrpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tftp")
    {
        tftp = value;
        tftp.value_namespace = name_space;
        tftp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::ApplicationInspect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns")
    {
        dns.yfilter = yfilter;
    }
    if(value_path == "exec")
    {
        exec.yfilter = yfilter;
    }
    if(value_path == "ftp")
    {
        ftp.yfilter = yfilter;
    }
    if(value_path == "gtp")
    {
        gtp.yfilter = yfilter;
    }
    if(value_path == "h323")
    {
        h323.yfilter = yfilter;
    }
    if(value_path == "http")
    {
        http.yfilter = yfilter;
    }
    if(value_path == "imap")
    {
        imap.yfilter = yfilter;
    }
    if(value_path == "login")
    {
        login.yfilter = yfilter;
    }
    if(value_path == "msrpc")
    {
        msrpc.yfilter = yfilter;
    }
    if(value_path == "netbios")
    {
        netbios.yfilter = yfilter;
    }
    if(value_path == "pop3")
    {
        pop3.yfilter = yfilter;
    }
    if(value_path == "rtsp")
    {
        rtsp.yfilter = yfilter;
    }
    if(value_path == "shell")
    {
        shell.yfilter = yfilter;
    }
    if(value_path == "sip")
    {
        sip.yfilter = yfilter;
    }
    if(value_path == "skinny")
    {
        skinny.yfilter = yfilter;
    }
    if(value_path == "smtp")
    {
        smtp.yfilter = yfilter;
    }
    if(value_path == "sunrpc")
    {
        sunrpc.yfilter = yfilter;
    }
    if(value_path == "tftp")
    {
        tftp.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::ApplicationInspect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns" || name == "exec" || name == "ftp" || name == "gtp" || name == "h323" || name == "http" || name == "imap" || name == "login" || name == "msrpc" || name == "netbios" || name == "pop3" || name == "rtsp" || name == "shell" || name == "sip" || name == "skinny" || name == "smtp" || name == "sunrpc" || name == "tftp")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::AuditTrail::AuditTrail()
    :
    on{YType::empty, "on"}
{

    yang_name = "audit-trail"; yang_parent_name = "inspect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::AuditTrail::~AuditTrail()
{
}

bool Native::ParameterMap::Type::Inspect::AuditTrail::has_data() const
{
    if (is_presence_container) return true;
    return on.is_set;
}

bool Native::ParameterMap::Type::Inspect::AuditTrail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::AuditTrail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "audit-trail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::AuditTrail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::AuditTrail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::AuditTrail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::AuditTrail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::AuditTrail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::AuditTrail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Icmp::Icmp()
    :
    idle_time(std::make_shared<Native::ParameterMap::Type::Inspect::Icmp::IdleTime>())
{
    idle_time->parent = this;

    yang_name = "icmp"; yang_parent_name = "inspect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Icmp::~Icmp()
{
}

bool Native::ParameterMap::Type::Inspect::Icmp::has_data() const
{
    if (is_presence_container) return true;
    return (idle_time !=  nullptr && idle_time->has_data());
}

bool Native::ParameterMap::Type::Inspect::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| (idle_time !=  nullptr && idle_time->has_operation());
}

std::string Native::ParameterMap::Type::Inspect::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idle-time")
    {
        if(idle_time == nullptr)
        {
            idle_time = std::make_shared<Native::ParameterMap::Type::Inspect::Icmp::IdleTime>();
        }
        return idle_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idle_time != nullptr)
    {
        _children["idle-time"] = idle_time;
    }

    return _children;
}

void Native::ParameterMap::Type::Inspect::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::Inspect::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::Inspect::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Icmp::IdleTime::IdleTime()
    :
    timeout{YType::uint32, "timeout"},
    ageout_time{YType::uint32, "ageout-time"}
{

    yang_name = "idle-time"; yang_parent_name = "icmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Icmp::IdleTime::~IdleTime()
{
}

bool Native::ParameterMap::Type::Inspect::Icmp::IdleTime::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set
	|| ageout_time.is_set;
}

bool Native::ParameterMap::Type::Inspect::Icmp::IdleTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(ageout_time.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::Icmp::IdleTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Icmp::IdleTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (ageout_time.is_set || is_set(ageout_time.yfilter)) leaf_name_data.push_back(ageout_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Icmp::IdleTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Icmp::IdleTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::Icmp::IdleTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ageout-time")
    {
        ageout_time = value;
        ageout_time.value_namespace = name_space;
        ageout_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::Icmp::IdleTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "ageout-time")
    {
        ageout_time.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::Icmp::IdleTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "ageout-time")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Log::Log()
    :
    dropped_packets{YType::empty, "dropped-packets"}
{

    yang_name = "log"; yang_parent_name = "inspect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Log::~Log()
{
}

bool Native::ParameterMap::Type::Inspect::Log::has_data() const
{
    if (is_presence_container) return true;
    return dropped_packets.is_set;
}

bool Native::ParameterMap::Type::Inspect::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::MaxIncomplete::MaxIncomplete()
    :
    high{YType::uint32, "high"},
    low{YType::uint32, "low"}
{

    yang_name = "max-incomplete"; yang_parent_name = "inspect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::MaxIncomplete::~MaxIncomplete()
{
}

bool Native::ParameterMap::Type::Inspect::MaxIncomplete::has_data() const
{
    if (is_presence_container) return true;
    return high.is_set
	|| low.is_set;
}

bool Native::ParameterMap::Type::Inspect::MaxIncomplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::MaxIncomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-incomplete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::MaxIncomplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::MaxIncomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::MaxIncomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::MaxIncomplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::MaxIncomplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::MaxIncomplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::OneMinute::OneMinute()
    :
    high{YType::uint32, "high"},
    low{YType::uint32, "low"}
{

    yang_name = "one-minute"; yang_parent_name = "inspect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::OneMinute::~OneMinute()
{
}

bool Native::ParameterMap::Type::Inspect::OneMinute::has_data() const
{
    if (is_presence_container) return true;
    return high.is_set
	|| low.is_set;
}

bool Native::ParameterMap::Type::Inspect::OneMinute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::OneMinute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-minute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::OneMinute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::OneMinute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::OneMinute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::OneMinute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::OneMinute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::OneMinute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Sessions::Sessions()
    :
    maximum{YType::uint32, "maximum"},
    packet{YType::uint8, "packet"}
        ,
    rate(std::make_shared<Native::ParameterMap::Type::Inspect::Sessions::Rate>())
{
    rate->parent = this;

    yang_name = "sessions"; yang_parent_name = "inspect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Sessions::~Sessions()
{
}

bool Native::ParameterMap::Type::Inspect::Sessions::has_data() const
{
    if (is_presence_container) return true;
    return maximum.is_set
	|| packet.is_set
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::ParameterMap::Type::Inspect::Sessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(packet.yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::ParameterMap::Type::Inspect::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (packet.is_set || is_set(packet.yfilter)) leaf_name_data.push_back(packet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::ParameterMap::Type::Inspect::Sessions::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rate != nullptr)
    {
        _children["rate"] = rate;
    }

    return _children;
}

void Native::ParameterMap::Type::Inspect::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet")
    {
        packet = value;
        packet.value_namespace = name_space;
        packet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "packet")
    {
        packet.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "maximum" || name == "packet")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Sessions::Rate::Rate()
    :
    high(std::make_shared<Native::ParameterMap::Type::Inspect::Sessions::Rate::High>())
    , low(std::make_shared<Native::ParameterMap::Type::Inspect::Sessions::Rate::Low>())
{
    high->parent = this;
    low->parent = this;

    yang_name = "rate"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Sessions::Rate::~Rate()
{
}

bool Native::ParameterMap::Type::Inspect::Sessions::Rate::has_data() const
{
    if (is_presence_container) return true;
    return (high !=  nullptr && high->has_data())
	|| (low !=  nullptr && low->has_data());
}

bool Native::ParameterMap::Type::Inspect::Sessions::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (high !=  nullptr && high->has_operation())
	|| (low !=  nullptr && low->has_operation());
}

std::string Native::ParameterMap::Type::Inspect::Sessions::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Sessions::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Sessions::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::ParameterMap::Type::Inspect::Sessions::Rate::High>();
        }
        return high;
    }

    if(child_yang_name == "low")
    {
        if(low == nullptr)
        {
            low = std::make_shared<Native::ParameterMap::Type::Inspect::Sessions::Rate::Low>();
        }
        return low;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Sessions::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    if(low != nullptr)
    {
        _children["low"] = low;
    }

    return _children;
}

void Native::ParameterMap::Type::Inspect::Sessions::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::Inspect::Sessions::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::Inspect::Sessions::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Sessions::Rate::High::High()
    :
    value_{YType::uint32, "value"},
    time{YType::uint32, "time"}
{

    yang_name = "high"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Sessions::Rate::High::~High()
{
}

bool Native::ParameterMap::Type::Inspect::Sessions::Rate::High::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| time.is_set;
}

bool Native::ParameterMap::Type::Inspect::Sessions::Rate::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::Sessions::Rate::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Sessions::Rate::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Sessions::Rate::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Sessions::Rate::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::Sessions::Rate::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::Sessions::Rate::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::Sessions::Rate::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "time")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Sessions::Rate::Low::Low()
    :
    value_{YType::uint32, "value"},
    time{YType::uint32, "time"}
{

    yang_name = "low"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Sessions::Rate::Low::~Low()
{
}

bool Native::ParameterMap::Type::Inspect::Sessions::Rate::Low::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| time.is_set;
}

bool Native::ParameterMap::Type::Inspect::Sessions::Rate::Low::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::Sessions::Rate::Low::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Sessions::Rate::Low::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Sessions::Rate::Low::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Sessions::Rate::Low::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::Sessions::Rate::Low::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::Sessions::Rate::Low::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::Sessions::Rate::Low::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "time")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Tcp::Tcp()
    :
    finwait_time(std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::FinwaitTime>())
    , half_close(std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::HalfClose>())
    , half_open(std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::HalfOpen>())
    , idle(std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::Idle>())
    , idle_time(std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::IdleTime>())
    , max_incomplete(std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete>())
    , synwait_time(std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::SynwaitTime>())
    , window_scale_enforcement(std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::WindowScaleEnforcement>())
{
    finwait_time->parent = this;
    half_close->parent = this;
    half_open->parent = this;
    idle->parent = this;
    idle_time->parent = this;
    max_incomplete->parent = this;
    synwait_time->parent = this;
    window_scale_enforcement->parent = this;

    yang_name = "tcp"; yang_parent_name = "inspect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Tcp::~Tcp()
{
}

bool Native::ParameterMap::Type::Inspect::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return (finwait_time !=  nullptr && finwait_time->has_data())
	|| (half_close !=  nullptr && half_close->has_data())
	|| (half_open !=  nullptr && half_open->has_data())
	|| (idle !=  nullptr && idle->has_data())
	|| (idle_time !=  nullptr && idle_time->has_data())
	|| (max_incomplete !=  nullptr && max_incomplete->has_data())
	|| (synwait_time !=  nullptr && synwait_time->has_data())
	|| (window_scale_enforcement !=  nullptr && window_scale_enforcement->has_data());
}

bool Native::ParameterMap::Type::Inspect::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| (finwait_time !=  nullptr && finwait_time->has_operation())
	|| (half_close !=  nullptr && half_close->has_operation())
	|| (half_open !=  nullptr && half_open->has_operation())
	|| (idle !=  nullptr && idle->has_operation())
	|| (idle_time !=  nullptr && idle_time->has_operation())
	|| (max_incomplete !=  nullptr && max_incomplete->has_operation())
	|| (synwait_time !=  nullptr && synwait_time->has_operation())
	|| (window_scale_enforcement !=  nullptr && window_scale_enforcement->has_operation());
}

std::string Native::ParameterMap::Type::Inspect::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "finwait-time")
    {
        if(finwait_time == nullptr)
        {
            finwait_time = std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::FinwaitTime>();
        }
        return finwait_time;
    }

    if(child_yang_name == "half-close")
    {
        if(half_close == nullptr)
        {
            half_close = std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::HalfClose>();
        }
        return half_close;
    }

    if(child_yang_name == "half-open")
    {
        if(half_open == nullptr)
        {
            half_open = std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::HalfOpen>();
        }
        return half_open;
    }

    if(child_yang_name == "idle")
    {
        if(idle == nullptr)
        {
            idle = std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::Idle>();
        }
        return idle;
    }

    if(child_yang_name == "idle-time")
    {
        if(idle_time == nullptr)
        {
            idle_time = std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::IdleTime>();
        }
        return idle_time;
    }

    if(child_yang_name == "max-incomplete")
    {
        if(max_incomplete == nullptr)
        {
            max_incomplete = std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete>();
        }
        return max_incomplete;
    }

    if(child_yang_name == "synwait-time")
    {
        if(synwait_time == nullptr)
        {
            synwait_time = std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::SynwaitTime>();
        }
        return synwait_time;
    }

    if(child_yang_name == "window-scale-enforcement")
    {
        if(window_scale_enforcement == nullptr)
        {
            window_scale_enforcement = std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::WindowScaleEnforcement>();
        }
        return window_scale_enforcement;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(finwait_time != nullptr)
    {
        _children["finwait-time"] = finwait_time;
    }

    if(half_close != nullptr)
    {
        _children["half-close"] = half_close;
    }

    if(half_open != nullptr)
    {
        _children["half-open"] = half_open;
    }

    if(idle != nullptr)
    {
        _children["idle"] = idle;
    }

    if(idle_time != nullptr)
    {
        _children["idle-time"] = idle_time;
    }

    if(max_incomplete != nullptr)
    {
        _children["max-incomplete"] = max_incomplete;
    }

    if(synwait_time != nullptr)
    {
        _children["synwait-time"] = synwait_time;
    }

    if(window_scale_enforcement != nullptr)
    {
        _children["window-scale-enforcement"] = window_scale_enforcement;
    }

    return _children;
}

void Native::ParameterMap::Type::Inspect::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::Inspect::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::Inspect::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "finwait-time" || name == "half-close" || name == "half-open" || name == "idle" || name == "idle-time" || name == "max-incomplete" || name == "synwait-time" || name == "window-scale-enforcement")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Tcp::FinwaitTime::FinwaitTime()
    :
    timeout{YType::uint32, "timeout"},
    ageout_time{YType::uint32, "ageout-time"}
{

    yang_name = "finwait-time"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Tcp::FinwaitTime::~FinwaitTime()
{
}

bool Native::ParameterMap::Type::Inspect::Tcp::FinwaitTime::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set
	|| ageout_time.is_set;
}

bool Native::ParameterMap::Type::Inspect::Tcp::FinwaitTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(ageout_time.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::Tcp::FinwaitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "finwait-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Tcp::FinwaitTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (ageout_time.is_set || is_set(ageout_time.yfilter)) leaf_name_data.push_back(ageout_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Tcp::FinwaitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Tcp::FinwaitTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::Tcp::FinwaitTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ageout-time")
    {
        ageout_time = value;
        ageout_time.value_namespace = name_space;
        ageout_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::Tcp::FinwaitTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "ageout-time")
    {
        ageout_time.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::Tcp::FinwaitTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "ageout-time")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Tcp::HalfClose::HalfClose()
    :
    reset(std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::HalfClose::Reset>())
{
    reset->parent = this;

    yang_name = "half-close"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Tcp::HalfClose::~HalfClose()
{
}

bool Native::ParameterMap::Type::Inspect::Tcp::HalfClose::has_data() const
{
    if (is_presence_container) return true;
    return (reset !=  nullptr && reset->has_data());
}

bool Native::ParameterMap::Type::Inspect::Tcp::HalfClose::has_operation() const
{
    return is_set(yfilter)
	|| (reset !=  nullptr && reset->has_operation());
}

std::string Native::ParameterMap::Type::Inspect::Tcp::HalfClose::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "half-close";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Tcp::HalfClose::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Tcp::HalfClose::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reset")
    {
        if(reset == nullptr)
        {
            reset = std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::HalfClose::Reset>();
        }
        return reset;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Tcp::HalfClose::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reset != nullptr)
    {
        _children["reset"] = reset;
    }

    return _children;
}

void Native::ParameterMap::Type::Inspect::Tcp::HalfClose::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::Inspect::Tcp::HalfClose::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::Inspect::Tcp::HalfClose::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reset")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Tcp::HalfClose::Reset::Reset()
    :
    off{YType::empty, "off"}
{

    yang_name = "reset"; yang_parent_name = "half-close"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Tcp::HalfClose::Reset::~Reset()
{
}

bool Native::ParameterMap::Type::Inspect::Tcp::HalfClose::Reset::has_data() const
{
    if (is_presence_container) return true;
    return off.is_set;
}

bool Native::ParameterMap::Type::Inspect::Tcp::HalfClose::Reset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(off.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::Tcp::HalfClose::Reset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Tcp::HalfClose::Reset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (off.is_set || is_set(off.yfilter)) leaf_name_data.push_back(off.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Tcp::HalfClose::Reset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Tcp::HalfClose::Reset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::Tcp::HalfClose::Reset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "off")
    {
        off = value;
        off.value_namespace = name_space;
        off.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::Tcp::HalfClose::Reset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "off")
    {
        off.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::Tcp::HalfClose::Reset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "off")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::HalfOpen()
    :
    reset(std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::Reset>())
{
    reset->parent = this;

    yang_name = "half-open"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::~HalfOpen()
{
}

bool Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::has_data() const
{
    if (is_presence_container) return true;
    return (reset !=  nullptr && reset->has_data());
}

bool Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::has_operation() const
{
    return is_set(yfilter)
	|| (reset !=  nullptr && reset->has_operation());
}

std::string Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "half-open";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reset")
    {
        if(reset == nullptr)
        {
            reset = std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::Reset>();
        }
        return reset;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reset != nullptr)
    {
        _children["reset"] = reset;
    }

    return _children;
}

void Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reset")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::Reset::Reset()
    :
    off{YType::empty, "off"}
{

    yang_name = "reset"; yang_parent_name = "half-open"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::Reset::~Reset()
{
}

bool Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::Reset::has_data() const
{
    if (is_presence_container) return true;
    return off.is_set;
}

bool Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::Reset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(off.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::Reset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::Reset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (off.is_set || is_set(off.yfilter)) leaf_name_data.push_back(off.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::Reset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::Reset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::Reset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "off")
    {
        off = value;
        off.value_namespace = name_space;
        off.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::Reset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "off")
    {
        off.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::Reset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "off")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Tcp::Idle::Idle()
    :
    reset(std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::Idle::Reset>())
{
    reset->parent = this;

    yang_name = "idle"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Tcp::Idle::~Idle()
{
}

bool Native::ParameterMap::Type::Inspect::Tcp::Idle::has_data() const
{
    if (is_presence_container) return true;
    return (reset !=  nullptr && reset->has_data());
}

bool Native::ParameterMap::Type::Inspect::Tcp::Idle::has_operation() const
{
    return is_set(yfilter)
	|| (reset !=  nullptr && reset->has_operation());
}

std::string Native::ParameterMap::Type::Inspect::Tcp::Idle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Tcp::Idle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Tcp::Idle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reset")
    {
        if(reset == nullptr)
        {
            reset = std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::Idle::Reset>();
        }
        return reset;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Tcp::Idle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reset != nullptr)
    {
        _children["reset"] = reset;
    }

    return _children;
}

void Native::ParameterMap::Type::Inspect::Tcp::Idle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::Inspect::Tcp::Idle::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::Inspect::Tcp::Idle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reset")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Tcp::Idle::Reset::Reset()
    :
    off{YType::empty, "off"}
{

    yang_name = "reset"; yang_parent_name = "idle"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Tcp::Idle::Reset::~Reset()
{
}

bool Native::ParameterMap::Type::Inspect::Tcp::Idle::Reset::has_data() const
{
    if (is_presence_container) return true;
    return off.is_set;
}

bool Native::ParameterMap::Type::Inspect::Tcp::Idle::Reset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(off.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::Tcp::Idle::Reset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Tcp::Idle::Reset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (off.is_set || is_set(off.yfilter)) leaf_name_data.push_back(off.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Tcp::Idle::Reset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Tcp::Idle::Reset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::Tcp::Idle::Reset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "off")
    {
        off = value;
        off.value_namespace = name_space;
        off.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::Tcp::Idle::Reset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "off")
    {
        off.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::Tcp::Idle::Reset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "off")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Tcp::IdleTime::IdleTime()
    :
    timeout{YType::uint32, "timeout"},
    ageout_time{YType::uint32, "ageout-time"}
{

    yang_name = "idle-time"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Tcp::IdleTime::~IdleTime()
{
}

bool Native::ParameterMap::Type::Inspect::Tcp::IdleTime::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set
	|| ageout_time.is_set;
}

bool Native::ParameterMap::Type::Inspect::Tcp::IdleTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(ageout_time.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::Tcp::IdleTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Tcp::IdleTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (ageout_time.is_set || is_set(ageout_time.yfilter)) leaf_name_data.push_back(ageout_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Tcp::IdleTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Tcp::IdleTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::Tcp::IdleTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ageout-time")
    {
        ageout_time = value;
        ageout_time.value_namespace = name_space;
        ageout_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::Tcp::IdleTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "ageout-time")
    {
        ageout_time.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::Tcp::IdleTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "ageout-time")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::MaxIncomplete()
    :
    host(std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::Host>())
{
    host->parent = this;

    yang_name = "max-incomplete"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::~MaxIncomplete()
{
}

bool Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::has_data() const
{
    if (is_presence_container) return true;
    return (host !=  nullptr && host->has_data());
}

bool Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::has_operation() const
{
    return is_set(yfilter)
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-incomplete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::Host::Host()
    :
    value_{YType::uint32, "value"},
    block_time{YType::uint16, "block-time"}
{

    yang_name = "host"; yang_parent_name = "max-incomplete"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::Host::~Host()
{
}

bool Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::Host::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| block_time.is_set;
}

bool Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(block_time.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (block_time.is_set || is_set(block_time.yfilter)) leaf_name_data.push_back(block_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-time")
    {
        block_time = value;
        block_time.value_namespace = name_space;
        block_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "block-time")
    {
        block_time.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "block-time")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Tcp::SynwaitTime::SynwaitTime()
    :
    timeout{YType::uint32, "timeout"},
    ageout_time{YType::uint32, "ageout-time"}
{

    yang_name = "synwait-time"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Tcp::SynwaitTime::~SynwaitTime()
{
}

bool Native::ParameterMap::Type::Inspect::Tcp::SynwaitTime::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set
	|| ageout_time.is_set;
}

bool Native::ParameterMap::Type::Inspect::Tcp::SynwaitTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(ageout_time.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::Tcp::SynwaitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "synwait-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Tcp::SynwaitTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (ageout_time.is_set || is_set(ageout_time.yfilter)) leaf_name_data.push_back(ageout_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Tcp::SynwaitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Tcp::SynwaitTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::Tcp::SynwaitTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ageout-time")
    {
        ageout_time = value;
        ageout_time.value_namespace = name_space;
        ageout_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::Tcp::SynwaitTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "ageout-time")
    {
        ageout_time.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::Tcp::SynwaitTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "ageout-time")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Tcp::WindowScaleEnforcement::WindowScaleEnforcement()
    :
    loose{YType::empty, "loose"}
{

    yang_name = "window-scale-enforcement"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Tcp::WindowScaleEnforcement::~WindowScaleEnforcement()
{
}

bool Native::ParameterMap::Type::Inspect::Tcp::WindowScaleEnforcement::has_data() const
{
    if (is_presence_container) return true;
    return loose.is_set;
}

bool Native::ParameterMap::Type::Inspect::Tcp::WindowScaleEnforcement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loose.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::Tcp::WindowScaleEnforcement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window-scale-enforcement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Tcp::WindowScaleEnforcement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loose.is_set || is_set(loose.yfilter)) leaf_name_data.push_back(loose.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Tcp::WindowScaleEnforcement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Tcp::WindowScaleEnforcement::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::Tcp::WindowScaleEnforcement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loose")
    {
        loose = value;
        loose.value_namespace = name_space;
        loose.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::Tcp::WindowScaleEnforcement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loose")
    {
        loose.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::Tcp::WindowScaleEnforcement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loose")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Udp::Udp()
    :
    half_open(std::make_shared<Native::ParameterMap::Type::Inspect::Udp::HalfOpen>())
    , idle_time(std::make_shared<Native::ParameterMap::Type::Inspect::Udp::IdleTime>())
{
    half_open->parent = this;
    idle_time->parent = this;

    yang_name = "udp"; yang_parent_name = "inspect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Udp::~Udp()
{
}

bool Native::ParameterMap::Type::Inspect::Udp::has_data() const
{
    if (is_presence_container) return true;
    return (half_open !=  nullptr && half_open->has_data())
	|| (idle_time !=  nullptr && idle_time->has_data());
}

bool Native::ParameterMap::Type::Inspect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (half_open !=  nullptr && half_open->has_operation())
	|| (idle_time !=  nullptr && idle_time->has_operation());
}

std::string Native::ParameterMap::Type::Inspect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "half-open")
    {
        if(half_open == nullptr)
        {
            half_open = std::make_shared<Native::ParameterMap::Type::Inspect::Udp::HalfOpen>();
        }
        return half_open;
    }

    if(child_yang_name == "idle-time")
    {
        if(idle_time == nullptr)
        {
            idle_time = std::make_shared<Native::ParameterMap::Type::Inspect::Udp::IdleTime>();
        }
        return idle_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(half_open != nullptr)
    {
        _children["half-open"] = half_open;
    }

    if(idle_time != nullptr)
    {
        _children["idle-time"] = idle_time;
    }

    return _children;
}

void Native::ParameterMap::Type::Inspect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::Inspect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::Inspect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-open" || name == "idle-time")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Udp::HalfOpen::HalfOpen()
    :
    idle_time(std::make_shared<Native::ParameterMap::Type::Inspect::Udp::HalfOpen::IdleTime>())
{
    idle_time->parent = this;

    yang_name = "half-open"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Udp::HalfOpen::~HalfOpen()
{
}

bool Native::ParameterMap::Type::Inspect::Udp::HalfOpen::has_data() const
{
    if (is_presence_container) return true;
    return (idle_time !=  nullptr && idle_time->has_data());
}

bool Native::ParameterMap::Type::Inspect::Udp::HalfOpen::has_operation() const
{
    return is_set(yfilter)
	|| (idle_time !=  nullptr && idle_time->has_operation());
}

std::string Native::ParameterMap::Type::Inspect::Udp::HalfOpen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "half-open";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Udp::HalfOpen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Udp::HalfOpen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idle-time")
    {
        if(idle_time == nullptr)
        {
            idle_time = std::make_shared<Native::ParameterMap::Type::Inspect::Udp::HalfOpen::IdleTime>();
        }
        return idle_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Udp::HalfOpen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idle_time != nullptr)
    {
        _children["idle-time"] = idle_time;
    }

    return _children;
}

void Native::ParameterMap::Type::Inspect::Udp::HalfOpen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::Inspect::Udp::HalfOpen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::Inspect::Udp::HalfOpen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Udp::HalfOpen::IdleTime::IdleTime()
    :
    timeout{YType::uint32, "timeout"},
    ageout_time{YType::uint32, "ageout-time"}
{

    yang_name = "idle-time"; yang_parent_name = "half-open"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Udp::HalfOpen::IdleTime::~IdleTime()
{
}

bool Native::ParameterMap::Type::Inspect::Udp::HalfOpen::IdleTime::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set
	|| ageout_time.is_set;
}

bool Native::ParameterMap::Type::Inspect::Udp::HalfOpen::IdleTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(ageout_time.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::Udp::HalfOpen::IdleTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Udp::HalfOpen::IdleTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (ageout_time.is_set || is_set(ageout_time.yfilter)) leaf_name_data.push_back(ageout_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Udp::HalfOpen::IdleTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Udp::HalfOpen::IdleTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::Udp::HalfOpen::IdleTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ageout-time")
    {
        ageout_time = value;
        ageout_time.value_namespace = name_space;
        ageout_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::Udp::HalfOpen::IdleTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "ageout-time")
    {
        ageout_time.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::Udp::HalfOpen::IdleTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "ageout-time")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::Udp::IdleTime::IdleTime()
    :
    timeout{YType::uint32, "timeout"},
    ageout_time{YType::uint32, "ageout-time"}
{

    yang_name = "idle-time"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::Udp::IdleTime::~IdleTime()
{
}

bool Native::ParameterMap::Type::Inspect::Udp::IdleTime::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set
	|| ageout_time.is_set;
}

bool Native::ParameterMap::Type::Inspect::Udp::IdleTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(ageout_time.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::Udp::IdleTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::Udp::IdleTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (ageout_time.is_set || is_set(ageout_time.yfilter)) leaf_name_data.push_back(ageout_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::Udp::IdleTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::Udp::IdleTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::Udp::IdleTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ageout-time")
    {
        ageout_time = value;
        ageout_time.value_namespace = name_space;
        ageout_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::Udp::IdleTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "ageout-time")
    {
        ageout_time.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::Udp::IdleTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "ageout-time")
        return true;
    return false;
}

Native::ParameterMap::Type::Inspect::ZoneMismatch::ZoneMismatch()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "zone-mismatch"; yang_parent_name = "inspect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Inspect::ZoneMismatch::~ZoneMismatch()
{
}

bool Native::ParameterMap::Type::Inspect::ZoneMismatch::has_data() const
{
    if (is_presence_container) return true;
    return drop.is_set;
}

bool Native::ParameterMap::Type::Inspect::ZoneMismatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::ParameterMap::Type::Inspect::ZoneMismatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zone-mismatch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Inspect::ZoneMismatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Inspect::ZoneMismatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Inspect::ZoneMismatch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Inspect::ZoneMismatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Inspect::ZoneMismatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Inspect::ZoneMismatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::InspectGlobalDeprecate()
    :
    inspect(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect>())
{
    inspect->parent = this;

    yang_name = "inspect-global-deprecate"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::~InspectGlobalDeprecate()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::has_data() const
{
    if (is_presence_container) return true;
    return (inspect !=  nullptr && inspect->has_data());
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::has_operation() const
{
    return is_set(yfilter)
	|| (inspect !=  nullptr && inspect->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:inspect-global-deprecate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inspect")
    {
        if(inspect == nullptr)
        {
            inspect = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect>();
        }
        return inspect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inspect != nullptr)
    {
        _children["inspect"] = inspect;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inspect")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Inspect()
    :
    global(nullptr) // presence node
{

    yang_name = "inspect"; yang_parent_name = "inspect-global-deprecate"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::~Inspect()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data());
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Global()
    :
    multi_tenancy{YType::empty, "multi-tenancy"}
        ,
    alert(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Alert>())
    , lisp(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Lisp>())
    , log(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log>())
    , max_incomplete(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete>())
    , per_box(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox>())
    , session(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session>())
    , tcp(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp>())
    , vrf(this, {"id"})
{
    alert->parent = this;
    lisp->parent = this;
    log->parent = this;
    max_incomplete->parent = this;
    per_box->parent = this;
    session->parent = this;
    tcp->parent = this;

    yang_name = "global"; yang_parent_name = "inspect"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::~Global()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return multi_tenancy.is_set
	|| (alert !=  nullptr && alert->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (log !=  nullptr && log->has_data())
	|| (max_incomplete !=  nullptr && max_incomplete->has_data())
	|| (per_box !=  nullptr && per_box->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (tcp !=  nullptr && tcp->has_data());
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(multi_tenancy.yfilter)
	|| (alert !=  nullptr && alert->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (log !=  nullptr && log->has_operation())
	|| (max_incomplete !=  nullptr && max_incomplete->has_operation())
	|| (per_box !=  nullptr && per_box->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_tenancy.is_set || is_set(multi_tenancy.yfilter)) leaf_name_data.push_back(multi_tenancy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alert")
    {
        if(alert == nullptr)
        {
            alert = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Alert>();
        }
        return alert;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log>();
        }
        return log;
    }

    if(child_yang_name == "max-incomplete")
    {
        if(max_incomplete == nullptr)
        {
            max_incomplete = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete>();
        }
        return max_incomplete;
    }

    if(child_yang_name == "per-box")
    {
        if(per_box == nullptr)
        {
            per_box = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox>();
        }
        return per_box;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session>();
        }
        return session;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(alert != nullptr)
    {
        _children["alert"] = alert;
    }

    if(lisp != nullptr)
    {
        _children["lisp"] = lisp;
    }

    if(log != nullptr)
    {
        _children["log"] = log;
    }

    if(max_incomplete != nullptr)
    {
        _children["max-incomplete"] = max_incomplete;
    }

    if(per_box != nullptr)
    {
        _children["per-box"] = per_box;
    }

    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-tenancy")
    {
        multi_tenancy = value;
        multi_tenancy.value_namespace = name_space;
        multi_tenancy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-tenancy")
    {
        multi_tenancy.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alert" || name == "lisp" || name == "log" || name == "max-incomplete" || name == "per-box" || name == "session" || name == "tcp" || name == "vrf" || name == "multi-tenancy")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Alert::Alert()
    :
    on{YType::empty, "on"}
{

    yang_name = "alert"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Alert::~Alert()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Alert::has_data() const
{
    if (is_presence_container) return true;
    return on.is_set;
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Alert::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Alert::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Alert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Alert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Alert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Alert::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Alert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Alert::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Alert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Lisp::Lisp()
    :
    inner_packet_inspection{YType::empty, "inner-packet-inspection"}
{

    yang_name = "lisp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Lisp::~Lisp()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return inner_packet_inspection.is_set;
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inner_packet_inspection.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Lisp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inner_packet_inspection.is_set || is_set(inner_packet_inspection.yfilter)) leaf_name_data.push_back(inner_packet_inspection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner-packet-inspection")
    {
        inner_packet_inspection = value;
        inner_packet_inspection.value_namespace = name_space;
        inner_packet_inspection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner-packet-inspection")
    {
        inner_packet_inspection.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner-packet-inspection")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::Log()
    :
    dropped_packets{YType::empty, "dropped-packets"}
        ,
    flow_export(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport>())
{
    flow_export->parent = this;

    yang_name = "log"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::~Log()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::has_data() const
{
    if (is_presence_container) return true;
    return dropped_packets.is_set
	|| (flow_export !=  nullptr && flow_export->has_data());
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| (flow_export !=  nullptr && flow_export->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-export")
    {
        if(flow_export == nullptr)
        {
            flow_export = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport>();
        }
        return flow_export;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow_export != nullptr)
    {
        _children["flow-export"] = flow_export;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-export" || name == "dropped-packets")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::FlowExport()
    :
    template_(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::Template>())
    , v9(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9>())
{
    template_->parent = this;
    v9->parent = this;

    yang_name = "flow-export"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::~FlowExport()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::has_data() const
{
    if (is_presence_container) return true;
    return (template_ !=  nullptr && template_->has_data())
	|| (v9 !=  nullptr && v9->has_data());
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::has_operation() const
{
    return is_set(yfilter)
	|| (template_ !=  nullptr && template_->has_operation())
	|| (v9 !=  nullptr && v9->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/log/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::Template>();
        }
        return template_;
    }

    if(child_yang_name == "v9")
    {
        if(v9 == nullptr)
        {
            v9 = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9>();
        }
        return v9;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(template_ != nullptr)
    {
        _children["template"] = template_;
    }

    if(v9 != nullptr)
    {
        _children["v9"] = v9;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template" || name == "v9")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::Template::Template()
    :
    timeout_rate{YType::uint32, "timeout-rate"}
{

    yang_name = "template"; yang_parent_name = "flow-export"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::Template::~Template()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::Template::has_data() const
{
    if (is_presence_container) return true;
    return timeout_rate.is_set;
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout_rate.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::Template::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/log/flow-export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout_rate.is_set || is_set(timeout_rate.yfilter)) leaf_name_data.push_back(timeout_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout-rate")
    {
        timeout_rate = value;
        timeout_rate.value_namespace = name_space;
        timeout_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout-rate")
    {
        timeout_rate.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout-rate")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::V9()
    :
    udp(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp>())
{
    udp->parent = this;

    yang_name = "v9"; yang_parent_name = "flow-export"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::~V9()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::has_data() const
{
    if (is_presence_container) return true;
    return (udp !=  nullptr && udp->has_data());
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::has_operation() const
{
    return is_set(yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/log/flow-export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v9";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Udp()
    :
    destination(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Destination>())
{
    destination->parent = this;

    yang_name = "udp"; yang_parent_name = "v9"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::~Udp()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::has_data() const
{
    if (is_presence_container) return true;
    return (destination !=  nullptr && destination->has_data());
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/log/flow-export/v9/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Destination::Destination()
    :
    dst_ip{YType::str, "dst-ip"},
    dst_port{YType::uint16, "dst-port"}
{

    yang_name = "destination"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Destination::~Destination()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Destination::has_data() const
{
    if (is_presence_container) return true;
    return dst_ip.is_set
	|| dst_port.is_set;
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(dst_port.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/log/flow-export/v9/udp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.yfilter)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (dst_port.is_set || is_set(dst_port.yfilter)) leaf_name_data.push_back(dst_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
        dst_ip.value_namespace = name_space;
        dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-port")
    {
        dst_port = value;
        dst_port.value_namespace = name_space;
        dst_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "dst-port")
    {
        dst_port.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-ip" || name == "dst-port")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::MaxIncomplete()
    :
    icmp{YType::uint32, "icmp"},
    tcp{YType::uint32, "tcp"},
    udp{YType::uint32, "udp"}
        ,
    half_open_sessions(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions>())
{
    half_open_sessions->parent = this;

    yang_name = "max-incomplete"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::~MaxIncomplete()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::has_data() const
{
    if (is_presence_container) return true;
    return icmp.is_set
	|| tcp.is_set
	|| udp.is_set
	|| (half_open_sessions !=  nullptr && half_open_sessions->has_data());
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(icmp.yfilter)
	|| ydk::is_set(tcp.yfilter)
	|| ydk::is_set(udp.yfilter)
	|| (half_open_sessions !=  nullptr && half_open_sessions->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-incomplete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icmp.is_set || is_set(icmp.yfilter)) leaf_name_data.push_back(icmp.get_name_leafdata());
    if (tcp.is_set || is_set(tcp.yfilter)) leaf_name_data.push_back(tcp.get_name_leafdata());
    if (udp.is_set || is_set(udp.yfilter)) leaf_name_data.push_back(udp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "half-open-sessions")
    {
        if(half_open_sessions == nullptr)
        {
            half_open_sessions = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions>();
        }
        return half_open_sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(half_open_sessions != nullptr)
    {
        _children["half-open-sessions"] = half_open_sessions;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "icmp")
    {
        icmp = value;
        icmp.value_namespace = name_space;
        icmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp")
    {
        tcp = value;
        tcp.value_namespace = name_space;
        tcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp")
    {
        udp = value;
        udp.value_namespace = name_space;
        udp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "icmp")
    {
        icmp.yfilter = yfilter;
    }
    if(value_path == "tcp")
    {
        tcp.yfilter = yfilter;
    }
    if(value_path == "udp")
    {
        udp.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-open-sessions" || name == "icmp" || name == "tcp" || name == "udp")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::HalfOpenSessions()
    :
    number{YType::uint32, "number"}
        ,
    aggressive_aging(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::AggressiveAging>())
{
    aggressive_aging->parent = this;

    yang_name = "half-open-sessions"; yang_parent_name = "max-incomplete"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::~HalfOpenSessions()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_data());
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/max-incomplete/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "half-open-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-aging")
    {
        if(aggressive_aging == nullptr)
        {
            aggressive_aging = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::AggressiveAging>();
        }
        return aggressive_aging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggressive_aging != nullptr)
    {
        _children["aggressive-aging"] = aggressive_aging;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive-aging" || name == "number")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::AggressiveAging::AggressiveAging()
    :
    high{YType::uint64, "high"},
    low{YType::uint64, "low"},
    high_percent{YType::uint8, "high-percent"},
    low_percent{YType::uint8, "low-percent"}
{

    yang_name = "aggressive-aging"; yang_parent_name = "half-open-sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::AggressiveAging::~AggressiveAging()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::AggressiveAging::has_data() const
{
    if (is_presence_container) return true;
    return high.is_set
	|| low.is_set
	|| high_percent.is_set
	|| low_percent.is_set;
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::AggressiveAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(high_percent.yfilter)
	|| ydk::is_set(low_percent.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/max-incomplete/half-open-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggressive-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (high_percent.is_set || is_set(high_percent.yfilter)) leaf_name_data.push_back(high_percent.get_name_leafdata());
    if (low_percent.is_set || is_set(low_percent.yfilter)) leaf_name_data.push_back(low_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::AggressiveAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-percent")
    {
        high_percent = value;
        high_percent.value_namespace = name_space;
        high_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-percent")
    {
        low_percent = value;
        low_percent.value_namespace = name_space;
        low_percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::AggressiveAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "high-percent")
    {
        high_percent.yfilter = yfilter;
    }
    if(value_path == "low-percent")
    {
        low_percent.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::AggressiveAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low" || name == "high-percent" || name == "low-percent")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::PerBox()
    :
    aggressive_aging(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::AggressiveAging>())
    , max_incomplete(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete>())
    , tcp(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp>())
{
    aggressive_aging->parent = this;
    max_incomplete->parent = this;
    tcp->parent = this;

    yang_name = "per-box"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::~PerBox()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::has_data() const
{
    if (is_presence_container) return true;
    return (aggressive_aging !=  nullptr && aggressive_aging->has_data())
	|| (max_incomplete !=  nullptr && max_incomplete->has_data())
	|| (tcp !=  nullptr && tcp->has_data());
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::has_operation() const
{
    return is_set(yfilter)
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_operation())
	|| (max_incomplete !=  nullptr && max_incomplete->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-box";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-aging")
    {
        if(aggressive_aging == nullptr)
        {
            aggressive_aging = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::AggressiveAging>();
        }
        return aggressive_aging;
    }

    if(child_yang_name == "max-incomplete")
    {
        if(max_incomplete == nullptr)
        {
            max_incomplete = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete>();
        }
        return max_incomplete;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggressive_aging != nullptr)
    {
        _children["aggressive-aging"] = aggressive_aging;
    }

    if(max_incomplete != nullptr)
    {
        _children["max-incomplete"] = max_incomplete;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive-aging" || name == "max-incomplete" || name == "tcp")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::AggressiveAging::AggressiveAging()
    :
    high{YType::uint64, "high"},
    low{YType::uint64, "low"},
    high_percent{YType::uint8, "high-percent"},
    low_percent{YType::uint8, "low-percent"}
{

    yang_name = "aggressive-aging"; yang_parent_name = "per-box"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::AggressiveAging::~AggressiveAging()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::AggressiveAging::has_data() const
{
    if (is_presence_container) return true;
    return high.is_set
	|| low.is_set
	|| high_percent.is_set
	|| low_percent.is_set;
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::AggressiveAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(high_percent.yfilter)
	|| ydk::is_set(low_percent.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::AggressiveAging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/per-box/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::AggressiveAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggressive-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::AggressiveAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (high_percent.is_set || is_set(high_percent.yfilter)) leaf_name_data.push_back(high_percent.get_name_leafdata());
    if (low_percent.is_set || is_set(low_percent.yfilter)) leaf_name_data.push_back(low_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::AggressiveAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::AggressiveAging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::AggressiveAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-percent")
    {
        high_percent = value;
        high_percent.value_namespace = name_space;
        high_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-percent")
    {
        low_percent = value;
        low_percent.value_namespace = name_space;
        low_percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::AggressiveAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "high-percent")
    {
        high_percent.yfilter = yfilter;
    }
    if(value_path == "low-percent")
    {
        low_percent.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::AggressiveAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low" || name == "high-percent" || name == "low-percent")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::MaxIncomplete()
    :
    icmp{YType::uint32, "icmp"},
    tcp{YType::uint32, "tcp"},
    udp{YType::uint32, "udp"}
        ,
    half_open_sessions(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions>())
{
    half_open_sessions->parent = this;

    yang_name = "max-incomplete"; yang_parent_name = "per-box"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::~MaxIncomplete()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::has_data() const
{
    if (is_presence_container) return true;
    return icmp.is_set
	|| tcp.is_set
	|| udp.is_set
	|| (half_open_sessions !=  nullptr && half_open_sessions->has_data());
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(icmp.yfilter)
	|| ydk::is_set(tcp.yfilter)
	|| ydk::is_set(udp.yfilter)
	|| (half_open_sessions !=  nullptr && half_open_sessions->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/per-box/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-incomplete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icmp.is_set || is_set(icmp.yfilter)) leaf_name_data.push_back(icmp.get_name_leafdata());
    if (tcp.is_set || is_set(tcp.yfilter)) leaf_name_data.push_back(tcp.get_name_leafdata());
    if (udp.is_set || is_set(udp.yfilter)) leaf_name_data.push_back(udp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "half-open-sessions")
    {
        if(half_open_sessions == nullptr)
        {
            half_open_sessions = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions>();
        }
        return half_open_sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(half_open_sessions != nullptr)
    {
        _children["half-open-sessions"] = half_open_sessions;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "icmp")
    {
        icmp = value;
        icmp.value_namespace = name_space;
        icmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp")
    {
        tcp = value;
        tcp.value_namespace = name_space;
        tcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp")
    {
        udp = value;
        udp.value_namespace = name_space;
        udp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "icmp")
    {
        icmp.yfilter = yfilter;
    }
    if(value_path == "tcp")
    {
        tcp.yfilter = yfilter;
    }
    if(value_path == "udp")
    {
        udp.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-open-sessions" || name == "icmp" || name == "tcp" || name == "udp")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::HalfOpenSessions()
    :
    number{YType::uint32, "number"}
        ,
    aggressive_aging(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging>())
{
    aggressive_aging->parent = this;

    yang_name = "half-open-sessions"; yang_parent_name = "max-incomplete"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::~HalfOpenSessions()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_data());
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/per-box/max-incomplete/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "half-open-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-aging")
    {
        if(aggressive_aging == nullptr)
        {
            aggressive_aging = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging>();
        }
        return aggressive_aging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggressive_aging != nullptr)
    {
        _children["aggressive-aging"] = aggressive_aging;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive-aging" || name == "number")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::AggressiveAging()
    :
    high{YType::uint64, "high"},
    low{YType::uint64, "low"},
    high_percent{YType::uint8, "high-percent"},
    low_percent{YType::uint8, "low-percent"}
{

    yang_name = "aggressive-aging"; yang_parent_name = "half-open-sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::~AggressiveAging()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::has_data() const
{
    if (is_presence_container) return true;
    return high.is_set
	|| low.is_set
	|| high_percent.is_set
	|| low_percent.is_set;
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(high_percent.yfilter)
	|| ydk::is_set(low_percent.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/per-box/max-incomplete/half-open-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggressive-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (high_percent.is_set || is_set(high_percent.yfilter)) leaf_name_data.push_back(high_percent.get_name_leafdata());
    if (low_percent.is_set || is_set(low_percent.yfilter)) leaf_name_data.push_back(low_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-percent")
    {
        high_percent = value;
        high_percent.value_namespace = name_space;
        high_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-percent")
    {
        low_percent = value;
        low_percent.value_namespace = name_space;
        low_percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "high-percent")
    {
        high_percent.yfilter = yfilter;
    }
    if(value_path == "low-percent")
    {
        low_percent.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low" || name == "high-percent" || name == "low-percent")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::Tcp()
    :
    syn_flood(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood>())
{
    syn_flood->parent = this;

    yang_name = "tcp"; yang_parent_name = "per-box"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::~Tcp()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return (syn_flood !=  nullptr && syn_flood->has_data());
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| (syn_flood !=  nullptr && syn_flood->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/per-box/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syn-flood")
    {
        if(syn_flood == nullptr)
        {
            syn_flood = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood>();
        }
        return syn_flood;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(syn_flood != nullptr)
    {
        _children["syn-flood"] = syn_flood;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syn-flood")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::SynFlood()
    :
    limit{YType::uint32, "limit"}
{

    yang_name = "syn-flood"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::~SynFlood()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set;
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/per-box/tcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::Session()
    :
    packet{YType::uint8, "packet"},
    total{YType::uint32, "total"}
{

    yang_name = "session"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::~Session()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::has_data() const
{
    if (is_presence_container) return true;
    return packet.is_set
	|| total.is_set;
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet.is_set || is_set(packet.yfilter)) leaf_name_data.push_back(packet.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet")
    {
        packet = value;
        packet.value_namespace = name_space;
        packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet")
    {
        packet.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet" || name == "total")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::Tcp()
    :
    syn_flood(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood>())
{
    syn_flood->parent = this;

    yang_name = "tcp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::~Tcp()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return (syn_flood !=  nullptr && syn_flood->has_data());
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| (syn_flood !=  nullptr && syn_flood->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syn-flood")
    {
        if(syn_flood == nullptr)
        {
            syn_flood = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood>();
        }
        return syn_flood;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(syn_flood != nullptr)
    {
        _children["syn-flood"] = syn_flood;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syn-flood")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::SynFlood()
    :
    limit{YType::uint32, "limit"}
{

    yang_name = "syn-flood"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::~SynFlood()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set;
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/tcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::Vrf()
    :
    id{YType::str, "id"},
    inspect{YType::str, "inspect"}
{

    yang_name = "vrf"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::~Vrf()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| inspect.is_set;
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(inspect.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (inspect.is_set || is_set(inspect.yfilter)) leaf_name_data.push_back(inspect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inspect")
    {
        inspect = value;
        inspect.value_namespace = name_space;
        inspect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "inspect")
    {
        inspect.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "inspect")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::InspectGlobal()
    :
    icmp_unreachable_allow{YType::empty, "icmp-unreachable-allow"},
    multi_tenancy{YType::empty, "multi-tenancy"}
        ,
    aggressive_aging(std::make_shared<Native::ParameterMap::Type::InspectGlobal::AggressiveAging>())
    , alert(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Alert>())
    , inspect(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Inspect>())
    , lisp(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Lisp>())
    , log(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log>())
    , max_incomplete(std::make_shared<Native::ParameterMap::Type::InspectGlobal::MaxIncomplete>())
    , tcp(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Tcp>())
    , zone_mismatch(std::make_shared<Native::ParameterMap::Type::InspectGlobal::ZoneMismatch>())
{
    aggressive_aging->parent = this;
    alert->parent = this;
    inspect->parent = this;
    lisp->parent = this;
    log->parent = this;
    max_incomplete->parent = this;
    tcp->parent = this;
    zone_mismatch->parent = this;

    yang_name = "inspect-global"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::ParameterMap::Type::InspectGlobal::~InspectGlobal()
{
}

bool Native::ParameterMap::Type::InspectGlobal::has_data() const
{
    if (is_presence_container) return true;
    return icmp_unreachable_allow.is_set
	|| multi_tenancy.is_set
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_data())
	|| (alert !=  nullptr && alert->has_data())
	|| (inspect !=  nullptr && inspect->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (log !=  nullptr && log->has_data())
	|| (max_incomplete !=  nullptr && max_incomplete->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (zone_mismatch !=  nullptr && zone_mismatch->has_data());
}

bool Native::ParameterMap::Type::InspectGlobal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(icmp_unreachable_allow.yfilter)
	|| ydk::is_set(multi_tenancy.yfilter)
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_operation())
	|| (alert !=  nullptr && alert->has_operation())
	|| (inspect !=  nullptr && inspect->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (log !=  nullptr && log->has_operation())
	|| (max_incomplete !=  nullptr && max_incomplete->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (zone_mismatch !=  nullptr && zone_mismatch->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:inspect-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icmp_unreachable_allow.is_set || is_set(icmp_unreachable_allow.yfilter)) leaf_name_data.push_back(icmp_unreachable_allow.get_name_leafdata());
    if (multi_tenancy.is_set || is_set(multi_tenancy.yfilter)) leaf_name_data.push_back(multi_tenancy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-aging")
    {
        if(aggressive_aging == nullptr)
        {
            aggressive_aging = std::make_shared<Native::ParameterMap::Type::InspectGlobal::AggressiveAging>();
        }
        return aggressive_aging;
    }

    if(child_yang_name == "alert")
    {
        if(alert == nullptr)
        {
            alert = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Alert>();
        }
        return alert;
    }

    if(child_yang_name == "inspect")
    {
        if(inspect == nullptr)
        {
            inspect = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Inspect>();
        }
        return inspect;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log>();
        }
        return log;
    }

    if(child_yang_name == "max-incomplete")
    {
        if(max_incomplete == nullptr)
        {
            max_incomplete = std::make_shared<Native::ParameterMap::Type::InspectGlobal::MaxIncomplete>();
        }
        return max_incomplete;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "zone-mismatch")
    {
        if(zone_mismatch == nullptr)
        {
            zone_mismatch = std::make_shared<Native::ParameterMap::Type::InspectGlobal::ZoneMismatch>();
        }
        return zone_mismatch;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggressive_aging != nullptr)
    {
        _children["aggressive-aging"] = aggressive_aging;
    }

    if(alert != nullptr)
    {
        _children["alert"] = alert;
    }

    if(inspect != nullptr)
    {
        _children["inspect"] = inspect;
    }

    if(lisp != nullptr)
    {
        _children["lisp"] = lisp;
    }

    if(log != nullptr)
    {
        _children["log"] = log;
    }

    if(max_incomplete != nullptr)
    {
        _children["max-incomplete"] = max_incomplete;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    if(zone_mismatch != nullptr)
    {
        _children["zone-mismatch"] = zone_mismatch;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "icmp-unreachable-allow")
    {
        icmp_unreachable_allow = value;
        icmp_unreachable_allow.value_namespace = name_space;
        icmp_unreachable_allow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-tenancy")
    {
        multi_tenancy = value;
        multi_tenancy.value_namespace = name_space;
        multi_tenancy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "icmp-unreachable-allow")
    {
        icmp_unreachable_allow.yfilter = yfilter;
    }
    if(value_path == "multi-tenancy")
    {
        multi_tenancy.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive-aging" || name == "alert" || name == "inspect" || name == "lisp" || name == "log" || name == "max-incomplete" || name == "tcp" || name == "zone-mismatch" || name == "icmp-unreachable-allow" || name == "multi-tenancy")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::AggressiveAging::AggressiveAging()
    :
    high{YType::uint64, "high"},
    low{YType::uint64, "low"},
    high_percent{YType::uint8, "high-percent"},
    low_percent{YType::uint8, "low-percent"}
{

    yang_name = "aggressive-aging"; yang_parent_name = "inspect-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::AggressiveAging::~AggressiveAging()
{
}

bool Native::ParameterMap::Type::InspectGlobal::AggressiveAging::has_data() const
{
    if (is_presence_container) return true;
    return high.is_set
	|| low.is_set
	|| high_percent.is_set
	|| low_percent.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::AggressiveAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(high_percent.yfilter)
	|| ydk::is_set(low_percent.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::AggressiveAging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::AggressiveAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggressive-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::AggressiveAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (high_percent.is_set || is_set(high_percent.yfilter)) leaf_name_data.push_back(high_percent.get_name_leafdata());
    if (low_percent.is_set || is_set(low_percent.yfilter)) leaf_name_data.push_back(low_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::AggressiveAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::AggressiveAging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::AggressiveAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-percent")
    {
        high_percent = value;
        high_percent.value_namespace = name_space;
        high_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-percent")
    {
        low_percent = value;
        low_percent.value_namespace = name_space;
        low_percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::AggressiveAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "high-percent")
    {
        high_percent.yfilter = yfilter;
    }
    if(value_path == "low-percent")
    {
        low_percent.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::AggressiveAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low" || name == "high-percent" || name == "low-percent")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Alert::Alert()
    :
    on{YType::empty, "on"}
{

    yang_name = "alert"; yang_parent_name = "inspect-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Alert::~Alert()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Alert::has_data() const
{
    if (is_presence_container) return true;
    return on.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::Alert::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::Alert::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Alert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Alert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Alert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Alert::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Alert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::Alert::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::Alert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Inspect::Inspect()
    :
    name{YType::str, "name"}
        ,
    vrf(this, {"id"})
{

    yang_name = "inspect"; yang_parent_name = "inspect-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Inspect::~Inspect()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Inspect::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::Inspect::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::Inspect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Inspect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Inspect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Inspect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Inspect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Inspect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::Inspect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::Inspect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::Vrf()
    :
    id{YType::str, "id"},
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "inspect"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::~Vrf()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/inspect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Lisp::Lisp()
    :
    inner_packet_inspection{YType::empty, "inner-packet-inspection"}
{

    yang_name = "lisp"; yang_parent_name = "inspect-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Lisp::~Lisp()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return inner_packet_inspection.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inner_packet_inspection.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::Lisp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inner_packet_inspection.is_set || is_set(inner_packet_inspection.yfilter)) leaf_name_data.push_back(inner_packet_inspection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner-packet-inspection")
    {
        inner_packet_inspection = value;
        inner_packet_inspection.value_namespace = name_space;
        inner_packet_inspection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner-packet-inspection")
    {
        inner_packet_inspection.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner-packet-inspection")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Log::Log()
    :
    dropped_packets{YType::empty, "dropped-packets"}
        ,
    flow_export(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport>())
{
    flow_export->parent = this;

    yang_name = "log"; yang_parent_name = "inspect-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Log::~Log()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Log::has_data() const
{
    if (is_presence_container) return true;
    return dropped_packets.is_set
	|| (flow_export !=  nullptr && flow_export->has_data());
}

bool Native::ParameterMap::Type::InspectGlobal::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| (flow_export !=  nullptr && flow_export->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-export")
    {
        if(flow_export == nullptr)
        {
            flow_export = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport>();
        }
        return flow_export;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow_export != nullptr)
    {
        _children["flow-export"] = flow_export;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-export" || name == "dropped-packets")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::FlowExport()
    :
    template_(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template>())
    , v9(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9>())
{
    template_->parent = this;
    v9->parent = this;

    yang_name = "flow-export"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::~FlowExport()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::has_data() const
{
    if (is_presence_container) return true;
    return (template_ !=  nullptr && template_->has_data())
	|| (v9 !=  nullptr && v9->has_data());
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::has_operation() const
{
    return is_set(yfilter)
	|| (template_ !=  nullptr && template_->has_operation())
	|| (v9 !=  nullptr && v9->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/log/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template>();
        }
        return template_;
    }

    if(child_yang_name == "v9")
    {
        if(v9 == nullptr)
        {
            v9 = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9>();
        }
        return v9;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(template_ != nullptr)
    {
        _children["template"] = template_;
    }

    if(v9 != nullptr)
    {
        _children["v9"] = v9;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template" || name == "v9")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::Template()
    :
    timeout_rate{YType::uint32, "timeout-rate"}
{

    yang_name = "template"; yang_parent_name = "flow-export"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::~Template()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::has_data() const
{
    if (is_presence_container) return true;
    return timeout_rate.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout_rate.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/log/flow-export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout_rate.is_set || is_set(timeout_rate.yfilter)) leaf_name_data.push_back(timeout_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout-rate")
    {
        timeout_rate = value;
        timeout_rate.value_namespace = name_space;
        timeout_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout-rate")
    {
        timeout_rate.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout-rate")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::V9()
    :
    udp(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp>())
{
    udp->parent = this;

    yang_name = "v9"; yang_parent_name = "flow-export"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::~V9()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::has_data() const
{
    if (is_presence_container) return true;
    return (udp !=  nullptr && udp->has_data());
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::has_operation() const
{
    return is_set(yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/log/flow-export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v9";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Udp()
    :
    destination(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination>())
{
    destination->parent = this;

    yang_name = "udp"; yang_parent_name = "v9"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::~Udp()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::has_data() const
{
    if (is_presence_container) return true;
    return (destination !=  nullptr && destination->has_data());
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/log/flow-export/v9/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::Destination()
    :
    dst_ip{YType::str, "dst-ip"},
    dst_port{YType::uint16, "dst-port"}
{

    yang_name = "destination"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::~Destination()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::has_data() const
{
    if (is_presence_container) return true;
    return dst_ip.is_set
	|| dst_port.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(dst_port.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/log/flow-export/v9/udp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.yfilter)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (dst_port.is_set || is_set(dst_port.yfilter)) leaf_name_data.push_back(dst_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
        dst_ip.value_namespace = name_space;
        dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-port")
    {
        dst_port = value;
        dst_port.value_namespace = name_space;
        dst_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "dst-port")
    {
        dst_port.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-ip" || name == "dst-port")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::MaxIncomplete()
    :
    icmp{YType::uint32, "icmp"},
    tcp{YType::uint32, "tcp"},
    udp{YType::uint32, "udp"}
        ,
    half_open_sessions(std::make_shared<Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions>())
{
    half_open_sessions->parent = this;

    yang_name = "max-incomplete"; yang_parent_name = "inspect-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::~MaxIncomplete()
{
}

bool Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::has_data() const
{
    if (is_presence_container) return true;
    return icmp.is_set
	|| tcp.is_set
	|| udp.is_set
	|| (half_open_sessions !=  nullptr && half_open_sessions->has_data());
}

bool Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(icmp.yfilter)
	|| ydk::is_set(tcp.yfilter)
	|| ydk::is_set(udp.yfilter)
	|| (half_open_sessions !=  nullptr && half_open_sessions->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-incomplete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icmp.is_set || is_set(icmp.yfilter)) leaf_name_data.push_back(icmp.get_name_leafdata());
    if (tcp.is_set || is_set(tcp.yfilter)) leaf_name_data.push_back(tcp.get_name_leafdata());
    if (udp.is_set || is_set(udp.yfilter)) leaf_name_data.push_back(udp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "half-open-sessions")
    {
        if(half_open_sessions == nullptr)
        {
            half_open_sessions = std::make_shared<Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions>();
        }
        return half_open_sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(half_open_sessions != nullptr)
    {
        _children["half-open-sessions"] = half_open_sessions;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "icmp")
    {
        icmp = value;
        icmp.value_namespace = name_space;
        icmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp")
    {
        tcp = value;
        tcp.value_namespace = name_space;
        tcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp")
    {
        udp = value;
        udp.value_namespace = name_space;
        udp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "icmp")
    {
        icmp.yfilter = yfilter;
    }
    if(value_path == "tcp")
    {
        tcp.yfilter = yfilter;
    }
    if(value_path == "udp")
    {
        udp.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-open-sessions" || name == "icmp" || name == "tcp" || name == "udp")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::HalfOpenSessions()
    :
    number{YType::uint32, "number"}
        ,
    aggressive_aging(std::make_shared<Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging>())
{
    aggressive_aging->parent = this;

    yang_name = "half-open-sessions"; yang_parent_name = "max-incomplete"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::~HalfOpenSessions()
{
}

bool Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_data());
}

bool Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/max-incomplete/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "half-open-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-aging")
    {
        if(aggressive_aging == nullptr)
        {
            aggressive_aging = std::make_shared<Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging>();
        }
        return aggressive_aging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggressive_aging != nullptr)
    {
        _children["aggressive-aging"] = aggressive_aging;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive-aging" || name == "number")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::AggressiveAging()
    :
    high{YType::uint64, "high"},
    low{YType::uint64, "low"},
    high_percent{YType::uint8, "high-percent"},
    low_percent{YType::uint8, "low-percent"}
{

    yang_name = "aggressive-aging"; yang_parent_name = "half-open-sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::~AggressiveAging()
{
}

bool Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::has_data() const
{
    if (is_presence_container) return true;
    return high.is_set
	|| low.is_set
	|| high_percent.is_set
	|| low_percent.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(high_percent.yfilter)
	|| ydk::is_set(low_percent.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/max-incomplete/half-open-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggressive-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (high_percent.is_set || is_set(high_percent.yfilter)) leaf_name_data.push_back(high_percent.get_name_leafdata());
    if (low_percent.is_set || is_set(low_percent.yfilter)) leaf_name_data.push_back(low_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-percent")
    {
        high_percent = value;
        high_percent.value_namespace = name_space;
        high_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-percent")
    {
        low_percent = value;
        low_percent.value_namespace = name_space;
        low_percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "high-percent")
    {
        high_percent.yfilter = yfilter;
    }
    if(value_path == "low-percent")
    {
        low_percent.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low" || name == "high-percent" || name == "low-percent")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Tcp::Tcp()
    :
    syn_flood(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood>())
    , window_scale_enforcement(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement>())
{
    syn_flood->parent = this;
    window_scale_enforcement->parent = this;

    yang_name = "tcp"; yang_parent_name = "inspect-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Tcp::~Tcp()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return (syn_flood !=  nullptr && syn_flood->has_data())
	|| (window_scale_enforcement !=  nullptr && window_scale_enforcement->has_data());
}

bool Native::ParameterMap::Type::InspectGlobal::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| (syn_flood !=  nullptr && syn_flood->has_operation())
	|| (window_scale_enforcement !=  nullptr && window_scale_enforcement->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobal::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syn-flood")
    {
        if(syn_flood == nullptr)
        {
            syn_flood = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood>();
        }
        return syn_flood;
    }

    if(child_yang_name == "window-scale-enforcement")
    {
        if(window_scale_enforcement == nullptr)
        {
            window_scale_enforcement = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement>();
        }
        return window_scale_enforcement;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(syn_flood != nullptr)
    {
        _children["syn-flood"] = syn_flood;
    }

    if(window_scale_enforcement != nullptr)
    {
        _children["window-scale-enforcement"] = window_scale_enforcement;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectGlobal::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectGlobal::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syn-flood" || name == "window-scale-enforcement")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::SynFlood()
    :
    limit{YType::uint32, "limit"}
{

    yang_name = "syn-flood"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::~SynFlood()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/tcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::WindowScaleEnforcement()
    :
    loose{YType::empty, "loose"}
{

    yang_name = "window-scale-enforcement"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::~WindowScaleEnforcement()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::has_data() const
{
    if (is_presence_container) return true;
    return loose.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loose.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/tcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window-scale-enforcement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loose.is_set || is_set(loose.yfilter)) leaf_name_data.push_back(loose.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loose")
    {
        loose = value;
        loose.value_namespace = name_space;
        loose.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loose")
    {
        loose.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loose")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::ZoneMismatch()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "zone-mismatch"; yang_parent_name = "inspect-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::~ZoneMismatch()
{
}

bool Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::has_data() const
{
    if (is_presence_container) return true;
    return drop.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zone-mismatch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectVrf::InspectVrf()
    :
    name{YType::str, "name"}
        ,
    alert(std::make_shared<Native::ParameterMap::Type::InspectVrf::Alert>())
    , max_incomplete(std::make_shared<Native::ParameterMap::Type::InspectVrf::MaxIncomplete>())
    , session(std::make_shared<Native::ParameterMap::Type::InspectVrf::Session>())
    , tcp(std::make_shared<Native::ParameterMap::Type::InspectVrf::Tcp>())
{
    alert->parent = this;
    max_incomplete->parent = this;
    session->parent = this;
    tcp->parent = this;

    yang_name = "inspect-vrf"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectVrf::~InspectVrf()
{
}

bool Native::ParameterMap::Type::InspectVrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (alert !=  nullptr && alert->has_data())
	|| (max_incomplete !=  nullptr && max_incomplete->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (tcp !=  nullptr && tcp->has_data());
}

bool Native::ParameterMap::Type::InspectVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (alert !=  nullptr && alert->has_operation())
	|| (max_incomplete !=  nullptr && max_incomplete->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::ParameterMap::Type::InspectVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:inspect-vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alert")
    {
        if(alert == nullptr)
        {
            alert = std::make_shared<Native::ParameterMap::Type::InspectVrf::Alert>();
        }
        return alert;
    }

    if(child_yang_name == "max-incomplete")
    {
        if(max_incomplete == nullptr)
        {
            max_incomplete = std::make_shared<Native::ParameterMap::Type::InspectVrf::MaxIncomplete>();
        }
        return max_incomplete;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Native::ParameterMap::Type::InspectVrf::Session>();
        }
        return session;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ParameterMap::Type::InspectVrf::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(alert != nullptr)
    {
        _children["alert"] = alert;
    }

    if(max_incomplete != nullptr)
    {
        _children["max-incomplete"] = max_incomplete;
    }

    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alert" || name == "max-incomplete" || name == "session" || name == "tcp" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectVrf::Alert::Alert()
    :
    on{YType::empty, "on"}
{

    yang_name = "alert"; yang_parent_name = "inspect-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectVrf::Alert::~Alert()
{
}

bool Native::ParameterMap::Type::InspectVrf::Alert::has_data() const
{
    if (is_presence_container) return true;
    return on.is_set;
}

bool Native::ParameterMap::Type::InspectVrf::Alert::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on.yfilter);
}

std::string Native::ParameterMap::Type::InspectVrf::Alert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectVrf::Alert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectVrf::Alert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectVrf::Alert::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectVrf::Alert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectVrf::Alert::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectVrf::Alert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectVrf::MaxIncomplete::MaxIncomplete()
    :
    icmp{YType::uint32, "icmp"},
    tcp{YType::uint32, "tcp"},
    udp{YType::uint32, "udp"}
        ,
    half_open_sessions(std::make_shared<Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions>())
{
    half_open_sessions->parent = this;

    yang_name = "max-incomplete"; yang_parent_name = "inspect-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectVrf::MaxIncomplete::~MaxIncomplete()
{
}

bool Native::ParameterMap::Type::InspectVrf::MaxIncomplete::has_data() const
{
    if (is_presence_container) return true;
    return icmp.is_set
	|| tcp.is_set
	|| udp.is_set
	|| (half_open_sessions !=  nullptr && half_open_sessions->has_data());
}

bool Native::ParameterMap::Type::InspectVrf::MaxIncomplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(icmp.yfilter)
	|| ydk::is_set(tcp.yfilter)
	|| ydk::is_set(udp.yfilter)
	|| (half_open_sessions !=  nullptr && half_open_sessions->has_operation());
}

std::string Native::ParameterMap::Type::InspectVrf::MaxIncomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-incomplete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectVrf::MaxIncomplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icmp.is_set || is_set(icmp.yfilter)) leaf_name_data.push_back(icmp.get_name_leafdata());
    if (tcp.is_set || is_set(tcp.yfilter)) leaf_name_data.push_back(tcp.get_name_leafdata());
    if (udp.is_set || is_set(udp.yfilter)) leaf_name_data.push_back(udp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectVrf::MaxIncomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "half-open-sessions")
    {
        if(half_open_sessions == nullptr)
        {
            half_open_sessions = std::make_shared<Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions>();
        }
        return half_open_sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectVrf::MaxIncomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(half_open_sessions != nullptr)
    {
        _children["half-open-sessions"] = half_open_sessions;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectVrf::MaxIncomplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "icmp")
    {
        icmp = value;
        icmp.value_namespace = name_space;
        icmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp")
    {
        tcp = value;
        tcp.value_namespace = name_space;
        tcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp")
    {
        udp = value;
        udp.value_namespace = name_space;
        udp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectVrf::MaxIncomplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "icmp")
    {
        icmp.yfilter = yfilter;
    }
    if(value_path == "tcp")
    {
        tcp.yfilter = yfilter;
    }
    if(value_path == "udp")
    {
        udp.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectVrf::MaxIncomplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-open-sessions" || name == "icmp" || name == "tcp" || name == "udp")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::HalfOpenSessions()
    :
    number{YType::uint32, "number"}
{

    yang_name = "half-open-sessions"; yang_parent_name = "max-incomplete"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::~HalfOpenSessions()
{
}

bool Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set;
}

bool Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "half-open-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectVrf::Session::Session()
    :
    total{YType::uint32, "total"}
{

    yang_name = "session"; yang_parent_name = "inspect-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectVrf::Session::~Session()
{
}

bool Native::ParameterMap::Type::InspectVrf::Session::has_data() const
{
    if (is_presence_container) return true;
    return total.is_set;
}

bool Native::ParameterMap::Type::InspectVrf::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Native::ParameterMap::Type::InspectVrf::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectVrf::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectVrf::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectVrf::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectVrf::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectVrf::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectVrf::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectVrf::Tcp::Tcp()
    :
    syn_flood(std::make_shared<Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood>())
{
    syn_flood->parent = this;

    yang_name = "tcp"; yang_parent_name = "inspect-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectVrf::Tcp::~Tcp()
{
}

bool Native::ParameterMap::Type::InspectVrf::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return (syn_flood !=  nullptr && syn_flood->has_data());
}

bool Native::ParameterMap::Type::InspectVrf::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| (syn_flood !=  nullptr && syn_flood->has_operation());
}

std::string Native::ParameterMap::Type::InspectVrf::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectVrf::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectVrf::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syn-flood")
    {
        if(syn_flood == nullptr)
        {
            syn_flood = std::make_shared<Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood>();
        }
        return syn_flood;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectVrf::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(syn_flood != nullptr)
    {
        _children["syn-flood"] = syn_flood;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectVrf::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectVrf::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectVrf::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syn-flood")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::SynFlood()
    :
    limit{YType::uint32, "limit"}
{

    yang_name = "syn-flood"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::~SynFlood()
{
}

bool Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set;
}

bool Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectZone::InspectZone()
    :
    name{YType::str, "name"},
    max_destination{YType::uint32, "max-destination"}
        ,
    alert(std::make_shared<Native::ParameterMap::Type::InspectZone::Alert>())
    , tcp(std::make_shared<Native::ParameterMap::Type::InspectZone::Tcp>())
    , threat_detection(std::make_shared<Native::ParameterMap::Type::InspectZone::ThreatDetection>())
{
    alert->parent = this;
    tcp->parent = this;
    threat_detection->parent = this;

    yang_name = "inspect-zone"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectZone::~InspectZone()
{
}

bool Native::ParameterMap::Type::InspectZone::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| max_destination.is_set
	|| (alert !=  nullptr && alert->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (threat_detection !=  nullptr && threat_detection->has_data());
}

bool Native::ParameterMap::Type::InspectZone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(max_destination.yfilter)
	|| (alert !=  nullptr && alert->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (threat_detection !=  nullptr && threat_detection->has_operation());
}

std::string Native::ParameterMap::Type::InspectZone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectZone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:inspect-zone";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectZone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (max_destination.is_set || is_set(max_destination.yfilter)) leaf_name_data.push_back(max_destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectZone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alert")
    {
        if(alert == nullptr)
        {
            alert = std::make_shared<Native::ParameterMap::Type::InspectZone::Alert>();
        }
        return alert;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ParameterMap::Type::InspectZone::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "threat-detection")
    {
        if(threat_detection == nullptr)
        {
            threat_detection = std::make_shared<Native::ParameterMap::Type::InspectZone::ThreatDetection>();
        }
        return threat_detection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectZone::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(alert != nullptr)
    {
        _children["alert"] = alert;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    if(threat_detection != nullptr)
    {
        _children["threat-detection"] = threat_detection;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectZone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-destination")
    {
        max_destination = value;
        max_destination.value_namespace = name_space;
        max_destination.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectZone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "max-destination")
    {
        max_destination.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectZone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alert" || name == "tcp" || name == "threat-detection" || name == "name" || name == "max-destination")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectZone::Alert::Alert()
    :
    on{YType::empty, "on"}
{

    yang_name = "alert"; yang_parent_name = "inspect-zone"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectZone::Alert::~Alert()
{
}

bool Native::ParameterMap::Type::InspectZone::Alert::has_data() const
{
    if (is_presence_container) return true;
    return on.is_set;
}

bool Native::ParameterMap::Type::InspectZone::Alert::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on.yfilter);
}

std::string Native::ParameterMap::Type::InspectZone::Alert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectZone::Alert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectZone::Alert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectZone::Alert::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectZone::Alert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectZone::Alert::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectZone::Alert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectZone::Tcp::Tcp()
    :
    syn_flood(std::make_shared<Native::ParameterMap::Type::InspectZone::Tcp::SynFlood>())
{
    syn_flood->parent = this;

    yang_name = "tcp"; yang_parent_name = "inspect-zone"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectZone::Tcp::~Tcp()
{
}

bool Native::ParameterMap::Type::InspectZone::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return (syn_flood !=  nullptr && syn_flood->has_data());
}

bool Native::ParameterMap::Type::InspectZone::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| (syn_flood !=  nullptr && syn_flood->has_operation());
}

std::string Native::ParameterMap::Type::InspectZone::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectZone::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectZone::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syn-flood")
    {
        if(syn_flood == nullptr)
        {
            syn_flood = std::make_shared<Native::ParameterMap::Type::InspectZone::Tcp::SynFlood>();
        }
        return syn_flood;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectZone::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(syn_flood != nullptr)
    {
        _children["syn-flood"] = syn_flood;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectZone::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectZone::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectZone::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syn-flood")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::SynFlood()
    :
    rate(std::make_shared<Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate>())
{
    rate->parent = this;

    yang_name = "syn-flood"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::~SynFlood()
{
}

bool Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::has_data() const
{
    if (is_presence_container) return true;
    return (rate !=  nullptr && rate->has_data());
}

bool Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::has_operation() const
{
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rate != nullptr)
    {
        _children["rate"] = rate;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::Rate()
    :
    per_destination{YType::uint32, "per-destination"}
{

    yang_name = "rate"; yang_parent_name = "syn-flood"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::~Rate()
{
}

bool Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::has_data() const
{
    if (is_presence_container) return true;
    return per_destination.is_set;
}

bool Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_destination.yfilter);
}

std::string Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_destination.is_set || is_set(per_destination.yfilter)) leaf_name_data.push_back(per_destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-destination")
    {
        per_destination = value;
        per_destination.value_namespace = name_space;
        per_destination.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-destination")
    {
        per_destination.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-destination")
        return true;
    return false;
}

const Enum::YLeaf Native::Track::TrackedObject::DefaultState::down {0, "down"};
const Enum::YLeaf Native::Track::TrackedObject::DefaultState::up {1, "up"};

const Enum::YLeaf Native::Track::TrackedObject::Interface::Protocol::ip {0, "ip"};
const Enum::YLeaf Native::Track::TrackedObject::Interface::Protocol::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Track::TrackedObject::Interface::Protocol::line_protocol {2, "line-protocol"};

const Enum::YLeaf Native::Track::TrackedObject::Ip::Route::Metric::threshold {0, "threshold"};

const Enum::YLeaf Native::Track::TrackedObject::Ipv6::Route::Metric::threshold {0, "threshold"};

const Enum::YLeaf Native::Track::TrackedObject::List::Boolean::and_ {0, "and"};
const Enum::YLeaf Native::Track::TrackedObject::List::Boolean::or_ {1, "or"};

const Enum::YLeaf Native::Track::TrackedObject::List::Threshold::percentage {0, "percentage"};
const Enum::YLeaf Native::Track::TrackedObject::List::Threshold::weight {1, "weight"};

const Enum::YLeaf Native::Track::TrackedObject::Default::DefaultState::down {0, "down"};
const Enum::YLeaf Native::Track::TrackedObject::Default::DefaultState::up {1, "up"};

const Enum::YLeaf Native::Dot1x::Credentials::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Dot1x::Credentials::Password::Type::Y_7 {1, "7"};


}
}

