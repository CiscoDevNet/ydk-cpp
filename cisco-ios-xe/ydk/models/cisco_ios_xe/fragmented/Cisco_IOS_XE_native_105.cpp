
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_105.hpp"
#include "Cisco_IOS_XE_native_158.hpp"
#include "Cisco_IOS_XE_native_184.hpp"
#include "Cisco_IOS_XE_native_116.hpp"
#include "Cisco_IOS_XE_native_135.hpp"
#include "Cisco_IOS_XE_native_106.hpp"
#include "Cisco_IOS_XE_native_178.hpp"
#include "Cisco_IOS_XE_native_177.hpp"
#include "Cisco_IOS_XE_native_139.hpp"
#include "Cisco_IOS_XE_native_132.hpp"
#include "Cisco_IOS_XE_native_137.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Mpls::TrafficEng::PathSelection::Overload::Overload()
    :
    allow(std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload::Allow>())
{
    allow->parent = this;

    yang_name = "overload"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::PathSelection::Overload::~Overload()
{
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::has_data() const
{
    return (allow !=  nullptr && allow->has_data());
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::has_operation() const
{
    return is_set(yfilter)
	|| (allow !=  nullptr && allow->has_operation());
}

std::string Native::Mpls::TrafficEng::PathSelection::Overload::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-selection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathSelection::Overload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathSelection::Overload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathSelection::Overload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload::Allow>();
        }
        return allow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathSelection::Overload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allow != nullptr)
    {
        children["allow"] = allow;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathSelection::Overload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathSelection::Overload::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathSelection::Overload::Allow::Allow()
    :
    head{YType::empty, "head"},
    middle{YType::empty, "middle"},
    tail{YType::empty, "tail"}
{

    yang_name = "allow"; yang_parent_name = "overload"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::PathSelection::Overload::Allow::~Allow()
{
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::Allow::has_data() const
{
    return head.is_set
	|| middle.is_set
	|| tail.is_set;
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::Allow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(head.yfilter)
	|| ydk::is_set(middle.yfilter)
	|| ydk::is_set(tail.yfilter);
}

std::string Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-selection/overload/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (head.is_set || is_set(head.yfilter)) leaf_name_data.push_back(head.get_name_leafdata());
    if (middle.is_set || is_set(middle.yfilter)) leaf_name_data.push_back(middle.get_name_leafdata());
    if (tail.is_set || is_set(tail.yfilter)) leaf_name_data.push_back(tail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathSelection::Overload::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "head")
    {
        head = value;
        head.value_namespace = name_space;
        head.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "middle")
    {
        middle = value;
        middle.value_namespace = name_space;
        middle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail")
    {
        tail = value;
        tail.value_namespace = name_space;
        tail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathSelection::Overload::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "head")
    {
        head.yfilter = yfilter;
    }
    if(value_path == "middle")
    {
        middle.yfilter = yfilter;
    }
    if(value_path == "tail")
    {
        tail.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "middle" || name == "tail")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Pcc::Pcc()
    :
    report_all{YType::empty, "report-all"}
    	,
    peer(std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer>())
{
    peer->parent = this;

    yang_name = "pcc"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Pcc::~Pcc()
{
}

bool Native::Mpls::TrafficEng::Pcc::has_data() const
{
    return report_all.is_set
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Mpls::TrafficEng::Pcc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(report_all.yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Mpls::TrafficEng::Pcc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Pcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Pcc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (report_all.is_set || is_set(report_all.yfilter)) leaf_name_data.push_back(report_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Pcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Pcc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Mpls::TrafficEng::Pcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "report-all")
    {
        report_all = value;
        report_all.value_namespace = name_space;
        report_all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Pcc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "report-all")
    {
        report_all.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Pcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "report-all")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Pcc::Peer::Peer()
{

    yang_name = "peer"; yang_parent_name = "pcc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Pcc::Peer::~Peer()
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::Pcc::Peer::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/pcc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Pcc::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Pcc::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Pcc::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::Pcc::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Pcc::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    source{YType::str, "source"},
    precedence{YType::uint8, "precedence"},
    keychain{YType::str, "keychain"}
    	,
    password(std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password>())
{
    password->parent = this;

    yang_name = "ipv4"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::~Ipv4()
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::has_data() const
{
    return ipv4.is_set
	|| source.is_set
	|| precedence.is_set
	|| keychain.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(keychain.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/pcc/peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "ipv4" || name == "source" || name == "precedence" || name == "keychain")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::Password()
    :
    clear{YType::str, "clear"},
    encrypted{YType::str, "encrypted"}
{

    yang_name = "password"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::~Password()
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::has_data() const
{
    return clear.is_set
	|| encrypted.is_set;
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clear.yfilter)
	|| ydk::is_set(encrypted.yfilter);
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear.is_set || is_set(clear.yfilter)) leaf_name_data.push_back(clear.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clear")
    {
        clear = value;
        clear.value_namespace = name_space;
        clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
        encrypted.value_namespace = name_space;
        encrypted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clear")
    {
        clear.yfilter = yfilter;
    }
    if(value_path == "encrypted")
    {
        encrypted.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear" || name == "encrypted")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Reoptimize::Reoptimize()
    :
    events(std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Events>())
	,timers(std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers>())
{
    events->parent = this;
    timers->parent = this;

    yang_name = "reoptimize"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Reoptimize::~Reoptimize()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::has_data() const
{
    return (events !=  nullptr && events->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::TrafficEng::Reoptimize::has_operation() const
{
    return is_set(yfilter)
	|| (events !=  nullptr && events->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::TrafficEng::Reoptimize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Reoptimize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reoptimize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Reoptimize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Reoptimize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events")
    {
        if(events == nullptr)
        {
            events = std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Events>();
        }
        return events;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Reoptimize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events != nullptr)
    {
        children["events"] = events;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Mpls::TrafficEng::Reoptimize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Reoptimize::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Reoptimize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events" || name == "timers")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Reoptimize::Events::Events()
    :
    link_up{YType::empty, "link-up"}
{

    yang_name = "events"; yang_parent_name = "reoptimize"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Reoptimize::Events::~Events()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::Events::has_data() const
{
    return link_up.is_set;
}

bool Native::Mpls::TrafficEng::Reoptimize::Events::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_up.yfilter);
}

std::string Native::Mpls::TrafficEng::Reoptimize::Events::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/reoptimize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Reoptimize::Events::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Reoptimize::Events::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_up.is_set || is_set(link_up.yfilter)) leaf_name_data.push_back(link_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Reoptimize::Events::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Reoptimize::Events::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Reoptimize::Events::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-up")
    {
        link_up = value;
        link_up.value_namespace = name_space;
        link_up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Reoptimize::Events::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-up")
    {
        link_up.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Reoptimize::Events::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-up")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Reoptimize::Timers::Timers()
    :
    frequency{YType::uint32, "frequency"}
    	,
    delay(std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers::Delay>())
{
    delay->parent = this;

    yang_name = "timers"; yang_parent_name = "reoptimize"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Reoptimize::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::has_data() const
{
    return frequency.is_set
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Mpls::TrafficEng::Reoptimize::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/reoptimize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Reoptimize::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Reoptimize::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Reoptimize::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Reoptimize::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Mpls::TrafficEng::Reoptimize::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Reoptimize::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "frequency")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::Delay()
    :
    after_frr{YType::uint8, "after-frr"},
    cleanup{YType::uint8, "cleanup"},
    installation{YType::uint16, "installation"}
{

    yang_name = "delay"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::~Delay()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::has_data() const
{
    return after_frr.is_set
	|| cleanup.is_set
	|| installation.is_set;
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(after_frr.yfilter)
	|| ydk::is_set(cleanup.yfilter)
	|| ydk::is_set(installation.yfilter);
}

std::string Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/reoptimize/timers/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (after_frr.is_set || is_set(after_frr.yfilter)) leaf_name_data.push_back(after_frr.get_name_leafdata());
    if (cleanup.is_set || is_set(cleanup.yfilter)) leaf_name_data.push_back(cleanup.get_name_leafdata());
    if (installation.is_set || is_set(installation.yfilter)) leaf_name_data.push_back(installation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "after-frr")
    {
        after_frr = value;
        after_frr.value_namespace = name_space;
        after_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup")
    {
        cleanup = value;
        cleanup.value_namespace = name_space;
        cleanup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "installation")
    {
        installation = value;
        installation.value_namespace = name_space;
        installation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "after-frr")
    {
        after_frr.yfilter = yfilter;
    }
    if(value_path == "cleanup")
    {
        cleanup.yfilter = yfilter;
    }
    if(value_path == "installation")
    {
        installation.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "after-frr" || name == "cleanup" || name == "installation")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Signalling::Signalling()
    :
    advertise(std::make_shared<Native::Mpls::TrafficEng::Signalling::Advertise>())
	,forwarding(std::make_shared<Native::Mpls::TrafficEng::Signalling::Forwarding>())
{
    advertise->parent = this;
    forwarding->parent = this;

    yang_name = "signalling"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Signalling::~Signalling()
{
}

bool Native::Mpls::TrafficEng::Signalling::has_data() const
{
    return (advertise !=  nullptr && advertise->has_data())
	|| (forwarding !=  nullptr && forwarding->has_data());
}

bool Native::Mpls::TrafficEng::Signalling::has_operation() const
{
    return is_set(yfilter)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (forwarding !=  nullptr && forwarding->has_operation());
}

std::string Native::Mpls::TrafficEng::Signalling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Signalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Mpls::TrafficEng::Signalling::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Native::Mpls::TrafficEng::Signalling::Forwarding>();
        }
        return forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(forwarding != nullptr)
    {
        children["forwarding"] = forwarding;
    }

    return children;
}

void Native::Mpls::TrafficEng::Signalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Signalling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Signalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "forwarding")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Signalling::Advertise::Advertise()
    :
    explicit_null(nullptr) // presence node
{

    yang_name = "advertise"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Signalling::Advertise::~Advertise()
{
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::has_data() const
{
    return (explicit_null !=  nullptr && explicit_null->has_data());
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| (explicit_null !=  nullptr && explicit_null->has_operation());
}

std::string Native::Mpls::TrafficEng::Signalling::Advertise::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Signalling::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Signalling::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Signalling::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit-null")
    {
        if(explicit_null == nullptr)
        {
            explicit_null = std::make_shared<Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull>();
        }
        return explicit_null;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Signalling::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(explicit_null != nullptr)
    {
        children["explicit-null"] = explicit_null;
    }

    return children;
}

void Native::Mpls::TrafficEng::Signalling::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Signalling::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::ExplicitNull()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "explicit-null"; yang_parent_name = "advertise"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::~ExplicitNull()
{
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/signalling/advertise/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-null";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Signalling::Forwarding::Forwarding()
    :
    sync{YType::empty, "sync"}
{

    yang_name = "forwarding"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Signalling::Forwarding::~Forwarding()
{
}

bool Native::Mpls::TrafficEng::Signalling::Forwarding::has_data() const
{
    return sync.is_set;
}

bool Native::Mpls::TrafficEng::Signalling::Forwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync.yfilter);
}

std::string Native::Mpls::TrafficEng::Signalling::Forwarding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Signalling::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Signalling::Forwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync.is_set || is_set(sync.yfilter)) leaf_name_data.push_back(sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Signalling::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Signalling::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Signalling::Forwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync")
    {
        sync = value;
        sync.value_namespace = name_space;
        sync.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Signalling::Forwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync")
    {
        sync.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Signalling::Forwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Topology::Topology()
    :
    holddown(std::make_shared<Native::Mpls::TrafficEng::Topology::Holddown>())
	,mesh_group(std::make_shared<Native::Mpls::TrafficEng::Topology::MeshGroup>())
{
    holddown->parent = this;
    mesh_group->parent = this;

    yang_name = "topology"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Topology::~Topology()
{
}

bool Native::Mpls::TrafficEng::Topology::has_data() const
{
    return (holddown !=  nullptr && holddown->has_data())
	|| (mesh_group !=  nullptr && mesh_group->has_data());
}

bool Native::Mpls::TrafficEng::Topology::has_operation() const
{
    return is_set(yfilter)
	|| (holddown !=  nullptr && holddown->has_operation())
	|| (mesh_group !=  nullptr && mesh_group->has_operation());
}

std::string Native::Mpls::TrafficEng::Topology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "holddown")
    {
        if(holddown == nullptr)
        {
            holddown = std::make_shared<Native::Mpls::TrafficEng::Topology::Holddown>();
        }
        return holddown;
    }

    if(child_yang_name == "mesh-group")
    {
        if(mesh_group == nullptr)
        {
            mesh_group = std::make_shared<Native::Mpls::TrafficEng::Topology::MeshGroup>();
        }
        return mesh_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(holddown != nullptr)
    {
        children["holddown"] = holddown;
    }

    if(mesh_group != nullptr)
    {
        children["mesh-group"] = mesh_group;
    }

    return children;
}

void Native::Mpls::TrafficEng::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holddown" || name == "mesh-group")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Topology::Holddown::Holddown()
    :
    sigerr{YType::uint16, "sigerr"}
{

    yang_name = "holddown"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Topology::Holddown::~Holddown()
{
}

bool Native::Mpls::TrafficEng::Topology::Holddown::has_data() const
{
    return sigerr.is_set;
}

bool Native::Mpls::TrafficEng::Topology::Holddown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sigerr.yfilter);
}

std::string Native::Mpls::TrafficEng::Topology::Holddown::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Topology::Holddown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "holddown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Topology::Holddown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sigerr.is_set || is_set(sigerr.yfilter)) leaf_name_data.push_back(sigerr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Topology::Holddown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Topology::Holddown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Topology::Holddown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sigerr")
    {
        sigerr = value;
        sigerr.value_namespace = name_space;
        sigerr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Topology::Holddown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sigerr")
    {
        sigerr.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Topology::Holddown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sigerr")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Topology::MeshGroup::MeshGroup()
    :
    accept_domain{YType::empty, "accept-domain"}
{

    yang_name = "mesh-group"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Topology::MeshGroup::~MeshGroup()
{
}

bool Native::Mpls::TrafficEng::Topology::MeshGroup::has_data() const
{
    return accept_domain.is_set;
}

bool Native::Mpls::TrafficEng::Topology::MeshGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_domain.yfilter);
}

std::string Native::Mpls::TrafficEng::Topology::MeshGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Topology::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Topology::MeshGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_domain.is_set || is_set(accept_domain.yfilter)) leaf_name_data.push_back(accept_domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Topology::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Topology::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Topology::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-domain")
    {
        accept_domain = value;
        accept_domain.value_namespace = name_space;
        accept_domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Topology::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-domain")
    {
        accept_domain.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Topology::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-domain")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Trace::Trace()
    :
    buffer_size(std::make_shared<Native::Mpls::TrafficEng::Trace::BufferSize>())
{
    buffer_size->parent = this;

    yang_name = "trace"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Trace::~Trace()
{
}

bool Native::Mpls::TrafficEng::Trace::has_data() const
{
    return (buffer_size !=  nullptr && buffer_size->has_data());
}

bool Native::Mpls::TrafficEng::Trace::has_operation() const
{
    return is_set(yfilter)
	|| (buffer_size !=  nullptr && buffer_size->has_operation());
}

std::string Native::Mpls::TrafficEng::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "buffer-size")
    {
        if(buffer_size == nullptr)
        {
            buffer_size = std::make_shared<Native::Mpls::TrafficEng::Trace::BufferSize>();
        }
        return buffer_size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(buffer_size != nullptr)
    {
        children["buffer-size"] = buffer_size;
    }

    return children;
}

void Native::Mpls::TrafficEng::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buffer-size")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Trace::BufferSize::BufferSize()
    :
    error{YType::uint16, "error"},
    event{YType::uint16, "event"},
    warning{YType::uint8, "warning"}
{

    yang_name = "buffer-size"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Trace::BufferSize::~BufferSize()
{
}

bool Native::Mpls::TrafficEng::Trace::BufferSize::has_data() const
{
    return error.is_set
	|| event.is_set
	|| warning.is_set;
}

bool Native::Mpls::TrafficEng::Trace::BufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(event.yfilter)
	|| ydk::is_set(warning.yfilter);
}

std::string Native::Mpls::TrafficEng::Trace::BufferSize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/trace/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Trace::BufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Trace::BufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (event.is_set || is_set(event.yfilter)) leaf_name_data.push_back(event.get_name_leafdata());
    if (warning.is_set || is_set(warning.yfilter)) leaf_name_data.push_back(warning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Trace::BufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Trace::BufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Trace::BufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event")
    {
        event = value;
        event.value_namespace = name_space;
        event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning")
    {
        warning = value;
        warning.value_namespace = name_space;
        warning.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Trace::BufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "event")
    {
        event.yfilter = yfilter;
    }
    if(value_path == "warning")
    {
        warning.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Trace::BufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "event" || name == "warning")
        return true;
    return false;
}

Native::Mpls::Tp::Tp()
{

    yang_name = "tp"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Tp::~Tp()
{
}

bool Native::Mpls::Tp::has_data() const
{
    return false;
}

bool Native::Mpls::Tp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Mpls::Tp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Tp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Tp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Tp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Router::Router()
    :
    isis(nullptr) // presence node
	,isis_container(std::make_shared<Native::Router::IsisContainer>())
	,lisp(nullptr) // presence node
	,rip(nullptr) // presence node
{
    isis_container->parent = this;

    yang_name = "router"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::~Router()
{
}

bool Native::Router::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lisp_list.size(); index++)
    {
        if(lisp_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    return (isis !=  nullptr && isis->has_data())
	|| (isis_container !=  nullptr && isis_container->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (rip !=  nullptr && rip->has_data());
}

bool Native::Router::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lisp_list.size(); index++)
    {
        if(lisp_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (isis_container !=  nullptr && isis_container->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (rip !=  nullptr && rip->has_operation());
}

std::string Native::Router::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-bgp:bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:isis-container")
    {
        if(isis_container == nullptr)
        {
            isis_container = std::make_shared<Native::Router::IsisContainer>();
        }
        return isis_container;
    }

    if(child_yang_name == "Cisco-IOS-XE-eigrp:eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-lisp:lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "Cisco-IOS-XE-lisp:lisp-list")
    {
        for(auto const & c : lisp_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::LispList>();
        c->parent = this;
        lisp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-ospf:ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-ospfv3:ospfv3")
    {
        for(auto const & c : ospfv3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3>();
        c->parent = this;
        ospfv3.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-rip:rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Rip>();
        }
        return rip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(isis != nullptr)
    {
        children["Cisco-IOS-XE-isis:isis"] = isis;
    }

    if(isis_container != nullptr)
    {
        children["Cisco-IOS-XE-isis:isis-container"] = isis_container;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(lisp != nullptr)
    {
        children["Cisco-IOS-XE-lisp:lisp"] = lisp;
    }

    for (auto const & c : lisp_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfv3)
    {
        children[c->get_segment_path()] = c;
    }

    if(rip != nullptr)
    {
        children["Cisco-IOS-XE-rip:rip"] = rip;
    }

    return children;
}

void Native::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "isis" || name == "isis-container" || name == "eigrp" || name == "lisp" || name == "lisp-list" || name == "ospf" || name == "ospfv3" || name == "rip")
        return true;
    return false;
}

Native::Router::Bgp::Bgp()
    :
    id{YType::str, "id"},
    default_metric{YType::uint32, "default-metric"},
    synchronization{YType::empty, "synchronization"},
    auto_summary{YType::boolean, "auto-summary"}
    	,
    import(std::make_shared<Native::Router::Bgp::Import>())
	,bgp(std::make_shared<Native::Router::Bgp::Bgp_>())
	,default_information(std::make_shared<Native::Router::Bgp::DefaultInformation>())
	,distance(std::make_shared<Native::Router::Bgp::Distance>())
	,maximum_paths(std::make_shared<Native::Router::Bgp::MaximumPaths>())
	,redistribute(std::make_shared<Native::Router::Bgp::Redistribute>())
	,table_map(nullptr) // presence node
	,snmp(nullptr) // presence node
	,address_family(std::make_shared<Native::Router::Bgp::AddressFamily>())
	,template_(std::make_shared<Native::Router::Bgp::Template_>())
	,timers(std::make_shared<Native::Router::Bgp::Timers>())
	,scope(std::make_shared<Native::Router::Bgp::Scope>())
{
    import->parent = this;
    bgp->parent = this;
    default_information->parent = this;
    distance->parent = this;
    maximum_paths->parent = this;
    redistribute->parent = this;
    address_family->parent = this;
    template_->parent = this;
    timers->parent = this;
    scope->parent = this;

    yang_name = "bgp"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Bgp::~Bgp()
{
}

bool Native::Router::Bgp::has_data() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return id.is_set
	|| default_metric.is_set
	|| synchronization.is_set
	|| auto_summary.is_set
	|| (import !=  nullptr && import->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (maximum_paths !=  nullptr && maximum_paths->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (table_map !=  nullptr && table_map->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (address_family !=  nullptr && address_family->has_data())
	|| (template_ !=  nullptr && template_->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (scope !=  nullptr && scope->has_data());
}

bool Native::Router::Bgp::has_operation() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(auto_summary.yfilter)
	|| (import !=  nullptr && import->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (maximum_paths !=  nullptr && maximum_paths->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (table_map !=  nullptr && table_map->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (address_family !=  nullptr && address_family->has_operation())
	|| (template_ !=  nullptr && template_->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Router::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp:bgp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.yfilter)) leaf_name_data.push_back(auto_summary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Router::Bgp::Import>();
        }
        return import;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Bgp::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Bgp::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        for(auto const & c : distribute_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::DistributeList>();
        c->parent = this;
        distribute_list.push_back(c);
        return c;
    }

    if(child_yang_name == "maximum-paths")
    {
        if(maximum_paths == nullptr)
        {
            maximum_paths = std::make_shared<Native::Router::Bgp::MaximumPaths>();
        }
        return maximum_paths;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        for(auto const & c : network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Bgp::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "table-map")
    {
        if(table_map == nullptr)
        {
            table_map = std::make_shared<Native::Router::Bgp::TableMap>();
        }
        return table_map;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Bgp::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Router::Bgp::AddressFamily>();
        }
        return address_family;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::Router::Bgp::Template_>();
        }
        return template_;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Bgp::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Router::Bgp::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    for (auto const & c : distribute_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(maximum_paths != nullptr)
    {
        children["maximum-paths"] = maximum_paths;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(table_map != nullptr)
    {
        children["table-map"] = table_map;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    return children;
}

void Native::Router::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-summary")
    {
        auto_summary = value;
        auto_summary.value_namespace = name_space;
        auto_summary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "auto-summary")
    {
        auto_summary.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import" || name == "bgp" || name == "default-information" || name == "distance" || name == "distribute-list" || name == "maximum-paths" || name == "neighbor" || name == "network" || name == "redistribute" || name == "table-map" || name == "snmp" || name == "address-family" || name == "template" || name == "timers" || name == "scope" || name == "id" || name == "default-metric" || name == "synchronization" || name == "auto-summary")
        return true;
    return false;
}

Native::Router::Bgp::Import::Import()
    :
    path(std::make_shared<Native::Router::Bgp::Import::Path>())
{
    path->parent = this;

    yang_name = "import"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Import::~Import()
{
}

bool Native::Router::Bgp::Import::has_data() const
{
    return (path !=  nullptr && path->has_data());
}

bool Native::Router::Bgp::Import::has_operation() const
{
    return is_set(yfilter)
	|| (path !=  nullptr && path->has_operation());
}

std::string Native::Router::Bgp::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<Native::Router::Bgp::Import::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path != nullptr)
    {
        children["path"] = path;
    }

    return children;
}

void Native::Router::Bgp::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

Native::Router::Bgp::Import::Path::Path()
    :
    limit{YType::uint8, "limit"}
    	,
    selection(std::make_shared<Native::Router::Bgp::Import::Path::Selection>())
{
    selection->parent = this;

    yang_name = "path"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Import::Path::~Path()
{
}

bool Native::Router::Bgp::Import::Path::has_data() const
{
    return limit.is_set
	|| (selection !=  nullptr && selection->has_data());
}

bool Native::Router::Bgp::Import::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| (selection !=  nullptr && selection->has_operation());
}

std::string Native::Router::Bgp::Import::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Import::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Import::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection")
    {
        if(selection == nullptr)
        {
            selection = std::make_shared<Native::Router::Bgp::Import::Path::Selection>();
        }
        return selection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Import::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(selection != nullptr)
    {
        children["selection"] = selection;
    }

    return children;
}

void Native::Router::Bgp::Import::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Import::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Import::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection" || name == "limit")
        return true;
    return false;
}

Native::Router::Bgp::Import::Path::Selection::Selection()
    :
    all{YType::empty, "all"}
{

    yang_name = "selection"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Import::Path::Selection::~Selection()
{
}

bool Native::Router::Bgp::Import::Path::Selection::has_data() const
{
    return all.is_set;
}

bool Native::Router::Bgp::Import::Path::Selection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Import::Path::Selection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Import::Path::Selection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Import::Path::Selection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Import::Path::Selection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Import::Path::Selection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Import::Path::Selection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Import::Path::Selection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Bgp_()
    :
    router_id{YType::str, "router-id"},
    always_compare_med{YType::empty, "always-compare-med"},
    aggregate_timer{YType::uint8, "aggregate-timer"},
    advertise_best_external{YType::empty, "advertise-best-external"},
    cluster_id{YType::str, "cluster-id"},
    deterministic_med{YType::empty, "deterministic-med"},
    dmzlink_bw{YType::empty, "dmzlink-bw"},
    enforce_first_as{YType::empty, "enforce-first-as"},
    enhanced_error{YType::boolean, "enhanced-error"},
    fast_external_fallover{YType::boolean, "fast-external-fallover"},
    log_neighbor_changes{YType::empty, "log-neighbor-changes"},
    maxas_limit{YType::uint16, "maxas-limit"},
    maxcommunity_limit{YType::uint16, "maxcommunity-limit"},
    mpls_local_label{YType::empty, "mpls-local-label"},
    redistribute_internal{YType::empty, "redistribute-internal"},
    scan_time{YType::uint8, "scan-time"},
    soft_reconfig_backup{YType::empty, "soft-reconfig-backup"},
    suppress_inactive{YType::empty, "suppress-inactive"},
    update_delay{YType::uint16, "update-delay"}
    	,
    asnotation(std::make_shared<Native::Router::Bgp::Bgp_::Asnotation>())
	,nopeerup_delay(std::make_shared<Native::Router::Bgp::Bgp_::NopeerupDelay>())
	,recursion(std::make_shared<Native::Router::Bgp::Bgp_::Recursion>())
	,additional_paths(std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths>())
	,bestpath(std::make_shared<Native::Router::Bgp::Bgp_::Bestpath>())
	,client_to_client(std::make_shared<Native::Router::Bgp::Bgp_::ClientToClient>())
	,confederation(std::make_shared<Native::Router::Bgp::Bgp_::Confederation>())
	,consistency_checker(std::make_shared<Native::Router::Bgp::Bgp_::ConsistencyChecker>())
	,dampening(nullptr) // presence node
	,default_(std::make_shared<Native::Router::Bgp::Bgp_::Default_>())
	,graceful_restart(nullptr) // presence node
	,ha_mode(std::make_shared<Native::Router::Bgp::Bgp_::HaMode>())
	,listen(std::make_shared<Native::Router::Bgp::Bgp_::Listen>())
	,route_map(std::make_shared<Native::Router::Bgp::Bgp_::RouteMap>())
	,slow_peer(std::make_shared<Native::Router::Bgp::Bgp_::SlowPeer>())
	,update_group(std::make_shared<Native::Router::Bgp::Bgp_::UpdateGroup>())
	,nexthop(std::make_shared<Native::Router::Bgp::Bgp_::Nexthop>())
	,regexp(std::make_shared<Native::Router::Bgp::Bgp_::Regexp>())
	,transport(std::make_shared<Native::Router::Bgp::Bgp_::Transport>())
{
    asnotation->parent = this;
    nopeerup_delay->parent = this;
    recursion->parent = this;
    additional_paths->parent = this;
    bestpath->parent = this;
    client_to_client->parent = this;
    confederation->parent = this;
    consistency_checker->parent = this;
    default_->parent = this;
    ha_mode->parent = this;
    listen->parent = this;
    route_map->parent = this;
    slow_peer->parent = this;
    update_group->parent = this;
    nexthop->parent = this;
    regexp->parent = this;
    transport->parent = this;

    yang_name = "bgp"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::Bgp_::has_data() const
{
    for (std::size_t index=0; index<inject_map.size(); index++)
    {
        if(inject_map[index]->has_data())
            return true;
    }
    return router_id.is_set
	|| always_compare_med.is_set
	|| aggregate_timer.is_set
	|| advertise_best_external.is_set
	|| cluster_id.is_set
	|| deterministic_med.is_set
	|| dmzlink_bw.is_set
	|| enforce_first_as.is_set
	|| enhanced_error.is_set
	|| fast_external_fallover.is_set
	|| log_neighbor_changes.is_set
	|| maxas_limit.is_set
	|| maxcommunity_limit.is_set
	|| mpls_local_label.is_set
	|| redistribute_internal.is_set
	|| scan_time.is_set
	|| soft_reconfig_backup.is_set
	|| suppress_inactive.is_set
	|| update_delay.is_set
	|| (asnotation !=  nullptr && asnotation->has_data())
	|| (nopeerup_delay !=  nullptr && nopeerup_delay->has_data())
	|| (recursion !=  nullptr && recursion->has_data())
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (bestpath !=  nullptr && bestpath->has_data())
	|| (client_to_client !=  nullptr && client_to_client->has_data())
	|| (confederation !=  nullptr && confederation->has_data())
	|| (consistency_checker !=  nullptr && consistency_checker->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (ha_mode !=  nullptr && ha_mode->has_data())
	|| (listen !=  nullptr && listen->has_data())
	|| (route_map !=  nullptr && route_map->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data())
	|| (update_group !=  nullptr && update_group->has_data())
	|| (nexthop !=  nullptr && nexthop->has_data())
	|| (regexp !=  nullptr && regexp->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Router::Bgp::Bgp_::has_operation() const
{
    for (std::size_t index=0; index<inject_map.size(); index++)
    {
        if(inject_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(always_compare_med.yfilter)
	|| ydk::is_set(aggregate_timer.yfilter)
	|| ydk::is_set(advertise_best_external.yfilter)
	|| ydk::is_set(cluster_id.yfilter)
	|| ydk::is_set(deterministic_med.yfilter)
	|| ydk::is_set(dmzlink_bw.yfilter)
	|| ydk::is_set(enforce_first_as.yfilter)
	|| ydk::is_set(enhanced_error.yfilter)
	|| ydk::is_set(fast_external_fallover.yfilter)
	|| ydk::is_set(log_neighbor_changes.yfilter)
	|| ydk::is_set(maxas_limit.yfilter)
	|| ydk::is_set(maxcommunity_limit.yfilter)
	|| ydk::is_set(mpls_local_label.yfilter)
	|| ydk::is_set(redistribute_internal.yfilter)
	|| ydk::is_set(scan_time.yfilter)
	|| ydk::is_set(soft_reconfig_backup.yfilter)
	|| ydk::is_set(suppress_inactive.yfilter)
	|| ydk::is_set(update_delay.yfilter)
	|| (asnotation !=  nullptr && asnotation->has_operation())
	|| (nopeerup_delay !=  nullptr && nopeerup_delay->has_operation())
	|| (recursion !=  nullptr && recursion->has_operation())
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (bestpath !=  nullptr && bestpath->has_operation())
	|| (client_to_client !=  nullptr && client_to_client->has_operation())
	|| (confederation !=  nullptr && confederation->has_operation())
	|| (consistency_checker !=  nullptr && consistency_checker->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (ha_mode !=  nullptr && ha_mode->has_operation())
	|| (listen !=  nullptr && listen->has_operation())
	|| (route_map !=  nullptr && route_map->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation())
	|| (update_group !=  nullptr && update_group->has_operation())
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (regexp !=  nullptr && regexp->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Router::Bgp::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (always_compare_med.is_set || is_set(always_compare_med.yfilter)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (aggregate_timer.is_set || is_set(aggregate_timer.yfilter)) leaf_name_data.push_back(aggregate_timer.get_name_leafdata());
    if (advertise_best_external.is_set || is_set(advertise_best_external.yfilter)) leaf_name_data.push_back(advertise_best_external.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.yfilter)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (deterministic_med.is_set || is_set(deterministic_med.yfilter)) leaf_name_data.push_back(deterministic_med.get_name_leafdata());
    if (dmzlink_bw.is_set || is_set(dmzlink_bw.yfilter)) leaf_name_data.push_back(dmzlink_bw.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.yfilter)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (enhanced_error.is_set || is_set(enhanced_error.yfilter)) leaf_name_data.push_back(enhanced_error.get_name_leafdata());
    if (fast_external_fallover.is_set || is_set(fast_external_fallover.yfilter)) leaf_name_data.push_back(fast_external_fallover.get_name_leafdata());
    if (log_neighbor_changes.is_set || is_set(log_neighbor_changes.yfilter)) leaf_name_data.push_back(log_neighbor_changes.get_name_leafdata());
    if (maxas_limit.is_set || is_set(maxas_limit.yfilter)) leaf_name_data.push_back(maxas_limit.get_name_leafdata());
    if (maxcommunity_limit.is_set || is_set(maxcommunity_limit.yfilter)) leaf_name_data.push_back(maxcommunity_limit.get_name_leafdata());
    if (mpls_local_label.is_set || is_set(mpls_local_label.yfilter)) leaf_name_data.push_back(mpls_local_label.get_name_leafdata());
    if (redistribute_internal.is_set || is_set(redistribute_internal.yfilter)) leaf_name_data.push_back(redistribute_internal.get_name_leafdata());
    if (scan_time.is_set || is_set(scan_time.yfilter)) leaf_name_data.push_back(scan_time.get_name_leafdata());
    if (soft_reconfig_backup.is_set || is_set(soft_reconfig_backup.yfilter)) leaf_name_data.push_back(soft_reconfig_backup.get_name_leafdata());
    if (suppress_inactive.is_set || is_set(suppress_inactive.yfilter)) leaf_name_data.push_back(suppress_inactive.get_name_leafdata());
    if (update_delay.is_set || is_set(update_delay.yfilter)) leaf_name_data.push_back(update_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asnotation")
    {
        if(asnotation == nullptr)
        {
            asnotation = std::make_shared<Native::Router::Bgp::Bgp_::Asnotation>();
        }
        return asnotation;
    }

    if(child_yang_name == "nopeerup-delay")
    {
        if(nopeerup_delay == nullptr)
        {
            nopeerup_delay = std::make_shared<Native::Router::Bgp::Bgp_::NopeerupDelay>();
        }
        return nopeerup_delay;
    }

    if(child_yang_name == "recursion")
    {
        if(recursion == nullptr)
        {
            recursion = std::make_shared<Native::Router::Bgp::Bgp_::Recursion>();
        }
        return recursion;
    }

    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "bestpath")
    {
        if(bestpath == nullptr)
        {
            bestpath = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath>();
        }
        return bestpath;
    }

    if(child_yang_name == "client-to-client")
    {
        if(client_to_client == nullptr)
        {
            client_to_client = std::make_shared<Native::Router::Bgp::Bgp_::ClientToClient>();
        }
        return client_to_client;
    }

    if(child_yang_name == "confederation")
    {
        if(confederation == nullptr)
        {
            confederation = std::make_shared<Native::Router::Bgp::Bgp_::Confederation>();
        }
        return confederation;
    }

    if(child_yang_name == "consistency-checker")
    {
        if(consistency_checker == nullptr)
        {
            consistency_checker = std::make_shared<Native::Router::Bgp::Bgp_::ConsistencyChecker>();
        }
        return consistency_checker;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Router::Bgp::Bgp_::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Bgp::Bgp_::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Bgp::Bgp_::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "ha-mode")
    {
        if(ha_mode == nullptr)
        {
            ha_mode = std::make_shared<Native::Router::Bgp::Bgp_::HaMode>();
        }
        return ha_mode;
    }

    if(child_yang_name == "inject-map")
    {
        for(auto const & c : inject_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Bgp_::InjectMap>();
        c->parent = this;
        inject_map.push_back(c);
        return c;
    }

    if(child_yang_name == "listen")
    {
        if(listen == nullptr)
        {
            listen = std::make_shared<Native::Router::Bgp::Bgp_::Listen>();
        }
        return listen;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Bgp::Bgp_::RouteMap>();
        }
        return route_map;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Bgp_::SlowPeer>();
        }
        return slow_peer;
    }

    if(child_yang_name == "update-group")
    {
        if(update_group == nullptr)
        {
            update_group = std::make_shared<Native::Router::Bgp::Bgp_::UpdateGroup>();
        }
        return update_group;
    }

    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<Native::Router::Bgp::Bgp_::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "regexp")
    {
        if(regexp == nullptr)
        {
            regexp = std::make_shared<Native::Router::Bgp::Bgp_::Regexp>();
        }
        return regexp;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Router::Bgp::Bgp_::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(asnotation != nullptr)
    {
        children["asnotation"] = asnotation;
    }

    if(nopeerup_delay != nullptr)
    {
        children["nopeerup-delay"] = nopeerup_delay;
    }

    if(recursion != nullptr)
    {
        children["recursion"] = recursion;
    }

    if(additional_paths != nullptr)
    {
        children["additional-paths"] = additional_paths;
    }

    if(bestpath != nullptr)
    {
        children["bestpath"] = bestpath;
    }

    if(client_to_client != nullptr)
    {
        children["client-to-client"] = client_to_client;
    }

    if(confederation != nullptr)
    {
        children["confederation"] = confederation;
    }

    if(consistency_checker != nullptr)
    {
        children["consistency-checker"] = consistency_checker;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(ha_mode != nullptr)
    {
        children["ha-mode"] = ha_mode;
    }

    for (auto const & c : inject_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(listen != nullptr)
    {
        children["listen"] = listen;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    if(slow_peer != nullptr)
    {
        children["slow-peer"] = slow_peer;
    }

    if(update_group != nullptr)
    {
        children["update-group"] = update_group;
    }

    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    if(regexp != nullptr)
    {
        children["regexp"] = regexp;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
        always_compare_med.value_namespace = name_space;
        always_compare_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-timer")
    {
        aggregate_timer = value;
        aggregate_timer.value_namespace = name_space;
        aggregate_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-best-external")
    {
        advertise_best_external = value;
        advertise_best_external.value_namespace = name_space;
        advertise_best_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
        cluster_id.value_namespace = name_space;
        cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deterministic-med")
    {
        deterministic_med = value;
        deterministic_med.value_namespace = name_space;
        deterministic_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw = value;
        dmzlink_bw.value_namespace = name_space;
        dmzlink_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
        enforce_first_as.value_namespace = name_space;
        enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhanced-error")
    {
        enhanced_error = value;
        enhanced_error.value_namespace = name_space;
        enhanced_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-external-fallover")
    {
        fast_external_fallover = value;
        fast_external_fallover.value_namespace = name_space;
        fast_external_fallover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes = value;
        log_neighbor_changes.value_namespace = name_space;
        log_neighbor_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxas-limit")
    {
        maxas_limit = value;
        maxas_limit.value_namespace = name_space;
        maxas_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxcommunity-limit")
    {
        maxcommunity_limit = value;
        maxcommunity_limit.value_namespace = name_space;
        maxcommunity_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-local-label")
    {
        mpls_local_label = value;
        mpls_local_label.value_namespace = name_space;
        mpls_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-internal")
    {
        redistribute_internal = value;
        redistribute_internal.value_namespace = name_space;
        redistribute_internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scan-time")
    {
        scan_time = value;
        scan_time.value_namespace = name_space;
        scan_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-reconfig-backup")
    {
        soft_reconfig_backup = value;
        soft_reconfig_backup.value_namespace = name_space;
        soft_reconfig_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-inactive")
    {
        suppress_inactive = value;
        suppress_inactive.value_namespace = name_space;
        suppress_inactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-delay")
    {
        update_delay = value;
        update_delay.value_namespace = name_space;
        update_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med.yfilter = yfilter;
    }
    if(value_path == "aggregate-timer")
    {
        aggregate_timer.yfilter = yfilter;
    }
    if(value_path == "advertise-best-external")
    {
        advertise_best_external.yfilter = yfilter;
    }
    if(value_path == "cluster-id")
    {
        cluster_id.yfilter = yfilter;
    }
    if(value_path == "deterministic-med")
    {
        deterministic_med.yfilter = yfilter;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw.yfilter = yfilter;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "enhanced-error")
    {
        enhanced_error.yfilter = yfilter;
    }
    if(value_path == "fast-external-fallover")
    {
        fast_external_fallover.yfilter = yfilter;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes.yfilter = yfilter;
    }
    if(value_path == "maxas-limit")
    {
        maxas_limit.yfilter = yfilter;
    }
    if(value_path == "maxcommunity-limit")
    {
        maxcommunity_limit.yfilter = yfilter;
    }
    if(value_path == "mpls-local-label")
    {
        mpls_local_label.yfilter = yfilter;
    }
    if(value_path == "redistribute-internal")
    {
        redistribute_internal.yfilter = yfilter;
    }
    if(value_path == "scan-time")
    {
        scan_time.yfilter = yfilter;
    }
    if(value_path == "soft-reconfig-backup")
    {
        soft_reconfig_backup.yfilter = yfilter;
    }
    if(value_path == "suppress-inactive")
    {
        suppress_inactive.yfilter = yfilter;
    }
    if(value_path == "update-delay")
    {
        update_delay.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asnotation" || name == "nopeerup-delay" || name == "recursion" || name == "additional-paths" || name == "bestpath" || name == "client-to-client" || name == "confederation" || name == "consistency-checker" || name == "dampening" || name == "default" || name == "graceful-restart" || name == "ha-mode" || name == "inject-map" || name == "listen" || name == "route-map" || name == "slow-peer" || name == "update-group" || name == "nexthop" || name == "regexp" || name == "transport" || name == "router-id" || name == "always-compare-med" || name == "aggregate-timer" || name == "advertise-best-external" || name == "cluster-id" || name == "deterministic-med" || name == "dmzlink-bw" || name == "enforce-first-as" || name == "enhanced-error" || name == "fast-external-fallover" || name == "log-neighbor-changes" || name == "maxas-limit" || name == "maxcommunity-limit" || name == "mpls-local-label" || name == "redistribute-internal" || name == "scan-time" || name == "soft-reconfig-backup" || name == "suppress-inactive" || name == "update-delay")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Asnotation::Asnotation()
    :
    dot{YType::empty, "dot"}
{

    yang_name = "asnotation"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::Asnotation::~Asnotation()
{
}

bool Native::Router::Bgp::Bgp_::Asnotation::has_data() const
{
    return dot.is_set;
}

bool Native::Router::Bgp::Bgp_::Asnotation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Asnotation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asnotation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Asnotation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot.is_set || is_set(dot.yfilter)) leaf_name_data.push_back(dot.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Asnotation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Asnotation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Asnotation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot")
    {
        dot = value;
        dot.value_namespace = name_space;
        dot.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Asnotation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot")
    {
        dot.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Asnotation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::NopeerupDelay::NopeerupDelay()
    :
    cold_boot{YType::uint16, "cold-boot"},
    nsf_switchover{YType::uint16, "nsf-switchover"},
    post_boot{YType::uint16, "post-boot"},
    user_initiated{YType::uint16, "user-initiated"}
{

    yang_name = "nopeerup-delay"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::NopeerupDelay::~NopeerupDelay()
{
}

bool Native::Router::Bgp::Bgp_::NopeerupDelay::has_data() const
{
    return cold_boot.is_set
	|| nsf_switchover.is_set
	|| post_boot.is_set
	|| user_initiated.is_set;
}

bool Native::Router::Bgp::Bgp_::NopeerupDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cold_boot.yfilter)
	|| ydk::is_set(nsf_switchover.yfilter)
	|| ydk::is_set(post_boot.yfilter)
	|| ydk::is_set(user_initiated.yfilter);
}

std::string Native::Router::Bgp::Bgp_::NopeerupDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nopeerup-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::NopeerupDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cold_boot.is_set || is_set(cold_boot.yfilter)) leaf_name_data.push_back(cold_boot.get_name_leafdata());
    if (nsf_switchover.is_set || is_set(nsf_switchover.yfilter)) leaf_name_data.push_back(nsf_switchover.get_name_leafdata());
    if (post_boot.is_set || is_set(post_boot.yfilter)) leaf_name_data.push_back(post_boot.get_name_leafdata());
    if (user_initiated.is_set || is_set(user_initiated.yfilter)) leaf_name_data.push_back(user_initiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::NopeerupDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::NopeerupDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::NopeerupDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cold-boot")
    {
        cold_boot = value;
        cold_boot.value_namespace = name_space;
        cold_boot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-switchover")
    {
        nsf_switchover = value;
        nsf_switchover.value_namespace = name_space;
        nsf_switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "post-boot")
    {
        post_boot = value;
        post_boot.value_namespace = name_space;
        post_boot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-initiated")
    {
        user_initiated = value;
        user_initiated.value_namespace = name_space;
        user_initiated.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::NopeerupDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cold-boot")
    {
        cold_boot.yfilter = yfilter;
    }
    if(value_path == "nsf-switchover")
    {
        nsf_switchover.yfilter = yfilter;
    }
    if(value_path == "post-boot")
    {
        post_boot.yfilter = yfilter;
    }
    if(value_path == "user-initiated")
    {
        user_initiated.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::NopeerupDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cold-boot" || name == "nsf-switchover" || name == "post-boot" || name == "user-initiated")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Recursion::Recursion()
    :
    host{YType::empty, "host"}
{

    yang_name = "recursion"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::Recursion::~Recursion()
{
}

bool Native::Router::Bgp::Bgp_::Recursion::has_data() const
{
    return host.is_set;
}

bool Native::Router::Bgp::Bgp_::Recursion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Recursion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recursion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Recursion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Recursion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Recursion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Recursion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Recursion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Recursion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::AdditionalPaths()
    :
    install{YType::empty, "install"},
    receive{YType::empty, "receive"}
    	,
    select(std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select>())
	,send(nullptr) // presence node
{
    select->parent = this;

    yang_name = "additional-paths"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::has_data() const
{
    return install.is_set
	|| receive.is_set
	|| (select !=  nullptr && select->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(install.yfilter)
	|| ydk::is_set(receive.yfilter)
	|| (select !=  nullptr && select->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::AdditionalPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (install.is_set || is_set(install.yfilter)) leaf_name_data.push_back(install.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "select")
    {
        if(select == nullptr)
        {
            select = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select>();
        }
        return select;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(select != nullptr)
    {
        children["select"] = select;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "install")
    {
        install = value;
        install.value_namespace = name_space;
        install.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "install")
    {
        install.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select" || name == "send" || name == "install" || name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Select()
    :
    all(nullptr) // presence node
	,backup(nullptr) // presence node
	,best(std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best>())
	,best_external(nullptr) // presence node
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "select"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::~Select()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (best_external !=  nullptr && best_external->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (best_external !=  nullptr && best_external->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::AdditionalPaths::Select::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All>();
        }
        return all;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best>();
        }
        return best;
    }

    if(child_yang_name == "best-external")
    {
        if(best_external == nullptr)
        {
            best_external = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal>();
        }
        return best_external;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(best_external != nullptr)
    {
        children["best-external"] = best_external;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "backup" || name == "best" || name == "best-external" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::All()
    :
    best(std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best>())
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "all"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::~All()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::has_data() const
{
    return (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::has_operation() const
{
    return is_set(yfilter)
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Best()
{

    yang_name = "best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::~Best()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::Range()
    :
    range{YType::uint8, "range"},
    group_best{YType::empty, "group-best"}
{

    yang_name = "range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::~Range()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::has_data() const
{
    return range.is_set
	|| group_best.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(group_best.yfilter);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.yfilter)) leaf_name_data.push_back(group_best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-best")
    {
        group_best = value;
        group_best.value_namespace = name_space;
        group_best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "group-best")
    {
        group_best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::GroupBest()
    :
    best{YType::uint8, "best"}
{

    yang_name = "group-best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::has_data() const
{
    return best.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::Backup()
    :
    best_external{YType::empty, "best-external"}
{

    yang_name = "backup"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::~Backup()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::has_data() const
{
    return best_external.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_external.yfilter);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-external")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Best()
{

    yang_name = "best"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::~Best()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::Range()
    :
    range{YType::uint8, "range"},
    all{YType::empty, "all"}
    	,
    group_best(nullptr) // presence node
{

    yang_name = "range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::~Range()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::has_data() const
{
    return range.is_set
	|| all.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(all.yfilter)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-best" || name == "range" || name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::GroupBest()
    :
    all{YType::empty, "all"}
{

    yang_name = "group-best"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_data() const
{
    return all.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::BestExternal()
    :
    backup{YType::empty, "backup"}
{

    yang_name = "best-external"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::~BestExternal()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::has_data() const
{
    return backup.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup.yfilter);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup.is_set || is_set(backup.yfilter)) leaf_name_data.push_back(backup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup")
    {
        backup = value;
        backup.value_namespace = name_space;
        backup.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup")
    {
        backup.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"}
{

    yang_name = "group-best"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::has_data() const
{
    return all.is_set
	|| best.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Send::Send()
    :
    receive{YType::empty, "receive"}
{

    yang_name = "send"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Send::~Send()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Send::has_data() const
{
    return receive.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::AdditionalPaths::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Bestpath::Bestpath()
    :
    as_path{YType::enumeration, "as-path"},
    compare_routerid{YType::empty, "compare-routerid"}
    	,
    cost_community(std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::CostCommunity>())
	,igp_metric(std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::IgpMetric>())
	,med(std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::Med>())
{
    cost_community->parent = this;
    igp_metric->parent = this;
    med->parent = this;

    yang_name = "bestpath"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::Bestpath::~Bestpath()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::has_data() const
{
    return as_path.is_set
	|| compare_routerid.is_set
	|| (cost_community !=  nullptr && cost_community->has_data())
	|| (igp_metric !=  nullptr && igp_metric->has_data())
	|| (med !=  nullptr && med->has_data());
}

bool Native::Router::Bgp::Bgp_::Bestpath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(compare_routerid.yfilter)
	|| (cost_community !=  nullptr && cost_community->has_operation())
	|| (igp_metric !=  nullptr && igp_metric->has_operation())
	|| (med !=  nullptr && med->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Bestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bestpath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Bestpath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (compare_routerid.is_set || is_set(compare_routerid.yfilter)) leaf_name_data.push_back(compare_routerid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Bestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost-community")
    {
        if(cost_community == nullptr)
        {
            cost_community = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::CostCommunity>();
        }
        return cost_community;
    }

    if(child_yang_name == "igp-metric")
    {
        if(igp_metric == nullptr)
        {
            igp_metric = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::IgpMetric>();
        }
        return igp_metric;
    }

    if(child_yang_name == "med")
    {
        if(med == nullptr)
        {
            med = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::Med>();
        }
        return med;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Bestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost_community != nullptr)
    {
        children["cost-community"] = cost_community;
    }

    if(igp_metric != nullptr)
    {
        children["igp-metric"] = igp_metric;
    }

    if(med != nullptr)
    {
        children["med"] = med;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::Bestpath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compare-routerid")
    {
        compare_routerid = value;
        compare_routerid.value_namespace = name_space;
        compare_routerid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Bestpath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "compare-routerid")
    {
        compare_routerid.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Bestpath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost-community" || name == "igp-metric" || name == "med" || name == "as-path" || name == "compare-routerid")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::CostCommunity()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "cost-community"; yang_parent_name = "bestpath"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::~CostCommunity()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::has_data() const
{
    return ignore.is_set;
}

bool Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::IgpMetric()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "igp-metric"; yang_parent_name = "bestpath"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::~IgpMetric()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::has_data() const
{
    return ignore.is_set;
}

bool Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Bestpath::Med::Med()
    :
    missing_at_worst{YType::empty, "missing-at-worst"}
    	,
    confed(nullptr) // presence node
{

    yang_name = "med"; yang_parent_name = "bestpath"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::Bestpath::Med::~Med()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::has_data() const
{
    return missing_at_worst.is_set
	|| (confed !=  nullptr && confed->has_data());
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(missing_at_worst.yfilter)
	|| (confed !=  nullptr && confed->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Bestpath::Med::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "med";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Bestpath::Med::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (missing_at_worst.is_set || is_set(missing_at_worst.yfilter)) leaf_name_data.push_back(missing_at_worst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Bestpath::Med::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "confed")
    {
        if(confed == nullptr)
        {
            confed = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::Med::Confed>();
        }
        return confed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Bestpath::Med::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(confed != nullptr)
    {
        children["confed"] = confed;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::Bestpath::Med::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "missing-at-worst")
    {
        missing_at_worst = value;
        missing_at_worst.value_namespace = name_space;
        missing_at_worst.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Bestpath::Med::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "missing-at-worst")
    {
        missing_at_worst.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confed" || name == "missing-at-worst")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::Confed()
    :
    missing_at_worst{YType::empty, "missing-at-worst"}
{

    yang_name = "confed"; yang_parent_name = "med"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::~Confed()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::has_data() const
{
    return missing_at_worst.is_set;
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(missing_at_worst.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (missing_at_worst.is_set || is_set(missing_at_worst.yfilter)) leaf_name_data.push_back(missing_at_worst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "missing-at-worst")
    {
        missing_at_worst = value;
        missing_at_worst.value_namespace = name_space;
        missing_at_worst.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "missing-at-worst")
    {
        missing_at_worst.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "missing-at-worst")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::ClientToClient::ClientToClient()
    :
    reflection{YType::empty, "reflection"}
{

    yang_name = "client-to-client"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::ClientToClient::~ClientToClient()
{
}

bool Native::Router::Bgp::Bgp_::ClientToClient::has_data() const
{
    return reflection.is_set;
}

bool Native::Router::Bgp::Bgp_::ClientToClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reflection.yfilter);
}

std::string Native::Router::Bgp::Bgp_::ClientToClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::ClientToClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reflection.is_set || is_set(reflection.yfilter)) leaf_name_data.push_back(reflection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::ClientToClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::ClientToClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::ClientToClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reflection")
    {
        reflection = value;
        reflection.value_namespace = name_space;
        reflection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::ClientToClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reflection")
    {
        reflection.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::ClientToClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reflection")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Confederation::Confederation()
    :
    identifier{YType::uint32, "identifier"}
    	,
    peers(std::make_shared<Native::Router::Bgp::Bgp_::Confederation::Peers>())
{
    peers->parent = this;

    yang_name = "confederation"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::Confederation::~Confederation()
{
}

bool Native::Router::Bgp::Bgp_::Confederation::has_data() const
{
    return identifier.is_set
	|| (peers !=  nullptr && peers->has_data());
}

bool Native::Router::Bgp::Bgp_::Confederation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| (peers !=  nullptr && peers->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Confederation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Confederation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Confederation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<Native::Router::Bgp::Bgp_::Confederation::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Confederation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::Confederation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Confederation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Confederation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers" || name == "identifier")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Confederation::Peers::Peers()
    :
    peers_as{YType::uint32, "peers-as"}
{

    yang_name = "peers"; yang_parent_name = "confederation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::Confederation::Peers::~Peers()
{
}

bool Native::Router::Bgp::Bgp_::Confederation::Peers::has_data() const
{
    for (auto const & leaf : peers_as.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Bgp_::Confederation::Peers::has_operation() const
{
    for (auto const & leaf : peers_as.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peers_as.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Confederation::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Confederation::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto peers_as_name_datas = peers_as.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), peers_as_name_datas.begin(), peers_as_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Confederation::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Confederation::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Confederation::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peers-as")
    {
        peers_as.append(value);
    }
}

void Native::Router::Bgp::Bgp_::Confederation::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peers-as")
    {
        peers_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Confederation::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers-as")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::ConsistencyChecker()
    :
    auto_repair(nullptr) // presence node
	,error_message(nullptr) // presence node
{

    yang_name = "consistency-checker"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::~ConsistencyChecker()
{
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::has_data() const
{
    return (auto_repair !=  nullptr && auto_repair->has_data())
	|| (error_message !=  nullptr && error_message->has_data());
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::has_operation() const
{
    return is_set(yfilter)
	|| (auto_repair !=  nullptr && auto_repair->has_operation())
	|| (error_message !=  nullptr && error_message->has_operation());
}

std::string Native::Router::Bgp::Bgp_::ConsistencyChecker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consistency-checker";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::ConsistencyChecker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::ConsistencyChecker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-repair")
    {
        if(auto_repair == nullptr)
        {
            auto_repair = std::make_shared<Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair>();
        }
        return auto_repair;
    }

    if(child_yang_name == "error-message")
    {
        if(error_message == nullptr)
        {
            error_message = std::make_shared<Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage>();
        }
        return error_message;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::ConsistencyChecker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_repair != nullptr)
    {
        children["auto-repair"] = auto_repair;
    }

    if(error_message != nullptr)
    {
        children["error-message"] = error_message;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-repair" || name == "error-message")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::AutoRepair()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "auto-repair"; yang_parent_name = "consistency-checker"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::~AutoRepair()
{
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::ErrorMessage()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "error-message"; yang_parent_name = "consistency-checker"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::~ErrorMessage()
{
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-message";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Dampening::Dampening()
    :
    route_map{YType::str, "route-map"}
    	,
    dampen(std::make_shared<Native::Router::Bgp::Bgp_::Dampening::Dampen>())
{
    dampen->parent = this;

    yang_name = "dampening"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::Dampening::~Dampening()
{
}

bool Native::Router::Bgp::Bgp_::Dampening::has_data() const
{
    return route_map.is_set
	|| (dampen !=  nullptr && dampen->has_data());
}

bool Native::Router::Bgp::Bgp_::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (dampen !=  nullptr && dampen->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampen")
    {
        if(dampen == nullptr)
        {
            dampen = std::make_shared<Native::Router::Bgp::Bgp_::Dampening::Dampen>();
        }
        return dampen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dampen != nullptr)
    {
        children["dampen"] = dampen;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampen" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Dampening::Dampen::Dampen()
    :
    half_life_time{YType::uint8, "half-life-time"},
    reuse_time{YType::uint16, "reuse-time"},
    suppress_time{YType::uint16, "suppress-time"},
    max_suppress_time{YType::uint8, "max-suppress-time"}
{

    yang_name = "dampen"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::Dampening::Dampen::~Dampen()
{
}

bool Native::Router::Bgp::Bgp_::Dampening::Dampen::has_data() const
{
    return half_life_time.is_set
	|| reuse_time.is_set
	|| suppress_time.is_set
	|| max_suppress_time.is_set;
}

bool Native::Router::Bgp::Bgp_::Dampening::Dampen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(half_life_time.yfilter)
	|| ydk::is_set(reuse_time.yfilter)
	|| ydk::is_set(suppress_time.yfilter)
	|| ydk::is_set(max_suppress_time.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Dampening::Dampen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Dampening::Dampen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life_time.is_set || is_set(half_life_time.yfilter)) leaf_name_data.push_back(half_life_time.get_name_leafdata());
    if (reuse_time.is_set || is_set(reuse_time.yfilter)) leaf_name_data.push_back(reuse_time.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.yfilter)) leaf_name_data.push_back(suppress_time.get_name_leafdata());
    if (max_suppress_time.is_set || is_set(max_suppress_time.yfilter)) leaf_name_data.push_back(max_suppress_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Dampening::Dampen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Dampening::Dampen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Dampening::Dampen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "half-life-time")
    {
        half_life_time = value;
        half_life_time.value_namespace = name_space;
        half_life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-time")
    {
        reuse_time = value;
        reuse_time.value_namespace = name_space;
        reuse_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
        suppress_time.value_namespace = name_space;
        suppress_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-suppress-time")
    {
        max_suppress_time = value;
        max_suppress_time.value_namespace = name_space;
        max_suppress_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Dampening::Dampen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "half-life-time")
    {
        half_life_time.yfilter = yfilter;
    }
    if(value_path == "reuse-time")
    {
        reuse_time.yfilter = yfilter;
    }
    if(value_path == "suppress-time")
    {
        suppress_time.yfilter = yfilter;
    }
    if(value_path == "max-suppress-time")
    {
        max_suppress_time.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Dampening::Dampen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-life-time" || name == "reuse-time" || name == "suppress-time" || name == "max-suppress-time")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Default_::Default_()
    :
    ipv4_unicast{YType::boolean, "ipv4-unicast"},
    ipv6_nexthop{YType::empty, "ipv6-nexthop"},
    local_preference{YType::uint32, "local-preference"},
    route_target{YType::enumeration, "route-target"}
{

    yang_name = "default"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::Default_::~Default_()
{
}

bool Native::Router::Bgp::Bgp_::Default_::has_data() const
{
    return ipv4_unicast.is_set
	|| ipv6_nexthop.is_set
	|| local_preference.is_set
	|| route_target.is_set;
}

bool Native::Router::Bgp::Bgp_::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_unicast.yfilter)
	|| ydk::is_set(ipv6_nexthop.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(route_target.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_unicast.is_set || is_set(ipv4_unicast.yfilter)) leaf_name_data.push_back(ipv4_unicast.get_name_leafdata());
    if (ipv6_nexthop.is_set || is_set(ipv6_nexthop.yfilter)) leaf_name_data.push_back(ipv6_nexthop.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-unicast")
    {
        ipv4_unicast = value;
        ipv4_unicast.value_namespace = name_space;
        ipv4_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-nexthop")
    {
        ipv6_nexthop = value;
        ipv6_nexthop.value_namespace = name_space;
        ipv6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-unicast")
    {
        ipv4_unicast.yfilter = yfilter;
    }
    if(value_path == "ipv6-nexthop")
    {
        ipv6_nexthop.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unicast" || name == "ipv6-nexthop" || name == "local-preference" || name == "route-target")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::GracefulRestart::GracefulRestart()
    :
    extended{YType::empty, "extended"},
    restart_time{YType::uint16, "restart-time"},
    stalepath_time{YType::uint16, "stalepath-time"}
{

    yang_name = "graceful-restart"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Bgp::Bgp_::GracefulRestart::has_data() const
{
    return extended.is_set
	|| restart_time.is_set
	|| stalepath_time.is_set;
}

bool Native::Router::Bgp::Bgp_::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stalepath_time.yfilter);
}

std::string Native::Router::Bgp::Bgp_::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stalepath_time.is_set || is_set(stalepath_time.yfilter)) leaf_name_data.push_back(stalepath_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stalepath-time")
    {
        stalepath_time = value;
        stalepath_time.value_namespace = name_space;
        stalepath_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "stalepath-time")
    {
        stalepath_time.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended" || name == "restart-time" || name == "stalepath-time")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::HaMode::HaMode()
    :
    sso(nullptr) // presence node
{

    yang_name = "ha-mode"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::HaMode::~HaMode()
{
}

bool Native::Router::Bgp::Bgp_::HaMode::has_data() const
{
    return (sso !=  nullptr && sso->has_data());
}

bool Native::Router::Bgp::Bgp_::HaMode::has_operation() const
{
    return is_set(yfilter)
	|| (sso !=  nullptr && sso->has_operation());
}

std::string Native::Router::Bgp::Bgp_::HaMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::HaMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::HaMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sso")
    {
        if(sso == nullptr)
        {
            sso = std::make_shared<Native::Router::Bgp::Bgp_::HaMode::Sso>();
        }
        return sso;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::HaMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sso != nullptr)
    {
        children["sso"] = sso;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::HaMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::HaMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::HaMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sso")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::HaMode::Sso::Sso()
    :
    prefer{YType::empty, "prefer"}
{

    yang_name = "sso"; yang_parent_name = "ha-mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::HaMode::Sso::~Sso()
{
}

bool Native::Router::Bgp::Bgp_::HaMode::Sso::has_data() const
{
    return prefer.is_set;
}

bool Native::Router::Bgp::Bgp_::HaMode::Sso::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefer.yfilter);
}

std::string Native::Router::Bgp::Bgp_::HaMode::Sso::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::HaMode::Sso::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::HaMode::Sso::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::HaMode::Sso::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::HaMode::Sso::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::HaMode::Sso::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::HaMode::Sso::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefer")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::InjectMap::InjectMap()
    :
    name{YType::str, "name"},
    exist_map{YType::str, "exist-map"},
    copy_attributes{YType::empty, "copy-attributes"}
{

    yang_name = "inject-map"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::InjectMap::~InjectMap()
{
}

bool Native::Router::Bgp::Bgp_::InjectMap::has_data() const
{
    return name.is_set
	|| exist_map.is_set
	|| copy_attributes.is_set;
}

bool Native::Router::Bgp::Bgp_::InjectMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(exist_map.yfilter)
	|| ydk::is_set(copy_attributes.yfilter);
}

std::string Native::Router::Bgp::Bgp_::InjectMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inject-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::InjectMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (exist_map.is_set || is_set(exist_map.yfilter)) leaf_name_data.push_back(exist_map.get_name_leafdata());
    if (copy_attributes.is_set || is_set(copy_attributes.yfilter)) leaf_name_data.push_back(copy_attributes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::InjectMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::InjectMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::InjectMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exist-map")
    {
        exist_map = value;
        exist_map.value_namespace = name_space;
        exist_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "copy-attributes")
    {
        copy_attributes = value;
        copy_attributes.value_namespace = name_space;
        copy_attributes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::InjectMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "exist-map")
    {
        exist_map.yfilter = yfilter;
    }
    if(value_path == "copy-attributes")
    {
        copy_attributes.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::InjectMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "exist-map" || name == "copy-attributes")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Listen::Listen()
    :
    limit{YType::uint16, "limit"}
{

    yang_name = "listen"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::Listen::~Listen()
{
}

bool Native::Router::Bgp::Bgp_::Listen::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return limit.is_set;
}

bool Native::Router::Bgp::Bgp_::Listen::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Listen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Listen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Listen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Bgp_::Listen::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Listen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::Listen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Listen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Listen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "limit")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Listen::Range::Range()
    :
    network_range{YType::str, "network-range"},
    peer_group{YType::str, "peer-group"}
{

    yang_name = "range"; yang_parent_name = "listen"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::Listen::Range::~Range()
{
}

bool Native::Router::Bgp::Bgp_::Listen::Range::has_data() const
{
    return network_range.is_set
	|| peer_group.is_set;
}

bool Native::Router::Bgp::Bgp_::Listen::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(network_range.yfilter)
	|| ydk::is_set(peer_group.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Listen::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[network-range='" <<network_range <<"']" <<"[peer-group='" <<peer_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Listen::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_range.is_set || is_set(network_range.yfilter)) leaf_name_data.push_back(network_range.get_name_leafdata());
    if (peer_group.is_set || is_set(peer_group.yfilter)) leaf_name_data.push_back(peer_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Listen::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Listen::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Listen::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-range")
    {
        network_range = value;
        network_range.value_namespace = name_space;
        network_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-group")
    {
        peer_group = value;
        peer_group.value_namespace = name_space;
        peer_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Listen::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-range")
    {
        network_range.yfilter = yfilter;
    }
    if(value_path == "peer-group")
    {
        peer_group.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Listen::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-range" || name == "peer-group")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::RouteMap::RouteMap()
    :
    priority{YType::empty, "priority"}
{

    yang_name = "route-map"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::Bgp_::RouteMap::has_data() const
{
    return priority.is_set;
}

bool Native::Router::Bgp::Bgp_::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Router::Bgp::Bgp_::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
	,split_update_group(std::make_shared<Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Bgp_::SlowPeer::has_data() const
{
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Bgp_::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Bgp_::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Bgp_::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detection != nullptr)
    {
        children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        children["split-update-group"] = split_update_group;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::SlowPeer::Detection::Detection()
    :
    disable{YType::empty, "disable"},
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Bgp_::SlowPeer::Detection::has_data() const
{
    return disable.is_set
	|| threshold.is_set;
}

bool Native::Router::Bgp::Bgp_::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::Bgp_::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::has_data() const
{
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    return permanent.is_set;
}

bool Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::UpdateGroup::UpdateGroup()
    :
    split(std::make_shared<Native::Router::Bgp::Bgp_::UpdateGroup::Split>())
{
    split->parent = this;

    yang_name = "update-group"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::UpdateGroup::~UpdateGroup()
{
}

bool Native::Router::Bgp::Bgp_::UpdateGroup::has_data() const
{
    return (split !=  nullptr && split->has_data());
}

bool Native::Router::Bgp::Bgp_::UpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (split !=  nullptr && split->has_operation());
}

std::string Native::Router::Bgp::Bgp_::UpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::UpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::UpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split")
    {
        if(split == nullptr)
        {
            split = std::make_shared<Native::Router::Bgp::Bgp_::UpdateGroup::Split>();
        }
        return split;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::UpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(split != nullptr)
    {
        children["split"] = split;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::UpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::UpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::UpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::UpdateGroup::Split::Split()
    :
    as_override{YType::empty, "as-override"}
{

    yang_name = "split"; yang_parent_name = "update-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::UpdateGroup::Split::~Split()
{
}

bool Native::Router::Bgp::Bgp_::UpdateGroup::Split::has_data() const
{
    return as_override.is_set;
}

bool Native::Router::Bgp::Bgp_::UpdateGroup::Split::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_override.yfilter);
}

std::string Native::Router::Bgp::Bgp_::UpdateGroup::Split::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::UpdateGroup::Split::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_override.is_set || is_set(as_override.yfilter)) leaf_name_data.push_back(as_override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::UpdateGroup::Split::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::UpdateGroup::Split::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::UpdateGroup::Split::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-override")
    {
        as_override = value;
        as_override.value_namespace = name_space;
        as_override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::UpdateGroup::Split::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-override")
    {
        as_override.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::UpdateGroup::Split::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-override")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Nexthop::Nexthop()
    :
    route_map{YType::str, "route-map"}
    	,
    trigger(std::make_shared<Native::Router::Bgp::Bgp_::Nexthop::Trigger>())
{
    trigger->parent = this;

    yang_name = "nexthop"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::Nexthop::~Nexthop()
{
}

bool Native::Router::Bgp::Bgp_::Nexthop::has_data() const
{
    return route_map.is_set
	|| (trigger !=  nullptr && trigger->has_data());
}

bool Native::Router::Bgp::Bgp_::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (trigger !=  nullptr && trigger->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger")
    {
        if(trigger == nullptr)
        {
            trigger = std::make_shared<Native::Router::Bgp::Bgp_::Nexthop::Trigger>();
        }
        return trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trigger != nullptr)
    {
        children["trigger"] = trigger;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Nexthop::Trigger::Trigger()
    :
    delay{YType::uint8, "delay"},
    enable{YType::boolean, "enable"}
{

    yang_name = "trigger"; yang_parent_name = "nexthop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::Nexthop::Trigger::~Trigger()
{
}

bool Native::Router::Bgp::Bgp_::Nexthop::Trigger::has_data() const
{
    return delay.is_set
	|| enable.is_set;
}

bool Native::Router::Bgp::Bgp_::Nexthop::Trigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Nexthop::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Nexthop::Trigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Nexthop::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Nexthop::Trigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Nexthop::Trigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Nexthop::Trigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Nexthop::Trigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "enable")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Regexp::Regexp()
    :
    deterministic{YType::empty, "deterministic"}
{

    yang_name = "regexp"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::Regexp::~Regexp()
{
}

bool Native::Router::Bgp::Bgp_::Regexp::has_data() const
{
    return deterministic.is_set;
}

bool Native::Router::Bgp::Bgp_::Regexp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deterministic.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Regexp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regexp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Regexp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deterministic.is_set || is_set(deterministic.yfilter)) leaf_name_data.push_back(deterministic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Regexp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Regexp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Regexp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deterministic")
    {
        deterministic = value;
        deterministic.value_namespace = name_space;
        deterministic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Regexp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deterministic")
    {
        deterministic.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Regexp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deterministic")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Transport::Transport()
    :
    path_mtu_discovery{YType::boolean, "path-mtu-discovery"}
{

    yang_name = "transport"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Bgp_::Transport::~Transport()
{
}

bool Native::Router::Bgp::Bgp_::Transport::has_data() const
{
    return path_mtu_discovery.is_set;
}

bool Native::Router::Bgp::Bgp_::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_mtu_discovery.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_mtu_discovery.is_set || is_set(path_mtu_discovery.yfilter)) leaf_name_data.push_back(path_mtu_discovery.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery = value;
        path_mtu_discovery.value_namespace = name_space;
        path_mtu_discovery.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-mtu-discovery")
        return true;
    return false;
}

Native::Router::Bgp::DefaultInformation::DefaultInformation()
    :
    originate{YType::empty, "originate"}
{

    yang_name = "default-information"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Bgp::DefaultInformation::has_data() const
{
    return originate.is_set;
}

bool Native::Router::Bgp::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(originate.yfilter);
}

std::string Native::Router::Bgp::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originate.is_set || is_set(originate.yfilter)) leaf_name_data.push_back(originate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originate")
    {
        originate = value;
        originate.value_namespace = name_space;
        originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originate")
    {
        originate.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Bgp::Distance::Distance()
    :
    bgp(std::make_shared<Native::Router::Bgp::Distance::Bgp_>())
{
    bgp->parent = this;

    yang_name = "distance"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Distance::~Distance()
{
}

bool Native::Router::Bgp::Distance::has_data() const
{
    for (std::size_t index=0; index<adm_distance.size(); index++)
    {
        if(adm_distance[index]->has_data())
            return true;
    }
    return (bgp !=  nullptr && bgp->has_data());
}

bool Native::Router::Bgp::Distance::has_operation() const
{
    for (std::size_t index=0; index<adm_distance.size(); index++)
    {
        if(adm_distance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Native::Router::Bgp::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::Distance::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "adm-distance")
    {
        for(auto const & c : adm_distance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Distance::AdmDistance>();
        c->parent = this;
        adm_distance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    for (auto const & c : adm_distance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "adm-distance")
        return true;
    return false;
}

Native::Router::Bgp::Distance::Bgp_::Bgp_()
    :
    extern_as{YType::uint16, "extern-as"},
    internal_as{YType::uint16, "internal-as"},
    local{YType::uint16, "local"}
{

    yang_name = "bgp"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Distance::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::Distance::Bgp_::has_data() const
{
    return extern_as.is_set
	|| internal_as.is_set
	|| local.is_set;
}

bool Native::Router::Bgp::Distance::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extern_as.yfilter)
	|| ydk::is_set(internal_as.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Router::Bgp::Distance::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Distance::Bgp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extern_as.is_set || is_set(extern_as.yfilter)) leaf_name_data.push_back(extern_as.get_name_leafdata());
    if (internal_as.is_set || is_set(internal_as.yfilter)) leaf_name_data.push_back(internal_as.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Distance::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Distance::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Distance::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extern-as")
    {
        extern_as = value;
        extern_as.value_namespace = name_space;
        extern_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-as")
    {
        internal_as = value;
        internal_as.value_namespace = name_space;
        internal_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Distance::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extern-as")
    {
        extern_as.yfilter = yfilter;
    }
    if(value_path == "internal-as")
    {
        internal_as.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Distance::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extern-as" || name == "internal-as" || name == "local")
        return true;
    return false;
}

Native::Router::Bgp::Distance::AdmDistance::AdmDistance()
    :
    distance{YType::uint16, "distance"},
    srcip{YType::str, "srcip"},
    wildbits{YType::str, "wildbits"},
    acl{YType::str, "acl"}
{

    yang_name = "adm-distance"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Distance::AdmDistance::~AdmDistance()
{
}

bool Native::Router::Bgp::Distance::AdmDistance::has_data() const
{
    return distance.is_set
	|| srcip.is_set
	|| wildbits.is_set
	|| acl.is_set;
}

bool Native::Router::Bgp::Distance::AdmDistance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(wildbits.yfilter)
	|| ydk::is_set(acl.yfilter);
}

std::string Native::Router::Bgp::Distance::AdmDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adm-distance" <<"[distance='" <<distance <<"']" <<"[srcip='" <<srcip <<"']" <<"[wildbits='" <<wildbits <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Distance::AdmDistance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (wildbits.is_set || is_set(wildbits.yfilter)) leaf_name_data.push_back(wildbits.get_name_leafdata());
    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Distance::AdmDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Distance::AdmDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Distance::AdmDistance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcip")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wildbits")
    {
        wildbits = value;
        wildbits.value_namespace = name_space;
        wildbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Distance::AdmDistance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "srcip")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "wildbits")
    {
        wildbits.yfilter = yfilter;
    }
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Distance::AdmDistance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "srcip" || name == "wildbits" || name == "acl")
        return true;
    return false;
}

Native::Router::Bgp::DistributeList::DistributeList()
    :
    id{YType::str, "id"}
    	,
    in(nullptr) // presence node
	,out(nullptr) // presence node
{

    yang_name = "distribute-list"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::DistributeList::~DistributeList()
{
}

bool Native::Router::Bgp::DistributeList::has_data() const
{
    return id.is_set
	|| (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Bgp::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Bgp::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Bgp::DistributeList::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Bgp::DistributeList::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Router::Bgp::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out" || name == "id")
        return true;
    return false;
}

Native::Router::Bgp::DistributeList::In::In()
    :
    interface{YType::str, "interface"}
{

    yang_name = "in"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::DistributeList::In::~In()
{
}

bool Native::Router::Bgp::DistributeList::In::has_data() const
{
    return interface.is_set;
}

bool Native::Router::Bgp::DistributeList::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::Bgp::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::DistributeList::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::DistributeList::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::DistributeList::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::DistributeList::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::DistributeList::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Router::Bgp::DistributeList::Out::Out()
    :
    interface{YType::str, "interface"}
{

    yang_name = "out"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::DistributeList::Out::~Out()
{
}

bool Native::Router::Bgp::DistributeList::Out::has_data() const
{
    return interface.is_set;
}

bool Native::Router::Bgp::DistributeList::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::Bgp::DistributeList::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::DistributeList::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::DistributeList::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::DistributeList::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::DistributeList::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::DistributeList::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::DistributeList::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Router::Bgp::MaximumPaths::MaximumPaths()
    :
    eibgp{YType::uint16, "eibgp"}
    	,
    max_path(std::make_shared<Native::Router::Bgp::MaximumPaths::MaxPath>())
	,external_rtfilter(std::make_shared<Native::Router::Bgp::MaximumPaths::ExternalRtfilter>())
	,ibgp(std::make_shared<Native::Router::Bgp::MaximumPaths::Ibgp>())
{
    max_path->parent = this;
    external_rtfilter->parent = this;
    ibgp->parent = this;

    yang_name = "maximum-paths"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::MaximumPaths::~MaximumPaths()
{
}

bool Native::Router::Bgp::MaximumPaths::has_data() const
{
    return eibgp.is_set
	|| (max_path !=  nullptr && max_path->has_data())
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data());
}

bool Native::Router::Bgp::MaximumPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eibgp.yfilter)
	|| (max_path !=  nullptr && max_path->has_operation())
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation());
}

std::string Native::Router::Bgp::MaximumPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::MaximumPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eibgp.is_set || is_set(eibgp.yfilter)) leaf_name_data.push_back(eibgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-path")
    {
        if(max_path == nullptr)
        {
            max_path = std::make_shared<Native::Router::Bgp::MaximumPaths::MaxPath>();
        }
        return max_path;
    }

    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::MaximumPaths::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Native::Router::Bgp::MaximumPaths::Ibgp>();
        }
        return ibgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(max_path != nullptr)
    {
        children["max-path"] = max_path;
    }

    if(external_rtfilter != nullptr)
    {
        children["external-rtfilter"] = external_rtfilter;
    }

    if(ibgp != nullptr)
    {
        children["ibgp"] = ibgp;
    }

    return children;
}

void Native::Router::Bgp::MaximumPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eibgp")
    {
        eibgp = value;
        eibgp.value_namespace = name_space;
        eibgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::MaximumPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eibgp")
    {
        eibgp.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::MaximumPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-path" || name == "external-rtfilter" || name == "ibgp" || name == "eibgp")
        return true;
    return false;
}

Native::Router::Bgp::MaximumPaths::MaxPath::MaxPath()
    :
    max{YType::uint16, "max"}
{

    yang_name = "max-path"; yang_parent_name = "maximum-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::MaximumPaths::MaxPath::~MaxPath()
{
}

bool Native::Router::Bgp::MaximumPaths::MaxPath::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::MaximumPaths::MaxPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Router::Bgp::MaximumPaths::MaxPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::MaximumPaths::MaxPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::MaxPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::MaxPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::MaximumPaths::MaxPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::MaximumPaths::MaxPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::MaximumPaths::MaxPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Router::Bgp::MaximumPaths::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{

    yang_name = "external-rtfilter"; yang_parent_name = "maximum-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::MaximumPaths::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::MaximumPaths::ExternalRtfilter::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::MaximumPaths::ExternalRtfilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Router::Bgp::MaximumPaths::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::MaximumPaths::ExternalRtfilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::MaximumPaths::ExternalRtfilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::MaximumPaths::ExternalRtfilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::MaximumPaths::ExternalRtfilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Router::Bgp::MaximumPaths::Ibgp::Ibgp()
    :
    unequal_cost{YType::uint16, "unequal-cost"},
    max{YType::uint16, "max"}
{

    yang_name = "ibgp"; yang_parent_name = "maximum-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::MaximumPaths::Ibgp::~Ibgp()
{
}

bool Native::Router::Bgp::MaximumPaths::Ibgp::has_data() const
{
    return unequal_cost.is_set
	|| max.is_set;
}

bool Native::Router::Bgp::MaximumPaths::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unequal_cost.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Router::Bgp::MaximumPaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::MaximumPaths::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::MaximumPaths::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::MaximumPaths::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::MaximumPaths::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unequal-cost" || name == "max")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    remote_as{YType::str, "remote-as"},
    activate{YType::empty, "activate"},
    allow_policy{YType::empty, "allow-policy"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    cluster_id{YType::str, "cluster-id"},
    description{YType::str, "description"},
    disable_connected_check{YType::empty, "disable-connected-check"},
    dmzlink_bw{YType::empty, "dmzlink-bw"},
    next_hop_unchanged{YType::empty, "next-hop-unchanged"},
    route_reflector_client{YType::empty, "route-reflector-client"},
    route_reflector_cluster_id{YType::str, "route-reflector-cluster-id"},
    soo{YType::str, "soo"},
    shutdown{YType::empty, "shutdown"},
    soft_reconfiguration{YType::enumeration, "soft-reconfiguration"},
    unsuppress_map{YType::str, "unsuppress-map"},
    version{YType::uint16, "version"},
    weight{YType::uint16, "weight"}
    	,
    peer_group(nullptr) // presence node
	,local_as(nullptr) // presence node
	,additional_paths(std::make_shared<Native::Router::Bgp::Neighbor::AdditionalPaths>())
	,advertise(std::make_shared<Native::Router::Bgp::Neighbor::Advertise>())
	,advertise_map(std::make_shared<Native::Router::Bgp::Neighbor::AdvertiseMap>())
	,aigp(nullptr) // presence node
	,announce(std::make_shared<Native::Router::Bgp::Neighbor::Announce>())
	,allowas_in(nullptr) // presence node
	,as_override(nullptr) // presence node
	,capability(std::make_shared<Native::Router::Bgp::Neighbor::Capability>())
	,default_originate(nullptr) // presence node
	,ebgp_multihop(nullptr) // presence node
	,fall_over(std::make_shared<Native::Router::Bgp::Neighbor::FallOver>())
	,inherit(std::make_shared<Native::Router::Bgp::Neighbor::Inherit>())
	,log_neighbor_changes(nullptr) // presence node
	,maximum_prefix(std::make_shared<Native::Router::Bgp::Neighbor::MaximumPrefix>())
	,next_hop_self(nullptr) // presence node
	,password(std::make_shared<Native::Router::Bgp::Neighbor::Password>())
	,path_attribute(std::make_shared<Native::Router::Bgp::Neighbor::PathAttribute>())
	,remove_private_as(nullptr) // presence node
	,send_community(nullptr) // presence node
	,send_label(nullptr) // presence node
	,slow_peer(std::make_shared<Native::Router::Bgp::Neighbor::SlowPeer>())
	,timers(std::make_shared<Native::Router::Bgp::Neighbor::Timers>())
	,translate_update(std::make_shared<Native::Router::Bgp::Neighbor::TranslateUpdate>())
	,transport(std::make_shared<Native::Router::Bgp::Neighbor::Transport>())
	,ttl_security(std::make_shared<Native::Router::Bgp::Neighbor::TtlSecurity>())
	,update_source(std::make_shared<Native::Router::Bgp::Neighbor::UpdateSource>())
	,ha_mode(std::make_shared<Native::Router::Bgp::Neighbor::HaMode>())
{
    additional_paths->parent = this;
    advertise->parent = this;
    advertise_map->parent = this;
    announce->parent = this;
    capability->parent = this;
    fall_over->parent = this;
    inherit->parent = this;
    maximum_prefix->parent = this;
    password->parent = this;
    path_attribute->parent = this;
    slow_peer->parent = this;
    timers->parent = this;
    translate_update->parent = this;
    transport->parent = this;
    ttl_security->parent = this;
    update_source->parent = this;
    ha_mode->parent = this;

    yang_name = "neighbor"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::Neighbor::has_data() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<filter_list.size(); index++)
    {
        if(filter_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return id.is_set
	|| remote_as.is_set
	|| activate.is_set
	|| allow_policy.is_set
	|| advertisement_interval.is_set
	|| cluster_id.is_set
	|| description.is_set
	|| disable_connected_check.is_set
	|| dmzlink_bw.is_set
	|| next_hop_unchanged.is_set
	|| route_reflector_client.is_set
	|| route_reflector_cluster_id.is_set
	|| soo.is_set
	|| shutdown.is_set
	|| soft_reconfiguration.is_set
	|| unsuppress_map.is_set
	|| version.is_set
	|| weight.is_set
	|| (peer_group !=  nullptr && peer_group->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
	|| (advertise_map !=  nullptr && advertise_map->has_data())
	|| (aigp !=  nullptr && aigp->has_data())
	|| (announce !=  nullptr && announce->has_data())
	|| (allowas_in !=  nullptr && allowas_in->has_data())
	|| (as_override !=  nullptr && as_override->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (fall_over !=  nullptr && fall_over->has_data())
	|| (inherit !=  nullptr && inherit->has_data())
	|| (log_neighbor_changes !=  nullptr && log_neighbor_changes->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (next_hop_self !=  nullptr && next_hop_self->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (path_attribute !=  nullptr && path_attribute->has_data())
	|| (remove_private_as !=  nullptr && remove_private_as->has_data())
	|| (send_community !=  nullptr && send_community->has_data())
	|| (send_label !=  nullptr && send_label->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (translate_update !=  nullptr && translate_update->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data())
	|| (update_source !=  nullptr && update_source->has_data())
	|| (ha_mode !=  nullptr && ha_mode->has_data());
}

bool Native::Router::Bgp::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<filter_list.size(); index++)
    {
        if(filter_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(remote_as.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(allow_policy.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(cluster_id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(disable_connected_check.yfilter)
	|| ydk::is_set(dmzlink_bw.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(route_reflector_cluster_id.yfilter)
	|| ydk::is_set(soo.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(soft_reconfiguration.yfilter)
	|| ydk::is_set(unsuppress_map.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (peer_group !=  nullptr && peer_group->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (advertise_map !=  nullptr && advertise_map->has_operation())
	|| (aigp !=  nullptr && aigp->has_operation())
	|| (announce !=  nullptr && announce->has_operation())
	|| (allowas_in !=  nullptr && allowas_in->has_operation())
	|| (as_override !=  nullptr && as_override->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (fall_over !=  nullptr && fall_over->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (log_neighbor_changes !=  nullptr && log_neighbor_changes->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (next_hop_self !=  nullptr && next_hop_self->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (path_attribute !=  nullptr && path_attribute->has_operation())
	|| (remove_private_as !=  nullptr && remove_private_as->has_operation())
	|| (send_community !=  nullptr && send_community->has_operation())
	|| (send_label !=  nullptr && send_label->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (translate_update !=  nullptr && translate_update->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation())
	|| (update_source !=  nullptr && update_source->has_operation())
	|| (ha_mode !=  nullptr && ha_mode->has_operation());
}

std::string Native::Router::Bgp::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (allow_policy.is_set || is_set(allow_policy.yfilter)) leaf_name_data.push_back(allow_policy.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.yfilter)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (disable_connected_check.is_set || is_set(disable_connected_check.yfilter)) leaf_name_data.push_back(disable_connected_check.get_name_leafdata());
    if (dmzlink_bw.is_set || is_set(dmzlink_bw.yfilter)) leaf_name_data.push_back(dmzlink_bw.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (route_reflector_cluster_id.is_set || is_set(route_reflector_cluster_id.yfilter)) leaf_name_data.push_back(route_reflector_cluster_id.get_name_leafdata());
    if (soo.is_set || is_set(soo.yfilter)) leaf_name_data.push_back(soo.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (soft_reconfiguration.is_set || is_set(soft_reconfiguration.yfilter)) leaf_name_data.push_back(soft_reconfiguration.get_name_leafdata());
    if (unsuppress_map.is_set || is_set(unsuppress_map.yfilter)) leaf_name_data.push_back(unsuppress_map.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-group")
    {
        if(peer_group == nullptr)
        {
            peer_group = std::make_shared<Native::Router::Bgp::Neighbor::PeerGroup>();
        }
        return peer_group;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Native::Router::Bgp::Neighbor::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::Neighbor::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Router::Bgp::Neighbor::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "advertise-map")
    {
        if(advertise_map == nullptr)
        {
            advertise_map = std::make_shared<Native::Router::Bgp::Neighbor::AdvertiseMap>();
        }
        return advertise_map;
    }

    if(child_yang_name == "aigp")
    {
        if(aigp == nullptr)
        {
            aigp = std::make_shared<Native::Router::Bgp::Neighbor::Aigp>();
        }
        return aigp;
    }

    if(child_yang_name == "announce")
    {
        if(announce == nullptr)
        {
            announce = std::make_shared<Native::Router::Bgp::Neighbor::Announce>();
        }
        return announce;
    }

    if(child_yang_name == "allowas-in")
    {
        if(allowas_in == nullptr)
        {
            allowas_in = std::make_shared<Native::Router::Bgp::Neighbor::AllowasIn>();
        }
        return allowas_in;
    }

    if(child_yang_name == "as-override")
    {
        if(as_override == nullptr)
        {
            as_override = std::make_shared<Native::Router::Bgp::Neighbor::AsOverride>();
        }
        return as_override;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Bgp::Neighbor::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Native::Router::Bgp::Neighbor::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "distribute-list")
    {
        for(auto const & c : distribute_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Neighbor::DistributeList>();
        c->parent = this;
        distribute_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Native::Router::Bgp::Neighbor::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "fall-over")
    {
        if(fall_over == nullptr)
        {
            fall_over = std::make_shared<Native::Router::Bgp::Neighbor::FallOver>();
        }
        return fall_over;
    }

    if(child_yang_name == "filter-list")
    {
        for(auto const & c : filter_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Neighbor::FilterList>();
        c->parent = this;
        filter_list.push_back(c);
        return c;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::Neighbor::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "log-neighbor-changes")
    {
        if(log_neighbor_changes == nullptr)
        {
            log_neighbor_changes = std::make_shared<Native::Router::Bgp::Neighbor::LogNeighborChanges>();
        }
        return log_neighbor_changes;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Bgp::Neighbor::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "next-hop-self")
    {
        if(next_hop_self == nullptr)
        {
            next_hop_self = std::make_shared<Native::Router::Bgp::Neighbor::NextHopSelf>();
        }
        return next_hop_self;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Router::Bgp::Neighbor::Password>();
        }
        return password;
    }

    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Neighbor::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    if(child_yang_name == "path-attribute")
    {
        if(path_attribute == nullptr)
        {
            path_attribute = std::make_shared<Native::Router::Bgp::Neighbor::PathAttribute>();
        }
        return path_attribute;
    }

    if(child_yang_name == "remove-private-as")
    {
        if(remove_private_as == nullptr)
        {
            remove_private_as = std::make_shared<Native::Router::Bgp::Neighbor::RemovePrivateAs>();
        }
        return remove_private_as;
    }

    if(child_yang_name == "route-map")
    {
        for(auto const & c : route_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Neighbor::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    if(child_yang_name == "send-community")
    {
        if(send_community == nullptr)
        {
            send_community = std::make_shared<Native::Router::Bgp::Neighbor::SendCommunity>();
        }
        return send_community;
    }

    if(child_yang_name == "send-label")
    {
        if(send_label == nullptr)
        {
            send_label = std::make_shared<Native::Router::Bgp::Neighbor::SendLabel>();
        }
        return send_label;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Neighbor::SlowPeer>();
        }
        return slow_peer;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Bgp::Neighbor::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "translate-update")
    {
        if(translate_update == nullptr)
        {
            translate_update = std::make_shared<Native::Router::Bgp::Neighbor::TranslateUpdate>();
        }
        return translate_update;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Router::Bgp::Neighbor::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Bgp::Neighbor::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "update-source")
    {
        if(update_source == nullptr)
        {
            update_source = std::make_shared<Native::Router::Bgp::Neighbor::UpdateSource>();
        }
        return update_source;
    }

    if(child_yang_name == "ha-mode")
    {
        if(ha_mode == nullptr)
        {
            ha_mode = std::make_shared<Native::Router::Bgp::Neighbor::HaMode>();
        }
        return ha_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_group != nullptr)
    {
        children["peer-group"] = peer_group;
    }

    if(local_as != nullptr)
    {
        children["local-as"] = local_as;
    }

    if(additional_paths != nullptr)
    {
        children["additional-paths"] = additional_paths;
    }

    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(advertise_map != nullptr)
    {
        children["advertise-map"] = advertise_map;
    }

    if(aigp != nullptr)
    {
        children["aigp"] = aigp;
    }

    if(announce != nullptr)
    {
        children["announce"] = announce;
    }

    if(allowas_in != nullptr)
    {
        children["allowas-in"] = allowas_in;
    }

    if(as_override != nullptr)
    {
        children["as-override"] = as_override;
    }

    if(capability != nullptr)
    {
        children["capability"] = capability;
    }

    if(default_originate != nullptr)
    {
        children["default-originate"] = default_originate;
    }

    for (auto const & c : distribute_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(ebgp_multihop != nullptr)
    {
        children["ebgp-multihop"] = ebgp_multihop;
    }

    if(fall_over != nullptr)
    {
        children["fall-over"] = fall_over;
    }

    for (auto const & c : filter_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(inherit != nullptr)
    {
        children["inherit"] = inherit;
    }

    if(log_neighbor_changes != nullptr)
    {
        children["log-neighbor-changes"] = log_neighbor_changes;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(next_hop_self != nullptr)
    {
        children["next-hop-self"] = next_hop_self;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(path_attribute != nullptr)
    {
        children["path-attribute"] = path_attribute;
    }

    if(remove_private_as != nullptr)
    {
        children["remove-private-as"] = remove_private_as;
    }

    for (auto const & c : route_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(send_community != nullptr)
    {
        children["send-community"] = send_community;
    }

    if(send_label != nullptr)
    {
        children["send-label"] = send_label;
    }

    if(slow_peer != nullptr)
    {
        children["slow-peer"] = slow_peer;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(translate_update != nullptr)
    {
        children["translate-update"] = translate_update;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    if(update_source != nullptr)
    {
        children["update-source"] = update_source;
    }

    if(ha_mode != nullptr)
    {
        children["ha-mode"] = ha_mode;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-policy")
    {
        allow_policy = value;
        allow_policy.value_namespace = name_space;
        allow_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
        cluster_id.value_namespace = name_space;
        cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-connected-check")
    {
        disable_connected_check = value;
        disable_connected_check.value_namespace = name_space;
        disable_connected_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw = value;
        dmzlink_bw.value_namespace = name_space;
        dmzlink_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id = value;
        route_reflector_cluster_id.value_namespace = name_space;
        route_reflector_cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soo")
    {
        soo = value;
        soo.value_namespace = name_space;
        soo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration = value;
        soft_reconfiguration.value_namespace = name_space;
        soft_reconfiguration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map = value;
        unsuppress_map.value_namespace = name_space;
        unsuppress_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "allow-policy")
    {
        allow_policy.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "cluster-id")
    {
        cluster_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "disable-connected-check")
    {
        disable_connected_check.yfilter = yfilter;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id.yfilter = yfilter;
    }
    if(value_path == "soo")
    {
        soo.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration.yfilter = yfilter;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-group" || name == "local-as" || name == "additional-paths" || name == "advertise" || name == "advertise-map" || name == "aigp" || name == "announce" || name == "allowas-in" || name == "as-override" || name == "capability" || name == "default-originate" || name == "distribute-list" || name == "ebgp-multihop" || name == "fall-over" || name == "filter-list" || name == "inherit" || name == "log-neighbor-changes" || name == "maximum-prefix" || name == "next-hop-self" || name == "password" || name == "prefix-list" || name == "path-attribute" || name == "remove-private-as" || name == "route-map" || name == "send-community" || name == "send-label" || name == "slow-peer" || name == "timers" || name == "translate-update" || name == "transport" || name == "ttl-security" || name == "update-source" || name == "ha-mode" || name == "id" || name == "remote-as" || name == "activate" || name == "allow-policy" || name == "advertisement-interval" || name == "cluster-id" || name == "description" || name == "disable-connected-check" || name == "dmzlink-bw" || name == "next-hop-unchanged" || name == "route-reflector-client" || name == "route-reflector-cluster-id" || name == "soo" || name == "shutdown" || name == "soft-reconfiguration" || name == "unsuppress-map" || name == "version" || name == "weight")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::PeerGroup::PeerGroup()
    :
    peer_group_name{YType::str, "peer-group-name"}
{

    yang_name = "peer-group"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::PeerGroup::~PeerGroup()
{
}

bool Native::Router::Bgp::Neighbor::PeerGroup::has_data() const
{
    return peer_group_name.is_set;
}

bool Native::Router::Bgp::Neighbor::PeerGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_group_name.yfilter);
}

std::string Native::Router::Bgp::Neighbor::PeerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::PeerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_group_name.is_set || is_set(peer_group_name.yfilter)) leaf_name_data.push_back(peer_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::PeerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::PeerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::PeerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name = value;
        peer_group_name.value_namespace = name_space;
        peer_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::PeerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::PeerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-group-name")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::LocalAs::LocalAs()
    :
    as_no{YType::str, "as-no"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"},
    dual_as{YType::empty, "dual-as"}
{

    yang_name = "local-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::LocalAs::~LocalAs()
{
}

bool Native::Router::Bgp::Neighbor::LocalAs::has_data() const
{
    return as_no.is_set
	|| no_prepend.is_set
	|| replace_as.is_set
	|| dual_as.is_set;
}

bool Native::Router::Bgp::Neighbor::LocalAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_no.yfilter)
	|| ydk::is_set(no_prepend.yfilter)
	|| ydk::is_set(replace_as.yfilter)
	|| ydk::is_set(dual_as.yfilter);
}

std::string Native::Router::Bgp::Neighbor::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::LocalAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_no.is_set || is_set(as_no.yfilter)) leaf_name_data.push_back(as_no.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.yfilter)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.yfilter)) leaf_name_data.push_back(dual_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::LocalAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::LocalAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-no")
    {
        as_no = value;
        as_no.value_namespace = name_space;
        as_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
        no_prepend.value_namespace = name_space;
        no_prepend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
        dual_as.value_namespace = name_space;
        dual_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::LocalAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-no")
    {
        as_no.yfilter = yfilter;
    }
    if(value_path == "no-prepend")
    {
        no_prepend.yfilter = yfilter;
    }
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
    if(value_path == "dual-as")
    {
        dual_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::LocalAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-no" || name == "no-prepend" || name == "replace-as" || name == "dual-as")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::AdditionalPaths::AdditionalPaths()
    :
    disable{YType::empty, "disable"},
    receive{YType::empty, "receive"}
    	,
    send(nullptr) // presence node
{

    yang_name = "additional-paths"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::Neighbor::AdditionalPaths::has_data() const
{
    return disable.is_set
	|| receive.is_set
	|| (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::Neighbor::AdditionalPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(receive.yfilter)
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::Neighbor::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::AdditionalPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::Neighbor::AdditionalPaths::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::AdditionalPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::AdditionalPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::AdditionalPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send" || name == "disable" || name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::AdditionalPaths::Send::Send()
    :
    receive{YType::empty, "receive"}
{

    yang_name = "send"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::AdditionalPaths::Send::~Send()
{
}

bool Native::Router::Bgp::Neighbor::AdditionalPaths::Send::has_data() const
{
    return receive.is_set;
}

bool Native::Router::Bgp::Neighbor::AdditionalPaths::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter);
}

std::string Native::Router::Bgp::Neighbor::AdditionalPaths::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::AdditionalPaths::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::AdditionalPaths::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::AdditionalPaths::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::AdditionalPaths::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::AdditionalPaths::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::AdditionalPaths::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Advertise::Advertise()
    :
    best_external{YType::empty, "best-external"}
    	,
    additional_paths(std::make_shared<Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths>())
	,diverse_path(std::make_shared<Native::Router::Bgp::Neighbor::Advertise::DiversePath>())
{
    additional_paths->parent = this;
    diverse_path->parent = this;

    yang_name = "advertise"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Advertise::~Advertise()
{
}

bool Native::Router::Bgp::Neighbor::Advertise::has_data() const
{
    return best_external.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (diverse_path !=  nullptr && diverse_path->has_data());
}

bool Native::Router::Bgp::Neighbor::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_external.yfilter)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (diverse_path !=  nullptr && diverse_path->has_operation());
}

std::string Native::Router::Bgp::Neighbor::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "diverse-path")
    {
        if(diverse_path == nullptr)
        {
            diverse_path = std::make_shared<Native::Router::Bgp::Neighbor::Advertise::DiversePath>();
        }
        return diverse_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(additional_paths != nullptr)
    {
        children["additional-paths"] = additional_paths;
    }

    if(diverse_path != nullptr)
    {
        children["diverse-path"] = diverse_path;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-paths" || name == "diverse-path" || name == "best-external")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::AdditionalPaths()
    :
    all(nullptr) // presence node
	,best(std::make_shared<Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best>())
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "additional-paths"; yang_parent_name = "advertise"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All>();
        }
        return all;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::All()
    :
    best(std::make_shared<Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best>())
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "all"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::~All()
{
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::has_data() const
{
    return (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::has_operation() const
{
    return is_set(yfilter)
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::Best()
{

    yang_name = "best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::~Best()
{
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::has_data() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::has_operation() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best-range")
    {
        for(auto const & c : best_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange>();
        c->parent = this;
        best_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : best_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-range")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::BestRange()
    :
    range{YType::uint8, "range"},
    group_best{YType::empty, "group-best"}
{

    yang_name = "best-range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::~BestRange()
{
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::has_data() const
{
    return range.is_set
	|| group_best.is_set;
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(group_best.yfilter);
}

std::string Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.yfilter)) leaf_name_data.push_back(group_best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-best")
    {
        group_best = value;
        group_best.value_namespace = name_space;
        group_best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "group-best")
    {
        group_best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::GroupBest::GroupBest()
    :
    best{YType::uint8, "best"}
{

    yang_name = "group-best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::GroupBest::has_data() const
{
    return best.is_set;
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::Best()
{

    yang_name = "best"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::~Best()
{
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::has_data() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::has_operation() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best-range")
    {
        for(auto const & c : best_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange>();
        c->parent = this;
        best_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : best_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-range")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::BestRange()
    :
    range{YType::uint8, "range"},
    all{YType::empty, "all"}
    	,
    group_best(nullptr) // presence node
{

    yang_name = "best-range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::~BestRange()
{
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::has_data() const
{
    return range.is_set
	|| all.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(all.yfilter)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-best" || name == "range" || name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::GroupBest()
    :
    all{YType::empty, "all"}
{

    yang_name = "group-best"; yang_parent_name = "best-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::has_data() const
{
    return all.is_set;
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"}
{

    yang_name = "group-best"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::GroupBest::has_data() const
{
    return all.is_set
	|| best.is_set;
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Advertise::DiversePath::DiversePath()
    :
    mpath{YType::empty, "mpath"}
    	,
    backup(nullptr) // presence node
{

    yang_name = "diverse-path"; yang_parent_name = "advertise"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Advertise::DiversePath::~DiversePath()
{
}

bool Native::Router::Bgp::Neighbor::Advertise::DiversePath::has_data() const
{
    return mpath.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Router::Bgp::Neighbor::Advertise::DiversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpath.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Router::Bgp::Neighbor::Advertise::DiversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Advertise::DiversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpath.is_set || is_set(mpath.yfilter)) leaf_name_data.push_back(mpath.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Advertise::DiversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Router::Bgp::Neighbor::Advertise::DiversePath::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Advertise::DiversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::Advertise::DiversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpath")
    {
        mpath = value;
        mpath.value_namespace = name_space;
        mpath.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::Advertise::DiversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpath")
    {
        mpath.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Advertise::DiversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "mpath")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Advertise::DiversePath::Backup::Backup()
    :
    mpath{YType::empty, "mpath"}
{

    yang_name = "backup"; yang_parent_name = "diverse-path"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Advertise::DiversePath::Backup::~Backup()
{
}

bool Native::Router::Bgp::Neighbor::Advertise::DiversePath::Backup::has_data() const
{
    return mpath.is_set;
}

bool Native::Router::Bgp::Neighbor::Advertise::DiversePath::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpath.yfilter);
}

std::string Native::Router::Bgp::Neighbor::Advertise::DiversePath::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Advertise::DiversePath::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpath.is_set || is_set(mpath.yfilter)) leaf_name_data.push_back(mpath.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Advertise::DiversePath::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Advertise::DiversePath::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::Advertise::DiversePath::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpath")
    {
        mpath = value;
        mpath.value_namespace = name_space;
        mpath.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::Advertise::DiversePath::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpath")
    {
        mpath.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Advertise::DiversePath::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpath")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::AdvertiseMap::AdvertiseMap()
{

    yang_name = "advertise-map"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::AdvertiseMap::~AdvertiseMap()
{
}

bool Native::Router::Bgp::Neighbor::AdvertiseMap::has_data() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Neighbor::AdvertiseMap::has_operation() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Neighbor::AdvertiseMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::AdvertiseMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::AdvertiseMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Neighbor::AdvertiseMap::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::AdvertiseMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::AdvertiseMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::AdvertiseMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::AdvertiseMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::AdvertiseMap::Name::Name()
    :
    word{YType::str, "word"},
    exist_map{YType::str, "exist-map"},
    non_exist_map{YType::str, "non-exist-map"}
{

    yang_name = "name"; yang_parent_name = "advertise-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::AdvertiseMap::Name::~Name()
{
}

bool Native::Router::Bgp::Neighbor::AdvertiseMap::Name::has_data() const
{
    return word.is_set
	|| exist_map.is_set
	|| non_exist_map.is_set;
}

bool Native::Router::Bgp::Neighbor::AdvertiseMap::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(exist_map.yfilter)
	|| ydk::is_set(non_exist_map.yfilter);
}

std::string Native::Router::Bgp::Neighbor::AdvertiseMap::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::AdvertiseMap::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (exist_map.is_set || is_set(exist_map.yfilter)) leaf_name_data.push_back(exist_map.get_name_leafdata());
    if (non_exist_map.is_set || is_set(non_exist_map.yfilter)) leaf_name_data.push_back(non_exist_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::AdvertiseMap::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::AdvertiseMap::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::AdvertiseMap::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exist-map")
    {
        exist_map = value;
        exist_map.value_namespace = name_space;
        exist_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-exist-map")
    {
        non_exist_map = value;
        non_exist_map.value_namespace = name_space;
        non_exist_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::AdvertiseMap::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "exist-map")
    {
        exist_map.yfilter = yfilter;
    }
    if(value_path == "non-exist-map")
    {
        non_exist_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::AdvertiseMap::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "exist-map" || name == "non-exist-map")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Aigp::Aigp()
    :
    send(std::make_shared<Native::Router::Bgp::Neighbor::Aigp::Send>())
{
    send->parent = this;

    yang_name = "aigp"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Aigp::~Aigp()
{
}

bool Native::Router::Bgp::Neighbor::Aigp::has_data() const
{
    return (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::Neighbor::Aigp::has_operation() const
{
    return is_set(yfilter)
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::Neighbor::Aigp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Aigp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Aigp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::Neighbor::Aigp::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Aigp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::Aigp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::Aigp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::Aigp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Aigp::Send::Send()
    :
    med{YType::empty, "med"}
    	,
    cost_community(std::make_shared<Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity>())
{
    cost_community->parent = this;

    yang_name = "send"; yang_parent_name = "aigp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Aigp::Send::~Send()
{
}

bool Native::Router::Bgp::Neighbor::Aigp::Send::has_data() const
{
    return med.is_set
	|| (cost_community !=  nullptr && cost_community->has_data());
}

bool Native::Router::Bgp::Neighbor::Aigp::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(med.yfilter)
	|| (cost_community !=  nullptr && cost_community->has_operation());
}

std::string Native::Router::Bgp::Neighbor::Aigp::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Aigp::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Aigp::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost-community")
    {
        if(cost_community == nullptr)
        {
            cost_community = std::make_shared<Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity>();
        }
        return cost_community;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Aigp::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost_community != nullptr)
    {
        children["cost-community"] = cost_community;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::Aigp::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::Aigp::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Aigp::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost-community" || name == "med")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CostCommunity()
{

    yang_name = "cost-community"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::~CostCommunity()
{
}

bool Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::has_data() const
{
    for (std::size_t index=0; index<cc_range.size(); index++)
    {
        if(cc_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::has_operation() const
{
    for (std::size_t index=0; index<cc_range.size(); index++)
    {
        if(cc_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cc-range")
    {
        for(auto const & c : cc_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange>();
        c->parent = this;
        cc_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cc_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cc-range")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::CcRange()
    :
    range{YType::uint8, "range"}
    	,
    poi(std::make_shared<Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi>())
{
    poi->parent = this;

    yang_name = "cc-range"; yang_parent_name = "cost-community"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::~CcRange()
{
}

bool Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::has_data() const
{
    return range.is_set
	|| (poi !=  nullptr && poi->has_data());
}

bool Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (poi !=  nullptr && poi->has_operation());
}

std::string Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cc-range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "poi")
    {
        if(poi == nullptr)
        {
            poi = std::make_shared<Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi>();
        }
        return poi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(poi != nullptr)
    {
        children["poi"] = poi;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "poi" || name == "range")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::Poi()
    :
    igp_cost(nullptr) // presence node
	,pre_bestpath(nullptr) // presence node
{

    yang_name = "poi"; yang_parent_name = "cc-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::~Poi()
{
}

bool Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::has_data() const
{
    return (igp_cost !=  nullptr && igp_cost->has_data())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_data());
}

bool Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::has_operation() const
{
    return is_set(yfilter)
	|| (igp_cost !=  nullptr && igp_cost->has_operation())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_operation());
}

std::string Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-cost")
    {
        if(igp_cost == nullptr)
        {
            igp_cost = std::make_shared<Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost>();
        }
        return igp_cost;
    }

    if(child_yang_name == "pre-bestpath")
    {
        if(pre_bestpath == nullptr)
        {
            pre_bestpath = std::make_shared<Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath>();
        }
        return pre_bestpath;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp_cost != nullptr)
    {
        children["igp-cost"] = igp_cost;
    }

    if(pre_bestpath != nullptr)
    {
        children["pre-bestpath"] = pre_bestpath;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-cost" || name == "pre-bestpath")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::IgpCost()
    :
    transitive{YType::empty, "transitive"}
{

    yang_name = "igp-cost"; yang_parent_name = "poi"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::~IgpCost()
{
}

bool Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::has_data() const
{
    return transitive.is_set;
}

bool Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transitive.yfilter);
}

std::string Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transitive.is_set || is_set(transitive.yfilter)) leaf_name_data.push_back(transitive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transitive")
    {
        transitive = value;
        transitive.value_namespace = name_space;
        transitive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transitive")
    {
        transitive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transitive")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::PreBestpath()
    :
    transitive{YType::empty, "transitive"}
{

    yang_name = "pre-bestpath"; yang_parent_name = "poi"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::~PreBestpath()
{
}

bool Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::has_data() const
{
    return transitive.is_set;
}

bool Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transitive.yfilter);
}

std::string Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-bestpath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transitive.is_set || is_set(transitive.yfilter)) leaf_name_data.push_back(transitive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transitive")
    {
        transitive = value;
        transitive.value_namespace = name_space;
        transitive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transitive")
    {
        transitive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transitive")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Announce::Announce()
    :
    rpki(std::make_shared<Native::Router::Bgp::Neighbor::Announce::Rpki>())
{
    rpki->parent = this;

    yang_name = "announce"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Announce::~Announce()
{
}

bool Native::Router::Bgp::Neighbor::Announce::has_data() const
{
    return (rpki !=  nullptr && rpki->has_data());
}

bool Native::Router::Bgp::Neighbor::Announce::has_operation() const
{
    return is_set(yfilter)
	|| (rpki !=  nullptr && rpki->has_operation());
}

std::string Native::Router::Bgp::Neighbor::Announce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Announce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Announce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki")
    {
        if(rpki == nullptr)
        {
            rpki = std::make_shared<Native::Router::Bgp::Neighbor::Announce::Rpki>();
        }
        return rpki;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Announce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rpki != nullptr)
    {
        children["rpki"] = rpki;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::Announce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::Announce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::Announce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Announce::Rpki::Rpki()
    :
    state{YType::empty, "state"}
{

    yang_name = "rpki"; yang_parent_name = "announce"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Announce::Rpki::~Rpki()
{
}

bool Native::Router::Bgp::Neighbor::Announce::Rpki::has_data() const
{
    return state.is_set;
}

bool Native::Router::Bgp::Neighbor::Announce::Rpki::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Native::Router::Bgp::Neighbor::Announce::Rpki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Announce::Rpki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Announce::Rpki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Announce::Rpki::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::Announce::Rpki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::Announce::Rpki::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Announce::Rpki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::AllowasIn::AllowasIn()
    :
    as_number{YType::uint8, "as-number"}
{

    yang_name = "allowas-in"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::AllowasIn::~AllowasIn()
{
}

bool Native::Router::Bgp::Neighbor::AllowasIn::has_data() const
{
    return as_number.is_set;
}

bool Native::Router::Bgp::Neighbor::AllowasIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string Native::Router::Bgp::Neighbor::AllowasIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowas-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::AllowasIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::AllowasIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::AllowasIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::AllowasIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::AllowasIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::AllowasIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::AsOverride::AsOverride()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "as-override"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::AsOverride::~AsOverride()
{
}

bool Native::Router::Bgp::Neighbor::AsOverride::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Bgp::Neighbor::AsOverride::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::Neighbor::AsOverride::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-override";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::AsOverride::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::AsOverride::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::AsOverride::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::AsOverride::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::AsOverride::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::AsOverride::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Capability::Capability()
    :
    orf(std::make_shared<Native::Router::Bgp::Neighbor::Capability::Orf>())
{
    orf->parent = this;

    yang_name = "capability"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Capability::~Capability()
{
}

bool Native::Router::Bgp::Neighbor::Capability::has_data() const
{
    return (orf !=  nullptr && orf->has_data());
}

bool Native::Router::Bgp::Neighbor::Capability::has_operation() const
{
    return is_set(yfilter)
	|| (orf !=  nullptr && orf->has_operation());
}

std::string Native::Router::Bgp::Neighbor::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "orf")
    {
        if(orf == nullptr)
        {
            orf = std::make_shared<Native::Router::Bgp::Neighbor::Capability::Orf>();
        }
        return orf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(orf != nullptr)
    {
        children["orf"] = orf;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "orf")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Capability::Orf::Orf()
    :
    prefix_list{YType::enumeration, "prefix-list"}
{

    yang_name = "orf"; yang_parent_name = "capability"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Capability::Orf::~Orf()
{
}

bool Native::Router::Bgp::Neighbor::Capability::Orf::has_data() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Neighbor::Capability::Orf::has_operation() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::Bgp::Neighbor::Capability::Orf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Capability::Orf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Capability::Orf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Capability::Orf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::Capability::Orf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::Router::Bgp::Neighbor::Capability::Orf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Capability::Orf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::DefaultOriginate::DefaultOriginate()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "default-originate"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::DefaultOriginate::~DefaultOriginate()
{
}

bool Native::Router::Bgp::Neighbor::DefaultOriginate::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Bgp::Neighbor::DefaultOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Neighbor::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::DefaultOriginate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::DefaultOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::DefaultOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::DefaultOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::DefaultOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::DistributeList::DistributeList()
    :
    inout{YType::enumeration, "inout"},
    accesslist{YType::str, "accesslist"}
{

    yang_name = "distribute-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::DistributeList::~DistributeList()
{
}

bool Native::Router::Bgp::Neighbor::DistributeList::has_data() const
{
    return inout.is_set
	|| accesslist.is_set;
}

bool Native::Router::Bgp::Neighbor::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(accesslist.yfilter);
}

std::string Native::Router::Bgp::Neighbor::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list" <<"[inout='" <<inout <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (accesslist.is_set || is_set(accesslist.yfilter)) leaf_name_data.push_back(accesslist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accesslist")
    {
        accesslist = value;
        accesslist.value_namespace = name_space;
        accesslist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "accesslist")
    {
        accesslist.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "accesslist")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::EbgpMultihop::EbgpMultihop()
    :
    max_hop{YType::uint8, "max-hop"}
{

    yang_name = "ebgp-multihop"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::EbgpMultihop::~EbgpMultihop()
{
}

bool Native::Router::Bgp::Neighbor::EbgpMultihop::has_data() const
{
    return max_hop.is_set;
}

bool Native::Router::Bgp::Neighbor::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_hop.yfilter);
}

std::string Native::Router::Bgp::Neighbor::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::EbgpMultihop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop.is_set || is_set(max_hop.yfilter)) leaf_name_data.push_back(max_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-hop")
    {
        max_hop = value;
        max_hop.value_namespace = name_space;
        max_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-hop")
    {
        max_hop.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-hop")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::FallOver::FallOver()
    :
    bfd(nullptr) // presence node
{

    yang_name = "fall-over"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::FallOver::~FallOver()
{
}

bool Native::Router::Bgp::Neighbor::FallOver::has_data() const
{
    return (bfd !=  nullptr && bfd->has_data());
}

bool Native::Router::Bgp::Neighbor::FallOver::has_operation() const
{
    return is_set(yfilter)
	|| (bfd !=  nullptr && bfd->has_operation());
}

std::string Native::Router::Bgp::Neighbor::FallOver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fall-over";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::FallOver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::FallOver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Bgp::Neighbor::FallOver::Bfd>();
        }
        return bfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::FallOver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::FallOver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::FallOver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::FallOver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::FallOver::Bfd::Bfd()
{

    yang_name = "bfd"; yang_parent_name = "fall-over"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::FallOver::Bfd::~Bfd()
{
}

bool Native::Router::Bgp::Neighbor::FallOver::Bfd::has_data() const
{
    return false;
}

bool Native::Router::Bgp::Neighbor::FallOver::Bfd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Neighbor::FallOver::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::FallOver::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::FallOver::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::FallOver::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::FallOver::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::FallOver::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::FallOver::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Router::Bgp::Neighbor::FilterList::FilterList()
    :
    inout{YType::enumeration, "inout"},
    as_path_list{YType::uint16, "as-path-list"}
{

    yang_name = "filter-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::FilterList::~FilterList()
{
}

bool Native::Router::Bgp::Neighbor::FilterList::has_data() const
{
    return inout.is_set
	|| as_path_list.is_set;
}

bool Native::Router::Bgp::Neighbor::FilterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(as_path_list.yfilter);
}

std::string Native::Router::Bgp::Neighbor::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list" <<"[inout='" <<inout <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::FilterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (as_path_list.is_set || is_set(as_path_list.yfilter)) leaf_name_data.push_back(as_path_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::FilterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path-list")
    {
        as_path_list = value;
        as_path_list.value_namespace = name_space;
        as_path_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::FilterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "as-path-list")
    {
        as_path_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::FilterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "as-path-list")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Inherit::Inherit()
    :
    peer_policy{YType::str, "peer-policy"},
    peer_session{YType::str, "peer-session"}
{

    yang_name = "inherit"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Inherit::~Inherit()
{
}

bool Native::Router::Bgp::Neighbor::Inherit::has_data() const
{
    return peer_policy.is_set
	|| peer_session.is_set;
}

bool Native::Router::Bgp::Neighbor::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_policy.yfilter)
	|| ydk::is_set(peer_session.yfilter);
}

std::string Native::Router::Bgp::Neighbor::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_policy.is_set || is_set(peer_policy.yfilter)) leaf_name_data.push_back(peer_policy.get_name_leafdata());
    if (peer_session.is_set || is_set(peer_session.yfilter)) leaf_name_data.push_back(peer_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-policy")
    {
        peer_policy = value;
        peer_policy.value_namespace = name_space;
        peer_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-session")
    {
        peer_session = value;
        peer_session.value_namespace = name_space;
        peer_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-policy")
    {
        peer_policy.yfilter = yfilter;
    }
    if(value_path == "peer-session")
    {
        peer_session.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy" || name == "peer-session")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::LogNeighborChanges::LogNeighborChanges()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "log-neighbor-changes"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::LogNeighborChanges::~LogNeighborChanges()
{
}

bool Native::Router::Bgp::Neighbor::LogNeighborChanges::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Bgp::Neighbor::LogNeighborChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::Neighbor::LogNeighborChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-neighbor-changes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::LogNeighborChanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::LogNeighborChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::LogNeighborChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::LogNeighborChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::LogNeighborChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::LogNeighborChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::MaximumPrefix::MaximumPrefix()
    :
    max_prefix_no{YType::uint32, "max-prefix-no"},
    threshold{YType::uint8, "threshold"},
    restart{YType::uint16, "restart"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Bgp::Neighbor::MaximumPrefix::has_data() const
{
    return max_prefix_no.is_set
	|| threshold.is_set
	|| restart.is_set
	|| warning_only.is_set;
}

bool Native::Router::Bgp::Neighbor::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefix_no.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Bgp::Neighbor::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix_no.is_set || is_set(max_prefix_no.yfilter)) leaf_name_data.push_back(max_prefix_no.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no = value;
        max_prefix_no.value_namespace = name_space;
        max_prefix_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefix-no" || name == "threshold" || name == "restart" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::NextHopSelf::NextHopSelf()
    :
    all{YType::empty, "all"}
{

    yang_name = "next-hop-self"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::NextHopSelf::~NextHopSelf()
{
}

bool Native::Router::Bgp::Neighbor::NextHopSelf::has_data() const
{
    return all.is_set;
}

bool Native::Router::Bgp::Neighbor::NextHopSelf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Neighbor::NextHopSelf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-self";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::NextHopSelf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::NextHopSelf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::NextHopSelf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::NextHopSelf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::NextHopSelf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::NextHopSelf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Password::Password()
    :
    enctype{YType::uint8, "enctype"},
    text{YType::str, "text"}
{

    yang_name = "password"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Password::~Password()
{
}

bool Native::Router::Bgp::Neighbor::Password::has_data() const
{
    return enctype.is_set
	|| text.is_set;
}

bool Native::Router::Bgp::Neighbor::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enctype.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Router::Bgp::Neighbor::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enctype.is_set || is_set(enctype.yfilter)) leaf_name_data.push_back(enctype.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enctype")
    {
        enctype = value;
        enctype.value_namespace = name_space;
        enctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enctype")
    {
        enctype.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enctype" || name == "text")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::PrefixList::PrefixList()
    :
    inout{YType::enumeration, "inout"},
    prefix_list_name{YType::str, "prefix-list-name"}
{

    yang_name = "prefix-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::PrefixList::~PrefixList()
{
}

bool Native::Router::Bgp::Neighbor::PrefixList::has_data() const
{
    return inout.is_set
	|| prefix_list_name.is_set;
}

bool Native::Router::Bgp::Neighbor::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(prefix_list_name.yfilter);
}

std::string Native::Router::Bgp::Neighbor::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[inout='" <<inout <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "prefix-list-name")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::PathAttribute::PathAttribute()
    :
    discard(std::make_shared<Native::Router::Bgp::Neighbor::PathAttribute::Discard>())
	,treat_as_withdraw(std::make_shared<Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw>())
{
    discard->parent = this;
    treat_as_withdraw->parent = this;

    yang_name = "path-attribute"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::PathAttribute::~PathAttribute()
{
}

bool Native::Router::Bgp::Neighbor::PathAttribute::has_data() const
{
    return (discard !=  nullptr && discard->has_data())
	|| (treat_as_withdraw !=  nullptr && treat_as_withdraw->has_data());
}

bool Native::Router::Bgp::Neighbor::PathAttribute::has_operation() const
{
    return is_set(yfilter)
	|| (discard !=  nullptr && discard->has_operation())
	|| (treat_as_withdraw !=  nullptr && treat_as_withdraw->has_operation());
}

std::string Native::Router::Bgp::Neighbor::PathAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::PathAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::PathAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discard")
    {
        if(discard == nullptr)
        {
            discard = std::make_shared<Native::Router::Bgp::Neighbor::PathAttribute::Discard>();
        }
        return discard;
    }

    if(child_yang_name == "treat-as-withdraw")
    {
        if(treat_as_withdraw == nullptr)
        {
            treat_as_withdraw = std::make_shared<Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw>();
        }
        return treat_as_withdraw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::PathAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discard != nullptr)
    {
        children["discard"] = discard;
    }

    if(treat_as_withdraw != nullptr)
    {
        children["treat-as-withdraw"] = treat_as_withdraw;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::PathAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::PathAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::PathAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard" || name == "treat-as-withdraw")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::PathAttribute::Discard::Discard()
    :
    attibute_type(std::make_shared<Native::Router::Bgp::Neighbor::PathAttribute::Discard::AttibuteType>())
	,range(std::make_shared<Native::Router::Bgp::Neighbor::PathAttribute::Discard::Range>())
{
    attibute_type->parent = this;
    range->parent = this;

    yang_name = "discard"; yang_parent_name = "path-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::PathAttribute::Discard::~Discard()
{
}

bool Native::Router::Bgp::Neighbor::PathAttribute::Discard::has_data() const
{
    return (attibute_type !=  nullptr && attibute_type->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Router::Bgp::Neighbor::PathAttribute::Discard::has_operation() const
{
    return is_set(yfilter)
	|| (attibute_type !=  nullptr && attibute_type->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Router::Bgp::Neighbor::PathAttribute::Discard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::PathAttribute::Discard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::PathAttribute::Discard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attibute_type")
    {
        if(attibute_type == nullptr)
        {
            attibute_type = std::make_shared<Native::Router::Bgp::Neighbor::PathAttribute::Discard::AttibuteType>();
        }
        return attibute_type;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Router::Bgp::Neighbor::PathAttribute::Discard::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::PathAttribute::Discard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attibute_type != nullptr)
    {
        children["attibute_type"] = attibute_type;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::PathAttribute::Discard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::PathAttribute::Discard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::PathAttribute::Discard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attibute_type" || name == "range")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::PathAttribute::Discard::AttibuteType::AttibuteType()
    :
    type{YType::uint8, "type"},
    in{YType::empty, "in"}
{

    yang_name = "attibute_type"; yang_parent_name = "discard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::PathAttribute::Discard::AttibuteType::~AttibuteType()
{
}

bool Native::Router::Bgp::Neighbor::PathAttribute::Discard::AttibuteType::has_data() const
{
    return type.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::Neighbor::PathAttribute::Discard::AttibuteType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::Neighbor::PathAttribute::Discard::AttibuteType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attibute_type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::PathAttribute::Discard::AttibuteType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::PathAttribute::Discard::AttibuteType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::PathAttribute::Discard::AttibuteType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::PathAttribute::Discard::AttibuteType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::PathAttribute::Discard::AttibuteType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::PathAttribute::Discard::AttibuteType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::PathAttribute::Discard::Range::Range()
    :
    start_value{YType::uint8, "start_value"},
    end_value{YType::uint8, "end_value"},
    in{YType::empty, "in"}
{

    yang_name = "range"; yang_parent_name = "discard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::PathAttribute::Discard::Range::~Range()
{
}

bool Native::Router::Bgp::Neighbor::PathAttribute::Discard::Range::has_data() const
{
    return start_value.is_set
	|| end_value.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::Neighbor::PathAttribute::Discard::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_value.yfilter)
	|| ydk::is_set(end_value.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::Neighbor::PathAttribute::Discard::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::PathAttribute::Discard::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_value.is_set || is_set(start_value.yfilter)) leaf_name_data.push_back(start_value.get_name_leafdata());
    if (end_value.is_set || is_set(end_value.yfilter)) leaf_name_data.push_back(end_value.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::PathAttribute::Discard::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::PathAttribute::Discard::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::PathAttribute::Discard::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_value")
    {
        start_value = value;
        start_value.value_namespace = name_space;
        start_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_value")
    {
        end_value = value;
        end_value.value_namespace = name_space;
        end_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::PathAttribute::Discard::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_value")
    {
        start_value.yfilter = yfilter;
    }
    if(value_path == "end_value")
    {
        end_value.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::PathAttribute::Discard::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start_value" || name == "end_value" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::TreatAsWithdraw()
    :
    attibute_type(std::make_shared<Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType>())
	,range(std::make_shared<Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Range>())
{
    attibute_type->parent = this;
    range->parent = this;

    yang_name = "treat-as-withdraw"; yang_parent_name = "path-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::~TreatAsWithdraw()
{
}

bool Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::has_data() const
{
    return (attibute_type !=  nullptr && attibute_type->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::has_operation() const
{
    return is_set(yfilter)
	|| (attibute_type !=  nullptr && attibute_type->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "treat-as-withdraw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attibute_type")
    {
        if(attibute_type == nullptr)
        {
            attibute_type = std::make_shared<Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType>();
        }
        return attibute_type;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attibute_type != nullptr)
    {
        children["attibute_type"] = attibute_type;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attibute_type" || name == "range")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::AttibuteType()
    :
    type{YType::uint8, "type"},
    in{YType::empty, "in"}
{

    yang_name = "attibute_type"; yang_parent_name = "treat-as-withdraw"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::~AttibuteType()
{
}

bool Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::has_data() const
{
    return type.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attibute_type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Range::Range()
    :
    start_value{YType::uint8, "start_value"},
    end_value{YType::uint8, "end_value"},
    in{YType::empty, "in"}
{

    yang_name = "range"; yang_parent_name = "treat-as-withdraw"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Range::~Range()
{
}

bool Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_data() const
{
    return start_value.is_set
	|| end_value.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_value.yfilter)
	|| ydk::is_set(end_value.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_value.is_set || is_set(start_value.yfilter)) leaf_name_data.push_back(start_value.get_name_leafdata());
    if (end_value.is_set || is_set(end_value.yfilter)) leaf_name_data.push_back(end_value.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_value")
    {
        start_value = value;
        start_value.value_namespace = name_space;
        start_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_value")
    {
        end_value = value;
        end_value.value_namespace = name_space;
        end_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_value")
    {
        start_value.yfilter = yfilter;
    }
    if(value_path == "end_value")
    {
        end_value.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start_value" || name == "end_value" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::RemovePrivateAs::RemovePrivateAs()
    :
    all(nullptr) // presence node
{

    yang_name = "remove-private-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::RemovePrivateAs::~RemovePrivateAs()
{
}

bool Native::Router::Bgp::Neighbor::RemovePrivateAs::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Bgp::Neighbor::RemovePrivateAs::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Bgp::Neighbor::RemovePrivateAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::RemovePrivateAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::RemovePrivateAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Neighbor::RemovePrivateAs::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::RemovePrivateAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::RemovePrivateAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::RemovePrivateAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::RemovePrivateAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::RemovePrivateAs::All::All()
    :
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "all"; yang_parent_name = "remove-private-as"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::RemovePrivateAs::All::~All()
{
}

bool Native::Router::Bgp::Neighbor::RemovePrivateAs::All::has_data() const
{
    return replace_as.is_set;
}

bool Native::Router::Bgp::Neighbor::RemovePrivateAs::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Native::Router::Bgp::Neighbor::RemovePrivateAs::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::RemovePrivateAs::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::RemovePrivateAs::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::RemovePrivateAs::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::RemovePrivateAs::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::RemovePrivateAs::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::RemovePrivateAs::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replace-as")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::RouteMap::RouteMap()
    :
    inout{YType::enumeration, "inout"},
    route_map_name{YType::str, "route-map-name"}
{

    yang_name = "route-map"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::Neighbor::RouteMap::has_data() const
{
    return inout.is_set
	|| route_map_name.is_set;
}

bool Native::Router::Bgp::Neighbor::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(route_map_name.yfilter);
}

std::string Native::Router::Bgp::Neighbor::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[inout='" <<inout <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::SendCommunity::SendCommunity()
    :
    send_community_where{YType::enumeration, "send-community-where"}
{

    yang_name = "send-community"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::SendCommunity::~SendCommunity()
{
}

bool Native::Router::Bgp::Neighbor::SendCommunity::has_data() const
{
    return send_community_where.is_set;
}

bool Native::Router::Bgp::Neighbor::SendCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_community_where.yfilter);
}

std::string Native::Router::Bgp::Neighbor::SendCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::SendCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_community_where.is_set || is_set(send_community_where.yfilter)) leaf_name_data.push_back(send_community_where.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::SendCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::SendCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::SendCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-community-where")
    {
        send_community_where = value;
        send_community_where.value_namespace = name_space;
        send_community_where.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::SendCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-community-where")
    {
        send_community_where.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::SendCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-community-where")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::SendLabel::SendLabel()
    :
    send_label_explicit{YType::enumeration, "send-label-explicit"}
{

    yang_name = "send-label"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::SendLabel::~SendLabel()
{
}

bool Native::Router::Bgp::Neighbor::SendLabel::has_data() const
{
    return send_label_explicit.is_set;
}

bool Native::Router::Bgp::Neighbor::SendLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_label_explicit.yfilter);
}

std::string Native::Router::Bgp::Neighbor::SendLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::SendLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_label_explicit.is_set || is_set(send_label_explicit.yfilter)) leaf_name_data.push_back(send_label_explicit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::SendLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::SendLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::SendLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-label-explicit")
    {
        send_label_explicit = value;
        send_label_explicit.value_namespace = name_space;
        send_label_explicit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::SendLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-label-explicit")
    {
        send_label_explicit.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::SendLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-label-explicit")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
	,split_update_group(std::make_shared<Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Neighbor::SlowPeer::has_data() const
{
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Neighbor::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Neighbor::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Neighbor::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detection != nullptr)
    {
        children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        children["split-update-group"] = split_update_group;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::SlowPeer::Detection::Detection()
    :
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Neighbor::SlowPeer::Detection::has_data() const
{
    return threshold.is_set;
}

bool Native::Router::Bgp::Neighbor::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::Neighbor::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::has_data() const
{
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    return permanent.is_set;
}

bool Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Timers::Timers()
    :
    keepalive_interval{YType::uint16, "keepalive-interval"},
    holdtime{YType::uint16, "holdtime"},
    minimum_neighbor_hold{YType::uint16, "minimum-neighbor-hold"}
{

    yang_name = "timers"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Timers::~Timers()
{
}

bool Native::Router::Bgp::Neighbor::Timers::has_data() const
{
    return keepalive_interval.is_set
	|| holdtime.is_set
	|| minimum_neighbor_hold.is_set;
}

bool Native::Router::Bgp::Neighbor::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(minimum_neighbor_hold.yfilter);
}

std::string Native::Router::Bgp::Neighbor::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (minimum_neighbor_hold.is_set || is_set(minimum_neighbor_hold.yfilter)) leaf_name_data.push_back(minimum_neighbor_hold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-neighbor-hold")
    {
        minimum_neighbor_hold = value;
        minimum_neighbor_hold.value_namespace = name_space;
        minimum_neighbor_hold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "minimum-neighbor-hold")
    {
        minimum_neighbor_hold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive-interval" || name == "holdtime" || name == "minimum-neighbor-hold")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::TranslateUpdate::TranslateUpdate()
    :
    ipv4(std::make_shared<Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "translate-update"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::TranslateUpdate::~TranslateUpdate()
{
}

bool Native::Router::Bgp::Neighbor::TranslateUpdate::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Router::Bgp::Neighbor::TranslateUpdate::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Router::Bgp::Neighbor::TranslateUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::TranslateUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::TranslateUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::TranslateUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::TranslateUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::TranslateUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::TranslateUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::Ipv4()
    :
    multicast(nullptr) // presence node
{

    yang_name = "ipv4"; yang_parent_name = "translate-update"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::~Ipv4()
{
}

bool Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::has_data() const
{
    return (multicast !=  nullptr && multicast->has_data());
}

bool Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (multicast !=  nullptr && multicast->has_operation());
}

std::string Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::Multicast>();
        }
        return multicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::Multicast::Multicast()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "multicast"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::Multicast::~Multicast()
{
}

bool Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::Multicast::has_data() const
{
    return unicast.is_set;
}

bool Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Transport::Transport()
    :
    connection_mode{YType::enumeration, "connection-mode"},
    multi_session{YType::empty, "multi-session"}
    	,
    path_mtu_discovery(nullptr) // presence node
{

    yang_name = "transport"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Transport::~Transport()
{
}

bool Native::Router::Bgp::Neighbor::Transport::has_data() const
{
    return connection_mode.is_set
	|| multi_session.is_set
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_data());
}

bool Native::Router::Bgp::Neighbor::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection_mode.yfilter)
	|| ydk::is_set(multi_session.yfilter)
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_operation());
}

std::string Native::Router::Bgp::Neighbor::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_mode.is_set || is_set(connection_mode.yfilter)) leaf_name_data.push_back(connection_mode.get_name_leafdata());
    if (multi_session.is_set || is_set(multi_session.yfilter)) leaf_name_data.push_back(multi_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-mtu-discovery")
    {
        if(path_mtu_discovery == nullptr)
        {
            path_mtu_discovery = std::make_shared<Native::Router::Bgp::Neighbor::Transport::PathMtuDiscovery>();
        }
        return path_mtu_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_mtu_discovery != nullptr)
    {
        children["path-mtu-discovery"] = path_mtu_discovery;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection-mode")
    {
        connection_mode = value;
        connection_mode.value_namespace = name_space;
        connection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-session")
    {
        multi_session = value;
        multi_session.value_namespace = name_space;
        multi_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection-mode")
    {
        connection_mode.yfilter = yfilter;
    }
    if(value_path == "multi-session")
    {
        multi_session.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-mtu-discovery" || name == "connection-mode" || name == "multi-session")
        return true;
    return false;
}

Native::Router::Bgp::Neighbor::Transport::PathMtuDiscovery::PathMtuDiscovery()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "path-mtu-discovery"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::Neighbor::Transport::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Router::Bgp::Neighbor::Transport::PathMtuDiscovery::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Bgp::Neighbor::Transport::PathMtuDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::Neighbor::Transport::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Neighbor::Transport::PathMtuDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::Transport::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::Transport::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::Transport::PathMtuDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Neighbor::Transport::PathMtuDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Neighbor::Transport::PathMtuDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Bgp::Bgp_::Bestpath::AsPath::ignore {0, "ignore"};

const Enum::YLeaf Native::Router::Bgp::Bgp_::Default_::RouteTarget::filter {0, "filter"};

const Enum::YLeaf Native::Router::Bgp::Neighbor::SoftReconfiguration::inbound {0, "inbound"};

const Enum::YLeaf Native::Router::Bgp::Neighbor::Capability::Orf::PrefixList::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Neighbor::Capability::Orf::PrefixList::receive {1, "receive"};
const Enum::YLeaf Native::Router::Bgp::Neighbor::Capability::Orf::PrefixList::send {2, "send"};

const Enum::YLeaf Native::Router::Bgp::Neighbor::DistributeList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Neighbor::DistributeList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Neighbor::FilterList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Neighbor::FilterList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Neighbor::PrefixList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Neighbor::PrefixList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Neighbor::RouteMap::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Neighbor::RouteMap::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Neighbor::SendCommunity::SendCommunityWhere::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Neighbor::SendCommunity::SendCommunityWhere::extended {1, "extended"};
const Enum::YLeaf Native::Router::Bgp::Neighbor::SendCommunity::SendCommunityWhere::standard {2, "standard"};

const Enum::YLeaf Native::Router::Bgp::Neighbor::SendLabel::SendLabelExplicit::explicit_null {0, "explicit-null"};

const Enum::YLeaf Native::Router::Bgp::Neighbor::Transport::ConnectionMode::active {0, "active"};
const Enum::YLeaf Native::Router::Bgp::Neighbor::Transport::ConnectionMode::passive {1, "passive"};


}
}

