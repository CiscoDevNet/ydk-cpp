
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_13.hpp"
#include "Cisco_IOS_XE_native_14.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::HoldTime()
    :
    max_time{YType::uint16, "max-time"},
    min_time{YType::uint16, "min-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "speaker"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::has_data() const
{
    return max_time.is_set
	|| min_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_time.yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_time.is_set || is_set(max_time.yfilter)) leaf_name_data.push_back(max_time.get_name_leafdata());
    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-time")
    {
        max_time = value;
        max_time.value_namespace = name_space;
        max_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-time")
    {
        max_time.yfilter = yfilter;
    }
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-time" || name == "min-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Source()
{

    yang_name = "source"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::~Source()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Ipv4_()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "ipv4"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::~Ipv4_()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::has_data() const
{
    for (std::size_t index=0; index<password.size(); index++)
    {
        if(password[index]->has_data())
            return true;
    }
    return ipv4.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::has_operation() const
{
    for (std::size_t index=0; index<password.size(); index++)
    {
        if(password[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        for(auto const & c : password)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password>();
        c->parent = this;
        password.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : password)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "ipv4")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Password()
    :
    password_type{YType::enumeration, "password-type"}
    	,
    mode(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode>())
{
    mode->parent = this;

    yang_name = "password"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::~Password()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::has_data() const
{
    return password_type.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password_type.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password" <<"[password-type='" <<password_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password_type.is_set || is_set(password_type.yfilter)) leaf_name_data.push_back(password_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password-type")
    {
        password_type = value;
        password_type.value_namespace = name_space;
        password_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password-type")
    {
        password_type.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "password-type")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Mode()
    :
    local(nullptr) // presence node
	,peer(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::~Mode()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::has_data() const
{
    return (local !=  nullptr && local->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local>();
        }
        return local;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "peer")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Local()
    :
    both(nullptr) // presence node
	,listener(nullptr) // presence node
	,speaker(nullptr) // presence node
{

    yang_name = "local"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::~Local()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::has_data() const
{
    return (both !=  nullptr && both->has_data())
	|| (listener !=  nullptr && listener->has_data())
	|| (speaker !=  nullptr && speaker->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::has_operation() const
{
    return is_set(yfilter)
	|| (both !=  nullptr && both->has_operation())
	|| (listener !=  nullptr && listener->has_operation())
	|| (speaker !=  nullptr && speaker->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "both")
    {
        if(both == nullptr)
        {
            both = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both>();
        }
        return both;
    }

    if(child_yang_name == "listener")
    {
        if(listener == nullptr)
        {
            listener = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener>();
        }
        return listener;
    }

    if(child_yang_name == "speaker")
    {
        if(speaker == nullptr)
        {
            speaker = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker>();
        }
        return speaker;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(both != nullptr)
    {
        children["both"] = both;
    }

    if(listener != nullptr)
    {
        children["listener"] = listener;
    }

    if(speaker != nullptr)
    {
        children["speaker"] = speaker;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "both" || name == "listener" || name == "speaker")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::Both()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "both"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::~Both()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::has_data() const
{
    return vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "both";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::Listener()
    :
    vrf{YType::str, "vrf"}
    	,
    hold_time(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime>())
{
    hold_time->parent = this;

    yang_name = "listener"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::~Listener()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::has_data() const
{
    return vrf.is_set
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listener";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::HoldTime()
    :
    max_time{YType::uint16, "max-time"},
    min_time{YType::uint16, "min-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "listener"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::has_data() const
{
    return max_time.is_set
	|| min_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_time.yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_time.is_set || is_set(max_time.yfilter)) leaf_name_data.push_back(max_time.get_name_leafdata());
    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-time")
    {
        max_time = value;
        max_time.value_namespace = name_space;
        max_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-time")
    {
        max_time.yfilter = yfilter;
    }
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-time" || name == "min-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::Speaker()
    :
    vrf{YType::str, "vrf"}
    	,
    hold_time(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime>())
{
    hold_time->parent = this;

    yang_name = "speaker"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::~Speaker()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::has_data() const
{
    return vrf.is_set
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "speaker";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::HoldTime()
    :
    min_time{YType::uint16, "min-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "speaker"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::has_data() const
{
    return min_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Peer_()
    :
    both(nullptr) // presence node
	,listener(nullptr) // presence node
	,speaker(nullptr) // presence node
{

    yang_name = "peer"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::~Peer_()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::has_data() const
{
    return (both !=  nullptr && both->has_data())
	|| (listener !=  nullptr && listener->has_data())
	|| (speaker !=  nullptr && speaker->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::has_operation() const
{
    return is_set(yfilter)
	|| (both !=  nullptr && both->has_operation())
	|| (listener !=  nullptr && listener->has_operation())
	|| (speaker !=  nullptr && speaker->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "both")
    {
        if(both == nullptr)
        {
            both = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both>();
        }
        return both;
    }

    if(child_yang_name == "listener")
    {
        if(listener == nullptr)
        {
            listener = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener>();
        }
        return listener;
    }

    if(child_yang_name == "speaker")
    {
        if(speaker == nullptr)
        {
            speaker = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker>();
        }
        return speaker;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(both != nullptr)
    {
        children["both"] = both;
    }

    if(listener != nullptr)
    {
        children["listener"] = listener;
    }

    if(speaker != nullptr)
    {
        children["speaker"] = speaker;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "both" || name == "listener" || name == "speaker")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::Both()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "both"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::~Both()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::has_data() const
{
    return vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "both";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::Listener()
    :
    vrf{YType::str, "vrf"}
    	,
    hold_time(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime>())
{
    hold_time->parent = this;

    yang_name = "listener"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::~Listener()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::has_data() const
{
    return vrf.is_set
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listener";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::HoldTime()
    :
    min_time{YType::uint16, "min-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "listener"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::has_data() const
{
    return min_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::Speaker()
    :
    vrf{YType::str, "vrf"}
    	,
    hold_time(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime>())
{
    hold_time->parent = this;

    yang_name = "speaker"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::~Speaker()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::has_data() const
{
    return vrf.is_set
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "speaker";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::HoldTime()
    :
    max_time{YType::uint16, "max-time"},
    min_time{YType::uint16, "min-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "speaker"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::has_data() const
{
    return max_time.is_set
	|| min_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_time.yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_time.is_set || is_set(max_time.yfilter)) leaf_name_data.push_back(max_time.get_name_leafdata());
    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-time")
    {
        max_time = value;
        max_time.value_namespace = name_space;
        max_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-time")
    {
        max_time.yfilter = yfilter;
    }
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-time" || name == "min-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Default_::Default_()
    :
    source_ip{YType::str, "source-ip"}
    	,
    password(std::make_shared<Native::Cts::Sxp::Default_::Password>())
{
    password->parent = this;

    yang_name = "default"; yang_parent_name = "sxp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Sxp::Default_::~Default_()
{
}

bool Native::Cts::Sxp::Default_::has_data() const
{
    return source_ip.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Cts::Sxp::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Cts::Sxp::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:sxp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Sxp::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Cts::Sxp::Default_::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Cts::Sxp::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "source-ip")
        return true;
    return false;
}

Native::Cts::Sxp::Default_::Password::Password()
    :
    secret{YType::str, "secret"},
    type{YType::enumeration, "type"}
{

    yang_name = "password"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Sxp::Default_::Password::~Password()
{
}

bool Native::Cts::Sxp::Default_::Password::has_data() const
{
    return secret.is_set
	|| type.is_set;
}

bool Native::Cts::Sxp::Default_::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secret.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Cts::Sxp::Default_::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:sxp/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Sxp::Default_::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Default_::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Default_::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Default_::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Default_::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Default_::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Default_::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secret" || name == "type")
        return true;
    return false;
}

Native::Default_::Default_()
    :
    crypto(std::make_shared<Native::Default_::Crypto>())
{
    crypto->parent = this;

    yang_name = "default"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Default_::~Default_()
{
}

bool Native::Default_::has_data() const
{
    return (crypto !=  nullptr && crypto->has_data());
}

bool Native::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (crypto !=  nullptr && crypto->has_operation());
}

std::string Native::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Default_::Crypto>();
        }
        return crypto;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crypto != nullptr)
    {
        children["crypto"] = crypto;
    }

    return children;
}

void Native::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crypto")
        return true;
    return false;
}

Native::Default_::Crypto::Crypto()
    :
    ikev2(std::make_shared<Native::Default_::Crypto::Ikev2>())
{
    ikev2->parent = this;

    yang_name = "crypto"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Default_::Crypto::~Crypto()
{
}

bool Native::Default_::Crypto::has_data() const
{
    return (ikev2 !=  nullptr && ikev2->has_data());
}

bool Native::Default_::Crypto::has_operation() const
{
    return is_set(yfilter)
	|| (ikev2 !=  nullptr && ikev2->has_operation());
}

std::string Native::Default_::Crypto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Default_::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Default_::Crypto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Default_::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ikev2")
    {
        if(ikev2 == nullptr)
        {
            ikev2 = std::make_shared<Native::Default_::Crypto::Ikev2>();
        }
        return ikev2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Default_::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ikev2 != nullptr)
    {
        children["ikev2"] = ikev2;
    }

    return children;
}

void Native::Default_::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Default_::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Default_::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ikev2")
        return true;
    return false;
}

Native::Default_::Crypto::Ikev2::Ikev2()
    :
    policy{YType::empty, "policy"},
    proposal{YType::empty, "proposal"}
{

    yang_name = "ikev2"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Default_::Crypto::Ikev2::~Ikev2()
{
}

bool Native::Default_::Crypto::Ikev2::has_data() const
{
    return policy.is_set
	|| proposal.is_set;
}

bool Native::Default_::Crypto::Ikev2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(proposal.yfilter);
}

std::string Native::Default_::Crypto::Ikev2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/default/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Default_::Crypto::Ikev2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ikev2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Default_::Crypto::Ikev2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (proposal.is_set || is_set(proposal.yfilter)) leaf_name_data.push_back(proposal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Default_::Crypto::Ikev2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Default_::Crypto::Ikev2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Default_::Crypto::Ikev2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proposal")
    {
        proposal = value;
        proposal.value_namespace = name_space;
        proposal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Default_::Crypto::Ikev2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "proposal")
    {
        proposal.yfilter = yfilter;
    }
}

bool Native::Default_::Crypto::Ikev2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "proposal")
        return true;
    return false;
}

Native::Device::Device()
    :
    classifier{YType::empty, "classifier"}
{

    yang_name = "device"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Device::~Device()
{
}

bool Native::Device::has_data() const
{
    return classifier.is_set;
}

bool Native::Device::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(classifier.yfilter);
}

std::string Native::Device::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:device";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Device::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classifier.is_set || is_set(classifier.yfilter)) leaf_name_data.push_back(classifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Device::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classifier")
    {
        classifier = value;
        classifier.value_namespace = name_space;
        classifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Device::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classifier")
    {
        classifier.yfilter = yfilter;
    }
}

bool Native::Device::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classifier")
        return true;
    return false;
}

Native::DeviceSensor::DeviceSensor()
    :
    accounting{YType::empty, "accounting"}
{

    yang_name = "device-sensor"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DeviceSensor::~DeviceSensor()
{
}

bool Native::DeviceSensor::has_data() const
{
    return accounting.is_set;
}

bool Native::DeviceSensor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter);
}

std::string Native::DeviceSensor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceSensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-sensor:device-sensor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceSensor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceSensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceSensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceSensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceSensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
}

bool Native::DeviceSensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting")
        return true;
    return false;
}

Native::DeviceTracking::DeviceTracking()
    :
    tracking(nullptr) // presence node
{

    yang_name = "device-tracking"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DeviceTracking::~DeviceTracking()
{
}

bool Native::DeviceTracking::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return (tracking !=  nullptr && tracking->has_data());
}

bool Native::DeviceTracking::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (tracking !=  nullptr && tracking->has_operation());
}

std::string Native::DeviceTracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        for(auto const & c : policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::DeviceTracking::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    if(child_yang_name == "tracking")
    {
        if(tracking == nullptr)
        {
            tracking = std::make_shared<Native::DeviceTracking::Tracking>();
        }
        return tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy)
    {
        children[c->get_segment_path()] = c;
    }

    if(tracking != nullptr)
    {
        children["tracking"] = tracking;
    }

    return children;
}

void Native::DeviceTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::DeviceTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::DeviceTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "tracking")
        return true;
    return false;
}

Native::DeviceTracking::Policy::Policy()
    :
    word{YType::str, "word"}
    	,
    device_role(std::make_shared<Native::DeviceTracking::Policy::DeviceRole>())
	,limit(std::make_shared<Native::DeviceTracking::Policy::Limit>())
	,protocol(std::make_shared<Native::DeviceTracking::Policy::Protocol>())
	,security_level(std::make_shared<Native::DeviceTracking::Policy::SecurityLevel>())
	,tracking(std::make_shared<Native::DeviceTracking::Policy::Tracking>())
{
    device_role->parent = this;
    limit->parent = this;
    protocol->parent = this;
    security_level->parent = this;
    tracking->parent = this;

    yang_name = "policy"; yang_parent_name = "device-tracking"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DeviceTracking::Policy::~Policy()
{
}

bool Native::DeviceTracking::Policy::has_data() const
{
    return word.is_set
	|| (device_role !=  nullptr && device_role->has_data())
	|| (limit !=  nullptr && limit->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (security_level !=  nullptr && security_level->has_data())
	|| (tracking !=  nullptr && tracking->has_data());
}

bool Native::DeviceTracking::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (device_role !=  nullptr && device_role->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (security_level !=  nullptr && security_level->has_operation())
	|| (tracking !=  nullptr && tracking->has_operation());
}

std::string Native::DeviceTracking::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/device-tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-tracking:policy" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device-role")
    {
        if(device_role == nullptr)
        {
            device_role = std::make_shared<Native::DeviceTracking::Policy::DeviceRole>();
        }
        return device_role;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::DeviceTracking::Policy::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::DeviceTracking::Policy::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "security-level")
    {
        if(security_level == nullptr)
        {
            security_level = std::make_shared<Native::DeviceTracking::Policy::SecurityLevel>();
        }
        return security_level;
    }

    if(child_yang_name == "tracking")
    {
        if(tracking == nullptr)
        {
            tracking = std::make_shared<Native::DeviceTracking::Policy::Tracking>();
        }
        return tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(device_role != nullptr)
    {
        children["device-role"] = device_role;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(security_level != nullptr)
    {
        children["security-level"] = security_level;
    }

    if(tracking != nullptr)
    {
        children["tracking"] = tracking;
    }

    return children;
}

void Native::DeviceTracking::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-role" || name == "limit" || name == "protocol" || name == "security-level" || name == "tracking" || name == "word")
        return true;
    return false;
}

Native::DeviceTracking::Policy::DeviceRole::DeviceRole()
    :
    node{YType::boolean, "node"},
    switch_{YType::empty, "switch"}
{

    yang_name = "device-role"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::DeviceTracking::Policy::DeviceRole::~DeviceRole()
{
}

bool Native::DeviceTracking::Policy::DeviceRole::has_data() const
{
    return node.is_set
	|| switch_.is_set;
}

bool Native::DeviceTracking::Policy::DeviceRole::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::DeviceTracking::Policy::DeviceRole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-role";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::DeviceRole::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::DeviceRole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::DeviceRole::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::DeviceRole::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::DeviceRole::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::DeviceRole::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "switch")
        return true;
    return false;
}

Native::DeviceTracking::Policy::Limit::Limit()
    :
    address_count{YType::uint16, "address-count"}
{

    yang_name = "limit"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::DeviceTracking::Policy::Limit::~Limit()
{
}

bool Native::DeviceTracking::Policy::Limit::has_data() const
{
    return address_count.is_set;
}

bool Native::DeviceTracking::Policy::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_count.yfilter);
}

std::string Native::DeviceTracking::Policy::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_count.is_set || is_set(address_count.yfilter)) leaf_name_data.push_back(address_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-count")
    {
        address_count = value;
        address_count.value_namespace = name_space;
        address_count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-count")
    {
        address_count.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-count")
        return true;
    return false;
}

Native::DeviceTracking::Policy::Protocol::Protocol()
    :
    arp{YType::boolean, "arp"},
    dhcp4{YType::boolean, "dhcp4"},
    dhcp6{YType::boolean, "dhcp6"},
    ndp{YType::boolean, "ndp"},
    udp{YType::boolean, "udp"}
{

    yang_name = "protocol"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::DeviceTracking::Policy::Protocol::~Protocol()
{
}

bool Native::DeviceTracking::Policy::Protocol::has_data() const
{
    return arp.is_set
	|| dhcp4.is_set
	|| dhcp6.is_set
	|| ndp.is_set
	|| udp.is_set;
}

bool Native::DeviceTracking::Policy::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arp.yfilter)
	|| ydk::is_set(dhcp4.yfilter)
	|| ydk::is_set(dhcp6.yfilter)
	|| ydk::is_set(ndp.yfilter)
	|| ydk::is_set(udp.yfilter);
}

std::string Native::DeviceTracking::Policy::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp.is_set || is_set(arp.yfilter)) leaf_name_data.push_back(arp.get_name_leafdata());
    if (dhcp4.is_set || is_set(dhcp4.yfilter)) leaf_name_data.push_back(dhcp4.get_name_leafdata());
    if (dhcp6.is_set || is_set(dhcp6.yfilter)) leaf_name_data.push_back(dhcp6.get_name_leafdata());
    if (ndp.is_set || is_set(ndp.yfilter)) leaf_name_data.push_back(ndp.get_name_leafdata());
    if (udp.is_set || is_set(udp.yfilter)) leaf_name_data.push_back(udp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arp")
    {
        arp = value;
        arp.value_namespace = name_space;
        arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp4")
    {
        dhcp4 = value;
        dhcp4.value_namespace = name_space;
        dhcp4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp6")
    {
        dhcp6 = value;
        dhcp6.value_namespace = name_space;
        dhcp6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ndp")
    {
        ndp = value;
        ndp.value_namespace = name_space;
        ndp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp")
    {
        udp = value;
        udp.value_namespace = name_space;
        udp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arp")
    {
        arp.yfilter = yfilter;
    }
    if(value_path == "dhcp4")
    {
        dhcp4.yfilter = yfilter;
    }
    if(value_path == "dhcp6")
    {
        dhcp6.yfilter = yfilter;
    }
    if(value_path == "ndp")
    {
        ndp.yfilter = yfilter;
    }
    if(value_path == "udp")
    {
        udp.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp" || name == "dhcp4" || name == "dhcp6" || name == "ndp" || name == "udp")
        return true;
    return false;
}

Native::DeviceTracking::Policy::SecurityLevel::SecurityLevel()
    :
    glean{YType::empty, "glean"}
{

    yang_name = "security-level"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::DeviceTracking::Policy::SecurityLevel::~SecurityLevel()
{
}

bool Native::DeviceTracking::Policy::SecurityLevel::has_data() const
{
    return glean.is_set;
}

bool Native::DeviceTracking::Policy::SecurityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(glean.yfilter);
}

std::string Native::DeviceTracking::Policy::SecurityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::SecurityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (glean.is_set || is_set(glean.yfilter)) leaf_name_data.push_back(glean.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::SecurityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::SecurityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::SecurityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "glean")
    {
        glean = value;
        glean.value_namespace = name_space;
        glean.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::SecurityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "glean")
    {
        glean.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::SecurityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "glean")
        return true;
    return false;
}

Native::DeviceTracking::Policy::Tracking::Tracking()
    :
    tracking_on_off{YType::enumeration, "tracking-on-off"}
{

    yang_name = "tracking"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::DeviceTracking::Policy::Tracking::~Tracking()
{
}

bool Native::DeviceTracking::Policy::Tracking::has_data() const
{
    return tracking_on_off.is_set;
}

bool Native::DeviceTracking::Policy::Tracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tracking_on_off.yfilter);
}

std::string Native::DeviceTracking::Policy::Tracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::Tracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tracking_on_off.is_set || is_set(tracking_on_off.yfilter)) leaf_name_data.push_back(tracking_on_off.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::Tracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::Tracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::Tracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tracking-on-off")
    {
        tracking_on_off = value;
        tracking_on_off.value_namespace = name_space;
        tracking_on_off.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::Tracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tracking-on-off")
    {
        tracking_on_off.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::Tracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracking-on-off")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::Tracking()
    :
    retry_interval{YType::uint16, "retry-interval"}
    	,
    auto_source(nullptr) // presence node
{

    yang_name = "tracking"; yang_parent_name = "device-tracking"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DeviceTracking::Tracking::~Tracking()
{
}

bool Native::DeviceTracking::Tracking::has_data() const
{
    return retry_interval.is_set
	|| (auto_source !=  nullptr && auto_source->has_data());
}

bool Native::DeviceTracking::Tracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retry_interval.yfilter)
	|| (auto_source !=  nullptr && auto_source->has_operation());
}

std::string Native::DeviceTracking::Tracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/device-tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::Tracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-tracking:tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Tracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retry_interval.is_set || is_set(retry_interval.yfilter)) leaf_name_data.push_back(retry_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-source")
    {
        if(auto_source == nullptr)
        {
            auto_source = std::make_shared<Native::DeviceTracking::Tracking::AutoSource>();
        }
        return auto_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_source != nullptr)
    {
        children["auto-source"] = auto_source;
    }

    return children;
}

void Native::DeviceTracking::Tracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retry-interval")
    {
        retry_interval = value;
        retry_interval.value_namespace = name_space;
        retry_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Tracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retry-interval")
    {
        retry_interval.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Tracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-source" || name == "retry-interval")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::AutoSource::AutoSource()
    :
    override{YType::empty, "override"}
    	,
    fallback(std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback>())
{
    fallback->parent = this;

    yang_name = "auto-source"; yang_parent_name = "tracking"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DeviceTracking::Tracking::AutoSource::~AutoSource()
{
}

bool Native::DeviceTracking::Tracking::AutoSource::has_data() const
{
    return override.is_set
	|| (fallback !=  nullptr && fallback->has_data());
}

bool Native::DeviceTracking::Tracking::AutoSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(override.yfilter)
	|| (fallback !=  nullptr && fallback->has_operation());
}

std::string Native::DeviceTracking::Tracking::AutoSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/device-tracking/Cisco-IOS-XE-device-tracking:tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::Tracking::AutoSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Tracking::AutoSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::AutoSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback>();
        }
        return fallback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::AutoSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    return children;
}

void Native::DeviceTracking::Tracking::AutoSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Tracking::AutoSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Tracking::AutoSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback" || name == "override")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Fallback()
    :
    ipv4_subnet_type1(std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1>())
	,ipv4_subnet_type2(std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2>())
{
    ipv4_subnet_type1->parent = this;
    ipv4_subnet_type2->parent = this;

    yang_name = "fallback"; yang_parent_name = "auto-source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::~Fallback()
{
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::has_data() const
{
    return (ipv4_subnet_type1 !=  nullptr && ipv4_subnet_type1->has_data())
	|| (ipv4_subnet_type2 !=  nullptr && ipv4_subnet_type2->has_data());
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_subnet_type1 !=  nullptr && ipv4_subnet_type1->has_operation())
	|| (ipv4_subnet_type2 !=  nullptr && ipv4_subnet_type2->has_operation());
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/device-tracking/Cisco-IOS-XE-device-tracking:tracking/auto-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Tracking::AutoSource::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::AutoSource::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-subnet-type1")
    {
        if(ipv4_subnet_type1 == nullptr)
        {
            ipv4_subnet_type1 = std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1>();
        }
        return ipv4_subnet_type1;
    }

    if(child_yang_name == "ipv4-subnet-type2")
    {
        if(ipv4_subnet_type2 == nullptr)
        {
            ipv4_subnet_type2 = std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2>();
        }
        return ipv4_subnet_type2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::AutoSource::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_subnet_type1 != nullptr)
    {
        children["ipv4-subnet-type1"] = ipv4_subnet_type1;
    }

    if(ipv4_subnet_type2 != nullptr)
    {
        children["ipv4-subnet-type2"] = ipv4_subnet_type2;
    }

    return children;
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-subnet-type1" || name == "ipv4-subnet-type2")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::Ipv4SubnetType1()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"},
    override{YType::empty, "override"}
{

    yang_name = "ipv4-subnet-type1"; yang_parent_name = "fallback"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::~Ipv4SubnetType1()
{
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::has_data() const
{
    return ipv4.is_set
	|| mask.is_set
	|| override.is_set;
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(override.yfilter);
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/device-tracking/Cisco-IOS-XE-device-tracking:tracking/auto-source/fallback/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subnet-type1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mask" || name == "override")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::Ipv4SubnetType2()
    :
    ipv4_prefix_name{YType::str, "ipv4-prefix-name"},
    override{YType::empty, "override"}
{

    yang_name = "ipv4-subnet-type2"; yang_parent_name = "fallback"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::~Ipv4SubnetType2()
{
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::has_data() const
{
    return ipv4_prefix_name.is_set
	|| override.is_set;
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_prefix_name.yfilter)
	|| ydk::is_set(override.yfilter);
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/device-tracking/Cisco-IOS-XE-device-tracking:tracking/auto-source/fallback/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subnet-type2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_prefix_name.is_set || is_set(ipv4_prefix_name.yfilter)) leaf_name_data.push_back(ipv4_prefix_name.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-prefix-name")
    {
        ipv4_prefix_name = value;
        ipv4_prefix_name.value_namespace = name_space;
        ipv4_prefix_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-prefix-name")
    {
        ipv4_prefix_name.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix-name" || name == "override")
        return true;
    return false;
}

Native::Diagnostic::Diagnostic()
    :
    bootup(std::make_shared<Native::Diagnostic::Bootup>())
	,event_log(std::make_shared<Native::Diagnostic::EventLog>())
	,monitor(std::make_shared<Native::Diagnostic::Monitor>())
	,schedule(std::make_shared<Native::Diagnostic::Schedule>())
{
    bootup->parent = this;
    event_log->parent = this;
    monitor->parent = this;
    schedule->parent = this;

    yang_name = "diagnostic"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::~Diagnostic()
{
}

bool Native::Diagnostic::has_data() const
{
    return (bootup !=  nullptr && bootup->has_data())
	|| (event_log !=  nullptr && event_log->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (schedule !=  nullptr && schedule->has_data());
}

bool Native::Diagnostic::has_operation() const
{
    return is_set(yfilter)
	|| (bootup !=  nullptr && bootup->has_operation())
	|| (event_log !=  nullptr && event_log->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (schedule !=  nullptr && schedule->has_operation());
}

std::string Native::Diagnostic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-diagnostics:diagnostic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bootup")
    {
        if(bootup == nullptr)
        {
            bootup = std::make_shared<Native::Diagnostic::Bootup>();
        }
        return bootup;
    }

    if(child_yang_name == "event-log")
    {
        if(event_log == nullptr)
        {
            event_log = std::make_shared<Native::Diagnostic::EventLog>();
        }
        return event_log;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Diagnostic::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "schedule")
    {
        if(schedule == nullptr)
        {
            schedule = std::make_shared<Native::Diagnostic::Schedule>();
        }
        return schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bootup != nullptr)
    {
        children["bootup"] = bootup;
    }

    if(event_log != nullptr)
    {
        children["event-log"] = event_log;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(schedule != nullptr)
    {
        children["schedule"] = schedule;
    }

    return children;
}

void Native::Diagnostic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootup" || name == "event-log" || name == "monitor" || name == "schedule")
        return true;
    return false;
}

Native::Diagnostic::Bootup::Bootup()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "bootup"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Bootup::~Bootup()
{
}

bool Native::Diagnostic::Bootup::has_data() const
{
    return level.is_set;
}

bool Native::Diagnostic::Bootup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::Diagnostic::Bootup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Bootup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Bootup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Bootup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Bootup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Bootup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Bootup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Bootup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Diagnostic::EventLog::EventLog()
    :
    size{YType::uint16, "size"}
{

    yang_name = "event-log"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::EventLog::~EventLog()
{
}

bool Native::Diagnostic::EventLog::has_data() const
{
    return size.is_set;
}

bool Native::Diagnostic::EventLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Diagnostic::EventLog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::EventLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::EventLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::EventLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::EventLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::EventLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::EventLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Diagnostic::EventLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Monitor()
    :
    syslog{YType::empty, "syslog"}
    	,
    interval(std::make_shared<Native::Diagnostic::Monitor::Interval>())
	,threshold(std::make_shared<Native::Diagnostic::Monitor::Threshold>())
{
    interval->parent = this;
    threshold->parent = this;

    yang_name = "monitor"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::~Monitor()
{
}

bool Native::Diagnostic::Monitor::has_data() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_data())
            return true;
    }
    return syslog.is_set
	|| (interval !=  nullptr && interval->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Diagnostic::Monitor::has_operation() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(syslog.yfilter)
	|| (interval !=  nullptr && interval->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Diagnostic::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Diagnostic::Monitor::Interval>();
        }
        return interval;
    }

    if(child_yang_name == "switch")
    {
        for(auto const & c : switch_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Monitor::Switch_>();
        c->parent = this;
        switch_.push_back(c);
        return c;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Diagnostic::Monitor::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    for (auto const & c : switch_)
    {
        children[c->get_segment_path()] = c;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Diagnostic::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "switch" || name == "threshold" || name == "syslog")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Interval::Interval()
    :
    switch_(std::make_shared<Native::Diagnostic::Monitor::Interval::Switch_>())
{
    switch_->parent = this;

    yang_name = "interval"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::Interval::~Interval()
{
}

bool Native::Diagnostic::Monitor::Interval::has_data() const
{
    return (switch_ !=  nullptr && switch_->has_data());
}

bool Native::Diagnostic::Monitor::Interval::has_operation() const
{
    return is_set(yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::Diagnostic::Monitor::Interval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch_>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    return children;
}

void Native::Diagnostic::Monitor::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Interval::Switch_::Switch_()
{

    yang_name = "switch"; yang_parent_name = "interval"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::Interval::Switch_::~Switch_()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch_::has_data() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Monitor::Interval::Switch_::has_operation() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Diagnostic::Monitor::Interval::Switch_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/interval/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::Interval::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Interval::Switch_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        for(auto const & c : switch_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch_::Switch__>();
        c->parent = this;
        switch_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : switch_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Interval::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Interval::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Switch__()
    :
    number{YType::uint8, "number"}
    	,
    test(std::make_shared<Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test>())
{
    test->parent = this;

    yang_name = "switch"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::Interval::Switch_::Switch__::~Switch__()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::has_data() const
{
    return number.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Diagnostic::Monitor::Interval::Switch_::Switch__::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/interval/switch/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::Interval::Switch_::Switch__::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Interval::Switch_::Switch__::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch_::Switch__::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch_::Switch__::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch_::Switch__::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Interval::Switch_::Switch__::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::Test()
    :
    all(std::make_shared<Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All>())
{
    all->parent = this;

    yang_name = "test"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::~Test()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::has_data() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::has_operation() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All>();
        }
        return all;
    }

    if(child_yang_name == "test-ids")
    {
        for(auto const & c : test_ids)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds>();
        c->parent = this;
        test_ids.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    for (auto const & c : test_ids)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "test-ids")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::All()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"},
    milli_seconds{YType::uint16, "milli-seconds"},
    number_of_days{YType::uint16, "number-of-days"}
{

    yang_name = "all"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::~All()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::has_data() const
{
    return hh_mm_ss.is_set
	|| milli_seconds.is_set
	|| number_of_days.is_set;
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter)
	|| ydk::is_set(milli_seconds.yfilter)
	|| ydk::is_set(number_of_days.yfilter);
}

std::string Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());
    if (milli_seconds.is_set || is_set(milli_seconds.yfilter)) leaf_name_data.push_back(milli_seconds.get_name_leafdata());
    if (number_of_days.is_set || is_set(number_of_days.yfilter)) leaf_name_data.push_back(number_of_days.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds = value;
        milli_seconds.value_namespace = name_space;
        milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-days")
    {
        number_of_days = value;
        number_of_days.value_namespace = name_space;
        number_of_days.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds.yfilter = yfilter;
    }
    if(value_path == "number-of-days")
    {
        number_of_days.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss" || name == "milli-seconds" || name == "number-of-days")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::TestIds()
    :
    id{YType::str, "id"},
    hh_mm_ss{YType::str, "hh-mm-ss"},
    milli_seconds{YType::uint16, "milli-seconds"},
    number_of_days{YType::uint16, "number-of-days"}
{

    yang_name = "test-ids"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::~TestIds()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::has_data() const
{
    return id.is_set
	|| hh_mm_ss.is_set
	|| milli_seconds.is_set
	|| number_of_days.is_set;
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter)
	|| ydk::is_set(milli_seconds.yfilter)
	|| ydk::is_set(number_of_days.yfilter);
}

std::string Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test-ids" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());
    if (milli_seconds.is_set || is_set(milli_seconds.yfilter)) leaf_name_data.push_back(milli_seconds.get_name_leafdata());
    if (number_of_days.is_set || is_set(number_of_days.yfilter)) leaf_name_data.push_back(number_of_days.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds = value;
        milli_seconds.value_namespace = name_space;
        milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-days")
    {
        number_of_days = value;
        number_of_days.value_namespace = name_space;
        number_of_days.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds.yfilter = yfilter;
    }
    if(value_path == "number-of-days")
    {
        number_of_days.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "hh-mm-ss" || name == "milli-seconds" || name == "number-of-days")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Switch_::Switch_()
    :
    number{YType::uint8, "number"}
    	,
    test(std::make_shared<Native::Diagnostic::Monitor::Switch_::Test>())
{
    test->parent = this;

    yang_name = "switch"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::Switch_::~Switch_()
{
}

bool Native::Diagnostic::Monitor::Switch_::has_data() const
{
    return number.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::Diagnostic::Monitor::Switch_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Diagnostic::Monitor::Switch_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Switch_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Diagnostic::Monitor::Switch_::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Diagnostic::Monitor::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Switch_::Test::Test()
    :
    all{YType::empty, "all"},
    id{YType::str, "id"}
{

    yang_name = "test"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Switch_::Test::~Test()
{
}

bool Native::Diagnostic::Monitor::Switch_::Test::has_data() const
{
    return all.is_set
	|| id.is_set;
}

bool Native::Diagnostic::Monitor::Switch_::Test::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Diagnostic::Monitor::Switch_::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Switch_::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Switch_::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Switch_::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Monitor::Switch_::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Switch_::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Switch_::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "id")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Threshold()
{

    yang_name = "threshold"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::Threshold::~Threshold()
{
}

bool Native::Diagnostic::Monitor::Threshold::has_data() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Monitor::Threshold::has_operation() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Diagnostic::Monitor::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        for(auto const & c : switch_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_>();
        c->parent = this;
        switch_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : switch_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Switch_()
    :
    number{YType::uint8, "number"}
    	,
    test(std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test>())
{
    test->parent = this;

    yang_name = "switch"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::Threshold::Switch_::~Switch_()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::has_data() const
{
    return number.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Diagnostic::Monitor::Threshold::Switch_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::Threshold::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Threshold::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::Test()
    :
    all(std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test::All>())
{
    all->parent = this;

    yang_name = "test"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::~Test()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::has_data() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::has_operation() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Monitor::Threshold::Switch_::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch_::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch_::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test::All>();
        }
        return all;
    }

    if(child_yang_name == "test-ids")
    {
        for(auto const & c : test_ids)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds>();
        c->parent = this;
        test_ids.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch_::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    for (auto const & c : test_ids)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "test-ids")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::All()
    :
    failure(std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure>())
{
    failure->parent = this;

    yang_name = "all"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::~All()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::has_data() const
{
    return (failure !=  nullptr && failure->has_data());
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::has_operation() const
{
    return is_set(yfilter)
	|| (failure !=  nullptr && failure->has_operation());
}

std::string Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure>();
        }
        return failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(failure != nullptr)
    {
        children["failure"] = failure;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Failure()
{

    yang_name = "failure"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::~Failure()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::has_data() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::has_operation() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "count")
    {
        for(auto const & c : count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count>();
        c->parent = this;
        count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::Count()
    :
    range{YType::uint16, "range"},
    days{YType::uint32, "days"},
    hours{YType::uint32, "hours"},
    milli_seconds{YType::uint32, "milli-seconds"},
    minutes{YType::uint32, "minutes"},
    runs{YType::uint16, "runs"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "count"; yang_parent_name = "failure"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::~Count()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::has_data() const
{
    return range.is_set
	|| days.is_set
	|| hours.is_set
	|| milli_seconds.is_set
	|| minutes.is_set
	|| runs.is_set
	|| seconds.is_set;
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(milli_seconds.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(runs.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (milli_seconds.is_set || is_set(milli_seconds.yfilter)) leaf_name_data.push_back(milli_seconds.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (runs.is_set || is_set(runs.yfilter)) leaf_name_data.push_back(runs.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds = value;
        milli_seconds.value_namespace = name_space;
        milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runs")
    {
        runs = value;
        runs.value_namespace = name_space;
        runs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "runs")
    {
        runs.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "days" || name == "hours" || name == "milli-seconds" || name == "minutes" || name == "runs" || name == "seconds")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::TestIds()
    :
    id{YType::str, "id"}
    	,
    failure(std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure>())
{
    failure->parent = this;

    yang_name = "test-ids"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::~TestIds()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::has_data() const
{
    return id.is_set
	|| (failure !=  nullptr && failure->has_data());
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (failure !=  nullptr && failure->has_operation());
}

std::string Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test-ids" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure>();
        }
        return failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(failure != nullptr)
    {
        children["failure"] = failure;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "id")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Failure()
{

    yang_name = "failure"; yang_parent_name = "test-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::~Failure()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::has_data() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::has_operation() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "count")
    {
        for(auto const & c : count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count>();
        c->parent = this;
        count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::Count()
    :
    range{YType::uint16, "range"},
    days{YType::uint32, "days"},
    hours{YType::uint32, "hours"},
    milli_seconds{YType::uint32, "milli-seconds"},
    minutes{YType::uint32, "minutes"},
    runs{YType::uint16, "runs"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "count"; yang_parent_name = "failure"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::~Count()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::has_data() const
{
    return range.is_set
	|| days.is_set
	|| hours.is_set
	|| milli_seconds.is_set
	|| minutes.is_set
	|| runs.is_set
	|| seconds.is_set;
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(milli_seconds.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(runs.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (milli_seconds.is_set || is_set(milli_seconds.yfilter)) leaf_name_data.push_back(milli_seconds.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (runs.is_set || is_set(runs.yfilter)) leaf_name_data.push_back(runs.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds = value;
        milli_seconds.value_namespace = name_space;
        milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runs")
    {
        runs = value;
        runs.value_namespace = name_space;
        runs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "runs")
    {
        runs.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "days" || name == "hours" || name == "milli-seconds" || name == "minutes" || name == "runs" || name == "seconds")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Schedule()
{

    yang_name = "schedule"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Schedule::~Schedule()
{
}

bool Native::Diagnostic::Schedule::has_data() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Schedule::has_operation() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Diagnostic::Schedule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        for(auto const & c : switch_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_>();
        c->parent = this;
        switch_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : switch_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Schedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Switch_()
    :
    switch_number{YType::uint8, "switch-number"}
    	,
    test(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test>())
{
    test->parent = this;

    yang_name = "switch"; yang_parent_name = "schedule"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Schedule::Switch_::~Switch_()
{
}

bool Native::Diagnostic::Schedule::Switch_::has_data() const
{
    return switch_number.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_number.yfilter)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/schedule/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Schedule::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[switch-number='" <<switch_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_number.is_set || is_set(switch_number.yfilter)) leaf_name_data.push_back(switch_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch-number")
    {
        switch_number = value;
        switch_number.value_namespace = name_space;
        switch_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch-number")
    {
        switch_number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "switch-number")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Test()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All>())
	,basic(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic>())
	,complete(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Complete>())
	,minimal(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Minimal>())
	,non_disruptive(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive>())
	,per_port(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort>())
{
    all->parent = this;
    basic->parent = this;
    complete->parent = this;
    minimal->parent = this;
    non_disruptive->parent = this;
    per_port->parent = this;

    yang_name = "test"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::~Test()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::has_data() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data())
	|| (basic !=  nullptr && basic->has_data())
	|| (complete !=  nullptr && complete->has_data())
	|| (minimal !=  nullptr && minimal->has_data())
	|| (non_disruptive !=  nullptr && non_disruptive->has_data())
	|| (per_port !=  nullptr && per_port->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::has_operation() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (basic !=  nullptr && basic->has_operation())
	|| (complete !=  nullptr && complete->has_operation())
	|| (minimal !=  nullptr && minimal->has_operation())
	|| (non_disruptive !=  nullptr && non_disruptive->has_operation())
	|| (per_port !=  nullptr && per_port->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All>();
        }
        return all;
    }

    if(child_yang_name == "basic")
    {
        if(basic == nullptr)
        {
            basic = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic>();
        }
        return basic;
    }

    if(child_yang_name == "complete")
    {
        if(complete == nullptr)
        {
            complete = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Complete>();
        }
        return complete;
    }

    if(child_yang_name == "minimal")
    {
        if(minimal == nullptr)
        {
            minimal = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Minimal>();
        }
        return minimal;
    }

    if(child_yang_name == "non-disruptive")
    {
        if(non_disruptive == nullptr)
        {
            non_disruptive = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive>();
        }
        return non_disruptive;
    }

    if(child_yang_name == "per-port")
    {
        if(per_port == nullptr)
        {
            per_port = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort>();
        }
        return per_port;
    }

    if(child_yang_name == "test-ids")
    {
        for(auto const & c : test_ids)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds>();
        c->parent = this;
        test_ids.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(basic != nullptr)
    {
        children["basic"] = basic;
    }

    if(complete != nullptr)
    {
        children["complete"] = complete;
    }

    if(minimal != nullptr)
    {
        children["minimal"] = minimal;
    }

    if(non_disruptive != nullptr)
    {
        children["non-disruptive"] = non_disruptive;
    }

    if(per_port != nullptr)
    {
        children["per-port"] = per_port;
    }

    for (auto const & c : test_ids)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "basic" || name == "complete" || name == "minimal" || name == "non-disruptive" || name == "per-port" || name == "test-ids")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::On>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    port->parent = this;
    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::On>();
        }
        return on;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port>();
        }
        return port;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "port" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_>();
        }
        return all;
    }

    if(child_yang_name == "interface-port-number")
    {
        for(auto const & c : interface_port_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        for(auto const & c : port_number_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    for (auto const & c : interface_port_number)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_number_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "interface-port-number" || name == "port-number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::All_()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::~All_()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_list.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.yfilter)) leaf_name_data.push_back(number_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-list")
    {
        number_list = value;
        number_list.value_namespace = name_space;
        number_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-list")
    {
        number_list.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Basic()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::On>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    port->parent = this;
    weekly->parent = this;

    yang_name = "basic"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::~Basic()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::On>();
        }
        return on;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port>();
        }
        return port;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "port" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "basic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "basic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "basic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All>();
        }
        return all;
    }

    if(child_yang_name == "interface-port-number")
    {
        for(auto const & c : interface_port_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        for(auto const & c : port_number_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    for (auto const & c : interface_port_number)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_number_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "interface-port-number" || name == "port-number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_list.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.yfilter)) leaf_name_data.push_back(number_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-list")
    {
        number_list = value;
        number_list.value_namespace = name_space;
        number_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-list")
    {
        number_list.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "basic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Complete::Complete()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Complete::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "complete"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Complete::~Complete()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Complete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "complete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Complete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Complete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Complete::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Complete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Complete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::Complete::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "complete"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Complete::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "complete"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Complete::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Complete::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Complete::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Complete::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Complete::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Complete::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Complete::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "complete"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Minimal::Minimal()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Minimal::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "minimal"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Minimal::~Minimal()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Minimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Minimal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Minimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Minimal::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Minimal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Minimal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::Minimal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "minimal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "minimal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "minimal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::NonDisruptive()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    port->parent = this;
    weekly->parent = this;

    yang_name = "non-disruptive"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::~NonDisruptive()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-disruptive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On>();
        }
        return on;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port>();
        }
        return port;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "port" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "non-disruptive"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "non-disruptive"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "non-disruptive"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All>();
        }
        return all;
    }

    if(child_yang_name == "interface-port-number")
    {
        for(auto const & c : interface_port_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        for(auto const & c : port_number_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    for (auto const & c : interface_port_number)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_number_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "interface-port-number" || name == "port-number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_list.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.yfilter)) leaf_name_data.push_back(number_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-list")
    {
        number_list = value;
        number_list.value_namespace = name_space;
        number_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-list")
    {
        number_list.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "non-disruptive"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::PerPort()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::On>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    port->parent = this;
    weekly->parent = this;

    yang_name = "per-port"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::~PerPort()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::On>();
        }
        return on;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port>();
        }
        return port;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "port" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "per-port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "per-port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "per-port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All>();
        }
        return all;
    }

    if(child_yang_name == "interface-port-number")
    {
        for(auto const & c : interface_port_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        for(auto const & c : port_number_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    for (auto const & c : interface_port_number)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_number_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "interface-port-number" || name == "port-number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_list.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.yfilter)) leaf_name_data.push_back(number_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-list")
    {
        number_list = value;
        number_list.value_namespace = name_space;
        number_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-list")
    {
        number_list.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "per-port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::TestIds()
    :
    id{YType::str, "id"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::On>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    port->parent = this;
    weekly->parent = this;

    yang_name = "test-ids"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::~TestIds()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::has_data() const
{
    return id.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test-ids" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::On>();
        }
        return on;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port>();
        }
        return port;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "port" || name == "weekly" || name == "id")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "test-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "test-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "test-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All>();
        }
        return all;
    }

    if(child_yang_name == "interface-port-number")
    {
        for(auto const & c : interface_port_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        for(auto const & c : port_number_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    for (auto const & c : interface_port_number)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_number_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "interface-port-number" || name == "port-number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_list.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.yfilter)) leaf_name_data.push_back(number_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-list")
    {
        number_list = value;
        number_list.value_namespace = name_space;
        number_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-list")
    {
        number_list.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

const Enum::YLeaf Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::PasswordType::default_ {0, "default"};
const Enum::YLeaf Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::PasswordType::none {1, "none"};

const Enum::YLeaf Native::Cts::Sxp::Default_::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Cts::Sxp::Default_::Password::Type::Y_6 {1, "6"};
const Enum::YLeaf Native::Cts::Sxp::Default_::Password::Type::Y_7 {2, "7"};

const Enum::YLeaf Native::DeviceTracking::Policy::Tracking::TrackingOnOff::enable {0, "enable"};
const Enum::YLeaf Native::DeviceTracking::Policy::Tracking::TrackingOnOff::disable {1, "disable"};

const Enum::YLeaf Native::Diagnostic::Bootup::Level::complete {0, "complete"};
const Enum::YLeaf Native::Diagnostic::Bootup::Level::minimal {1, "minimal"};


}
}

