
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

Native::Redundancy::Policy::ConfigSync::Bulk::Prc::Prc()
    :
    reload{YType::boolean, "reload"}
{

    yang_name = "prc"; yang_parent_name = "bulk"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::Policy::ConfigSync::Bulk::Prc::~Prc()
{
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::Prc::has_data() const
{
    if (is_presence_container) return true;
    return reload.is_set;
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::Prc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/bulk/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::Policy::ConfigSync::Bulk::Prc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Policy::ConfigSync::Bulk::Prc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::Prc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reload")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Lbl::Lbl()
    :
    prc(std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl::Prc>())
{
    prc->parent = this;

    yang_name = "lbl"; yang_parent_name = "config-sync"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::Policy::ConfigSync::Lbl::~Lbl()
{
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::has_data() const
{
    if (is_presence_container) return true;
    return (prc !=  nullptr && prc->has_data());
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::has_operation() const
{
    return is_set(yfilter)
	|| (prc !=  nullptr && prc->has_operation());
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Lbl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Policy::ConfigSync::Lbl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl::Prc>();
        }
        return prc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Policy::ConfigSync::Lbl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prc != nullptr)
    {
        _children["prc"] = prc;
    }

    return _children;
}

void Native::Redundancy::Policy::ConfigSync::Lbl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::ConfigSync::Lbl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prc")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Lbl::Prc::Prc()
    :
    reload{YType::boolean, "reload"}
{

    yang_name = "prc"; yang_parent_name = "lbl"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::Policy::ConfigSync::Lbl::Prc::~Prc()
{
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::Prc::has_data() const
{
    if (is_presence_container) return true;
    return reload.is_set;
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::Prc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/lbl/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::Policy::ConfigSync::Lbl::Prc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Policy::ConfigSync::Lbl::Prc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::Prc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reload")
        return true;
    return false;
}

Native::Redundancy::Timer::Timer()
    :
    rpso{YType::uint16, "rpso"}
{

    yang_name = "timer"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::Timer::~Timer()
{
}

bool Native::Redundancy::Timer::has_data() const
{
    if (is_presence_container) return true;
    return rpso.is_set;
}

bool Native::Redundancy::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rpso.yfilter);
}

std::string Native::Redundancy::Timer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpso.is_set || is_set(rpso.yfilter)) leaf_name_data.push_back(rpso.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rpso")
    {
        rpso = value;
        rpso.value_namespace = name_space;
        rpso.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rpso")
    {
        rpso.yfilter = yfilter;
    }
}

bool Native::Redundancy::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpso")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Interchassis()
    :
    group(this, {"group_number"})
{

    yang_name = "interchassis"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::Interchassis::~Interchassis()
{
}

bool Native::Redundancy::Interchassis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Redundancy::Interchassis::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Redundancy::Interchassis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Interchassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interchassis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<Native::Redundancy::Interchassis::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Redundancy::Interchassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Interchassis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Interchassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Group()
    :
    group_number{YType::uint64, "group-number"}
        ,
    monitor(std::make_shared<Native::Redundancy::Interchassis::Group::Monitor>())
    , member(std::make_shared<Native::Redundancy::Interchassis::Group::Member>())
    , backbone(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone>())
{
    monitor->parent = this;
    member->parent = this;
    backbone->parent = this;

    yang_name = "group"; yang_parent_name = "interchassis"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::Interchassis::Group::~Group()
{
}

bool Native::Redundancy::Interchassis::Group::has_data() const
{
    if (is_presence_container) return true;
    return group_number.is_set
	|| (monitor !=  nullptr && monitor->has_data())
	|| (member !=  nullptr && member->has_data())
	|| (backbone !=  nullptr && backbone->has_data());
}

bool Native::Redundancy::Interchassis::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (member !=  nullptr && member->has_operation())
	|| (backbone !=  nullptr && backbone->has_operation());
}

std::string Native::Redundancy::Interchassis::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/interchassis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Interchassis::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(group_number, "group-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Redundancy::Interchassis::Group::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::Redundancy::Interchassis::Group::Member>();
        }
        return member;
    }

    if(child_yang_name == "backbone")
    {
        if(backbone == nullptr)
        {
            backbone = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone>();
        }
        return backbone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(monitor != nullptr)
    {
        _children["monitor"] = monitor;
    }

    if(member != nullptr)
    {
        _children["member"] = member;
    }

    if(backbone != nullptr)
    {
        _children["backbone"] = backbone;
    }

    return _children;
}

void Native::Redundancy::Interchassis::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor" || name == "member" || name == "backbone" || name == "group-number")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Monitor::Monitor()
    :
    peer{YType::empty, "peer"},
    bfd{YType::empty, "bfd"}
{

    yang_name = "monitor"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Redundancy::Interchassis::Group::Monitor::~Monitor()
{
}

bool Native::Redundancy::Interchassis::Group::Monitor::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| bfd.is_set;
}

bool Native::Redundancy::Interchassis::Group::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(bfd.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::Group::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::Group::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::Interchassis::Group::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "bfd")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Member::Member()
    :
    ip{YType::str, "ip"}
{

    yang_name = "member"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Redundancy::Interchassis::Group::Member::~Member()
{
}

bool Native::Redundancy::Interchassis::Group::Member::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set;
}

bool Native::Redundancy::Interchassis::Group::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::Group::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::Group::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::Interchassis::Group::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Backbone()
    :
    interface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface>())
{
    interface->parent = this;

    yang_name = "backbone"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Redundancy::Interchassis::Group::Backbone::~Backbone()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::has_data() const
{
    if (is_presence_container) return true;
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Redundancy::Interchassis::Group::Backbone::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Redundancy::Interchassis::Group::Backbone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backbone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::Group::Backbone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::Group::Backbone::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    return _children;
}

void Native::Redundancy::Interchassis::Group::Backbone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Interchassis::Group::Backbone::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backbone"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::~Interface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Scheduler::Scheduler()
    :
    runtime(std::make_shared<Native::Scheduler::Runtime>())
    , allocate(std::make_shared<Native::Scheduler::Allocate>())
{
    runtime->parent = this;
    allocate->parent = this;

    yang_name = "scheduler"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Scheduler::~Scheduler()
{
}

bool Native::Scheduler::has_data() const
{
    if (is_presence_container) return true;
    return (runtime !=  nullptr && runtime->has_data())
	|| (allocate !=  nullptr && allocate->has_data());
}

bool Native::Scheduler::has_operation() const
{
    return is_set(yfilter)
	|| (runtime !=  nullptr && runtime->has_operation())
	|| (allocate !=  nullptr && allocate->has_operation());
}

std::string Native::Scheduler::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Scheduler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduler";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Scheduler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Scheduler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "runtime")
    {
        if(runtime == nullptr)
        {
            runtime = std::make_shared<Native::Scheduler::Runtime>();
        }
        return runtime;
    }

    if(child_yang_name == "allocate")
    {
        if(allocate == nullptr)
        {
            allocate = std::make_shared<Native::Scheduler::Allocate>();
        }
        return allocate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Scheduler::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(runtime != nullptr)
    {
        _children["runtime"] = runtime;
    }

    if(allocate != nullptr)
    {
        _children["allocate"] = allocate;
    }

    return _children;
}

void Native::Scheduler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Scheduler::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Scheduler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "runtime" || name == "allocate")
        return true;
    return false;
}

Native::Scheduler::Runtime::Runtime()
    :
    netinput{YType::uint16, "netinput"}
{

    yang_name = "runtime"; yang_parent_name = "scheduler"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Scheduler::Runtime::~Runtime()
{
}

bool Native::Scheduler::Runtime::has_data() const
{
    if (is_presence_container) return true;
    return netinput.is_set;
}

bool Native::Scheduler::Runtime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(netinput.yfilter);
}

std::string Native::Scheduler::Runtime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/scheduler/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Scheduler::Runtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Scheduler::Runtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (netinput.is_set || is_set(netinput.yfilter)) leaf_name_data.push_back(netinput.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Scheduler::Runtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Scheduler::Runtime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Scheduler::Runtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "netinput")
    {
        netinput = value;
        netinput.value_namespace = name_space;
        netinput.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Scheduler::Runtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "netinput")
    {
        netinput.yfilter = yfilter;
    }
}

bool Native::Scheduler::Runtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netinput")
        return true;
    return false;
}

Native::Scheduler::Allocate::Allocate()
    :
    interrupt_time{YType::uint16, "interrupt-time"},
    process_time{YType::uint16, "process-time"}
{

    yang_name = "allocate"; yang_parent_name = "scheduler"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Scheduler::Allocate::~Allocate()
{
}

bool Native::Scheduler::Allocate::has_data() const
{
    if (is_presence_container) return true;
    return interrupt_time.is_set
	|| process_time.is_set;
}

bool Native::Scheduler::Allocate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interrupt_time.yfilter)
	|| ydk::is_set(process_time.yfilter);
}

std::string Native::Scheduler::Allocate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/scheduler/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Scheduler::Allocate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Scheduler::Allocate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interrupt_time.is_set || is_set(interrupt_time.yfilter)) leaf_name_data.push_back(interrupt_time.get_name_leafdata());
    if (process_time.is_set || is_set(process_time.yfilter)) leaf_name_data.push_back(process_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Scheduler::Allocate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Scheduler::Allocate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Scheduler::Allocate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interrupt-time")
    {
        interrupt_time = value;
        interrupt_time.value_namespace = name_space;
        interrupt_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-time")
    {
        process_time = value;
        process_time.value_namespace = name_space;
        process_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Scheduler::Allocate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interrupt-time")
    {
        interrupt_time.yfilter = yfilter;
    }
    if(value_path == "process-time")
    {
        process_time.yfilter = yfilter;
    }
}

bool Native::Scheduler::Allocate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interrupt-time" || name == "process-time")
        return true;
    return false;
}

Native::Epm::Epm()
    :
    logging{YType::empty, "logging"}
{

    yang_name = "epm"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Epm::~Epm()
{
}

bool Native::Epm::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set;
}

bool Native::Epm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string Native::Epm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Epm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Epm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Epm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Epm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Epm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Epm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool Native::Epm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

Native::SpanningTree::SpanningTree()
    :
    backbonefast{YType::empty, "Cisco-IOS-XE-spanning-tree:backbonefast"},
    logging{YType::empty, "Cisco-IOS-XE-spanning-tree:logging"},
    mode{YType::enumeration, "Cisco-IOS-XE-spanning-tree:mode"}
        ,
    bridge(std::make_shared<Native::SpanningTree::Bridge>())
    , etherchannel(std::make_shared<Native::SpanningTree::Etherchannel>())
    , extend(std::make_shared<Native::SpanningTree::Extend>())
    , loopguard(std::make_shared<Native::SpanningTree::Loopguard>())
    , mst(std::make_shared<Native::SpanningTree::Mst>())
    , optimize(std::make_shared<Native::SpanningTree::Optimize>())
    , pathcost(std::make_shared<Native::SpanningTree::Pathcost>())
    , portfast(std::make_shared<Native::SpanningTree::Portfast>())
    , transmit(std::make_shared<Native::SpanningTree::Transmit>())
    , uplinkfast(nullptr) // presence node
    , vlan(this, {"id"})
{
    bridge->parent = this;
    etherchannel->parent = this;
    extend->parent = this;
    loopguard->parent = this;
    mst->parent = this;
    optimize->parent = this;
    pathcost->parent = this;
    portfast->parent = this;
    transmit->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::~SpanningTree()
{
}

bool Native::SpanningTree::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return backbonefast.is_set
	|| logging.is_set
	|| mode.is_set
	|| (bridge !=  nullptr && bridge->has_data())
	|| (etherchannel !=  nullptr && etherchannel->has_data())
	|| (extend !=  nullptr && extend->has_data())
	|| (loopguard !=  nullptr && loopguard->has_data())
	|| (mst !=  nullptr && mst->has_data())
	|| (optimize !=  nullptr && optimize->has_data())
	|| (pathcost !=  nullptr && pathcost->has_data())
	|| (portfast !=  nullptr && portfast->has_data())
	|| (transmit !=  nullptr && transmit->has_data())
	|| (uplinkfast !=  nullptr && uplinkfast->has_data());
}

bool Native::SpanningTree::has_operation() const
{
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backbonefast.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (bridge !=  nullptr && bridge->has_operation())
	|| (etherchannel !=  nullptr && etherchannel->has_operation())
	|| (extend !=  nullptr && extend->has_operation())
	|| (loopguard !=  nullptr && loopguard->has_operation())
	|| (mst !=  nullptr && mst->has_operation())
	|| (optimize !=  nullptr && optimize->has_operation())
	|| (pathcost !=  nullptr && pathcost->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation())
	|| (transmit !=  nullptr && transmit->has_operation())
	|| (uplinkfast !=  nullptr && uplinkfast->has_operation());
}

std::string Native::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbonefast.is_set || is_set(backbonefast.yfilter)) leaf_name_data.push_back(backbonefast.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:bridge")
    {
        if(bridge == nullptr)
        {
            bridge = std::make_shared<Native::SpanningTree::Bridge>();
        }
        return bridge;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:etherchannel")
    {
        if(etherchannel == nullptr)
        {
            etherchannel = std::make_shared<Native::SpanningTree::Etherchannel>();
        }
        return etherchannel;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:extend")
    {
        if(extend == nullptr)
        {
            extend = std::make_shared<Native::SpanningTree::Extend>();
        }
        return extend;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:loopguard")
    {
        if(loopguard == nullptr)
        {
            loopguard = std::make_shared<Native::SpanningTree::Loopguard>();
        }
        return loopguard;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:mst")
    {
        if(mst == nullptr)
        {
            mst = std::make_shared<Native::SpanningTree::Mst>();
        }
        return mst;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:optimize")
    {
        if(optimize == nullptr)
        {
            optimize = std::make_shared<Native::SpanningTree::Optimize>();
        }
        return optimize;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:pathcost")
    {
        if(pathcost == nullptr)
        {
            pathcost = std::make_shared<Native::SpanningTree::Pathcost>();
        }
        return pathcost;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::SpanningTree::Portfast>();
        }
        return portfast;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:transmit")
    {
        if(transmit == nullptr)
        {
            transmit = std::make_shared<Native::SpanningTree::Transmit>();
        }
        return transmit;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:uplinkfast")
    {
        if(uplinkfast == nullptr)
        {
            uplinkfast = std::make_shared<Native::SpanningTree::Uplinkfast>();
        }
        return uplinkfast;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:vlan")
    {
        auto ent_ = std::make_shared<Native::SpanningTree::Vlan>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bridge != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:bridge"] = bridge;
    }

    if(etherchannel != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:etherchannel"] = etherchannel;
    }

    if(extend != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:extend"] = extend;
    }

    if(loopguard != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:loopguard"] = loopguard;
    }

    if(mst != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:mst"] = mst;
    }

    if(optimize != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:optimize"] = optimize;
    }

    if(pathcost != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:pathcost"] = pathcost;
    }

    if(portfast != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:portfast"] = portfast;
    }

    if(transmit != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:transmit"] = transmit;
    }

    if(uplinkfast != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:uplinkfast"] = uplinkfast;
    }

    count_ = 0;
    for (auto ent_ : vlan.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-spanning-tree:backbonefast")
    {
        backbonefast = value;
        backbonefast.value_namespace = name_space;
        backbonefast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-spanning-tree:logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-spanning-tree:mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backbonefast")
    {
        backbonefast.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge" || name == "etherchannel" || name == "extend" || name == "loopguard" || name == "mst" || name == "optimize" || name == "pathcost" || name == "portfast" || name == "transmit" || name == "uplinkfast" || name == "vlan" || name == "backbonefast" || name == "logging" || name == "mode")
        return true;
    return false;
}

Native::SpanningTree::Bridge::Bridge()
    :
    priority{YType::uint8, "priority"},
    id{YType::str, "ID"},
    assurance{YType::boolean, "assurance"}
{

    yang_name = "bridge"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Bridge::~Bridge()
{
}

bool Native::SpanningTree::Bridge::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| id.is_set
	|| assurance.is_set;
}

bool Native::SpanningTree::Bridge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(assurance.yfilter);
}

std::string Native::SpanningTree::Bridge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Bridge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:bridge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Bridge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (assurance.is_set || is_set(assurance.yfilter)) leaf_name_data.push_back(assurance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Bridge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Bridge::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Bridge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ID")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assurance")
    {
        assurance = value;
        assurance.value_namespace = name_space;
        assurance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Bridge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "ID")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "assurance")
    {
        assurance.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Bridge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "ID" || name == "assurance")
        return true;
    return false;
}

Native::SpanningTree::Etherchannel::Etherchannel()
    :
    guard(std::make_shared<Native::SpanningTree::Etherchannel::Guard>())
{
    guard->parent = this;

    yang_name = "etherchannel"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Etherchannel::~Etherchannel()
{
}

bool Native::SpanningTree::Etherchannel::has_data() const
{
    if (is_presence_container) return true;
    return (guard !=  nullptr && guard->has_data());
}

bool Native::SpanningTree::Etherchannel::has_operation() const
{
    return is_set(yfilter)
	|| (guard !=  nullptr && guard->has_operation());
}

std::string Native::SpanningTree::Etherchannel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Etherchannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:etherchannel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Etherchannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Etherchannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::SpanningTree::Etherchannel::Guard>();
        }
        return guard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Etherchannel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(guard != nullptr)
    {
        _children["guard"] = guard;
    }

    return _children;
}

void Native::SpanningTree::Etherchannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Etherchannel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Etherchannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guard")
        return true;
    return false;
}

Native::SpanningTree::Etherchannel::Guard::Guard()
    :
    misconfig{YType::boolean, "misconfig"}
{

    yang_name = "guard"; yang_parent_name = "etherchannel"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Etherchannel::Guard::~Guard()
{
}

bool Native::SpanningTree::Etherchannel::Guard::has_data() const
{
    if (is_presence_container) return true;
    return misconfig.is_set;
}

bool Native::SpanningTree::Etherchannel::Guard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(misconfig.yfilter);
}

std::string Native::SpanningTree::Etherchannel::Guard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:etherchannel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Etherchannel::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Etherchannel::Guard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (misconfig.is_set || is_set(misconfig.yfilter)) leaf_name_data.push_back(misconfig.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Etherchannel::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Etherchannel::Guard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Etherchannel::Guard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "misconfig")
    {
        misconfig = value;
        misconfig.value_namespace = name_space;
        misconfig.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Etherchannel::Guard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "misconfig")
    {
        misconfig.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Etherchannel::Guard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "misconfig")
        return true;
    return false;
}

Native::SpanningTree::Extend::Extend()
    :
    system_id{YType::empty, "system-id"}
{

    yang_name = "extend"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Extend::~Extend()
{
}

bool Native::SpanningTree::Extend::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set;
}

bool Native::SpanningTree::Extend::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string Native::SpanningTree::Extend::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Extend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:extend";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Extend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Extend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Extend::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Extend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Extend::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Extend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id")
        return true;
    return false;
}

Native::SpanningTree::Loopguard::Loopguard()
    :
    default_{YType::empty, "default"}
{

    yang_name = "loopguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Loopguard::~Loopguard()
{
}

bool Native::SpanningTree::Loopguard::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set;
}

bool Native::SpanningTree::Loopguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::SpanningTree::Loopguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Loopguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:loopguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Loopguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Loopguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Loopguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Loopguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Loopguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Loopguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::SpanningTree::Mst::Mst()
    :
    forward_time{YType::uint8, "forward-time"},
    hello_time{YType::uint8, "hello-time"},
    max_age{YType::uint8, "max-age"},
    max_hops{YType::uint8, "max-hops"}
        ,
    instance_range(this, {"id"})
    , configuration(std::make_shared<Native::SpanningTree::Mst::Configuration>())
{
    configuration->parent = this;

    yang_name = "mst"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Mst::~Mst()
{
}

bool Native::SpanningTree::Mst::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance_range.len(); index++)
    {
        if(instance_range[index]->has_data())
            return true;
    }
    return forward_time.is_set
	|| hello_time.is_set
	|| max_age.is_set
	|| max_hops.is_set
	|| (configuration !=  nullptr && configuration->has_data());
}

bool Native::SpanningTree::Mst::has_operation() const
{
    for (std::size_t index=0; index<instance_range.len(); index++)
    {
        if(instance_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(forward_time.yfilter)
	|| ydk::is_set(hello_time.yfilter)
	|| ydk::is_set(max_age.yfilter)
	|| ydk::is_set(max_hops.yfilter)
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string Native::SpanningTree::Mst::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:mst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forward_time.is_set || is_set(forward_time.yfilter)) leaf_name_data.push_back(forward_time.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());
    if (max_age.is_set || is_set(max_age.yfilter)) leaf_name_data.push_back(max_age.get_name_leafdata());
    if (max_hops.is_set || is_set(max_hops.yfilter)) leaf_name_data.push_back(max_hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Mst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-range")
    {
        auto ent_ = std::make_shared<Native::SpanningTree::Mst::InstanceRange>();
        ent_->parent = this;
        instance_range.append(ent_);
        return ent_;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::SpanningTree::Mst::Configuration>();
        }
        return configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Mst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(configuration != nullptr)
    {
        _children["configuration"] = configuration;
    }

    return _children;
}

void Native::SpanningTree::Mst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forward-time")
    {
        forward_time = value;
        forward_time.value_namespace = name_space;
        forward_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-age")
    {
        max_age = value;
        max_age.value_namespace = name_space;
        max_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-hops")
    {
        max_hops = value;
        max_hops.value_namespace = name_space;
        max_hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forward-time")
    {
        forward_time.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
    if(value_path == "max-age")
    {
        max_age.yfilter = yfilter;
    }
    if(value_path == "max-hops")
    {
        max_hops.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-range" || name == "configuration" || name == "forward-time" || name == "hello-time" || name == "max-age" || name == "max-hops")
        return true;
    return false;
}

Native::SpanningTree::Mst::InstanceRange::InstanceRange()
    :
    id{YType::str, "id"},
    priority{YType::uint16, "priority"},
    root{YType::enumeration, "root"}
{

    yang_name = "instance-range"; yang_parent_name = "mst"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Mst::InstanceRange::~InstanceRange()
{
}

bool Native::SpanningTree::Mst::InstanceRange::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| priority.is_set
	|| root.is_set;
}

bool Native::SpanningTree::Mst::InstanceRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(root.yfilter);
}

std::string Native::SpanningTree::Mst::InstanceRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::InstanceRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-range";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::InstanceRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (root.is_set || is_set(root.yfilter)) leaf_name_data.push_back(root.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Mst::InstanceRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Mst::InstanceRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Mst::InstanceRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root")
    {
        root = value;
        root.value_namespace = name_space;
        root.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::InstanceRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "root")
    {
        root.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::InstanceRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "priority" || name == "root")
        return true;
    return false;
}

Native::SpanningTree::Mst::Configuration::Configuration()
    :
    name{YType::str, "name"},
    revision{YType::uint16, "revision"}
        ,
    instance(this, {"id"})
    , private_vlan(std::make_shared<Native::SpanningTree::Mst::Configuration::PrivateVlan>())
{
    private_vlan->parent = this;

    yang_name = "configuration"; yang_parent_name = "mst"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Mst::Configuration::~Configuration()
{
}

bool Native::SpanningTree::Mst::Configuration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return name.is_set
	|| revision.is_set
	|| (private_vlan !=  nullptr && private_vlan->has_data());
}

bool Native::SpanningTree::Mst::Configuration::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(revision.yfilter)
	|| (private_vlan !=  nullptr && private_vlan->has_operation());
}

std::string Native::SpanningTree::Mst::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (revision.is_set || is_set(revision.yfilter)) leaf_name_data.push_back(revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Mst::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Native::SpanningTree::Mst::Configuration::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::SpanningTree::Mst::Configuration::PrivateVlan>();
        }
        return private_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Mst::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(private_vlan != nullptr)
    {
        _children["private-vlan"] = private_vlan;
    }

    return _children;
}

void Native::SpanningTree::Mst::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revision")
    {
        revision = value;
        revision.value_namespace = name_space;
        revision.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "revision")
    {
        revision.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "private-vlan" || name == "name" || name == "revision")
        return true;
    return false;
}

Native::SpanningTree::Mst::Configuration::Instance::Instance()
    :
    id{YType::uint16, "id"},
    vlan{YType::str, "vlan"}
{

    yang_name = "instance"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Mst::Configuration::Instance::~Instance()
{
}

bool Native::SpanningTree::Mst::Configuration::Instance::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::SpanningTree::Mst::Configuration::Instance::has_operation() const
{
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::SpanningTree::Mst::Configuration::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::Configuration::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::Configuration::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    auto vlan_name_datas = vlan.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlan_name_datas.begin(), vlan_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Mst::Configuration::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Mst::Configuration::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Mst::Configuration::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan.append(value);
    }
}

void Native::SpanningTree::Mst::Configuration::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::Configuration::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vlan")
        return true;
    return false;
}

Native::SpanningTree::Mst::Configuration::PrivateVlan::PrivateVlan()
    :
    synchronize{YType::empty, "synchronize"}
{

    yang_name = "private-vlan"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Mst::Configuration::PrivateVlan::~PrivateVlan()
{
}

bool Native::SpanningTree::Mst::Configuration::PrivateVlan::has_data() const
{
    if (is_presence_container) return true;
    return synchronize.is_set;
}

bool Native::SpanningTree::Mst::Configuration::PrivateVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(synchronize.yfilter);
}

std::string Native::SpanningTree::Mst::Configuration::PrivateVlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::Configuration::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::Configuration::PrivateVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (synchronize.is_set || is_set(synchronize.yfilter)) leaf_name_data.push_back(synchronize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Mst::Configuration::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Mst::Configuration::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Mst::Configuration::PrivateVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "synchronize")
    {
        synchronize = value;
        synchronize.value_namespace = name_space;
        synchronize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::Configuration::PrivateVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "synchronize")
    {
        synchronize.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::Configuration::PrivateVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "synchronize")
        return true;
    return false;
}

Native::SpanningTree::Optimize::Optimize()
    :
    bpdu(std::make_shared<Native::SpanningTree::Optimize::Bpdu>())
{
    bpdu->parent = this;

    yang_name = "optimize"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Optimize::~Optimize()
{
}

bool Native::SpanningTree::Optimize::has_data() const
{
    if (is_presence_container) return true;
    return (bpdu !=  nullptr && bpdu->has_data());
}

bool Native::SpanningTree::Optimize::has_operation() const
{
    return is_set(yfilter)
	|| (bpdu !=  nullptr && bpdu->has_operation());
}

std::string Native::SpanningTree::Optimize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Optimize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:optimize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Optimize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Optimize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpdu")
    {
        if(bpdu == nullptr)
        {
            bpdu = std::make_shared<Native::SpanningTree::Optimize::Bpdu>();
        }
        return bpdu;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Optimize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bpdu != nullptr)
    {
        _children["bpdu"] = bpdu;
    }

    return _children;
}

void Native::SpanningTree::Optimize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Optimize::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Optimize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpdu")
        return true;
    return false;
}

Native::SpanningTree::Optimize::Bpdu::Bpdu()
    :
    transmission{YType::boolean, "transmission"}
{

    yang_name = "bpdu"; yang_parent_name = "optimize"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Optimize::Bpdu::~Bpdu()
{
}

bool Native::SpanningTree::Optimize::Bpdu::has_data() const
{
    if (is_presence_container) return true;
    return transmission.is_set;
}

bool Native::SpanningTree::Optimize::Bpdu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmission.yfilter);
}

std::string Native::SpanningTree::Optimize::Bpdu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:optimize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Optimize::Bpdu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpdu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Optimize::Bpdu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmission.is_set || is_set(transmission.yfilter)) leaf_name_data.push_back(transmission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Optimize::Bpdu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Optimize::Bpdu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Optimize::Bpdu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmission")
    {
        transmission = value;
        transmission.value_namespace = name_space;
        transmission.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Optimize::Bpdu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmission")
    {
        transmission.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Optimize::Bpdu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmission")
        return true;
    return false;
}

Native::SpanningTree::Pathcost::Pathcost()
    :
    method(std::make_shared<Native::SpanningTree::Pathcost::Method>())
{
    method->parent = this;

    yang_name = "pathcost"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Pathcost::~Pathcost()
{
}

bool Native::SpanningTree::Pathcost::has_data() const
{
    if (is_presence_container) return true;
    return (method !=  nullptr && method->has_data());
}

bool Native::SpanningTree::Pathcost::has_operation() const
{
    return is_set(yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::SpanningTree::Pathcost::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Pathcost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:pathcost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Pathcost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Pathcost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::SpanningTree::Pathcost::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Pathcost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method != nullptr)
    {
        _children["method"] = method;
    }

    return _children;
}

void Native::SpanningTree::Pathcost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Pathcost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Pathcost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method")
        return true;
    return false;
}

Native::SpanningTree::Pathcost::Method::Method()
    :
    long_{YType::empty, "long"},
    short_{YType::empty, "short"}
{

    yang_name = "method"; yang_parent_name = "pathcost"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Pathcost::Method::~Method()
{
}

bool Native::SpanningTree::Pathcost::Method::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set
	|| short_.is_set;
}

bool Native::SpanningTree::Pathcost::Method::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(short_.yfilter);
}

std::string Native::SpanningTree::Pathcost::Method::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:pathcost/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Pathcost::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Pathcost::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (short_.is_set || is_set(short_.yfilter)) leaf_name_data.push_back(short_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Pathcost::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Pathcost::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Pathcost::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short")
    {
        short_ = value;
        short_.value_namespace = name_space;
        short_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Pathcost::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "short")
    {
        short_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Pathcost::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long" || name == "short")
        return true;
    return false;
}

Native::SpanningTree::Portfast::Portfast()
    :
    default_{YType::empty, "default"}
        ,
    bpdufilter(std::make_shared<Native::SpanningTree::Portfast::Bpdufilter>())
    , bpduguard(std::make_shared<Native::SpanningTree::Portfast::Bpduguard>())
{
    bpdufilter->parent = this;
    bpduguard->parent = this;

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Portfast::~Portfast()
{
}

bool Native::SpanningTree::Portfast::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| (bpdufilter !=  nullptr && bpdufilter->has_data())
	|| (bpduguard !=  nullptr && bpduguard->has_data());
}

bool Native::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (bpdufilter !=  nullptr && bpdufilter->has_operation())
	|| (bpduguard !=  nullptr && bpduguard->has_operation());
}

std::string Native::SpanningTree::Portfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpdufilter")
    {
        if(bpdufilter == nullptr)
        {
            bpdufilter = std::make_shared<Native::SpanningTree::Portfast::Bpdufilter>();
        }
        return bpdufilter;
    }

    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::SpanningTree::Portfast::Bpduguard>();
        }
        return bpduguard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bpdufilter != nullptr)
    {
        _children["bpdufilter"] = bpdufilter;
    }

    if(bpduguard != nullptr)
    {
        _children["bpduguard"] = bpduguard;
    }

    return _children;
}

void Native::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpdufilter" || name == "bpduguard" || name == "default")
        return true;
    return false;
}

Native::SpanningTree::Portfast::Bpdufilter::Bpdufilter()
    :
    default_{YType::empty, "default"}
{

    yang_name = "bpdufilter"; yang_parent_name = "portfast"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Portfast::Bpdufilter::~Bpdufilter()
{
}

bool Native::SpanningTree::Portfast::Bpdufilter::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set;
}

bool Native::SpanningTree::Portfast::Bpdufilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::SpanningTree::Portfast::Bpdufilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:portfast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Portfast::Bpdufilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpdufilter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Portfast::Bpdufilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Portfast::Bpdufilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Portfast::Bpdufilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Portfast::Bpdufilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Portfast::Bpdufilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Portfast::Bpdufilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::SpanningTree::Portfast::Bpduguard::Bpduguard()
    :
    default_{YType::empty, "default"}
{

    yang_name = "bpduguard"; yang_parent_name = "portfast"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Portfast::Bpduguard::~Bpduguard()
{
}

bool Native::SpanningTree::Portfast::Bpduguard::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set;
}

bool Native::SpanningTree::Portfast::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::SpanningTree::Portfast::Bpduguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:portfast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Portfast::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Portfast::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Portfast::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Portfast::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Portfast::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Portfast::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Portfast::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::SpanningTree::Transmit::Transmit()
    :
    hold_count{YType::uint8, "hold-count"}
{

    yang_name = "transmit"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Transmit::~Transmit()
{
}

bool Native::SpanningTree::Transmit::has_data() const
{
    if (is_presence_container) return true;
    return hold_count.is_set;
}

bool Native::SpanningTree::Transmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_count.yfilter);
}

std::string Native::SpanningTree::Transmit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Transmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Transmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_count.is_set || is_set(hold_count.yfilter)) leaf_name_data.push_back(hold_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Transmit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Transmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-count")
    {
        hold_count = value;
        hold_count.value_namespace = name_space;
        hold_count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Transmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-count")
    {
        hold_count.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Transmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-count")
        return true;
    return false;
}

Native::SpanningTree::Uplinkfast::Uplinkfast()
    :
    max_update_rate{YType::uint32, "max-update-rate"}
{

    yang_name = "uplinkfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SpanningTree::Uplinkfast::~Uplinkfast()
{
}

bool Native::SpanningTree::Uplinkfast::has_data() const
{
    if (is_presence_container) return true;
    return max_update_rate.is_set;
}

bool Native::SpanningTree::Uplinkfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_update_rate.yfilter);
}

std::string Native::SpanningTree::Uplinkfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Uplinkfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:uplinkfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Uplinkfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_update_rate.is_set || is_set(max_update_rate.yfilter)) leaf_name_data.push_back(max_update_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Uplinkfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Uplinkfast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Uplinkfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-update-rate")
    {
        max_update_rate = value;
        max_update_rate.value_namespace = name_space;
        max_update_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Uplinkfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-update-rate")
    {
        max_update_rate.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Uplinkfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-update-rate")
        return true;
    return false;
}

Native::SpanningTree::Vlan::Vlan()
    :
    id{YType::str, "id"},
    max_age{YType::uint8, "max-age"},
    forward_time{YType::uint8, "forward-time"},
    hello_time{YType::uint8, "hello-time"},
    priority{YType::uint16, "priority"}
        ,
    root(std::make_shared<Native::SpanningTree::Vlan::Root>())
{
    root->parent = this;

    yang_name = "vlan"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Vlan::~Vlan()
{
}

bool Native::SpanningTree::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| max_age.is_set
	|| forward_time.is_set
	|| hello_time.is_set
	|| priority.is_set
	|| (root !=  nullptr && root->has_data());
}

bool Native::SpanningTree::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(max_age.yfilter)
	|| ydk::is_set(forward_time.yfilter)
	|| ydk::is_set(hello_time.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (root !=  nullptr && root->has_operation());
}

std::string Native::SpanningTree::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:vlan";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (max_age.is_set || is_set(max_age.yfilter)) leaf_name_data.push_back(max_age.get_name_leafdata());
    if (forward_time.is_set || is_set(forward_time.yfilter)) leaf_name_data.push_back(forward_time.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "root")
    {
        if(root == nullptr)
        {
            root = std::make_shared<Native::SpanningTree::Vlan::Root>();
        }
        return root;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(root != nullptr)
    {
        _children["root"] = root;
    }

    return _children;
}

void Native::SpanningTree::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-age")
    {
        max_age = value;
        max_age.value_namespace = name_space;
        max_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-time")
    {
        forward_time = value;
        forward_time.value_namespace = name_space;
        forward_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "max-age")
    {
        max_age.yfilter = yfilter;
    }
    if(value_path == "forward-time")
    {
        forward_time.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "root" || name == "id" || name == "max-age" || name == "forward-time" || name == "hello-time" || name == "priority")
        return true;
    return false;
}

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
    carrier_delay{YType::empty, "carrier-delay"},
    default_state{YType::enumeration, "default-state"}
        ,
    interface(std::make_shared<Native::Track::TrackedObject::Interface>())
    , ip(std::make_shared<Native::Track::TrackedObject::Ip>())
    , ipv6(std::make_shared<Native::Track::TrackedObject::Ipv6>())
    , list(std::make_shared<Native::Track::TrackedObject::List>())
    , delay(std::make_shared<Native::Track::TrackedObject::Delay>())
    , threshold(std::make_shared<Native::Track::TrackedObject::Threshold>())
    , object(this, {"number"})
    , ipv6_object(std::make_shared<Native::Track::TrackedObject::Ipv6Object>())
    , ip_object(std::make_shared<Native::Track::TrackedObject::IpObject>())
{
    interface->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    list->parent = this;
    delay->parent = this;
    threshold->parent = this;
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
	|| carrier_delay.is_set
	|| default_state.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (list !=  nullptr && list->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (threshold !=  nullptr && threshold->has_data())
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
	|| ydk::is_set(carrier_delay.yfilter)
	|| ydk::is_set(default_state.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (list !=  nullptr && list->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation())
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
    if (carrier_delay.is_set || is_set(carrier_delay.yfilter)) leaf_name_data.push_back(carrier_delay.get_name_leafdata());
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

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Track::TrackedObject::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Track::TrackedObject::Threshold>();
        }
        return threshold;
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

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
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
    if(value_path == "carrier-delay")
    {
        carrier_delay = value;
        carrier_delay.value_namespace = name_space;
        carrier_delay.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "carrier-delay")
    {
        carrier_delay.yfilter = yfilter;
    }
    if(value_path == "default-state")
    {
        default_state.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ip" || name == "ipv6" || name == "list" || name == "delay" || name == "threshold" || name == "object" || name == "ipv6-object" || name == "ip-object" || name == "object-number" || name == "stub-object" || name == "carrier-delay" || name == "default-state")
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

Native::Track::TrackedObject::Threshold::Threshold()
    :
    metric(std::make_shared<Native::Track::TrackedObject::Threshold::Metric>())
    , weight(std::make_shared<Native::Track::TrackedObject::Threshold::Weight>())
    , percentage(std::make_shared<Native::Track::TrackedObject::Threshold::Percentage>())
{
    metric->parent = this;
    weight->parent = this;
    percentage->parent = this;

    yang_name = "threshold"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Track::TrackedObject::Threshold::~Threshold()
{
}

bool Native::Track::TrackedObject::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return (metric !=  nullptr && metric->has_data())
	|| (weight !=  nullptr && weight->has_data())
	|| (percentage !=  nullptr && percentage->has_data());
}

bool Native::Track::TrackedObject::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (metric !=  nullptr && metric->has_operation())
	|| (weight !=  nullptr && weight->has_operation())
	|| (percentage !=  nullptr && percentage->has_operation());
}

std::string Native::Track::TrackedObject::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Track::TrackedObject::Threshold::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Track::TrackedObject::Threshold::Weight>();
        }
        return weight;
    }

    if(child_yang_name == "percentage")
    {
        if(percentage == nullptr)
        {
            percentage = std::make_shared<Native::Track::TrackedObject::Threshold::Percentage>();
        }
        return percentage;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    if(weight != nullptr)
    {
        _children["weight"] = weight;
    }

    if(percentage != nullptr)
    {
        _children["percentage"] = percentage;
    }

    return _children;
}

void Native::Track::TrackedObject::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::TrackedObject::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::TrackedObject::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "weight" || name == "percentage")
        return true;
    return false;
}

Native::Track::TrackedObject::Threshold::Metric::Metric()
    :
    up{YType::uint32, "up"},
    down{YType::uint32, "down"}
{

    yang_name = "metric"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Track::TrackedObject::Threshold::Metric::~Metric()
{
}

bool Native::Track::TrackedObject::Threshold::Metric::has_data() const
{
    if (is_presence_container) return true;
    return up.is_set
	|| down.is_set;
}

bool Native::Track::TrackedObject::Threshold::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Track::TrackedObject::Threshold::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Threshold::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::Threshold::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::Threshold::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::TrackedObject::Threshold::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Threshold::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Threshold::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up" || name == "down")
        return true;
    return false;
}

Native::Track::TrackedObject::Threshold::Weight::Weight()
    :
    up{YType::uint32, "up"},
    down{YType::uint32, "down"}
{

    yang_name = "weight"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Track::TrackedObject::Threshold::Weight::~Weight()
{
}

bool Native::Track::TrackedObject::Threshold::Weight::has_data() const
{
    if (is_presence_container) return true;
    return up.is_set
	|| down.is_set;
}

bool Native::Track::TrackedObject::Threshold::Weight::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Track::TrackedObject::Threshold::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Threshold::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::Threshold::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::Threshold::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::TrackedObject::Threshold::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Threshold::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Threshold::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up" || name == "down")
        return true;
    return false;
}

Native::Track::TrackedObject::Threshold::Percentage::Percentage()
    :
    up{YType::uint32, "up"},
    down{YType::uint32, "down"}
{

    yang_name = "percentage"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Track::TrackedObject::Threshold::Percentage::~Percentage()
{
}

bool Native::Track::TrackedObject::Threshold::Percentage::has_data() const
{
    if (is_presence_container) return true;
    return up.is_set
	|| down.is_set;
}

bool Native::Track::TrackedObject::Threshold::Percentage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Track::TrackedObject::Threshold::Percentage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "percentage";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Threshold::Percentage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Track::TrackedObject::Threshold::Percentage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Track::TrackedObject::Threshold::Percentage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Track::TrackedObject::Threshold::Percentage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Threshold::Percentage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Threshold::Percentage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up" || name == "down")
        return true;
    return false;
}

Native::Track::TrackedObject::Object::Object()
    :
    number{YType::uint32, "number"},
    not_{YType::empty, "not"},
    weight{YType::uint32, "weight"}
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
	|| not_.is_set
	|| weight.is_set;
}

bool Native::Track::TrackedObject::Object::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(not_.yfilter)
	|| ydk::is_set(weight.yfilter);
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
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

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
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Object::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "not" || name == "weight")
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

const Enum::YLeaf Native::SpanningTree::Mode::mst {0, "mst"};
const Enum::YLeaf Native::SpanningTree::Mode::pvst {1, "pvst"};
const Enum::YLeaf Native::SpanningTree::Mode::rapid_pvst {2, "rapid-pvst"};

const Enum::YLeaf Native::SpanningTree::Mst::InstanceRange::Root::primary {0, "primary"};
const Enum::YLeaf Native::SpanningTree::Mst::InstanceRange::Root::secondary {1, "secondary"};

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

const Enum::YLeaf Native::Dot1x::Credentials::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Dot1x::Credentials::Password::Type::Y_7 {1, "7"};


}
}

