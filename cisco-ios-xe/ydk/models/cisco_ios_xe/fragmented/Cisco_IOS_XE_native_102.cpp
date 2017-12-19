
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_102.hpp"
#include "Cisco_IOS_XE_native_103.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Cts::Sxp::Connection::Peer::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"}
    	,
    source(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source>())
{
    source->parent = this;

    yang_name = "ipv4"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::~Ipv4()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::has_data() const
{
    for (std::size_t index=0; index<password.size(); index++)
    {
        if(password[index]->has_data())
            return true;
    }
    return ipv4.is_set
	|| (source !=  nullptr && source->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<password.size(); index++)
    {
        if(password[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:sxp/connection/peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source>();
        }
        return source;
    }

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
        auto c = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password>();
        c->parent = this;
        password.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    for (auto const & c : password)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "password" || name == "ipv4")
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
    min_time{YType::uint16, "min-time"},
    max_time{YType::uint16, "max-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "listener"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::has_data() const
{
    return min_time.is_set
	|| max_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(max_time.yfilter)
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

    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (max_time.is_set || is_set(max_time.yfilter)) leaf_name_data.push_back(max_time.get_name_leafdata());
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
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-time")
    {
        max_time = value;
        max_time.value_namespace = name_space;
        max_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "max-time")
    {
        max_time.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-time" || name == "max-time" || name == "vrf")
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
    min_time{YType::uint16, "min-time"},
    max_time{YType::uint16, "max-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "speaker"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::has_data() const
{
    return min_time.is_set
	|| max_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(max_time.yfilter)
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

    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (max_time.is_set || is_set(max_time.yfilter)) leaf_name_data.push_back(max_time.get_name_leafdata());
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
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-time")
    {
        max_time = value;
        max_time.value_namespace = name_space;
        max_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "max-time")
    {
        max_time.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-time" || name == "max-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Password()
    :
    password_type{YType::enumeration, "password-type"}
    	,
    mode(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode>())
{
    mode->parent = this;

    yang_name = "password"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::~Password()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::has_data() const
{
    return password_type.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password_type.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password" <<"[password-type='" <<password_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password_type.is_set || is_set(password_type.yfilter)) leaf_name_data.push_back(password_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password-type")
    {
        password_type = value;
        password_type.value_namespace = name_space;
        password_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password-type")
    {
        password_type.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "password-type")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Mode()
    :
    local(nullptr) // presence node
	,peer(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::~Mode()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::has_data() const
{
    return (local !=  nullptr && local->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local>();
        }
        return local;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::get_children() const
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

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "peer")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Local()
    :
    both(nullptr) // presence node
	,listener(nullptr) // presence node
	,speaker(nullptr) // presence node
{

    yang_name = "local"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::~Local()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::has_data() const
{
    return (both !=  nullptr && both->has_data())
	|| (listener !=  nullptr && listener->has_data())
	|| (speaker !=  nullptr && speaker->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::has_operation() const
{
    return is_set(yfilter)
	|| (both !=  nullptr && both->has_operation())
	|| (listener !=  nullptr && listener->has_operation())
	|| (speaker !=  nullptr && speaker->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "both")
    {
        if(both == nullptr)
        {
            both = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both>();
        }
        return both;
    }

    if(child_yang_name == "listener")
    {
        if(listener == nullptr)
        {
            listener = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener>();
        }
        return listener;
    }

    if(child_yang_name == "speaker")
    {
        if(speaker == nullptr)
        {
            speaker = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker>();
        }
        return speaker;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::get_children() const
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

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "both" || name == "listener" || name == "speaker")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::Both()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "both"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::~Both()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::has_data() const
{
    return vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "both";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::Listener()
    :
    vrf{YType::str, "vrf"}
    	,
    hold_time(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime>())
{
    hold_time->parent = this;

    yang_name = "listener"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::~Listener()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::has_data() const
{
    return vrf.is_set
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listener";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::HoldTime()
    :
    min_time{YType::uint16, "min-time"},
    max_time{YType::uint16, "max-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "listener"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::has_data() const
{
    return min_time.is_set
	|| max_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(max_time.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (max_time.is_set || is_set(max_time.yfilter)) leaf_name_data.push_back(max_time.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-time")
    {
        max_time = value;
        max_time.value_namespace = name_space;
        max_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "max-time")
    {
        max_time.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-time" || name == "max-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::Speaker()
    :
    vrf{YType::str, "vrf"}
    	,
    hold_time(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime>())
{
    hold_time->parent = this;

    yang_name = "speaker"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::~Speaker()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::has_data() const
{
    return vrf.is_set
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "speaker";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::HoldTime()
    :
    min_time{YType::uint16, "min-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "speaker"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::has_data() const
{
    return min_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Peer_()
    :
    both(nullptr) // presence node
	,listener(nullptr) // presence node
	,speaker(nullptr) // presence node
{

    yang_name = "peer"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::~Peer_()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::has_data() const
{
    return (both !=  nullptr && both->has_data())
	|| (listener !=  nullptr && listener->has_data())
	|| (speaker !=  nullptr && speaker->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::has_operation() const
{
    return is_set(yfilter)
	|| (both !=  nullptr && both->has_operation())
	|| (listener !=  nullptr && listener->has_operation())
	|| (speaker !=  nullptr && speaker->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "both")
    {
        if(both == nullptr)
        {
            both = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both>();
        }
        return both;
    }

    if(child_yang_name == "listener")
    {
        if(listener == nullptr)
        {
            listener = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener>();
        }
        return listener;
    }

    if(child_yang_name == "speaker")
    {
        if(speaker == nullptr)
        {
            speaker = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker>();
        }
        return speaker;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::get_children() const
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

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "both" || name == "listener" || name == "speaker")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::Both()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "both"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::~Both()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::has_data() const
{
    return vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "both";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::Listener()
    :
    vrf{YType::str, "vrf"}
    	,
    hold_time(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime>())
{
    hold_time->parent = this;

    yang_name = "listener"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::~Listener()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::has_data() const
{
    return vrf.is_set
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listener";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::HoldTime()
    :
    min_time{YType::uint16, "min-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "listener"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::has_data() const
{
    return min_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::Speaker()
    :
    vrf{YType::str, "vrf"}
    	,
    hold_time(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime>())
{
    hold_time->parent = this;

    yang_name = "speaker"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::~Speaker()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::has_data() const
{
    return vrf.is_set
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "speaker";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::HoldTime()
    :
    min_time{YType::uint16, "min-time"},
    max_time{YType::uint16, "max-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "speaker"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::has_data() const
{
    return min_time.is_set
	|| max_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(max_time.yfilter)
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

    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (max_time.is_set || is_set(max_time.yfilter)) leaf_name_data.push_back(max_time.get_name_leafdata());
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
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-time")
    {
        max_time = value;
        max_time.value_namespace = name_space;
        max_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "max-time")
    {
        max_time.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-time" || name == "max-time" || name == "vrf")
        return true;
    return false;
}

Native::BfdTemplate::BfdTemplate()
{

    yang_name = "bfd-template"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BfdTemplate::~BfdTemplate()
{
}

bool Native::BfdTemplate::has_data() const
{
    for (std::size_t index=0; index<single_hop.size(); index++)
    {
        if(single_hop[index]->has_data())
            return true;
    }
    return false;
}

bool Native::BfdTemplate::has_operation() const
{
    for (std::size_t index=0; index<single_hop.size(); index++)
    {
        if(single_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::BfdTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BfdTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BfdTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BfdTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-bfd:single-hop")
    {
        for(auto const & c : single_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BfdTemplate::SingleHop>();
        c->parent = this;
        single_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BfdTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : single_hop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BfdTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BfdTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BfdTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "single-hop")
        return true;
    return false;
}

Native::BfdTemplate::SingleHop::SingleHop()
    :
    name{YType::str, "name"}
    	,
    interval(std::make_shared<Native::BfdTemplate::SingleHop::Interval>())
{
    interval->parent = this;

    yang_name = "single-hop"; yang_parent_name = "bfd-template"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BfdTemplate::SingleHop::~SingleHop()
{
}

bool Native::BfdTemplate::SingleHop::has_data() const
{
    return name.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::BfdTemplate::SingleHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::BfdTemplate::SingleHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd-template/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BfdTemplate::SingleHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bfd:single-hop" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BfdTemplate::SingleHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BfdTemplate::SingleHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::BfdTemplate::SingleHop::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BfdTemplate::SingleHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    return children;
}

void Native::BfdTemplate::SingleHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BfdTemplate::SingleHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::BfdTemplate::SingleHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "name")
        return true;
    return false;
}

Native::BfdTemplate::SingleHop::Interval::Interval()
    :
    microseconds{YType::empty, "microseconds"},
    both{YType::str, "both"},
    min_tx{YType::str, "min-tx"},
    min_rx{YType::str, "min-rx"},
    multiplier{YType::uint8, "multiplier"}
{

    yang_name = "interval"; yang_parent_name = "single-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BfdTemplate::SingleHop::Interval::~Interval()
{
}

bool Native::BfdTemplate::SingleHop::Interval::has_data() const
{
    return microseconds.is_set
	|| both.is_set
	|| min_tx.is_set
	|| min_rx.is_set
	|| multiplier.is_set;
}

bool Native::BfdTemplate::SingleHop::Interval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(microseconds.yfilter)
	|| ydk::is_set(both.yfilter)
	|| ydk::is_set(min_tx.yfilter)
	|| ydk::is_set(min_rx.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Native::BfdTemplate::SingleHop::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BfdTemplate::SingleHop::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microseconds.is_set || is_set(microseconds.yfilter)) leaf_name_data.push_back(microseconds.get_name_leafdata());
    if (both.is_set || is_set(both.yfilter)) leaf_name_data.push_back(both.get_name_leafdata());
    if (min_tx.is_set || is_set(min_tx.yfilter)) leaf_name_data.push_back(min_tx.get_name_leafdata());
    if (min_rx.is_set || is_set(min_rx.yfilter)) leaf_name_data.push_back(min_rx.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BfdTemplate::SingleHop::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BfdTemplate::SingleHop::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BfdTemplate::SingleHop::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microseconds")
    {
        microseconds = value;
        microseconds.value_namespace = name_space;
        microseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "both")
    {
        both = value;
        both.value_namespace = name_space;
        both.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-tx")
    {
        min_tx = value;
        min_tx.value_namespace = name_space;
        min_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-rx")
    {
        min_rx = value;
        min_rx.value_namespace = name_space;
        min_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BfdTemplate::SingleHop::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microseconds")
    {
        microseconds.yfilter = yfilter;
    }
    if(value_path == "both")
    {
        both.yfilter = yfilter;
    }
    if(value_path == "min-tx")
    {
        min_tx.yfilter = yfilter;
    }
    if(value_path == "min-rx")
    {
        min_rx.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool Native::BfdTemplate::SingleHop::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microseconds" || name == "both" || name == "min-tx" || name == "min-rx" || name == "multiplier")
        return true;
    return false;
}

Native::Pfr::Pfr()
    :
    border(nullptr) // presence node
	,master(nullptr) // presence node
{

    yang_name = "pfr"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::~Pfr()
{
}

bool Native::Pfr::has_data() const
{
    return (border !=  nullptr && border->has_data())
	|| (master !=  nullptr && master->has_data());
}

bool Native::Pfr::has_operation() const
{
    return is_set(yfilter)
	|| (border !=  nullptr && border->has_operation())
	|| (master !=  nullptr && master->has_operation());
}

std::string Native::Pfr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-pfr:border")
    {
        if(border == nullptr)
        {
            border = std::make_shared<Native::Pfr::Border>();
        }
        return border;
    }

    if(child_yang_name == "Cisco-IOS-XE-pfr:master")
    {
        if(master == nullptr)
        {
            master = std::make_shared<Native::Pfr::Master>();
        }
        return master;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(border != nullptr)
    {
        children["Cisco-IOS-XE-pfr:border"] = border;
    }

    if(master != nullptr)
    {
        children["Cisco-IOS-XE-pfr:master"] = master;
    }

    return children;
}

void Native::Pfr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "border" || name == "master")
        return true;
    return false;
}

Native::Pfr::Border::Border()
    :
    pfr_mode__config_pfr_br(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr>())
{
    pfr_mode__config_pfr_br->parent = this;

    yang_name = "border"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::~Border()
{
}

bool Native::Pfr::Border::has_data() const
{
    return (pfr_mode__config_pfr_br !=  nullptr && pfr_mode__config_pfr_br->has_data());
}

bool Native::Pfr::Border::has_operation() const
{
    return is_set(yfilter)
	|| (pfr_mode__config_pfr_br !=  nullptr && pfr_mode__config_pfr_br->has_operation());
}

std::string Native::Pfr::Border::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pfr:border";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfr-Mode__config-pfr-br")
    {
        if(pfr_mode__config_pfr_br == nullptr)
        {
            pfr_mode__config_pfr_br = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr>();
        }
        return pfr_mode__config_pfr_br;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pfr_mode__config_pfr_br != nullptr)
    {
        children["pfr-Mode__config-pfr-br"] = pfr_mode__config_pfr_br;
    }

    return children;
}

void Native::Pfr::Border::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Border::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Border::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfr-Mode__config-pfr-br")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::PfrModeConfigpfrbr()
    :
    logging{YType::empty, "logging"},
    port{YType::uint16, "port"},
    shutdown{YType::empty, "shutdown"}
    	,
    active_probe(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe>())
	,local(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local>())
	,master(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Master>())
{
    active_probe->parent = this;
    local->parent = this;
    master->parent = this;

    yang_name = "pfr-Mode__config-pfr-br"; yang_parent_name = "border"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::~PfrModeConfigpfrbr()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::has_data() const
{
    return logging.is_set
	|| port.is_set
	|| shutdown.is_set
	|| (active_probe !=  nullptr && active_probe->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (master !=  nullptr && master->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (active_probe !=  nullptr && active_probe->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (master !=  nullptr && master->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr-Mode__config-pfr-br";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-probe")
    {
        if(active_probe == nullptr)
        {
            active_probe = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe>();
        }
        return active_probe;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local>();
        }
        return local;
    }

    if(child_yang_name == "master")
    {
        if(master == nullptr)
        {
            master = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Master>();
        }
        return master;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_probe != nullptr)
    {
        children["active-probe"] = active_probe;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(master != nullptr)
    {
        children["master"] = master;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-probe" || name == "local" || name == "master" || name == "logging" || name == "port" || name == "shutdown")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::ActiveProbe()
    :
    address(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address>())
{
    address->parent = this;

    yang_name = "active-probe"; yang_parent_name = "pfr-Mode__config-pfr-br"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::~ActiveProbe()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Address()
    :
    source(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source>())
{
    source->parent = this;

    yang_name = "address"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::~Address()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Source()
    :
    interface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface>())
{
    interface->parent = this;

    yang_name = "source"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::~Source()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
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
    atm_subinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::~Interface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
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

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::has_operation() const
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
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
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

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/address/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::get_name_leaf_data() const
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
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
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

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
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

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
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

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/address/source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/address/source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/address/source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/address/source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Local()
    :
    interface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface>())
{
    interface->parent = this;

    yang_name = "local"; yang_parent_name = "pfr-Mode__config-pfr-br"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::~Local()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
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
    atm_subinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::~Interface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
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

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::has_operation() const
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
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
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

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/local/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::get_name_leaf_data() const
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
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
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

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
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

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
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

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/local/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/local/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/local/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/local/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Master::Master()
{

    yang_name = "master"; yang_parent_name = "pfr-Mode__config-pfr-br"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Master::~Master()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Master::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Master::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Master::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Master::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Master::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Master::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Master::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Master::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Master::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Master::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    key_chain{YType::str, "key-chain"}
{

    yang_name = "ipv4"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::~Ipv4()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::has_data() const
{
    return ipv4.is_set
	|| key_chain.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(key_chain.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/master/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "key-chain")
        return true;
    return false;
}

Native::Pfr::Master::Master()
    :
    icmp_mode_config_pfr_mc(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc>())
{
    icmp_mode_config_pfr_mc->parent = this;

    yang_name = "master"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::~Master()
{
}

bool Native::Pfr::Master::has_data() const
{
    return (icmp_mode_config_pfr_mc !=  nullptr && icmp_mode_config_pfr_mc->has_data());
}

bool Native::Pfr::Master::has_operation() const
{
    return is_set(yfilter)
	|| (icmp_mode_config_pfr_mc !=  nullptr && icmp_mode_config_pfr_mc->has_operation());
}

std::string Native::Pfr::Master::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pfr:master";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmp-Mode-config-pfr-mc")
    {
        if(icmp_mode_config_pfr_mc == nullptr)
        {
            icmp_mode_config_pfr_mc = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc>();
        }
        return icmp_mode_config_pfr_mc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(icmp_mode_config_pfr_mc != nullptr)
    {
        children["icmp-Mode-config-pfr-mc"] = icmp_mode_config_pfr_mc;
    }

    return children;
}

void Native::Pfr::Master::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp-Mode-config-pfr-mc")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::IcmpModeConfigPfrMc()
    :
    bandwidth_resolution{YType::empty, "bandwidth-resolution"},
    exporter{YType::str, "exporter"},
    holddown{YType::uint16, "holddown"},
    keepalive{YType::uint16, "keepalive"},
    logging{YType::empty, "logging"},
    periodic{YType::uint16, "periodic"},
    policy_rules{YType::str, "policy-rules"},
    port{YType::uint16, "port"},
    shutdown{YType::empty, "shutdown"},
    trigger_log_percentage{YType::uint8, "trigger-log-percentage"}
    	,
    active_probe(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe>())
	,application(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Application>())
	,backoff(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff>())
	,border(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Border>())
	,delay(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Delay>())
	,jitter(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter>())
	,learn(nullptr) // presence node
	,loss(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Loss>())
	,max(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max>())
	,max_range_utilization(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization>())
	,mc_peer(nullptr) // presence node
	,mode(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode>())
	,mos(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos>())
	,probe(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Probe>())
	,resolve(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve>())
	,rsvp(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp>())
	,target_discovery(nullptr) // presence node
	,traceroute(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute>())
	,unreachable(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable>())
{
    active_probe->parent = this;
    application->parent = this;
    backoff->parent = this;
    border->parent = this;
    delay->parent = this;
    jitter->parent = this;
    loss->parent = this;
    max->parent = this;
    max_range_utilization->parent = this;
    mode->parent = this;
    mos->parent = this;
    probe->parent = this;
    resolve->parent = this;
    rsvp->parent = this;
    traceroute->parent = this;
    unreachable->parent = this;

    yang_name = "icmp-Mode-config-pfr-mc"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::~IcmpModeConfigPfrMc()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::has_data() const
{
    return bandwidth_resolution.is_set
	|| exporter.is_set
	|| holddown.is_set
	|| keepalive.is_set
	|| logging.is_set
	|| periodic.is_set
	|| policy_rules.is_set
	|| port.is_set
	|| shutdown.is_set
	|| trigger_log_percentage.is_set
	|| (active_probe !=  nullptr && active_probe->has_data())
	|| (application !=  nullptr && application->has_data())
	|| (backoff !=  nullptr && backoff->has_data())
	|| (border !=  nullptr && border->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (jitter !=  nullptr && jitter->has_data())
	|| (learn !=  nullptr && learn->has_data())
	|| (loss !=  nullptr && loss->has_data())
	|| (max !=  nullptr && max->has_data())
	|| (max_range_utilization !=  nullptr && max_range_utilization->has_data())
	|| (mc_peer !=  nullptr && mc_peer->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (mos !=  nullptr && mos->has_data())
	|| (probe !=  nullptr && probe->has_data())
	|| (resolve !=  nullptr && resolve->has_data())
	|| (rsvp !=  nullptr && rsvp->has_data())
	|| (target_discovery !=  nullptr && target_discovery->has_data())
	|| (traceroute !=  nullptr && traceroute->has_data())
	|| (unreachable !=  nullptr && unreachable->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_resolution.yfilter)
	|| ydk::is_set(exporter.yfilter)
	|| ydk::is_set(holddown.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(periodic.yfilter)
	|| ydk::is_set(policy_rules.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trigger_log_percentage.yfilter)
	|| (active_probe !=  nullptr && active_probe->has_operation())
	|| (application !=  nullptr && application->has_operation())
	|| (backoff !=  nullptr && backoff->has_operation())
	|| (border !=  nullptr && border->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (jitter !=  nullptr && jitter->has_operation())
	|| (learn !=  nullptr && learn->has_operation())
	|| (loss !=  nullptr && loss->has_operation())
	|| (max !=  nullptr && max->has_operation())
	|| (max_range_utilization !=  nullptr && max_range_utilization->has_operation())
	|| (mc_peer !=  nullptr && mc_peer->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (mos !=  nullptr && mos->has_operation())
	|| (probe !=  nullptr && probe->has_operation())
	|| (resolve !=  nullptr && resolve->has_operation())
	|| (rsvp !=  nullptr && rsvp->has_operation())
	|| (target_discovery !=  nullptr && target_discovery->has_operation())
	|| (traceroute !=  nullptr && traceroute->has_operation())
	|| (unreachable !=  nullptr && unreachable->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-Mode-config-pfr-mc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_resolution.is_set || is_set(bandwidth_resolution.yfilter)) leaf_name_data.push_back(bandwidth_resolution.get_name_leafdata());
    if (exporter.is_set || is_set(exporter.yfilter)) leaf_name_data.push_back(exporter.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());
    if (policy_rules.is_set || is_set(policy_rules.yfilter)) leaf_name_data.push_back(policy_rules.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trigger_log_percentage.is_set || is_set(trigger_log_percentage.yfilter)) leaf_name_data.push_back(trigger_log_percentage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-probe")
    {
        if(active_probe == nullptr)
        {
            active_probe = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe>();
        }
        return active_probe;
    }

    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Application>();
        }
        return application;
    }

    if(child_yang_name == "backoff")
    {
        if(backoff == nullptr)
        {
            backoff = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff>();
        }
        return backoff;
    }

    if(child_yang_name == "border")
    {
        if(border == nullptr)
        {
            border = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Border>();
        }
        return border;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "jitter")
    {
        if(jitter == nullptr)
        {
            jitter = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter>();
        }
        return jitter;
    }

    if(child_yang_name == "learn")
    {
        if(learn == nullptr)
        {
            learn = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn>();
        }
        return learn;
    }

    if(child_yang_name == "loss")
    {
        if(loss == nullptr)
        {
            loss = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Loss>();
        }
        return loss;
    }

    if(child_yang_name == "max")
    {
        if(max == nullptr)
        {
            max = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max>();
        }
        return max;
    }

    if(child_yang_name == "max-range-utilization")
    {
        if(max_range_utilization == nullptr)
        {
            max_range_utilization = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization>();
        }
        return max_range_utilization;
    }

    if(child_yang_name == "mc-peer")
    {
        if(mc_peer == nullptr)
        {
            mc_peer = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer>();
        }
        return mc_peer;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "mos")
    {
        if(mos == nullptr)
        {
            mos = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos>();
        }
        return mos;
    }

    if(child_yang_name == "probe")
    {
        if(probe == nullptr)
        {
            probe = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Probe>();
        }
        return probe;
    }

    if(child_yang_name == "resolve")
    {
        if(resolve == nullptr)
        {
            resolve = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve>();
        }
        return resolve;
    }

    if(child_yang_name == "rsvp")
    {
        if(rsvp == nullptr)
        {
            rsvp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp>();
        }
        return rsvp;
    }

    if(child_yang_name == "target-discovery")
    {
        if(target_discovery == nullptr)
        {
            target_discovery = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery>();
        }
        return target_discovery;
    }

    if(child_yang_name == "traceroute")
    {
        if(traceroute == nullptr)
        {
            traceroute = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute>();
        }
        return traceroute;
    }

    if(child_yang_name == "unreachable")
    {
        if(unreachable == nullptr)
        {
            unreachable = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable>();
        }
        return unreachable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_probe != nullptr)
    {
        children["active-probe"] = active_probe;
    }

    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(backoff != nullptr)
    {
        children["backoff"] = backoff;
    }

    if(border != nullptr)
    {
        children["border"] = border;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(jitter != nullptr)
    {
        children["jitter"] = jitter;
    }

    if(learn != nullptr)
    {
        children["learn"] = learn;
    }

    if(loss != nullptr)
    {
        children["loss"] = loss;
    }

    if(max != nullptr)
    {
        children["max"] = max;
    }

    if(max_range_utilization != nullptr)
    {
        children["max-range-utilization"] = max_range_utilization;
    }

    if(mc_peer != nullptr)
    {
        children["mc-peer"] = mc_peer;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(mos != nullptr)
    {
        children["mos"] = mos;
    }

    if(probe != nullptr)
    {
        children["probe"] = probe;
    }

    if(resolve != nullptr)
    {
        children["resolve"] = resolve;
    }

    if(rsvp != nullptr)
    {
        children["rsvp"] = rsvp;
    }

    if(target_discovery != nullptr)
    {
        children["target-discovery"] = target_discovery;
    }

    if(traceroute != nullptr)
    {
        children["traceroute"] = traceroute;
    }

    if(unreachable != nullptr)
    {
        children["unreachable"] = unreachable;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-resolution")
    {
        bandwidth_resolution = value;
        bandwidth_resolution.value_namespace = name_space;
        bandwidth_resolution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exporter")
    {
        exporter = value;
        exporter.value_namespace = name_space;
        exporter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-rules")
    {
        policy_rules = value;
        policy_rules.value_namespace = name_space;
        policy_rules.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-log-percentage")
    {
        trigger_log_percentage = value;
        trigger_log_percentage.value_namespace = name_space;
        trigger_log_percentage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-resolution")
    {
        bandwidth_resolution.yfilter = yfilter;
    }
    if(value_path == "exporter")
    {
        exporter.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
    if(value_path == "policy-rules")
    {
        policy_rules.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trigger-log-percentage")
    {
        trigger_log_percentage.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-probe" || name == "application" || name == "backoff" || name == "border" || name == "delay" || name == "jitter" || name == "learn" || name == "loss" || name == "max" || name == "max-range-utilization" || name == "mc-peer" || name == "mode" || name == "mos" || name == "probe" || name == "resolve" || name == "rsvp" || name == "target-discovery" || name == "traceroute" || name == "unreachable" || name == "bandwidth-resolution" || name == "exporter" || name == "holddown" || name == "keepalive" || name == "logging" || name == "periodic" || name == "policy-rules" || name == "port" || name == "shutdown" || name == "trigger-log-percentage")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::ActiveProbe()
    :
    echo{YType::str, "echo"}
    	,
    jitter(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter>())
	,tcp_conn(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn>())
	,udp_echo(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho>())
{
    jitter->parent = this;
    tcp_conn->parent = this;
    udp_echo->parent = this;

    yang_name = "active-probe"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::~ActiveProbe()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::has_data() const
{
    return echo.is_set
	|| (jitter !=  nullptr && jitter->has_data())
	|| (tcp_conn !=  nullptr && tcp_conn->has_data())
	|| (udp_echo !=  nullptr && udp_echo->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(echo.yfilter)
	|| (jitter !=  nullptr && jitter->has_operation())
	|| (tcp_conn !=  nullptr && tcp_conn->has_operation())
	|| (udp_echo !=  nullptr && udp_echo->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (echo.is_set || is_set(echo.yfilter)) leaf_name_data.push_back(echo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "jitter")
    {
        if(jitter == nullptr)
        {
            jitter = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter>();
        }
        return jitter;
    }

    if(child_yang_name == "tcp-conn")
    {
        if(tcp_conn == nullptr)
        {
            tcp_conn = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn>();
        }
        return tcp_conn;
    }

    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho>();
        }
        return udp_echo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(jitter != nullptr)
    {
        children["jitter"] = jitter;
    }

    if(tcp_conn != nullptr)
    {
        children["tcp-conn"] = tcp_conn;
    }

    if(udp_echo != nullptr)
    {
        children["udp-echo"] = udp_echo;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "echo")
    {
        echo = value;
        echo.value_namespace = name_space;
        echo.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "echo")
    {
        echo.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jitter" || name == "tcp-conn" || name == "udp-echo" || name == "echo")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Jitter()
{

    yang_name = "jitter"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::~Jitter()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/active-probe/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::uint16, "target-port"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "jitter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/active-probe/jitter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::TcpConn()
{

    yang_name = "tcp-conn"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::~TcpConn()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/active-probe/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-conn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::uint16, "target-port"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "tcp-conn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/active-probe/tcp-conn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::UdpEcho()
{

    yang_name = "udp-echo"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::~UdpEcho()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/active-probe/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::uint16, "target-port"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "udp-echo"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/active-probe/udp-echo/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Application()
    :
    define(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define>())
{
    define->parent = this;

    yang_name = "application"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Application::~Application()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::has_data() const
{
    return (define !=  nullptr && define->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::has_operation() const
{
    return is_set(yfilter)
	|| (define !=  nullptr && define->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Application::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "define")
    {
        if(define == nullptr)
        {
            define = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define>();
        }
        return define;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(define != nullptr)
    {
        children["define"] = define;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "define")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::Define()
{

    yang_name = "define"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::~Define()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::has_data() const
{
    for (std::size_t index=0; index<app_def.size(); index++)
    {
        if(app_def[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::has_operation() const
{
    for (std::size_t index=0; index<app_def.size(); index++)
    {
        if(app_def[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/application/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "define";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "app-def")
    {
        for(auto const & c : app_def)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef>();
        c->parent = this;
        app_def.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : app_def)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-def")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::AppDef()
    :
    app_def{YType::str, "app-def"},
    access_list{YType::str, "access-list"},
    nbar{YType::empty, "nbar"}
{

    yang_name = "app-def"; yang_parent_name = "define"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::~AppDef()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::has_data() const
{
    return app_def.is_set
	|| access_list.is_set
	|| nbar.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_def.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(nbar.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/application/define/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-def" <<"[app-def='" <<app_def <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_def.is_set || is_set(app_def.yfilter)) leaf_name_data.push_back(app_def.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (nbar.is_set || is_set(nbar.yfilter)) leaf_name_data.push_back(nbar.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app-def")
    {
        app_def = value;
        app_def.value_namespace = name_space;
        app_def.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbar")
    {
        nbar = value;
        nbar.value_namespace = name_space;
        nbar.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app-def")
    {
        app_def.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "nbar")
    {
        nbar.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-def" || name == "access-list" || name == "nbar")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Backoff()
{

    yang_name = "backoff"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::~Backoff()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::has_data() const
{
    for (std::size_t index=0; index<boff.size(); index++)
    {
        if(boff[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::has_operation() const
{
    for (std::size_t index=0; index<boff.size(); index++)
    {
        if(boff[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boff")
    {
        for(auto const & c : boff)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff>();
        c->parent = this;
        boff.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : boff)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff()
    :
    boff{YType::uint16, "boff"}
{

    yang_name = "boff"; yang_parent_name = "backoff"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::~Boff()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::has_data() const
{
    for (std::size_t index=0; index<boff0.size(); index++)
    {
        if(boff0[index]->has_data())
            return true;
    }
    return boff.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::has_operation() const
{
    for (std::size_t index=0; index<boff0.size(); index++)
    {
        if(boff0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(boff.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/backoff/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boff" <<"[boff='" <<boff <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boff.is_set || is_set(boff.yfilter)) leaf_name_data.push_back(boff.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boff0")
    {
        for(auto const & c : boff0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0>();
        c->parent = this;
        boff0.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : boff0)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boff")
    {
        boff = value;
        boff.value_namespace = name_space;
        boff.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boff")
    {
        boff.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff0" || name == "boff")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::Boff0()
    :
    boff0{YType::uint16, "boff0"},
    bstep{YType::uint16, "bstep"}
{

    yang_name = "boff0"; yang_parent_name = "boff"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::~Boff0()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::has_data() const
{
    return boff0.is_set
	|| bstep.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boff0.yfilter)
	|| ydk::is_set(bstep.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boff0" <<"[boff0='" <<boff0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boff0.is_set || is_set(boff0.yfilter)) leaf_name_data.push_back(boff0.get_name_leafdata());
    if (bstep.is_set || is_set(bstep.yfilter)) leaf_name_data.push_back(bstep.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boff0")
    {
        boff0 = value;
        boff0.value_namespace = name_space;
        boff0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bstep")
    {
        bstep = value;
        bstep.value_namespace = name_space;
        bstep.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boff0")
    {
        boff0.yfilter = yfilter;
    }
    if(value_path == "bstep")
    {
        bstep.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff0" || name == "bstep")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Border()
{

    yang_name = "border"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::~Border()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    interface{YType::empty, "interface"}
{

    yang_name = "ipv4"; yang_parent_name = "border"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::~Ipv4()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::has_data() const
{
    for (std::size_t index=0; index<key_chain.size(); index++)
    {
        if(key_chain[index]->has_data())
            return true;
    }
    return ipv4.is_set
	|| interface.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<key_chain.size(); index++)
    {
        if(key_chain[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/border/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        for(auto const & c : key_chain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain>();
        c->parent = this;
        key_chain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key_chain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "ipv4" || name == "interface")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::KeyChain()
    :
    kc_name{YType::str, "kc-name"},
    interface{YType::empty, "interface"}
{

    yang_name = "key-chain"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::~KeyChain()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::has_data() const
{
    return kc_name.is_set
	|| interface.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kc_name.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain" <<"[kc-name='" <<kc_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kc_name.is_set || is_set(kc_name.yfilter)) leaf_name_data.push_back(kc_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kc-name")
    {
        kc_name = value;
        kc_name.value_namespace = name_space;
        kc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kc-name")
    {
        kc_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kc-name" || name == "interface")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::Delay()
    :
    relative{YType::uint16, "relative"},
    threshold{YType::uint16, "threshold"}
{

    yang_name = "delay"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::~Delay()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(relative.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relative" || name == "threshold")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::Jitter()
    :
    threshold{YType::uint16, "threshold"}
{

    yang_name = "jitter"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::~Jitter()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::has_data() const
{
    return threshold.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::Learn()
    :
    lrn_mode__config_pfr_mc_learn(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn>())
{
    lrn_mode__config_pfr_mc_learn->parent = this;

    yang_name = "learn"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::~Learn()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::has_data() const
{
    return (lrn_mode__config_pfr_mc_learn !=  nullptr && lrn_mode__config_pfr_mc_learn->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::has_operation() const
{
    return is_set(yfilter)
	|| (lrn_mode__config_pfr_mc_learn !=  nullptr && lrn_mode__config_pfr_mc_learn->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lrn-Mode__config-pfr-mc-learn")
    {
        if(lrn_mode__config_pfr_mc_learn == nullptr)
        {
            lrn_mode__config_pfr_mc_learn = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn>();
        }
        return lrn_mode__config_pfr_mc_learn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lrn_mode__config_pfr_mc_learn != nullptr)
    {
        children["lrn-Mode__config-pfr-mc-learn"] = lrn_mode__config_pfr_mc_learn;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lrn-Mode__config-pfr-mc-learn")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::LrnModeConfigpfrmclearn()
    :
    delay{YType::empty, "delay"},
    monitor_period{YType::uint16, "monitor-period"},
    periodic_interval{YType::uint16, "periodic-interval"},
    throughput{YType::empty, "throughput"}
    	,
    aggregation_type(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType>())
	,expire(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire>())
	,inside(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside>())
	,list(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List>())
	,prefixes(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes>())
	,traffic_class(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass>())
{
    aggregation_type->parent = this;
    expire->parent = this;
    inside->parent = this;
    list->parent = this;
    prefixes->parent = this;
    traffic_class->parent = this;

    yang_name = "lrn-Mode__config-pfr-mc-learn"; yang_parent_name = "learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::~LrnModeConfigpfrmclearn()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::has_data() const
{
    return delay.is_set
	|| monitor_period.is_set
	|| periodic_interval.is_set
	|| throughput.is_set
	|| (aggregation_type !=  nullptr && aggregation_type->has_data())
	|| (expire !=  nullptr && expire->has_data())
	|| (inside !=  nullptr && inside->has_data())
	|| (list !=  nullptr && list->has_data())
	|| (prefixes !=  nullptr && prefixes->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(monitor_period.yfilter)
	|| ydk::is_set(periodic_interval.yfilter)
	|| ydk::is_set(throughput.yfilter)
	|| (aggregation_type !=  nullptr && aggregation_type->has_operation())
	|| (expire !=  nullptr && expire->has_operation())
	|| (inside !=  nullptr && inside->has_operation())
	|| (list !=  nullptr && list->has_operation())
	|| (prefixes !=  nullptr && prefixes->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lrn-Mode__config-pfr-mc-learn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (monitor_period.is_set || is_set(monitor_period.yfilter)) leaf_name_data.push_back(monitor_period.get_name_leafdata());
    if (periodic_interval.is_set || is_set(periodic_interval.yfilter)) leaf_name_data.push_back(periodic_interval.get_name_leafdata());
    if (throughput.is_set || is_set(throughput.yfilter)) leaf_name_data.push_back(throughput.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregation-type")
    {
        if(aggregation_type == nullptr)
        {
            aggregation_type = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType>();
        }
        return aggregation_type;
    }

    if(child_yang_name == "expire")
    {
        if(expire == nullptr)
        {
            expire = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire>();
        }
        return expire;
    }

    if(child_yang_name == "inside")
    {
        if(inside == nullptr)
        {
            inside = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside>();
        }
        return inside;
    }

    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List>();
        }
        return list;
    }

    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes>();
        }
        return prefixes;
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class == nullptr)
        {
            traffic_class = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass>();
        }
        return traffic_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregation_type != nullptr)
    {
        children["aggregation-type"] = aggregation_type;
    }

    if(expire != nullptr)
    {
        children["expire"] = expire;
    }

    if(inside != nullptr)
    {
        children["inside"] = inside;
    }

    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(prefixes != nullptr)
    {
        children["prefixes"] = prefixes;
    }

    if(traffic_class != nullptr)
    {
        children["traffic-class"] = traffic_class;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor-period")
    {
        monitor_period = value;
        monitor_period.value_namespace = name_space;
        monitor_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval = value;
        periodic_interval.value_namespace = name_space;
        periodic_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throughput")
    {
        throughput = value;
        throughput.value_namespace = name_space;
        throughput.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "monitor-period")
    {
        monitor_period.yfilter = yfilter;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval.yfilter = yfilter;
    }
    if(value_path == "throughput")
    {
        throughput.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregation-type" || name == "expire" || name == "inside" || name == "list" || name == "prefixes" || name == "traffic-class" || name == "delay" || name == "monitor-period" || name == "periodic-interval" || name == "throughput")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::AggregationType()
    :
    bgp{YType::empty, "bgp"},
    non_bgp{YType::empty, "non-bgp"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "aggregation-type"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::~AggregationType()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::has_data() const
{
    return bgp.is_set
	|| non_bgp.is_set
	|| prefix_length.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter)
	|| ydk::is_set(non_bgp.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregation-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());
    if (non_bgp.is_set || is_set(non_bgp.yfilter)) leaf_name_data.push_back(non_bgp.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-bgp")
    {
        non_bgp = value;
        non_bgp.value_namespace = name_space;
        non_bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
    if(value_path == "non-bgp")
    {
        non_bgp.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "non-bgp" || name == "prefix-length")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::Expire()
    :
    after(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After>())
{
    after->parent = this;

    yang_name = "expire"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::~Expire()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::has_data() const
{
    return (after !=  nullptr && after->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::has_operation() const
{
    return is_set(yfilter)
	|| (after !=  nullptr && after->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "after")
    {
        if(after == nullptr)
        {
            after = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After>();
        }
        return after;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(after != nullptr)
    {
        children["after"] = after;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "after")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::After()
    :
    session{YType::uint16, "session"},
    time{YType::uint16, "time"}
{

    yang_name = "after"; yang_parent_name = "expire"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::~After()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::has_data() const
{
    return session.is_set
	|| time.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/expire/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "after";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "time")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::Inside()
    :
    bgp{YType::empty, "bgp"}
{

    yang_name = "inside"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::~Inside()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::has_data() const
{
    return bgp.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inside";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::List()
    :
    seq(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq>())
{
    seq->parent = this;

    yang_name = "list"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::~List()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::has_data() const
{
    return (seq !=  nullptr && seq->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::has_operation() const
{
    return is_set(yfilter)
	|| (seq !=  nullptr && seq->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq")
    {
        if(seq == nullptr)
        {
            seq = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq>();
        }
        return seq;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(seq != nullptr)
    {
        children["seq"] = seq;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::Seq()
{

    yang_name = "seq"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::~Seq()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::has_data() const
{
    for (std::size_t index=0; index<pfr_tc.size(); index++)
    {
        if(pfr_tc[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::has_operation() const
{
    for (std::size_t index=0; index<pfr_tc.size(); index++)
    {
        if(pfr_tc[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfr-tc")
    {
        for(auto const & c : pfr_tc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc>();
        c->parent = this;
        pfr_tc.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pfr_tc)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfr-tc")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::PfrTc()
    :
    pfr_tc{YType::uint16, "pfr-tc"},
    refname{YType::empty, "refname"}
{

    yang_name = "pfr-tc"; yang_parent_name = "seq"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::~PfrTc()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::has_data() const
{
    return pfr_tc.is_set
	|| refname.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfr_tc.yfilter)
	|| ydk::is_set(refname.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/list/seq/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr-tc" <<"[pfr-tc='" <<pfr_tc <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfr_tc.is_set || is_set(pfr_tc.yfilter)) leaf_name_data.push_back(pfr_tc.get_name_leafdata());
    if (refname.is_set || is_set(refname.yfilter)) leaf_name_data.push_back(refname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfr-tc")
    {
        pfr_tc = value;
        pfr_tc.value_namespace = name_space;
        pfr_tc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refname")
    {
        refname = value;
        refname.value_namespace = name_space;
        refname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfr-tc")
    {
        pfr_tc.yfilter = yfilter;
    }
    if(value_path == "refname")
    {
        refname.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfr-tc" || name == "refname")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prefixes()
{

    yang_name = "prefixes"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::~Prefixes()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::has_data() const
{
    for (std::size_t index=0; index<prnum.size(); index++)
    {
        if(prnum[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prnum.size(); index++)
    {
        if(prnum[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prnum")
    {
        for(auto const & c : prnum)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum>();
        c->parent = this;
        prnum.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prnum)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prnum")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::Prnum()
    :
    prnum{YType::uint32, "prnum"},
    applications{YType::uint16, "applications"}
{

    yang_name = "prnum"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::~Prnum()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::has_data() const
{
    return prnum.is_set
	|| applications.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prnum.yfilter)
	|| ydk::is_set(applications.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prnum" <<"[prnum='" <<prnum <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prnum.is_set || is_set(prnum.yfilter)) leaf_name_data.push_back(prnum.get_name_leafdata());
    if (applications.is_set || is_set(applications.yfilter)) leaf_name_data.push_back(applications.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prnum")
    {
        prnum = value;
        prnum.value_namespace = name_space;
        prnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "applications")
    {
        applications = value;
        applications.value_namespace = name_space;
        applications.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prnum")
    {
        prnum.yfilter = yfilter;
    }
    if(value_path == "applications")
    {
        applications.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prnum" || name == "applications")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::TrafficClass()
    :
    aggregate(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate>())
	,filter(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter>())
	,keys(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys>())
{
    aggregate->parent = this;
    filter->parent = this;
    keys->parent = this;

    yang_name = "traffic-class"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::~TrafficClass()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::has_data() const
{
    return (aggregate !=  nullptr && aggregate->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (keys !=  nullptr && keys->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| (aggregate !=  nullptr && aggregate->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (keys !=  nullptr && keys->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate")
    {
        if(aggregate == nullptr)
        {
            aggregate = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate>();
        }
        return aggregate;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "keys")
    {
        if(keys == nullptr)
        {
            keys = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys>();
        }
        return keys;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregate != nullptr)
    {
        children["aggregate"] = aggregate;
    }

    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    if(keys != nullptr)
    {
        children["keys"] = keys;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate" || name == "filter" || name == "keys")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::Aggregate()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "aggregate"; yang_parent_name = "traffic-class"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::~Aggregate()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::has_data() const
{
    return access_list.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::Filter()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "filter"; yang_parent_name = "traffic-class"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::~Filter()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::has_data() const
{
    return access_list.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Keys()
    :
    dport(nullptr) // presence node
	,dscp(nullptr) // presence node
	,protocol(nullptr) // presence node
	,sport(nullptr) // presence node
{

    yang_name = "keys"; yang_parent_name = "traffic-class"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::~Keys()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::has_data() const
{
    return (dport !=  nullptr && dport->has_data())
	|| (dscp !=  nullptr && dscp->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (sport !=  nullptr && sport->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::has_operation() const
{
    return is_set(yfilter)
	|| (dport !=  nullptr && dport->has_operation())
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (sport !=  nullptr && sport->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keys";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dport")
    {
        if(dport == nullptr)
        {
            dport = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport>();
        }
        return dport;
    }

    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "sport")
    {
        if(sport == nullptr)
        {
            sport = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport>();
        }
        return sport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dport != nullptr)
    {
        children["dport"] = dport;
    }

    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(sport != nullptr)
    {
        children["sport"] = sport;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dport" || name == "dscp" || name == "protocol" || name == "sport")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::Dport()
    :
    dscp{YType::empty, "dscp"},
    protocol{YType::empty, "protocol"},
    sport{YType::empty, "sport"}
{

    yang_name = "dport"; yang_parent_name = "keys"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::~Dport()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::has_data() const
{
    return dscp.is_set
	|| protocol.is_set
	|| sport.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(sport.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (sport.is_set || is_set(sport.yfilter)) leaf_name_data.push_back(sport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sport")
    {
        sport = value;
        sport.value_namespace = name_space;
        sport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "sport")
    {
        sport.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "protocol" || name == "sport")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::Dscp()
    :
    dport{YType::empty, "dport"},
    protocol{YType::empty, "protocol"},
    sport{YType::empty, "sport"}
{

    yang_name = "dscp"; yang_parent_name = "keys"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::~Dscp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::has_data() const
{
    return dport.is_set
	|| protocol.is_set
	|| sport.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dport.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(sport.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dport.is_set || is_set(dport.yfilter)) leaf_name_data.push_back(dport.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (sport.is_set || is_set(sport.yfilter)) leaf_name_data.push_back(sport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dport")
    {
        dport = value;
        dport.value_namespace = name_space;
        dport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sport")
    {
        sport = value;
        sport.value_namespace = name_space;
        sport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dport")
    {
        dport.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "sport")
    {
        sport.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dport" || name == "protocol" || name == "sport")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Protocol()
    :
    dport{YType::empty, "dport"},
    dscp{YType::empty, "dscp"}
    	,
    sport(nullptr) // presence node
{

    yang_name = "protocol"; yang_parent_name = "keys"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::~Protocol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::has_data() const
{
    return dport.is_set
	|| dscp.is_set
	|| (sport !=  nullptr && sport->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dport.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (sport !=  nullptr && sport->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dport.is_set || is_set(dport.yfilter)) leaf_name_data.push_back(dport.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sport")
    {
        if(sport == nullptr)
        {
            sport = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport>();
        }
        return sport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sport != nullptr)
    {
        children["sport"] = sport;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dport")
    {
        dport = value;
        dport.value_namespace = name_space;
        dport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dport")
    {
        dport.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sport" || name == "dport" || name == "dscp")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::Sport()
    :
    dport{YType::empty, "dport"},
    dscp{YType::empty, "dscp"}
{

    yang_name = "sport"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::~Sport()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::has_data() const
{
    return dport.is_set
	|| dscp.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dport.yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dport.is_set || is_set(dport.yfilter)) leaf_name_data.push_back(dport.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dport")
    {
        dport = value;
        dport.value_namespace = name_space;
        dport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dport")
    {
        dport.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dport" || name == "dscp")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::Sport()
    :
    dport{YType::empty, "dport"},
    dscp{YType::empty, "dscp"},
    protocol{YType::empty, "protocol"}
{

    yang_name = "sport"; yang_parent_name = "keys"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::~Sport()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::has_data() const
{
    return dport.is_set
	|| dscp.is_set
	|| protocol.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dport.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dport.is_set || is_set(dport.yfilter)) leaf_name_data.push_back(dport.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dport")
    {
        dport = value;
        dport.value_namespace = name_space;
        dport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dport")
    {
        dport.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dport" || name == "dscp" || name == "protocol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::Loss()
    :
    relative{YType::uint16, "relative"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "loss"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::~Loss()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(relative.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relative" || name == "threshold")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Max()
    :
    prefix(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix>())
	,range(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range>())
{
    prefix->parent = this;
    range->parent = this;

    yang_name = "max"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::~Max()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::has_data() const
{
    return (prefix !=  nullptr && prefix->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::has_operation() const
{
    return is_set(yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Max::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "range")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Prefix()
    :
    total(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total>())
{
    total->parent = this;

    yang_name = "prefix"; yang_parent_name = "max"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::~Prefix()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::has_data() const
{
    return (total !=  nullptr && total->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (total !=  nullptr && total->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(total != nullptr)
    {
        children["total"] = total;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Total()
{

    yang_name = "total"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::~Total()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::has_data() const
{
    for (std::size_t index=0; index<maxpr.size(); index++)
    {
        if(maxpr[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::has_operation() const
{
    for (std::size_t index=0; index<maxpr.size(); index++)
    {
        if(maxpr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maxpr")
    {
        for(auto const & c : maxpr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr>();
        c->parent = this;
        maxpr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : maxpr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxpr")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::Maxpr()
    :
    maxpr{YType::uint32, "maxpr"},
    learn{YType::uint32, "learn"}
{

    yang_name = "maxpr"; yang_parent_name = "total"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::~Maxpr()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::has_data() const
{
    return maxpr.is_set
	|| learn.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxpr.yfilter)
	|| ydk::is_set(learn.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/prefix/total/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maxpr" <<"[maxpr='" <<maxpr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxpr.is_set || is_set(maxpr.yfilter)) leaf_name_data.push_back(maxpr.get_name_leafdata());
    if (learn.is_set || is_set(learn.yfilter)) leaf_name_data.push_back(learn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxpr")
    {
        maxpr = value;
        maxpr.value_namespace = name_space;
        maxpr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn")
    {
        learn = value;
        learn.value_namespace = name_space;
        learn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxpr")
    {
        maxpr.yfilter = yfilter;
    }
    if(value_path == "learn")
    {
        learn.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxpr" || name == "learn")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Range()
    :
    receive(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive>())
{
    receive->parent = this;

    yang_name = "range"; yang_parent_name = "max"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::~Range()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::has_data() const
{
    return (receive !=  nullptr && receive->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::has_operation() const
{
    return is_set(yfilter)
	|| (receive !=  nullptr && receive->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive>();
        }
        return receive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::Receive()
    :
    percent{YType::uint8, "percent"}
{

    yang_name = "receive"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::~Receive()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::has_data() const
{
    return percent.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/range/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::MaxRangeUtilization()
    :
    percent{YType::uint8, "percent"}
{

    yang_name = "max-range-utilization"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::~MaxRangeUtilization()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::has_data() const
{
    return percent.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-range-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::McPeer()
    :
    description{YType::str, "description"}
    	,
    domain(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain>())
	,eigrp(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp>())
	,head_end(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd>())
{
    domain->parent = this;
    eigrp->parent = this;
    head_end->parent = this;

    yang_name = "mc-peer"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::~McPeer()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return description.is_set
	|| (domain !=  nullptr && domain->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (head_end !=  nullptr && head_end->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (domain !=  nullptr && domain->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (head_end !=  nullptr && head_end->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mc-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "head-end")
    {
        if(head_end == nullptr)
        {
            head_end = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd>();
        }
        return head_end;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(head_end != nullptr)
    {
        children["head-end"] = head_end;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "domain" || name == "eigrp" || name == "head-end" || name == "description")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "ipv4"; yang_parent_name = "mc-peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::~Ipv4()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return ipv4.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ipv4")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::Interface()
    :
    interface{YType::str, "interface"},
    description{YType::str, "description"},
    domain{YType::uint16, "domain"}
{

    yang_name = "interface"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::~Interface()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::has_data() const
{
    return interface.is_set
	|| description.is_set
	|| domain.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "description" || name == "domain")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Domain()
{

    yang_name = "domain"; yang_parent_name = "mc-peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::~Domain()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::has_data() const
{
    for (std::size_t index=0; index<dmval.size(); index++)
    {
        if(dmval[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::has_operation() const
{
    for (std::size_t index=0; index<dmval.size(); index++)
    {
        if(dmval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dmval")
    {
        for(auto const & c : dmval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval>();
        c->parent = this;
        dmval.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dmval)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmval")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Dmval()
    :
    dmval{YType::uint16, "dmval"},
    description{YType::str, "description"},
    eigrp{YType::str, "eigrp"},
    head_end{YType::str, "head-end"}
{

    yang_name = "dmval"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::~Dmval()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return dmval.is_set
	|| description.is_set
	|| eigrp.is_set
	|| head_end.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dmval.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(head_end.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmval" <<"[dmval='" <<dmval <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmval.is_set || is_set(dmval.yfilter)) leaf_name_data.push_back(dmval.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (head_end.is_set || is_set(head_end.yfilter)) leaf_name_data.push_back(head_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dmval")
    {
        dmval = value;
        dmval.value_namespace = name_space;
        dmval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "head-end")
    {
        head_end = value;
        head_end.value_namespace = name_space;
        head_end.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dmval")
    {
        dmval.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "head-end")
    {
        head_end.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "dmval" || name == "description" || name == "eigrp" || name == "head-end")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    interface{YType::str, "interface"}
{

    yang_name = "ipv4"; yang_parent_name = "dmval"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::~Ipv4()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::has_data() const
{
    return ipv4.is_set
	|| interface.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "interface")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Eigrp()
{

    yang_name = "eigrp"; yang_parent_name = "mc-peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::~Eigrp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::Interface()
    :
    interface{YType::str, "interface"},
    description{YType::str, "description"},
    domain{YType::uint16, "domain"}
{

    yang_name = "interface"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::~Interface()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::has_data() const
{
    return interface.is_set
	|| description.is_set
	|| domain.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/eigrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "description" || name == "domain")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::HeadEnd()
{

    yang_name = "head-end"; yang_parent_name = "mc-peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::~HeadEnd()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-end";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::Interface()
    :
    interface{YType::str, "interface"},
    description{YType::str, "description"},
    domain{YType::uint16, "domain"}
{

    yang_name = "interface"; yang_parent_name = "head-end"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::~Interface()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::has_data() const
{
    return interface.is_set
	|| description.is_set
	|| domain.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/head-end/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "description" || name == "domain")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Mode()
    :
    monitor(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor>())
	,route(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route>())
	,verify(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify>())
{
    monitor->parent = this;
    route->parent = this;
    verify->parent = this;

    yang_name = "mode"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::~Mode()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::has_data() const
{
    return (monitor !=  nullptr && monitor->has_data())
	|| (route !=  nullptr && route->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (route !=  nullptr && route->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route>();
        }
        return route;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor" || name == "route" || name == "verify")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Monitor()
    :
    both{YType::empty, "both"},
    fast{YType::empty, "fast"},
    passive{YType::empty, "passive"}
    	,
    active(nullptr) // presence node
{

    yang_name = "monitor"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::~Monitor()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::has_data() const
{
    return both.is_set
	|| fast.is_set
	|| passive.is_set
	|| (active !=  nullptr && active->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(both.yfilter)
	|| ydk::is_set(fast.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| (active !=  nullptr && active->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (both.is_set || is_set(both.yfilter)) leaf_name_data.push_back(both.get_name_leafdata());
    if (fast.is_set || is_set(fast.yfilter)) leaf_name_data.push_back(fast.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "both")
    {
        both = value;
        both.value_namespace = name_space;
        both.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast")
    {
        fast = value;
        fast.value_namespace = name_space;
        fast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "both")
    {
        both.yfilter = yfilter;
    }
    if(value_path == "fast")
    {
        fast.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "both" || name == "fast" || name == "passive")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::Active()
    :
    throughput{YType::empty, "throughput"}
{

    yang_name = "active"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::~Active()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::has_data() const
{
    return throughput.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(throughput.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (throughput.is_set || is_set(throughput.yfilter)) leaf_name_data.push_back(throughput.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "throughput")
    {
        throughput = value;
        throughput.value_namespace = name_space;
        throughput.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "throughput")
    {
        throughput.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throughput")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Route()
    :
    control{YType::empty, "control"},
    observe{YType::empty, "observe"}
    	,
    metric(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric>())
	,protocol(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol>())
{
    metric->parent = this;
    protocol->parent = this;

    yang_name = "route"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::~Route()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::has_data() const
{
    return control.is_set
	|| observe.is_set
	|| (metric !=  nullptr && metric->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control.yfilter)
	|| ydk::is_set(observe.yfilter)
	|| (metric !=  nullptr && metric->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control.is_set || is_set(control.yfilter)) leaf_name_data.push_back(control.get_name_leafdata());
    if (observe.is_set || is_set(observe.yfilter)) leaf_name_data.push_back(observe.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control")
    {
        control = value;
        control.value_namespace = name_space;
        control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "observe")
    {
        observe = value;
        observe.value_namespace = name_space;
        observe.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control")
    {
        control.yfilter = yfilter;
    }
    if(value_path == "observe")
    {
        observe.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "protocol" || name == "control" || name == "observe")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Metric()
    :
    bgp(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp>())
	,eigrp(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp>())
	,static_(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_>())
{
    bgp->parent = this;
    eigrp->parent = this;
    static_->parent = this;

    yang_name = "metric"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::~Metric()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "eigrp" || name == "static")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::Bgp()
    :
    local_pref{YType::uint16, "local-pref"}
{

    yang_name = "bgp"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::~Bgp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::has_data() const
{
    return local_pref.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_pref.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/metric/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-pref")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::Eigrp()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "eigrp"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::~Eigrp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::has_data() const
{
    return tag.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/metric/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::Static_()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "static"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::~Static_()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::has_data() const
{
    return tag.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/metric/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::Protocol()
    :
    pbr{YType::empty, "pbr"}
{

    yang_name = "protocol"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::~Protocol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::has_data() const
{
    return pbr.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbr.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbr.is_set || is_set(pbr.yfilter)) leaf_name_data.push_back(pbr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbr")
    {
        pbr = value;
        pbr.value_namespace = name_space;
        pbr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbr")
    {
        pbr.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbr")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::Verify()
    :
    bidirectional{YType::empty, "bidirectional"}
{

    yang_name = "verify"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::~Verify()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::has_data() const
{
    return bidirectional.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bidirectional.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bidirectional.is_set || is_set(bidirectional.yfilter)) leaf_name_data.push_back(bidirectional.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bidirectional")
    {
        bidirectional = value;
        bidirectional.value_namespace = name_space;
        bidirectional.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bidirectional")
    {
        bidirectional.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidirectional")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Mos()
    :
    threshold(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold>())
{
    threshold->parent = this;

    yang_name = "mos"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::~Mos()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::Threshold()
{

    yang_name = "threshold"; yang_parent_name = "mos"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::~Threshold()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::has_data() const
{
    for (std::size_t index=0; index<mos_thresh.size(); index++)
    {
        if(mos_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::has_operation() const
{
    for (std::size_t index=0; index<mos_thresh.size(); index++)
    {
        if(mos_thresh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mos-thresh")
    {
        for(auto const & c : mos_thresh)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh>();
        c->parent = this;
        mos_thresh.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mos_thresh)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mos-thresh")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::MosThresh()
    :
    mos_thresh{YType::str, "mos-thresh"},
    percent{YType::uint8, "percent"}
{

    yang_name = "mos-thresh"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::~MosThresh()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::has_data() const
{
    return mos_thresh.is_set
	|| percent.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mos_thresh.yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mos/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos-thresh" <<"[mos-thresh='" <<mos_thresh <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mos_thresh.is_set || is_set(mos_thresh.yfilter)) leaf_name_data.push_back(mos_thresh.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mos-thresh")
    {
        mos_thresh = value;
        mos_thresh.value_namespace = name_space;
        mos_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mos-thresh")
    {
        mos_thresh.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mos-thresh" || name == "percent")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::Probe()
    :
    packets{YType::uint8, "packets"}
{

    yang_name = "probe"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::~Probe()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::has_data() const
{
    return packets.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Resolve()
    :
    cost{YType::empty, "cost"},
    equivalent_path_round_robin{YType::empty, "equivalent-path-round-robin"}
    	,
    delay(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay>())
	,jitter(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter>())
	,loss(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss>())
	,mos(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos>())
{
    delay->parent = this;
    jitter->parent = this;
    loss->parent = this;
    mos->parent = this;

    yang_name = "resolve"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::~Resolve()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::has_data() const
{
    return cost.is_set
	|| equivalent_path_round_robin.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (jitter !=  nullptr && jitter->has_data())
	|| (loss !=  nullptr && loss->has_data())
	|| (mos !=  nullptr && mos->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(equivalent_path_round_robin.yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (jitter !=  nullptr && jitter->has_operation())
	|| (loss !=  nullptr && loss->has_operation())
	|| (mos !=  nullptr && mos->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resolve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (equivalent_path_round_robin.is_set || is_set(equivalent_path_round_robin.yfilter)) leaf_name_data.push_back(equivalent_path_round_robin.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "jitter")
    {
        if(jitter == nullptr)
        {
            jitter = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter>();
        }
        return jitter;
    }

    if(child_yang_name == "loss")
    {
        if(loss == nullptr)
        {
            loss = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss>();
        }
        return loss;
    }

    if(child_yang_name == "mos")
    {
        if(mos == nullptr)
        {
            mos = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos>();
        }
        return mos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(jitter != nullptr)
    {
        children["jitter"] = jitter;
    }

    if(loss != nullptr)
    {
        children["loss"] = loss;
    }

    if(mos != nullptr)
    {
        children["mos"] = mos;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "equivalent-path-round-robin")
    {
        equivalent_path_round_robin = value;
        equivalent_path_round_robin.value_namespace = name_space;
        equivalent_path_round_robin.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "equivalent-path-round-robin")
    {
        equivalent_path_round_robin.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "jitter" || name == "loss" || name == "mos" || name == "cost" || name == "equivalent-path-round-robin")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Delay()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority>())
{
    priority->parent = this;

    yang_name = "delay"; yang_parent_name = "resolve"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::~Delay()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::Priority()
{

    yang_name = "priority"; yang_parent_name = "delay"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::has_data() const
{
    for (std::size_t index=0; index<del_pol.size(); index++)
    {
        if(del_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::has_operation() const
{
    for (std::size_t index=0; index<del_pol.size(); index++)
    {
        if(del_pol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/delay/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "del-pol")
    {
        for(auto const & c : del_pol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol>();
        c->parent = this;
        del_pol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : del_pol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "del-pol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::DelPol()
    :
    del_pol{YType::uint8, "del-pol"},
    variance{YType::uint8, "variance"}
{

    yang_name = "del-pol"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::~DelPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::has_data() const
{
    return del_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(del_pol.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/delay/priority/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "del-pol" <<"[del-pol='" <<del_pol <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (del_pol.is_set || is_set(del_pol.yfilter)) leaf_name_data.push_back(del_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "del-pol")
    {
        del_pol = value;
        del_pol.value_namespace = name_space;
        del_pol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "del-pol")
    {
        del_pol.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "del-pol" || name == "variance")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Jitter()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority>())
{
    priority->parent = this;

    yang_name = "jitter"; yang_parent_name = "resolve"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::~Jitter()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::Priority()
{

    yang_name = "priority"; yang_parent_name = "jitter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::has_data() const
{
    for (std::size_t index=0; index<jit_pol.size(); index++)
    {
        if(jit_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::has_operation() const
{
    for (std::size_t index=0; index<jit_pol.size(); index++)
    {
        if(jit_pol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/jitter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "jit-pol")
    {
        for(auto const & c : jit_pol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol>();
        c->parent = this;
        jit_pol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : jit_pol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jit-pol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::JitPol()
    :
    jit_pol{YType::uint8, "jit-pol"},
    variance{YType::uint8, "variance"}
{

    yang_name = "jit-pol"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::~JitPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::has_data() const
{
    return jit_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(jit_pol.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/jitter/priority/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jit-pol" <<"[jit-pol='" <<jit_pol <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (jit_pol.is_set || is_set(jit_pol.yfilter)) leaf_name_data.push_back(jit_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "jit-pol")
    {
        jit_pol = value;
        jit_pol.value_namespace = name_space;
        jit_pol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "jit-pol")
    {
        jit_pol.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jit-pol" || name == "variance")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Loss()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority>())
{
    priority->parent = this;

    yang_name = "loss"; yang_parent_name = "resolve"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::~Loss()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::Priority()
{

    yang_name = "priority"; yang_parent_name = "loss"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::has_data() const
{
    for (std::size_t index=0; index<loss_pol.size(); index++)
    {
        if(loss_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::has_operation() const
{
    for (std::size_t index=0; index<loss_pol.size(); index++)
    {
        if(loss_pol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/loss/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loss-pol")
    {
        for(auto const & c : loss_pol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol>();
        c->parent = this;
        loss_pol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : loss_pol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loss-pol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::LossPol()
    :
    loss_pol{YType::uint8, "loss-pol"},
    variance{YType::uint8, "variance"}
{

    yang_name = "loss-pol"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::~LossPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::has_data() const
{
    return loss_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loss_pol.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/loss/priority/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss-pol" <<"[loss-pol='" <<loss_pol <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loss_pol.is_set || is_set(loss_pol.yfilter)) leaf_name_data.push_back(loss_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loss-pol")
    {
        loss_pol = value;
        loss_pol.value_namespace = name_space;
        loss_pol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loss-pol")
    {
        loss_pol.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loss-pol" || name == "variance")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Mos()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority>())
{
    priority->parent = this;

    yang_name = "mos"; yang_parent_name = "resolve"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::~Mos()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::Priority()
{

    yang_name = "priority"; yang_parent_name = "mos"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::has_data() const
{
    for (std::size_t index=0; index<mos_pol.size(); index++)
    {
        if(mos_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::has_operation() const
{
    for (std::size_t index=0; index<mos_pol.size(); index++)
    {
        if(mos_pol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/mos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mos-pol")
    {
        for(auto const & c : mos_pol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol>();
        c->parent = this;
        mos_pol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mos_pol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mos-pol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::MosPol()
    :
    mos_pol{YType::uint8, "mos-pol"},
    variance{YType::uint8, "variance"}
{

    yang_name = "mos-pol"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::~MosPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::has_data() const
{
    return mos_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mos_pol.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/mos/priority/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos-pol" <<"[mos-pol='" <<mos_pol <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mos_pol.is_set || is_set(mos_pol.yfilter)) leaf_name_data.push_back(mos_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mos-pol")
    {
        mos_pol = value;
        mos_pol.value_namespace = name_space;
        mos_pol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mos-pol")
    {
        mos_pol.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mos-pol" || name == "variance")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::Rsvp()
    :
    post_dial_delay{YType::uint16, "post-dial-delay"},
    signaling_retries{YType::uint8, "signaling-retries"}
{

    yang_name = "rsvp"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::~Rsvp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::has_data() const
{
    return post_dial_delay.is_set
	|| signaling_retries.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(post_dial_delay.yfilter)
	|| ydk::is_set(signaling_retries.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (post_dial_delay.is_set || is_set(post_dial_delay.yfilter)) leaf_name_data.push_back(post_dial_delay.get_name_leafdata());
    if (signaling_retries.is_set || is_set(signaling_retries.yfilter)) leaf_name_data.push_back(signaling_retries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "post-dial-delay")
    {
        post_dial_delay = value;
        post_dial_delay.value_namespace = name_space;
        post_dial_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-retries")
    {
        signaling_retries = value;
        signaling_retries.value_namespace = name_space;
        signaling_retries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "post-dial-delay")
    {
        post_dial_delay.yfilter = yfilter;
    }
    if(value_path == "signaling-retries")
    {
        signaling_retries.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "post-dial-delay" || name == "signaling-retries")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::TargetDiscovery()
    :
    responder_list(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList>())
{
    responder_list->parent = this;

    yang_name = "target-discovery"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::~TargetDiscovery()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::has_data() const
{
    return (responder_list !=  nullptr && responder_list->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| (responder_list !=  nullptr && responder_list->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "responder-list")
    {
        if(responder_list == nullptr)
        {
            responder_list = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList>();
        }
        return responder_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(responder_list != nullptr)
    {
        children["responder-list"] = responder_list;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "responder-list")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::ResponderList()
{

    yang_name = "responder-list"; yang_parent_name = "target-discovery"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::~ResponderList()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::has_data() const
{
    for (std::size_t index=0; index<td_num.size(); index++)
    {
        if(td_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::has_operation() const
{
    for (std::size_t index=0; index<td_num.size(); index++)
    {
        if(td_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/target-discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "responder-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "td-num")
    {
        for(auto const & c : td_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum>();
        c->parent = this;
        td_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : td_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "td-num")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::TdNum()
    :
    td_num{YType::str, "td-num"},
    inside_prefixes{YType::str, "inside-prefixes"}
{

    yang_name = "td-num"; yang_parent_name = "responder-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::~TdNum()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::has_data() const
{
    return td_num.is_set
	|| inside_prefixes.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(td_num.yfilter)
	|| ydk::is_set(inside_prefixes.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/target-discovery/responder-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "td-num" <<"[td-num='" <<td_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (td_num.is_set || is_set(td_num.yfilter)) leaf_name_data.push_back(td_num.get_name_leafdata());
    if (inside_prefixes.is_set || is_set(inside_prefixes.yfilter)) leaf_name_data.push_back(inside_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "td-num")
    {
        td_num = value;
        td_num.value_namespace = name_space;
        td_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inside-prefixes")
    {
        inside_prefixes = value;
        inside_prefixes.value_namespace = name_space;
        inside_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "td-num")
    {
        td_num.yfilter = yfilter;
    }
    if(value_path == "inside-prefixes")
    {
        inside_prefixes.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "td-num" || name == "inside-prefixes")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::Traceroute()
    :
    probe_delay{YType::uint16, "probe-delay"}
{

    yang_name = "traceroute"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::~Traceroute()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::has_data() const
{
    return probe_delay.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(probe_delay.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traceroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probe_delay.is_set || is_set(probe_delay.yfilter)) leaf_name_data.push_back(probe_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "probe-delay")
    {
        probe_delay = value;
        probe_delay.value_namespace = name_space;
        probe_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "probe-delay")
    {
        probe_delay.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe-delay")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::Unreachable()
    :
    relative{YType::uint16, "relative"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "unreachable"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::~Unreachable()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(relative.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relative" || name == "threshold")
        return true;
    return false;
}

Native::PfrMap::PfrMap()
    :
    pfr_tg{YType::str, "pfr-tg"}
    	,
    match(std::make_shared<Native::PfrMap::Match>())
	,set(std::make_shared<Native::PfrMap::Set>())
{
    match->parent = this;
    set->parent = this;

    yang_name = "pfr-map"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PfrMap::~PfrMap()
{
}

bool Native::PfrMap::has_data() const
{
    return pfr_tg.is_set
	|| (match !=  nullptr && match->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::PfrMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfr_tg.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::PfrMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PfrMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr-map" <<"[pfr-tg='" <<pfr_tg <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfr_tg.is_set || is_set(pfr_tg.yfilter)) leaf_name_data.push_back(pfr_tg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-pfr:match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::PfrMap::Match>();
        }
        return match;
    }

    if(child_yang_name == "Cisco-IOS-XE-pfr:set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::PfrMap::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["Cisco-IOS-XE-pfr:match"] = match;
    }

    if(set != nullptr)
    {
        children["Cisco-IOS-XE-pfr:set"] = set;
    }

    return children;
}

void Native::PfrMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfr-tg")
    {
        pfr_tg = value;
        pfr_tg.value_namespace = name_space;
        pfr_tg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfr-tg")
    {
        pfr_tg.yfilter = yfilter;
    }
}

bool Native::PfrMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "set" || name == "pfr-tg")
        return true;
    return false;
}

Native::PfrMap::Match::Match()
    :
    ip(std::make_shared<Native::PfrMap::Match::Ip>())
	,pfr(std::make_shared<Native::PfrMap::Match::Pfr>())
	,traffic_class(std::make_shared<Native::PfrMap::Match::TrafficClass>())
{
    ip->parent = this;
    pfr->parent = this;
    traffic_class->parent = this;

    yang_name = "match"; yang_parent_name = "pfr-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Match::~Match()
{
}

bool Native::PfrMap::Match::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (pfr !=  nullptr && pfr->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data());
}

bool Native::PfrMap::Match::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (pfr !=  nullptr && pfr->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation());
}

std::string Native::PfrMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pfr:match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::PfrMap::Match::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "pfr")
    {
        if(pfr == nullptr)
        {
            pfr = std::make_shared<Native::PfrMap::Match::Pfr>();
        }
        return pfr;
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class == nullptr)
        {
            traffic_class = std::make_shared<Native::PfrMap::Match::TrafficClass>();
        }
        return traffic_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(pfr != nullptr)
    {
        children["pfr"] = pfr;
    }

    if(traffic_class != nullptr)
    {
        children["traffic-class"] = traffic_class;
    }

    return children;
}

void Native::PfrMap::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "pfr" || name == "traffic-class")
        return true;
    return false;
}

Native::PfrMap::Match::Ip::Ip()
    :
    address{YType::empty, "address"}
{

    yang_name = "ip"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Match::Ip::~Ip()
{
}

bool Native::PfrMap::Match::Ip::has_data() const
{
    return address.is_set;
}

bool Native::PfrMap::Match::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::PfrMap::Match::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Match::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Match::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Match::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Match::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Match::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::PfrMap::Match::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::PfrMap::Match::Pfr::Pfr()
    :
    learn{YType::empty, "learn"}
{

    yang_name = "pfr"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Match::Pfr::~Pfr()
{
}

bool Native::PfrMap::Match::Pfr::has_data() const
{
    return learn.is_set;
}

bool Native::PfrMap::Match::Pfr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(learn.yfilter);
}

std::string Native::PfrMap::Match::Pfr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Match::Pfr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learn.is_set || is_set(learn.yfilter)) leaf_name_data.push_back(learn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Match::Pfr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Match::Pfr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Match::Pfr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "learn")
    {
        learn = value;
        learn.value_namespace = name_space;
        learn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Match::Pfr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "learn")
    {
        learn.yfilter = yfilter;
    }
}

bool Native::PfrMap::Match::Pfr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "learn")
        return true;
    return false;
}

Native::PfrMap::Match::TrafficClass::TrafficClass()
    :
    access_list{YType::empty, "access-list"},
    application{YType::empty, "application"},
    prefix_list{YType::empty, "prefix-list"}
{

    yang_name = "traffic-class"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Match::TrafficClass::~TrafficClass()
{
}

bool Native::PfrMap::Match::TrafficClass::has_data() const
{
    return access_list.is_set
	|| application.is_set
	|| prefix_list.is_set;
}

bool Native::PfrMap::Match::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(application.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::PfrMap::Match::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Match::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (application.is_set || is_set(application.yfilter)) leaf_name_data.push_back(application.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Match::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Match::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Match::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application")
    {
        application = value;
        application.value_namespace = name_space;
        application.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Match::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "application")
    {
        application.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::PfrMap::Match::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "application" || name == "prefix-list")
        return true;
    return false;
}

Native::PfrMap::Set::Set()
    :
    holddown{YType::uint16, "holddown"},
    interface{YType::str, "interface"},
    jitter{YType::empty, "jitter"},
    mode{YType::empty, "mode"},
    mos{YType::empty, "mos"},
    next_hop{YType::empty, "next-hop"},
    periodic{YType::empty, "periodic"},
    probe{YType::empty, "probe"},
    resolve{YType::empty, "resolve"},
    traceroute{YType::empty, "traceroute"},
    trap_enable{YType::empty, "trap-enable"},
    trigger_log_percentage{YType::empty, "trigger-log-percentage"},
    unreachable{YType::empty, "unreachable"}
    	,
    active_probe(std::make_shared<Native::PfrMap::Set::ActiveProbe>())
	,backoff(std::make_shared<Native::PfrMap::Set::Backoff>())
	,delay(std::make_shared<Native::PfrMap::Set::Delay>())
	,link_group(std::make_shared<Native::PfrMap::Set::LinkGroup>())
	,loss(std::make_shared<Native::PfrMap::Set::Loss>())
{
    active_probe->parent = this;
    backoff->parent = this;
    delay->parent = this;
    link_group->parent = this;
    loss->parent = this;

    yang_name = "set"; yang_parent_name = "pfr-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::~Set()
{
}

bool Native::PfrMap::Set::has_data() const
{
    return holddown.is_set
	|| interface.is_set
	|| jitter.is_set
	|| mode.is_set
	|| mos.is_set
	|| next_hop.is_set
	|| periodic.is_set
	|| probe.is_set
	|| resolve.is_set
	|| traceroute.is_set
	|| trap_enable.is_set
	|| trigger_log_percentage.is_set
	|| unreachable.is_set
	|| (active_probe !=  nullptr && active_probe->has_data())
	|| (backoff !=  nullptr && backoff->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (link_group !=  nullptr && link_group->has_data())
	|| (loss !=  nullptr && loss->has_data());
}

bool Native::PfrMap::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holddown.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(jitter.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(mos.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(periodic.yfilter)
	|| ydk::is_set(probe.yfilter)
	|| ydk::is_set(resolve.yfilter)
	|| ydk::is_set(traceroute.yfilter)
	|| ydk::is_set(trap_enable.yfilter)
	|| ydk::is_set(trigger_log_percentage.yfilter)
	|| ydk::is_set(unreachable.yfilter)
	|| (active_probe !=  nullptr && active_probe->has_operation())
	|| (backoff !=  nullptr && backoff->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (link_group !=  nullptr && link_group->has_operation())
	|| (loss !=  nullptr && loss->has_operation());
}

std::string Native::PfrMap::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pfr:set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (jitter.is_set || is_set(jitter.yfilter)) leaf_name_data.push_back(jitter.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (mos.is_set || is_set(mos.yfilter)) leaf_name_data.push_back(mos.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());
    if (probe.is_set || is_set(probe.yfilter)) leaf_name_data.push_back(probe.get_name_leafdata());
    if (resolve.is_set || is_set(resolve.yfilter)) leaf_name_data.push_back(resolve.get_name_leafdata());
    if (traceroute.is_set || is_set(traceroute.yfilter)) leaf_name_data.push_back(traceroute.get_name_leafdata());
    if (trap_enable.is_set || is_set(trap_enable.yfilter)) leaf_name_data.push_back(trap_enable.get_name_leafdata());
    if (trigger_log_percentage.is_set || is_set(trigger_log_percentage.yfilter)) leaf_name_data.push_back(trigger_log_percentage.get_name_leafdata());
    if (unreachable.is_set || is_set(unreachable.yfilter)) leaf_name_data.push_back(unreachable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-probe")
    {
        if(active_probe == nullptr)
        {
            active_probe = std::make_shared<Native::PfrMap::Set::ActiveProbe>();
        }
        return active_probe;
    }

    if(child_yang_name == "backoff")
    {
        if(backoff == nullptr)
        {
            backoff = std::make_shared<Native::PfrMap::Set::Backoff>();
        }
        return backoff;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::PfrMap::Set::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "link-group")
    {
        if(link_group == nullptr)
        {
            link_group = std::make_shared<Native::PfrMap::Set::LinkGroup>();
        }
        return link_group;
    }

    if(child_yang_name == "loss")
    {
        if(loss == nullptr)
        {
            loss = std::make_shared<Native::PfrMap::Set::Loss>();
        }
        return loss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_probe != nullptr)
    {
        children["active-probe"] = active_probe;
    }

    if(backoff != nullptr)
    {
        children["backoff"] = backoff;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(link_group != nullptr)
    {
        children["link-group"] = link_group;
    }

    if(loss != nullptr)
    {
        children["loss"] = loss;
    }

    return children;
}

void Native::PfrMap::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter")
    {
        jitter = value;
        jitter.value_namespace = name_space;
        jitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mos")
    {
        mos = value;
        mos.value_namespace = name_space;
        mos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe")
    {
        probe = value;
        probe.value_namespace = name_space;
        probe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolve")
    {
        resolve = value;
        resolve.value_namespace = name_space;
        resolve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traceroute")
    {
        traceroute = value;
        traceroute.value_namespace = name_space;
        traceroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-enable")
    {
        trap_enable = value;
        trap_enable.value_namespace = name_space;
        trap_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-log-percentage")
    {
        trigger_log_percentage = value;
        trigger_log_percentage.value_namespace = name_space;
        trigger_log_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable")
    {
        unreachable = value;
        unreachable.value_namespace = name_space;
        unreachable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "jitter")
    {
        jitter.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "mos")
    {
        mos.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
    if(value_path == "probe")
    {
        probe.yfilter = yfilter;
    }
    if(value_path == "resolve")
    {
        resolve.yfilter = yfilter;
    }
    if(value_path == "traceroute")
    {
        traceroute.yfilter = yfilter;
    }
    if(value_path == "trap-enable")
    {
        trap_enable.yfilter = yfilter;
    }
    if(value_path == "trigger-log-percentage")
    {
        trigger_log_percentage.yfilter = yfilter;
    }
    if(value_path == "unreachable")
    {
        unreachable.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-probe" || name == "backoff" || name == "delay" || name == "link-group" || name == "loss" || name == "holddown" || name == "interface" || name == "jitter" || name == "mode" || name == "mos" || name == "next-hop" || name == "periodic" || name == "probe" || name == "resolve" || name == "traceroute" || name == "trap-enable" || name == "trigger-log-percentage" || name == "unreachable")
        return true;
    return false;
}

const Enum::YLeaf Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::PasswordType::default_ {0, "default"};
const Enum::YLeaf Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::PasswordType::none {1, "none"};

const Enum::YLeaf Native::Cts::Sxp::Connection::Peer::Ipv4::Password::PasswordType::default_ {0, "default"};
const Enum::YLeaf Native::Cts::Sxp::Connection::Peer::Ipv4::Password::PasswordType::none {1, "none"};


}
}

