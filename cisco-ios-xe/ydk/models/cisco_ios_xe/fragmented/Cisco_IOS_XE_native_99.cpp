
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_99.hpp"
#include "Cisco_IOS_XE_native_100.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Ipsec()
    :
    sequence{YType::uint16, "sequence"},
    profile{YType::str, "profile"}
    	,
    default_(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_>())
	,match(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match>())
	,replay(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay>())
	,tag(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag>())
{
    default_->parent = this;
    match->parent = this;
    replay->parent = this;
    tag->parent = this;

    yang_name = "ipsec"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::has_data() const
{
    return sequence.is_set
	|| profile.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (replay !=  nullptr && replay->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (replay !=  nullptr && replay->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match>();
        }
        return match;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay>();
        }
        return replay;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "match" || name == "replay" || name == "tag" || name == "sequence" || name == "profile")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Default_()
    :
    profile{YType::empty, "profile"}
    	,
    match(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match>())
	,replay(nullptr) // presence node
	,tag(nullptr) // presence node
{
    match->parent = this;

    yang_name = "default"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::~Default_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::has_data() const
{
    return profile.is_set
	|| (match !=  nullptr && match->has_data())
	|| (replay !=  nullptr && replay->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (replay !=  nullptr && replay->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match>();
        }
        return match;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay>();
        }
        return replay;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "replay" || name == "tag" || name == "profile")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Match()
    :
    address(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::~Match()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::Address()
{

    yang_name = "address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::Replay()
{

    yang_name = "replay"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::~Replay()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::Tag()
{

    yang_name = "tag"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::~Tag()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Match()
    :
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address>())
{
    address->parent = this;

    yang_name = "match"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::~Match()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::Address()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Replay()
    :
    counter(nullptr) // presence node
	,time(nullptr) // presence node
{

    yang_name = "replay"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::~Replay()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::has_data() const
{
    return (counter !=  nullptr && counter->has_data())
	|| (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "time")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::Counter()
    :
    window_size{YType::enumeration, "window-size"}
{

    yang_name = "counter"; yang_parent_name = "replay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::~Counter()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::has_data() const
{
    return window_size.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window-size")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::Time()
    :
    window_size{YType::uint8, "window-size"}
{

    yang_name = "time"; yang_parent_name = "replay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::~Time()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::has_data() const
{
    return window_size.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window-size")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Tag()
    :
    cts(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts>())
{
    cts->parent = this;

    yang_name = "tag"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::~Tag()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::has_data() const
{
    return (cts !=  nullptr && cts->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (cts !=  nullptr && cts->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts>();
        }
        return cts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cts != nullptr)
    {
        children["cts"] = cts;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cts")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::Cts()
    :
    sgt{YType::empty, "sgt"}
{

    yang_name = "cts"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::~Cts()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::has_data() const
{
    return sgt.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::PairWiseKeying()
    :
    safety_limit{YType::uint8, "safety-limit"}
{

    yang_name = "pair-wise-keying"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::~PairWiseKeying()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::has_data() const
{
    return safety_limit.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(safety_limit.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pair-wise-keying";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (safety_limit.is_set || is_set(safety_limit.yfilter)) leaf_name_data.push_back(safety_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "safety-limit")
    {
        safety_limit = value;
        safety_limit.value_namespace = name_space;
        safety_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "safety-limit")
    {
        safety_limit.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "safety-limit")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Default_()
    :
    gdoi{YType::empty, "gdoi"},
    gikev2{YType::empty, "gikev2"}
    	,
    address(nullptr) // presence node
	,authorization(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization>())
	,group(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Group_>())
	,identifier(nullptr) // presence node
	,redundancy(nullptr) // presence node
	,registration(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Registration>())
	,rekey(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey>())
	,sa(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Sa>())
{
    authorization->parent = this;
    group->parent = this;
    registration->parent = this;
    rekey->parent = this;
    sa->parent = this;

    yang_name = "default"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::~Default_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::has_data() const
{
    return gdoi.is_set
	|| gikev2.is_set
	|| (address !=  nullptr && address->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (identifier !=  nullptr && identifier->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (sa !=  nullptr && sa->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(gikev2.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (sa !=  nullptr && sa->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (gikev2.is_set || is_set(gikev2.yfilter)) leaf_name_data.push_back(gikev2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Address>();
        }
        return address;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Group_>();
        }
        return group;
    }

    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "sa")
    {
        if(sa == nullptr)
        {
            sa = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Sa>();
        }
        return sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(registration != nullptr)
    {
        children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        children["rekey"] = rekey;
    }

    if(sa != nullptr)
    {
        children["sa"] = sa;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gikev2")
    {
        gikev2 = value;
        gikev2.value_namespace = name_space;
        gikev2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "gikev2")
    {
        gikev2.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "authorization" || name == "group" || name == "identifier" || name == "redundancy" || name == "registration" || name == "rekey" || name == "sa" || name == "gdoi" || name == "gikev2")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Address::Address()
{

    yang_name = "address"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Address::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Address::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Authorization()
    :
    identity{YType::empty, "identity"}
    	,
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address>())
{
    address->parent = this;

    yang_name = "authorization"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::~Authorization()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::has_data() const
{
    return identity.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identity.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "identity")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::Address()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Group_()
    :
    size(nullptr) // presence node
{

    yang_name = "group"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::~Group_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::has_data() const
{
    return (size !=  nullptr && size->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::has_operation() const
{
    return is_set(yfilter)
	|| (size !=  nullptr && size->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "size")
    {
        if(size == nullptr)
        {
            size = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size>();
        }
        return size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(size != nullptr)
    {
        children["size"] = size;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::Size()
{

    yang_name = "size"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::~Size()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::Identifier()
{

    yang_name = "identifier"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::~Identifier()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::Redundancy()
{

    yang_name = "redundancy"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::~Redundancy()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Registration()
    :
    interface{YType::str, "interface"}
    	,
    periodic(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic>())
{
    periodic->parent = this;

    yang_name = "registration"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::~Registration()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::has_data() const
{
    return interface.is_set
	|| (periodic !=  nullptr && periodic->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(periodic != nullptr)
    {
        children["periodic"] = periodic;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic" || name == "interface")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Periodic()
    :
    crl(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl>())
{
    crl->parent = this;

    yang_name = "periodic"; yang_parent_name = "registration"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::~Periodic()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::has_data() const
{
    return (crl !=  nullptr && crl->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| (crl !=  nullptr && crl->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crl")
    {
        if(crl == nullptr)
        {
            crl = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl>();
        }
        return crl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crl != nullptr)
    {
        children["crl"] = crl;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crl")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::Crl()
    :
    trustpoint{YType::empty, "trustpoint"}
{

    yang_name = "crl"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::~Crl()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::has_data() const
{
    return trustpoint.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trustpoint.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustpoint")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Rekey()
    :
    acknowledgement{YType::empty, "acknowledgement"}
    	,
    address(nullptr) // presence node
	,algorithm(nullptr) // presence node
	,authentication(nullptr) // presence node
	,lifetime(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime>())
	,retransmit(nullptr) // presence node
	,sig_hash(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash>())
	,transport(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport>())
{
    lifetime->parent = this;
    sig_hash->parent = this;
    transport->parent = this;

    yang_name = "rekey"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::~Rekey()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::has_data() const
{
    return acknowledgement.is_set
	|| (address !=  nullptr && address->has_data())
	|| (algorithm !=  nullptr && algorithm->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (sig_hash !=  nullptr && sig_hash->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (algorithm !=  nullptr && algorithm->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (sig_hash !=  nullptr && sig_hash->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address>();
        }
        return address;
    }

    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "sig-hash")
    {
        if(sig_hash == nullptr)
        {
            sig_hash = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash>();
        }
        return sig_hash;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(algorithm != nullptr)
    {
        children["algorithm"] = algorithm;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(retransmit != nullptr)
    {
        children["retransmit"] = retransmit;
    }

    if(sig_hash != nullptr)
    {
        children["sig-hash"] = sig_hash;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "algorithm" || name == "authentication" || name == "lifetime" || name == "retransmit" || name == "sig-hash" || name == "transport" || name == "acknowledgement")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::Address()
{

    yang_name = "address"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::Algorithm()
{

    yang_name = "algorithm"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::~Algorithm()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::Authentication()
{

    yang_name = "authentication"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::~Authentication()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::Lifetime()
    :
    days{YType::empty, "days"},
    seconds{YType::empty, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::has_data() const
{
    return days.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::Retransmit()
{

    yang_name = "retransmit"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::~Retransmit()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::SigHash()
    :
    algorithm{YType::empty, "algorithm"}
{

    yang_name = "sig-hash"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::~SigHash()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::has_data() const
{
    return algorithm.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sig-hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::Transport()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "transport"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::~Transport()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::has_data() const
{
    return unicast.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Sa()
    :
    receive_only{YType::empty, "receive-only"}
    	,
    d3p(nullptr) // presence node
	,pair_wise_keying(nullptr) // presence node
{

    yang_name = "sa"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::~Sa()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::has_data() const
{
    for (std::size_t index=0; index<ipsec.size(); index++)
    {
        if(ipsec[index]->has_data())
            return true;
    }
    return receive_only.is_set
	|| (d3p !=  nullptr && d3p->has_data())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::has_operation() const
{
    for (std::size_t index=0; index<ipsec.size(); index++)
    {
        if(ipsec[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(receive_only.yfilter)
	|| (d3p !=  nullptr && d3p->has_operation())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "d3p")
    {
        if(d3p == nullptr)
        {
            d3p = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P>();
        }
        return d3p;
    }

    if(child_yang_name == "ipsec")
    {
        for(auto const & c : ipsec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec>();
        c->parent = this;
        ipsec.push_back(c);
        return c;
    }

    if(child_yang_name == "pair-wise-keying")
    {
        if(pair_wise_keying == nullptr)
        {
            pair_wise_keying = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying>();
        }
        return pair_wise_keying;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(d3p != nullptr)
    {
        children["d3p"] = d3p;
    }

    for (auto const & c : ipsec)
    {
        children[c->get_segment_path()] = c;
    }

    if(pair_wise_keying != nullptr)
    {
        children["pair-wise-keying"] = pair_wise_keying;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "d3p" || name == "ipsec" || name == "pair-wise-keying" || name == "receive-only")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::D3P()
{

    yang_name = "d3p"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::~D3P()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "d3p";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::Ipsec()
    :
    sequence{YType::uint16, "sequence"}
{

    yang_name = "ipsec"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::has_data() const
{
    return sequence.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::PairWiseKeying()
{

    yang_name = "pair-wise-keying"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::~PairWiseKeying()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pair-wise-keying";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default_::Default_()
    :
    passive{YType::empty, "passive"}
    	,
    client(std::make_shared<Native::Crypto::Gkm::Group::Default_::Client>())
	,identity(nullptr) // presence node
	,server(std::make_shared<Native::Crypto::Gkm::Group::Default_::Server>())
{
    client->parent = this;
    server->parent = this;

    yang_name = "default"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Default_::~Default_()
{
}

bool Native::Crypto::Gkm::Group::Default_::has_data() const
{
    return passive.is_set
	|| (client !=  nullptr && client->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Crypto::Gkm::Group::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Crypto::Gkm::Group::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Gkm::Group::Default_::Client>();
        }
        return client;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Gkm::Group::Default_::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Crypto::Gkm::Group::Default_::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(identity != nullptr)
    {
        children["identity"] = identity;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "identity" || name == "server" || name == "passive")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default_::Client::Client()
    :
    bypass_policy{YType::empty, "bypass-policy"},
    transform_sets{YType::empty, "transform-sets"},
    transport_encrypt_key{YType::enumeration, "transport-encrypt-key"}
    	,
    protocol(nullptr) // presence node
	,recovery_check(nullptr) // presence node
	,registration(std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Registration>())
	,rekey(std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Rekey>())
	,status(std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Status>())
{
    registration->parent = this;
    rekey->parent = this;
    status->parent = this;

    yang_name = "client"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Default_::Client::~Client()
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::has_data() const
{
    return bypass_policy.is_set
	|| transform_sets.is_set
	|| transport_encrypt_key.is_set
	|| (protocol !=  nullptr && protocol->has_data())
	|| (recovery_check !=  nullptr && recovery_check->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Native::Crypto::Gkm::Group::Default_::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bypass_policy.yfilter)
	|| ydk::is_set(transform_sets.yfilter)
	|| ydk::is_set(transport_encrypt_key.yfilter)
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (recovery_check !=  nullptr && recovery_check->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Native::Crypto::Gkm::Group::Default_::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default_::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypass_policy.is_set || is_set(bypass_policy.yfilter)) leaf_name_data.push_back(bypass_policy.get_name_leafdata());
    if (transform_sets.is_set || is_set(transform_sets.yfilter)) leaf_name_data.push_back(transform_sets.get_name_leafdata());
    if (transport_encrypt_key.is_set || is_set(transport_encrypt_key.yfilter)) leaf_name_data.push_back(transport_encrypt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "recovery-check")
    {
        if(recovery_check == nullptr)
        {
            recovery_check = std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck>();
        }
        return recovery_check;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(recovery_check != nullptr)
    {
        children["recovery-check"] = recovery_check;
    }

    if(registration != nullptr)
    {
        children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        children["rekey"] = rekey;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Default_::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy = value;
        bypass_policy.value_namespace = name_space;
        bypass_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-sets")
    {
        transform_sets = value;
        transform_sets.value_namespace = name_space;
        transform_sets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key = value;
        transport_encrypt_key.value_namespace = name_space;
        transport_encrypt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Default_::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy.yfilter = yfilter;
    }
    if(value_path == "transform-sets")
    {
        transform_sets.yfilter = yfilter;
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Default_::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "recovery-check" || name == "registration" || name == "rekey" || name == "status" || name == "bypass-policy" || name == "transform-sets" || name == "transport-encrypt-key")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default_::Client::Protocol::Protocol()
{

    yang_name = "protocol"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Default_::Client::Protocol::~Protocol()
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Protocol::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Default_::Client::Protocol::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Default_::Client::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default_::Client::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Client::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Client::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Default_::Client::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default_::Client::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::RecoveryCheck()
{

    yang_name = "recovery-check"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::~RecoveryCheck()
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default_::Client::Registration::Registration()
    :
    interface{YType::empty, "interface"}
{

    yang_name = "registration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Default_::Client::Registration::~Registration()
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Registration::has_data() const
{
    return interface.is_set;
}

bool Native::Crypto::Gkm::Group::Default_::Client::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Crypto::Gkm::Group::Default_::Client::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default_::Client::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Client::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Client::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Default_::Client::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Default_::Client::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Default_::Client::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default_::Client::Rekey::Rekey()
    :
    encryption(nullptr) // presence node
	,hash(nullptr) // presence node
{

    yang_name = "rekey"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Default_::Client::Rekey::~Rekey()
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Rekey::has_data() const
{
    return (encryption !=  nullptr && encryption->has_data())
	|| (hash !=  nullptr && hash->has_data());
}

bool Native::Crypto::Gkm::Group::Default_::Client::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (hash !=  nullptr && hash->has_operation());
}

std::string Native::Crypto::Gkm::Group::Default_::Client::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default_::Client::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Client::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "hash")
    {
        if(hash == nullptr)
        {
            hash = std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash>();
        }
        return hash;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Client::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(hash != nullptr)
    {
        children["hash"] = hash;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Default_::Client::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default_::Client::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "hash")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::Encryption()
{

    yang_name = "encryption"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::~Encryption()
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::Hash()
{

    yang_name = "hash"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::~Hash()
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default_::Client::Status::Status()
    :
    active_sa(nullptr) // presence node
{

    yang_name = "status"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Default_::Client::Status::~Status()
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Status::has_data() const
{
    return (active_sa !=  nullptr && active_sa->has_data());
}

bool Native::Crypto::Gkm::Group::Default_::Client::Status::has_operation() const
{
    return is_set(yfilter)
	|| (active_sa !=  nullptr && active_sa->has_operation());
}

std::string Native::Crypto::Gkm::Group::Default_::Client::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default_::Client::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Client::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-sa")
    {
        if(active_sa == nullptr)
        {
            active_sa = std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa>();
        }
        return active_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Client::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_sa != nullptr)
    {
        children["active-sa"] = active_sa;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Default_::Client::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default_::Client::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-sa")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::ActiveSa()
{

    yang_name = "active-sa"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::~ActiveSa()
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default_::Identity::Identity()
{

    yang_name = "identity"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Default_::Identity::~Identity()
{
}

bool Native::Crypto::Gkm::Group::Default_::Identity::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Default_::Identity::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Default_::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default_::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Default_::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default_::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default_::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default_::Server::Server()
    :
    local{YType::empty, "local"}
    	,
    address(std::make_shared<Native::Crypto::Gkm::Group::Default_::Server::Address>())
	,hostname(std::make_shared<Native::Crypto::Gkm::Group::Default_::Server::Hostname>())
{
    address->parent = this;
    hostname->parent = this;

    yang_name = "server"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Default_::Server::~Server()
{
}

bool Native::Crypto::Gkm::Group::Default_::Server::has_data() const
{
    return local.is_set
	|| (address !=  nullptr && address->has_data())
	|| (hostname !=  nullptr && hostname->has_data());
}

bool Native::Crypto::Gkm::Group::Default_::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation());
}

std::string Native::Crypto::Gkm::Group::Default_::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default_::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Default_::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Gkm::Group::Default_::Server::Hostname>();
        }
        return hostname;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Default_::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Default_::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Default_::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hostname" || name == "local")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default_::Server::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Default_::Server::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Default_::Server::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Default_::Server::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Default_::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default_::Server::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Default_::Server::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Default_::Server::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Default_::Server::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default_::Server::Hostname::Hostname()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "hostname"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Default_::Server::Hostname::~Hostname()
{
}

bool Native::Crypto::Gkm::Group::Default_::Server::Hostname::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Default_::Server::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Default_::Server::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default_::Server::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Server::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Server::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Default_::Server::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Default_::Server::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Default_::Server::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Identity::Identity()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    dn{YType::str, "dn"},
    fqdn{YType::str, "fqdn"}
    	,
    default_(std::make_shared<Native::Crypto::Identity::Default_>())
{
    default_->parent = this;

    yang_name = "identity"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Identity::~Identity()
{
}

bool Native::Crypto::Identity::has_data() const
{
    return name.is_set
	|| description.is_set
	|| dn.is_set
	|| fqdn.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(dn.yfilter)
	|| ydk::is_set(fqdn.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Identity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:identity" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dn.is_set || is_set(dn.yfilter)) leaf_name_data.push_back(dn.get_name_leafdata());
    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Identity::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Crypto::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "dn")
    {
        dn = value;
        dn.value_namespace = name_space;
        dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "dn")
    {
        dn.yfilter = yfilter;
    }
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "name" || name == "description" || name == "dn" || name == "fqdn")
        return true;
    return false;
}

Native::Crypto::Identity::Default_::Default_()
    :
    description{YType::empty, "description"},
    dn{YType::str, "dn"},
    fqdn{YType::str, "fqdn"}
{

    yang_name = "default"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Identity::Default_::~Default_()
{
}

bool Native::Crypto::Identity::Default_::has_data() const
{
    return description.is_set
	|| dn.is_set
	|| fqdn.is_set;
}

bool Native::Crypto::Identity::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(dn.yfilter)
	|| ydk::is_set(fqdn.yfilter);
}

std::string Native::Crypto::Identity::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Identity::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dn.is_set || is_set(dn.yfilter)) leaf_name_data.push_back(dn.get_name_leafdata());
    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Identity::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Identity::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Identity::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn")
    {
        dn = value;
        dn.value_namespace = name_space;
        dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Identity::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "dn")
    {
        dn.yfilter = yfilter;
    }
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Identity::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "dn" || name == "fqdn")
        return true;
    return false;
}

Native::Crypto::Ipsec::Ipsec()
    :
    df_bit{YType::enumeration, "df-bit"},
    fragmentation{YType::enumeration, "fragmentation"},
    ipv4_deny{YType::enumeration, "ipv4-deny"},
    nat_transparency{YType::enumeration, "nat-transparency"}
    	,
    optional(nullptr) // presence node
	,security_association(std::make_shared<Native::Crypto::Ipsec::SecurityAssociation>())
{
    security_association->parent = this;

    yang_name = "ipsec"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Ipsec::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<transform_set.size(); index++)
    {
        if(transform_set[index]->has_data())
            return true;
    }
    return df_bit.is_set
	|| fragmentation.is_set
	|| ipv4_deny.is_set
	|| nat_transparency.is_set
	|| (optional !=  nullptr && optional->has_data())
	|| (security_association !=  nullptr && security_association->has_data());
}

bool Native::Crypto::Ipsec::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<transform_set.size(); index++)
    {
        if(transform_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(df_bit.yfilter)
	|| ydk::is_set(fragmentation.yfilter)
	|| ydk::is_set(ipv4_deny.yfilter)
	|| ydk::is_set(nat_transparency.yfilter)
	|| (optional !=  nullptr && optional->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::Ipsec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.yfilter)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());
    if (ipv4_deny.is_set || is_set(ipv4_deny.yfilter)) leaf_name_data.push_back(ipv4_deny.get_name_leafdata());
    if (nat_transparency.is_set || is_set(nat_transparency.yfilter)) leaf_name_data.push_back(nat_transparency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optional")
    {
        if(optional == nullptr)
        {
            optional = std::make_shared<Native::Crypto::Ipsec::Optional>();
        }
        return optional;
    }

    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ipsec::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::Ipsec::SecurityAssociation>();
        }
        return security_association;
    }

    if(child_yang_name == "transform-set")
    {
        for(auto const & c : transform_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ipsec::TransformSet>();
        c->parent = this;
        transform_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optional != nullptr)
    {
        children["optional"] = optional;
    }

    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    for (auto const & c : transform_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-deny")
    {
        ipv4_deny = value;
        ipv4_deny.value_namespace = name_space;
        ipv4_deny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nat-transparency")
    {
        nat_transparency = value;
        nat_transparency.value_namespace = name_space;
        nat_transparency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "df-bit")
    {
        df_bit.yfilter = yfilter;
    }
    if(value_path == "fragmentation")
    {
        fragmentation.yfilter = yfilter;
    }
    if(value_path == "ipv4-deny")
    {
        ipv4_deny.yfilter = yfilter;
    }
    if(value_path == "nat-transparency")
    {
        nat_transparency.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optional" || name == "profile" || name == "security-association" || name == "transform-set" || name == "df-bit" || name == "fragmentation" || name == "ipv4-deny" || name == "nat-transparency")
        return true;
    return false;
}

Native::Crypto::Ipsec::Optional::Optional()
    :
    retry{YType::uint32, "retry"}
{

    yang_name = "optional"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ipsec::Optional::~Optional()
{
}

bool Native::Crypto::Ipsec::Optional::has_data() const
{
    return retry.is_set;
}

bool Native::Crypto::Ipsec::Optional::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retry.yfilter);
}

std::string Native::Crypto::Ipsec::Optional::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::Optional::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optional";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Optional::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Optional::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Optional::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Optional::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Optional::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Optional::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retry")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Profile()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    responder_only{YType::empty, "responder-only"}
    	,
    default_(std::make_shared<Native::Crypto::Ipsec::Profile::Default_>())
	,dialer(std::make_shared<Native::Crypto::Ipsec::Profile::Dialer>())
	,redundancy(std::make_shared<Native::Crypto::Ipsec::Profile::Redundancy>())
	,set(std::make_shared<Native::Crypto::Ipsec::Profile::Set>())
{
    default_->parent = this;
    dialer->parent = this;
    redundancy->parent = this;
    set->parent = this;

    yang_name = "profile"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ipsec::Profile::~Profile()
{
}

bool Native::Crypto::Ipsec::Profile::has_data() const
{
    return name.is_set
	|| description.is_set
	|| responder_only.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (dialer !=  nullptr && dialer->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Ipsec::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(responder_only.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (responder_only.is_set || is_set(responder_only.yfilter)) leaf_name_data.push_back(responder_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Ipsec::Profile::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::Ipsec::Profile::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::Ipsec::Profile::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Ipsec::Profile::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(dialer != nullptr)
    {
        children["dialer"] = dialer;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::Ipsec::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "responder-only")
    {
        responder_only = value;
        responder_only.value_namespace = name_space;
        responder_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "responder-only")
    {
        responder_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "dialer" || name == "redundancy" || name == "set" || name == "name" || name == "description" || name == "responder-only")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Default_()
    :
    description{YType::empty, "description"},
    redundancy{YType::empty, "redundancy"},
    responder_only{YType::empty, "responder-only"}
    	,
    dialer(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Dialer>())
	,set(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set>())
{
    dialer->parent = this;
    set->parent = this;

    yang_name = "default"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::~Default_()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::has_data() const
{
    return description.is_set
	|| redundancy.is_set
	|| responder_only.is_set
	|| (dialer !=  nullptr && dialer->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Ipsec::Profile::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(responder_only.yfilter)
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (responder_only.is_set || is_set(responder_only.yfilter)) leaf_name_data.push_back(responder_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dialer != nullptr)
    {
        children["dialer"] = dialer;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "responder-only")
    {
        responder_only = value;
        responder_only.value_namespace = name_space;
        responder_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "responder-only")
    {
        responder_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dialer" || name == "set" || name == "description" || name == "redundancy" || name == "responder-only")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "dialer"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Dialer::~Dialer()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default_::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::Set()
    :
    group{YType::empty, "group"},
    identity{YType::empty, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::empty, "isakmp-profile"},
    mixed_mode{YType::empty, "mixed-mode"},
    transform_set{YType::empty, "transform-set"}
    	,
    pfs(nullptr) // presence node
	,reverse_route(nullptr) // presence node
	,security_association(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation>())
	,security_policy(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy>())
{
    security_association->parent = this;
    security_policy->parent = this;

    yang_name = "set"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Set::~Set()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::has_data() const
{
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| mixed_mode.is_set
	|| transform_set.is_set
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data())
	|| (security_policy !=  nullptr && security_policy->has_data());
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(ikev2_profile.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(mixed_mode.yfilter)
	|| ydk::is_set(transform_set.yfilter)
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation())
	|| (security_policy !=  nullptr && security_policy->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (mixed_mode.is_set || is_set(mixed_mode.yfilter)) leaf_name_data.push_back(mixed_mode.get_name_leafdata());
    if (transform_set.is_set || is_set(transform_set.yfilter)) leaf_name_data.push_back(transform_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation>();
        }
        return security_association;
    }

    if(child_yang_name == "security-policy")
    {
        if(security_policy == nullptr)
        {
            security_policy = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy>();
        }
        return security_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pfs != nullptr)
    {
        children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    if(security_policy != nullptr)
    {
        children["security-policy"] = security_policy;
    }

    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
        ikev2_profile.value_namespace = name_space;
        ikev2_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mixed-mode")
    {
        mixed_mode = value;
        mixed_mode.value_namespace = name_space;
        mixed_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-set")
    {
        transform_set = value;
        transform_set.value_namespace = name_space;
        transform_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "mixed-mode")
    {
        mixed_mode.yfilter = yfilter;
    }
    if(value_path == "transform-set")
    {
        transform_set.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfs" || name == "reverse-route" || name == "security-association" || name == "security-policy" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "mixed-mode" || name == "transform-set")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::Pfs()
{

    yang_name = "pfs"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::has_data() const
{
    return false;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::ReverseRoute()
{

    yang_name = "reverse-route"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::has_data() const
{
    return false;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::empty, "dfbit"},
    ecn{YType::empty, "ecn"},
    level{YType::enumeration, "level"}
    	,
    dummy(nullptr) // presence node
	,idle_time_container(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay>())
{
    idle_time_container->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| level.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dfbit.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(level.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
        dfbit.value_namespace = name_space;
        dfbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dfbit")
    {
        dfbit.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn" || name == "level")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::Dummy()
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::has_data() const
{
    return false;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    idle_time{YType::empty, "idle-time"},
    default_{YType::empty, "default"}
{

    yang_name = "idle-time-container"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return idle_time.is_set
	|| default_.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time" || name == "default")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::empty, "days"},
    kilobytes{YType::empty, "kilobytes"},
    seconds{YType::empty, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
        kilobytes.value_namespace = name_space;
        kilobytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "kilobytes")
    {
        kilobytes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::empty, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::SecurityPolicy()
    :
    limit{YType::uint32, "limit"}
{

    yang_name = "security-policy"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::~SecurityPolicy()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::has_data() const
{
    return limit.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "dialer"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Dialer::~Dialer()
{
}

bool Native::Crypto::Ipsec::Profile::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::Ipsec::Profile::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Redundancy::Redundancy()
    :
    name{YType::str, "name"},
    stateful{YType::empty, "stateful"}
{

    yang_name = "redundancy"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Redundancy::~Redundancy()
{
}

bool Native::Crypto::Ipsec::Profile::Redundancy::has_data() const
{
    return name.is_set
	|| stateful.is_set;
}

bool Native::Crypto::Ipsec::Profile::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stateful.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "stateful")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::Set()
    :
    group{YType::str, "group"},
    identity{YType::str, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::str, "isakmp-profile"},
    transform_set{YType::str, "transform-set"},
    mixed_mode{YType::empty, "mixed-mode"}
    	,
    peer(std::make_shared<Native::Crypto::Ipsec::Profile::Set::Peer>())
	,pfs(nullptr) // presence node
	,reverse_route(std::make_shared<Native::Crypto::Ipsec::Profile::Set::ReverseRoute>())
	,security_association(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation>())
	,security_policy(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityPolicy>())
{
    peer->parent = this;
    reverse_route->parent = this;
    security_association->parent = this;
    security_policy->parent = this;

    yang_name = "set"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::~Set()
{
}

bool Native::Crypto::Ipsec::Profile::Set::has_data() const
{
    for (auto const & leaf : transform_set.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| mixed_mode.is_set
	|| (peer !=  nullptr && peer->has_data())
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data())
	|| (security_policy !=  nullptr && security_policy->has_data());
}

bool Native::Crypto::Ipsec::Profile::Set::has_operation() const
{
    for (auto const & leaf : transform_set.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(ikev2_profile.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(transform_set.yfilter)
	|| ydk::is_set(mixed_mode.yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation())
	|| (security_policy !=  nullptr && security_policy->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (mixed_mode.is_set || is_set(mixed_mode.yfilter)) leaf_name_data.push_back(mixed_mode.get_name_leafdata());

    auto transform_set_name_datas = transform_set.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), transform_set_name_datas.begin(), transform_set_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Ipsec::Profile::Set::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::Ipsec::Profile::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::Ipsec::Profile::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation>();
        }
        return security_association;
    }

    if(child_yang_name == "security-policy")
    {
        if(security_policy == nullptr)
        {
            security_policy = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityPolicy>();
        }
        return security_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(pfs != nullptr)
    {
        children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    if(security_policy != nullptr)
    {
        children["security-policy"] = security_policy;
    }

    return children;
}

void Native::Crypto::Ipsec::Profile::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
        ikev2_profile.value_namespace = name_space;
        ikev2_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-set")
    {
        transform_set.append(value);
    }
    if(value_path == "mixed-mode")
    {
        mixed_mode = value;
        mixed_mode.value_namespace = name_space;
        mixed_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "transform-set")
    {
        transform_set.yfilter = yfilter;
    }
    if(value_path == "mixed-mode")
    {
        mixed_mode.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "pfs" || name == "reverse-route" || name == "security-association" || name == "security-policy" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "transform-set" || name == "mixed-mode")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::Peer::Peer()
    :
    address{YType::str, "address"},
    default_{YType::empty, "default"},
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "peer"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::Peer::~Peer()
{
}

bool Native::Crypto::Ipsec::Profile::Set::Peer::has_data() const
{
    return address.is_set
	|| default_.is_set
	|| dynamic.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "default" || name == "dynamic")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::Pfs::Pfs()
    :
    group{YType::enumeration, "group"}
{

    yang_name = "pfs"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::Ipsec::Profile::Set::Pfs::has_data() const
{
    return group.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::Pfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::Pfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::ReverseRoute::ReverseRoute()
    :
    distance{YType::uint8, "distance"},
    tag{YType::uint64, "tag"}
{

    yang_name = "reverse-route"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::Ipsec::Profile::Set::ReverseRoute::has_data() const
{
    return distance.is_set
	|| tag.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "tag")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::enumeration, "dfbit"},
    ecn{YType::enumeration, "ecn"},
    level{YType::enumeration, "level"}
    	,
    dummy(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy>())
	,idle_time_container(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay>())
{
    dummy->parent = this;
    idle_time_container->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| level.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dfbit.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(level.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    return children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
        dfbit.value_namespace = name_space;
        dfbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dfbit")
    {
        dfbit.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn" || name == "level")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::Dummy()
    :
    pps{YType::uint8, "pps"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::has_data() const
{
    return pps.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pps.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pps.is_set || is_set(pps.yfilter)) leaf_name_data.push_back(pps.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pps")
    {
        pps = value;
        pps.value_namespace = name_space;
        pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pps")
    {
        pps.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    idle_time{YType::uint32, "idle-time"},
    default_{YType::empty, "default"}
{

    yang_name = "idle-time-container"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return idle_time.is_set
	|| default_.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time" || name == "default")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    kilobytes{YType::str, "kilobytes"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
        kilobytes.value_namespace = name_space;
        kilobytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "kilobytes")
    {
        kilobytes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::enumeration, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::SecurityPolicy()
    :
    limit{YType::uint32, "limit"}
{

    yang_name = "security-policy"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::~SecurityPolicy()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::has_data() const
{
    return limit.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Crypto::Ipsec::SecurityAssociation::SecurityAssociation()
    :
    ecn{YType::enumeration, "ecn"},
    idle_time{YType::uint32, "idle-time"}
    	,
    dummy(std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Dummy>())
	,lifetime(std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Replay>())
{
    dummy->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ipsec::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::Ipsec::SecurityAssociation::has_data() const
{
    return ecn.is_set
	|| idle_time.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::Ipsec::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::Ipsec::SecurityAssociation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    return children;
}

void Native::Crypto::Ipsec::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "lifetime" || name == "replay" || name == "ecn" || name == "idle-time")
        return true;
    return false;
}

Native::Crypto::Ipsec::SecurityAssociation::Dummy::Dummy()
    :
    pps{YType::uint8, "pps"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ipsec::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::Ipsec::SecurityAssociation::Dummy::has_data() const
{
    return pps.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pps.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/security-association/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pps.is_set || is_set(pps.yfilter)) leaf_name_data.push_back(pps.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pps")
    {
        pps = value;
        pps.value_namespace = name_space;
        pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pps")
    {
        pps.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    kilobytes{YType::str, "kilobytes"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ipsec::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Ipsec::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/security-association/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
        kilobytes.value_namespace = name_space;
        kilobytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "kilobytes")
    {
        kilobytes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::enumeration, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ipsec::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::Ipsec::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::Ipsec::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Replay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/security-association/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::Ipsec::TransformSet::TransformSet()
    :
    tag{YType::str, "tag"},
    ah_hmac{YType::enumeration, "ah-hmac"},
    comp_lzs{YType::empty, "comp-lzs"},
    esp{YType::enumeration, "esp"},
    key_bit{YType::enumeration, "key-bit"},
    esp_hmac{YType::enumeration, "esp-hmac"}
    	,
    default_(std::make_shared<Native::Crypto::Ipsec::TransformSet::Default_>())
	,mode(std::make_shared<Native::Crypto::Ipsec::TransformSet::Mode>())
{
    default_->parent = this;
    mode->parent = this;

    yang_name = "transform-set"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ipsec::TransformSet::~TransformSet()
{
}

bool Native::Crypto::Ipsec::TransformSet::has_data() const
{
    return tag.is_set
	|| ah_hmac.is_set
	|| comp_lzs.is_set
	|| esp.is_set
	|| key_bit.is_set
	|| esp_hmac.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Crypto::Ipsec::TransformSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(ah_hmac.yfilter)
	|| ydk::is_set(comp_lzs.yfilter)
	|| ydk::is_set(esp.yfilter)
	|| ydk::is_set(key_bit.yfilter)
	|| ydk::is_set(esp_hmac.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Crypto::Ipsec::TransformSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::TransformSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transform-set" <<"[tag='" <<tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::TransformSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (ah_hmac.is_set || is_set(ah_hmac.yfilter)) leaf_name_data.push_back(ah_hmac.get_name_leafdata());
    if (comp_lzs.is_set || is_set(comp_lzs.yfilter)) leaf_name_data.push_back(comp_lzs.get_name_leafdata());
    if (esp.is_set || is_set(esp.yfilter)) leaf_name_data.push_back(esp.get_name_leafdata());
    if (key_bit.is_set || is_set(key_bit.yfilter)) leaf_name_data.push_back(key_bit.get_name_leafdata());
    if (esp_hmac.is_set || is_set(esp_hmac.yfilter)) leaf_name_data.push_back(esp_hmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::TransformSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Ipsec::TransformSet::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Crypto::Ipsec::TransformSet::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::TransformSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Crypto::Ipsec::TransformSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ah-hmac")
    {
        ah_hmac = value;
        ah_hmac.value_namespace = name_space;
        ah_hmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comp-lzs")
    {
        comp_lzs = value;
        comp_lzs.value_namespace = name_space;
        comp_lzs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esp")
    {
        esp = value;
        esp.value_namespace = name_space;
        esp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-bit")
    {
        key_bit = value;
        key_bit.value_namespace = name_space;
        key_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esp-hmac")
    {
        esp_hmac = value;
        esp_hmac.value_namespace = name_space;
        esp_hmac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::TransformSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "ah-hmac")
    {
        ah_hmac.yfilter = yfilter;
    }
    if(value_path == "comp-lzs")
    {
        comp_lzs.yfilter = yfilter;
    }
    if(value_path == "esp")
    {
        esp.yfilter = yfilter;
    }
    if(value_path == "key-bit")
    {
        key_bit.yfilter = yfilter;
    }
    if(value_path == "esp-hmac")
    {
        esp_hmac.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::TransformSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "mode" || name == "tag" || name == "ah-hmac" || name == "comp-lzs" || name == "esp" || name == "key-bit" || name == "esp-hmac")
        return true;
    return false;
}

Native::Crypto::Ipsec::TransformSet::Default_::Default_()
    :
    mode{YType::empty, "mode"}
{

    yang_name = "default"; yang_parent_name = "transform-set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::TransformSet::Default_::~Default_()
{
}

bool Native::Crypto::Ipsec::TransformSet::Default_::has_data() const
{
    return mode.is_set;
}

bool Native::Crypto::Ipsec::TransformSet::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Crypto::Ipsec::TransformSet::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::TransformSet::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::TransformSet::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::TransformSet::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::TransformSet::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::TransformSet::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::TransformSet::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Crypto::Ipsec::TransformSet::Mode::Mode()
    :
    tunnel{YType::empty, "tunnel"}
    	,
    transport(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "transform-set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::TransformSet::Mode::~Mode()
{
}

bool Native::Crypto::Ipsec::TransformSet::Mode::has_data() const
{
    return tunnel.is_set
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Crypto::Ipsec::TransformSet::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Crypto::Ipsec::TransformSet::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::TransformSet::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::TransformSet::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Crypto::Ipsec::TransformSet::Mode::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::TransformSet::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Crypto::Ipsec::TransformSet::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::TransformSet::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::TransformSet::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "tunnel")
        return true;
    return false;
}

Native::Crypto::Ipsec::TransformSet::Mode::Transport::Transport()
    :
    require{YType::empty, "require"}
{

    yang_name = "transport"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::TransformSet::Mode::Transport::~Transport()
{
}

bool Native::Crypto::Ipsec::TransformSet::Mode::Transport::has_data() const
{
    return require.is_set;
}

bool Native::Crypto::Ipsec::TransformSet::Mode::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(require.yfilter);
}

std::string Native::Crypto::Ipsec::TransformSet::Mode::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::TransformSet::Mode::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (require.is_set || is_set(require.yfilter)) leaf_name_data.push_back(require.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::TransformSet::Mode::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::TransformSet::Mode::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::TransformSet::Mode::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "require")
    {
        require = value;
        require.value_namespace = name_space;
        require.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::TransformSet::Mode::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "require")
    {
        require.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::TransformSet::Mode::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "require")
        return true;
    return false;
}

Native::Crypto::Isakmp::Isakmp()
    :
    aggressive_mode{YType::enumeration, "aggressive-mode"},
    disconnect_revoked_peers{YType::empty, "disconnect-revoked-peers"},
    enable{YType::empty, "enable"},
    fragmentation{YType::empty, "fragmentation"},
    identity{YType::enumeration, "identity"},
    invalid_spi_recovery{YType::empty, "invalid-spi-recovery"}
    	,
    client(std::make_shared<Native::Crypto::Isakmp::Client>())
	,default_(std::make_shared<Native::Crypto::Isakmp::Default_>())
	,keepalive(std::make_shared<Native::Crypto::Isakmp::Keepalive>())
	,key(std::make_shared<Native::Crypto::Isakmp::Key>())
	,nat(std::make_shared<Native::Crypto::Isakmp::Nat>())
	,peer(std::make_shared<Native::Crypto::Isakmp::Peer>())
	,xauth(std::make_shared<Native::Crypto::Isakmp::Xauth>())
{
    client->parent = this;
    default_->parent = this;
    keepalive->parent = this;
    key->parent = this;
    nat->parent = this;
    peer->parent = this;
    xauth->parent = this;

    yang_name = "isakmp"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::~Isakmp()
{
}

bool Native::Crypto::Isakmp::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return aggressive_mode.is_set
	|| disconnect_revoked_peers.is_set
	|| enable.is_set
	|| fragmentation.is_set
	|| identity.is_set
	|| invalid_spi_recovery.is_set
	|| (client !=  nullptr && client->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (xauth !=  nullptr && xauth->has_data());
}

bool Native::Crypto::Isakmp::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aggressive_mode.yfilter)
	|| ydk::is_set(disconnect_revoked_peers.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(fragmentation.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(invalid_spi_recovery.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (xauth !=  nullptr && xauth->has_operation());
}

std::string Native::Crypto::Isakmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:isakmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggressive_mode.is_set || is_set(aggressive_mode.yfilter)) leaf_name_data.push_back(aggressive_mode.get_name_leafdata());
    if (disconnect_revoked_peers.is_set || is_set(disconnect_revoked_peers.yfilter)) leaf_name_data.push_back(disconnect_revoked_peers.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (invalid_spi_recovery.is_set || is_set(invalid_spi_recovery.yfilter)) leaf_name_data.push_back(invalid_spi_recovery.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Isakmp::Client>();
        }
        return client;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Isakmp::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Crypto::Isakmp::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::Isakmp::Key>();
        }
        return key;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Crypto::Isakmp::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Isakmp::Peer>();
        }
        return peer;
    }

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
        auto c = std::make_shared<Native::Crypto::Isakmp::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Isakmp::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    if(child_yang_name == "xauth")
    {
        if(xauth == nullptr)
        {
            xauth = std::make_shared<Native::Crypto::Isakmp::Xauth>();
        }
        return xauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    if(nat != nullptr)
    {
        children["nat"] = nat;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    for (auto const & c : policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    if(xauth != nullptr)
    {
        children["xauth"] = xauth;
    }

    return children;
}

void Native::Crypto::Isakmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggressive-mode")
    {
        aggressive_mode = value;
        aggressive_mode.value_namespace = name_space;
        aggressive_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnect-revoked-peers")
    {
        disconnect_revoked_peers = value;
        disconnect_revoked_peers.value_namespace = name_space;
        disconnect_revoked_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
        fragmentation.value_namespace = name_space;
        fragmentation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-spi-recovery")
    {
        invalid_spi_recovery = value;
        invalid_spi_recovery.value_namespace = name_space;
        invalid_spi_recovery.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggressive-mode")
    {
        aggressive_mode.yfilter = yfilter;
    }
    if(value_path == "disconnect-revoked-peers")
    {
        disconnect_revoked_peers.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "fragmentation")
    {
        fragmentation.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "invalid-spi-recovery")
    {
        invalid_spi_recovery.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "default" || name == "keepalive" || name == "key" || name == "nat" || name == "peer" || name == "policy" || name == "profile" || name == "xauth" || name == "aggressive-mode" || name == "disconnect-revoked-peers" || name == "enable" || name == "fragmentation" || name == "identity" || name == "invalid-spi-recovery")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Client()
    :
    configuration(std::make_shared<Native::Crypto::Isakmp::Client::Configuration>())
{
    configuration->parent = this;

    yang_name = "client"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Client::~Client()
{
}

bool Native::Crypto::Isakmp::Client::has_data() const
{
    for (std::size_t index=0; index<firewall.size(); index++)
    {
        if(firewall[index]->has_data())
            return true;
    }
    return (configuration !=  nullptr && configuration->has_data());
}

bool Native::Crypto::Isakmp::Client::has_operation() const
{
    for (std::size_t index=0; index<firewall.size(); index++)
    {
        if(firewall[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string Native::Crypto::Isakmp::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Crypto::Isakmp::Client::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "firewall")
    {
        for(auto const & c : firewall)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Isakmp::Client::Firewall>();
        c->parent = this;
        firewall.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    for (auto const & c : firewall)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Isakmp::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration" || name == "firewall")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Configuration()
    :
    browser_proxy{YType::str, "browser-proxy"}
    	,
    address_pool(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::AddressPool>())
{
    address_pool->parent = this;

    yang_name = "configuration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Client::Configuration::~Configuration()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return browser_proxy.is_set
	|| (address_pool !=  nullptr && address_pool->has_data());
}

bool Native::Crypto::Isakmp::Client::Configuration::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(browser_proxy.yfilter)
	|| (address_pool !=  nullptr && address_pool->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (browser_proxy.is_set || is_set(browser_proxy.yfilter)) leaf_name_data.push_back(browser_proxy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-pool")
    {
        if(address_pool == nullptr)
        {
            address_pool = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::AddressPool>();
        }
        return address_pool;
    }

    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_pool != nullptr)
    {
        children["address-pool"] = address_pool;
    }

    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "browser-proxy")
    {
        browser_proxy = value;
        browser_proxy.value_namespace = name_space;
        browser_proxy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "browser-proxy")
    {
        browser_proxy.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-pool" || name == "group" || name == "browser-proxy")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::AddressPool::AddressPool()
    :
    local{YType::str, "local"}
{

    yang_name = "address-pool"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Client::Configuration::AddressPool::~AddressPool()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::AddressPool::has_data() const
{
    return local.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::AddressPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/client/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::AddressPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::AddressPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::AddressPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Group()
    :
    name{YType::str, "name"},
    access_restrict{YType::str, "access-restrict"},
    acl{YType::str, "acl"},
    backup_gateway{YType::str, "backup-gateway"},
    browser_proxy{YType::str, "browser-proxy"},
    domain{YType::str, "domain"},
    group_lock{YType::empty, "group-lock"},
    include_local_lan{YType::empty, "include-local-lan"},
    max_logins{YType::uint8, "max-logins"},
    max_users{YType::uint32, "max-users"},
    netmask{YType::str, "netmask"},
    pfs{YType::empty, "pfs"},
    pool{YType::str, "pool"},
    save_password{YType::empty, "save-password"},
    smartcard_removal_disconnect{YType::empty, "smartcard-removal-disconnect"},
    split_dns{YType::str, "split-dns"}
    	,
    auto_update(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate>())
	,configuration(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_>())
	,crypto(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_>())
	,dhcp(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp>())
	,dns(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Dns>())
	,firewall(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Firewall>())
	,key(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Key>())
	,wins(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Wins>())
{
    auto_update->parent = this;
    configuration->parent = this;
    crypto->parent = this;
    dhcp->parent = this;
    dns->parent = this;
    firewall->parent = this;
    key->parent = this;
    wins->parent = this;

    yang_name = "group"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::~Group()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::has_data() const
{
    return name.is_set
	|| access_restrict.is_set
	|| acl.is_set
	|| backup_gateway.is_set
	|| browser_proxy.is_set
	|| domain.is_set
	|| group_lock.is_set
	|| include_local_lan.is_set
	|| max_logins.is_set
	|| max_users.is_set
	|| netmask.is_set
	|| pfs.is_set
	|| pool.is_set
	|| save_password.is_set
	|| smartcard_removal_disconnect.is_set
	|| split_dns.is_set
	|| (auto_update !=  nullptr && auto_update->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (dns !=  nullptr && dns->has_data())
	|| (firewall !=  nullptr && firewall->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (wins !=  nullptr && wins->has_data());
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(access_restrict.yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(backup_gateway.yfilter)
	|| ydk::is_set(browser_proxy.yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(group_lock.yfilter)
	|| ydk::is_set(include_local_lan.yfilter)
	|| ydk::is_set(max_logins.yfilter)
	|| ydk::is_set(max_users.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(pfs.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(save_password.yfilter)
	|| ydk::is_set(smartcard_removal_disconnect.yfilter)
	|| ydk::is_set(split_dns.yfilter)
	|| (auto_update !=  nullptr && auto_update->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (dns !=  nullptr && dns->has_operation())
	|| (firewall !=  nullptr && firewall->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (wins !=  nullptr && wins->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/client/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (access_restrict.is_set || is_set(access_restrict.yfilter)) leaf_name_data.push_back(access_restrict.get_name_leafdata());
    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (backup_gateway.is_set || is_set(backup_gateway.yfilter)) leaf_name_data.push_back(backup_gateway.get_name_leafdata());
    if (browser_proxy.is_set || is_set(browser_proxy.yfilter)) leaf_name_data.push_back(browser_proxy.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (group_lock.is_set || is_set(group_lock.yfilter)) leaf_name_data.push_back(group_lock.get_name_leafdata());
    if (include_local_lan.is_set || is_set(include_local_lan.yfilter)) leaf_name_data.push_back(include_local_lan.get_name_leafdata());
    if (max_logins.is_set || is_set(max_logins.yfilter)) leaf_name_data.push_back(max_logins.get_name_leafdata());
    if (max_users.is_set || is_set(max_users.yfilter)) leaf_name_data.push_back(max_users.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (pfs.is_set || is_set(pfs.yfilter)) leaf_name_data.push_back(pfs.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (save_password.is_set || is_set(save_password.yfilter)) leaf_name_data.push_back(save_password.get_name_leafdata());
    if (smartcard_removal_disconnect.is_set || is_set(smartcard_removal_disconnect.yfilter)) leaf_name_data.push_back(smartcard_removal_disconnect.get_name_leafdata());
    if (split_dns.is_set || is_set(split_dns.yfilter)) leaf_name_data.push_back(split_dns.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-update")
    {
        if(auto_update == nullptr)
        {
            auto_update = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate>();
        }
        return auto_update;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_>();
        }
        return configuration;
    }

    if(child_yang_name == "crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_>();
        }
        return crypto;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "firewall")
    {
        if(firewall == nullptr)
        {
            firewall = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Firewall>();
        }
        return firewall;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Key>();
        }
        return key;
    }

    if(child_yang_name == "wins")
    {
        if(wins == nullptr)
        {
            wins = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Wins>();
        }
        return wins;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_update != nullptr)
    {
        children["auto-update"] = auto_update;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(crypto != nullptr)
    {
        children["crypto"] = crypto;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(dns != nullptr)
    {
        children["dns"] = dns;
    }

    if(firewall != nullptr)
    {
        children["firewall"] = firewall;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    if(wins != nullptr)
    {
        children["wins"] = wins;
    }

    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-restrict")
    {
        access_restrict = value;
        access_restrict.value_namespace = name_space;
        access_restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-gateway")
    {
        backup_gateway = value;
        backup_gateway.value_namespace = name_space;
        backup_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "browser-proxy")
    {
        browser_proxy = value;
        browser_proxy.value_namespace = name_space;
        browser_proxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-lock")
    {
        group_lock = value;
        group_lock.value_namespace = name_space;
        group_lock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-local-lan")
    {
        include_local_lan = value;
        include_local_lan.value_namespace = name_space;
        include_local_lan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-logins")
    {
        max_logins = value;
        max_logins.value_namespace = name_space;
        max_logins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-users")
    {
        max_users = value;
        max_users.value_namespace = name_space;
        max_users.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfs")
    {
        pfs = value;
        pfs.value_namespace = name_space;
        pfs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "save-password")
    {
        save_password = value;
        save_password.value_namespace = name_space;
        save_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "smartcard-removal-disconnect")
    {
        smartcard_removal_disconnect = value;
        smartcard_removal_disconnect.value_namespace = name_space;
        smartcard_removal_disconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-dns")
    {
        split_dns = value;
        split_dns.value_namespace = name_space;
        split_dns.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "access-restrict")
    {
        access_restrict.yfilter = yfilter;
    }
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "backup-gateway")
    {
        backup_gateway.yfilter = yfilter;
    }
    if(value_path == "browser-proxy")
    {
        browser_proxy.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "group-lock")
    {
        group_lock.yfilter = yfilter;
    }
    if(value_path == "include-local-lan")
    {
        include_local_lan.yfilter = yfilter;
    }
    if(value_path == "max-logins")
    {
        max_logins.yfilter = yfilter;
    }
    if(value_path == "max-users")
    {
        max_users.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "pfs")
    {
        pfs.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "save-password")
    {
        save_password.yfilter = yfilter;
    }
    if(value_path == "smartcard-removal-disconnect")
    {
        smartcard_removal_disconnect.yfilter = yfilter;
    }
    if(value_path == "split-dns")
    {
        split_dns.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-update" || name == "configuration" || name == "crypto" || name == "dhcp" || name == "dns" || name == "firewall" || name == "key" || name == "wins" || name == "name" || name == "access-restrict" || name == "acl" || name == "backup-gateway" || name == "browser-proxy" || name == "domain" || name == "group-lock" || name == "include-local-lan" || name == "max-logins" || name == "max-users" || name == "netmask" || name == "pfs" || name == "pool" || name == "save-password" || name == "smartcard-removal-disconnect" || name == "split-dns")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::AutoUpdate()
    :
    client{YType::str, "client"},
    url{YType::str, "url"},
    rev{YType::str, "rev"}
{

    yang_name = "auto-update"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::~AutoUpdate()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::has_data() const
{
    return client.is_set
	|| url.is_set
	|| rev.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(rev.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "url" || name == "rev")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Configuration_()
    :
    url{YType::enumeration, "url"},
    version{YType::uint32, "version"}
{

    yang_name = "configuration"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::~Configuration_()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::has_data() const
{
    return url.is_set
	|| version.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "version")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Crypto_()
    :
    aaa(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa>())
{
    aaa->parent = this;

    yang_name = "crypto"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::~Crypto_()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::has_data() const
{
    return (aaa !=  nullptr && aaa->has_data());
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::has_operation() const
{
    return is_set(yfilter)
	|| (aaa !=  nullptr && aaa->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa>();
        }
        return aaa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aaa != nullptr)
    {
        children["aaa"] = aaa;
    }

    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Aaa()
    :
    attribute(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute>())
{
    attribute->parent = this;

    yang_name = "aaa"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::~Aaa()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::has_data() const
{
    return (attribute !=  nullptr && attribute->has_data());
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::has_operation() const
{
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::Attribute()
    :
    list{YType::str, "list"}
{

    yang_name = "attribute"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::~Attribute()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::has_data() const
{
    return list.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::Dhcp()
    :
    giaddr{YType::str, "giaddr"},
    server{YType::str, "server"},
    timeout{YType::uint8, "timeout"}
{

    yang_name = "dhcp"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::~Dhcp()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::has_data() const
{
    return giaddr.is_set
	|| server.is_set
	|| timeout.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(giaddr.yfilter)
	|| ydk::is_set(server.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (giaddr.is_set || is_set(giaddr.yfilter)) leaf_name_data.push_back(giaddr.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "giaddr")
    {
        giaddr = value;
        giaddr.value_namespace = name_space;
        giaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "giaddr")
    {
        giaddr.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "giaddr" || name == "server" || name == "timeout")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Dns::Dns()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "dns"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Dns::~Dns()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dns::has_data() const
{
    return primary.is_set
	|| secondary.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::Firewall()
    :
    are_u_there{YType::empty, "are-u-there"},
    policy{YType::str, "policy"}
{

    yang_name = "firewall"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::~Firewall()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::has_data() const
{
    return are_u_there.is_set
	|| policy.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(are_u_there.yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "firewall";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (are_u_there.is_set || is_set(are_u_there.yfilter)) leaf_name_data.push_back(are_u_there.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "are-u-there")
    {
        are_u_there = value;
        are_u_there.value_namespace = name_space;
        are_u_there.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "are-u-there")
    {
        are_u_there.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "are-u-there" || name == "policy")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Key::~Key()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Wins::Wins()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "wins"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Wins::~Wins()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Wins::has_data() const
{
    return primary.is_set
	|| secondary.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Wins::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Wins::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wins";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Wins::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Wins::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Wins::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Wins::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Wins::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Wins::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Firewall::Firewall()
    :
    policy_name{YType::str, "policy-name"},
    optional{YType::enumeration, "optional"},
    required{YType::enumeration, "required"}
    	,
    policy(std::make_shared<Native::Crypto::Isakmp::Client::Firewall::Policy>())
{
    policy->parent = this;

    yang_name = "firewall"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Client::Firewall::~Firewall()
{
}

bool Native::Crypto::Isakmp::Client::Firewall::has_data() const
{
    return policy_name.is_set
	|| optional.is_set
	|| required.is_set
	|| (policy !=  nullptr && policy->has_data());
}

bool Native::Crypto::Isakmp::Client::Firewall::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(optional.yfilter)
	|| ydk::is_set(required.yfilter)
	|| (policy !=  nullptr && policy->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Firewall::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::Firewall::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "firewall" <<"[policy-name='" <<policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Firewall::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (optional.is_set || is_set(optional.yfilter)) leaf_name_data.push_back(optional.get_name_leafdata());
    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Firewall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Crypto::Isakmp::Client::Firewall::Policy>();
        }
        return policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Firewall::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    return children;
}

void Native::Crypto::Isakmp::Client::Firewall::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optional")
    {
        optional = value;
        optional.value_namespace = name_space;
        optional.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Firewall::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "optional")
    {
        optional.yfilter = yfilter;
    }
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Firewall::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "policy-name" || name == "optional" || name == "required")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Firewall::Policy::Policy()
    :
    check_presence{YType::empty, "check-presence"}
    	,
    central_policy_push(std::make_shared<Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush>())
{
    central_policy_push->parent = this;

    yang_name = "policy"; yang_parent_name = "firewall"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Firewall::Policy::~Policy()
{
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::has_data() const
{
    return check_presence.is_set
	|| (central_policy_push !=  nullptr && central_policy_push->has_data());
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(check_presence.yfilter)
	|| (central_policy_push !=  nullptr && central_policy_push->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Firewall::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Firewall::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (check_presence.is_set || is_set(check_presence.yfilter)) leaf_name_data.push_back(check_presence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Firewall::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "central-policy-push")
    {
        if(central_policy_push == nullptr)
        {
            central_policy_push = std::make_shared<Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush>();
        }
        return central_policy_push;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Firewall::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(central_policy_push != nullptr)
    {
        children["central-policy-push"] = central_policy_push;
    }

    return children;
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "check-presence")
    {
        check_presence = value;
        check_presence.value_namespace = name_space;
        check_presence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "check-presence")
    {
        check_presence.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "central-policy-push" || name == "check-presence")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::CentralPolicyPush()
    :
    access_list(std::make_shared<Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList>())
{
    access_list->parent = this;

    yang_name = "central-policy-push"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::~CentralPolicyPush()
{
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::has_data() const
{
    return (access_list !=  nullptr && access_list->has_data());
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::has_operation() const
{
    return is_set(yfilter)
	|| (access_list !=  nullptr && access_list->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "central-policy-push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList>();
        }
        return access_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_list != nullptr)
    {
        children["access-list"] = access_list;
    }

    return children;
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::AccessList()
    :
    direction{YType::enumeration, "direction"},
    acl{YType::str, "acl"}
{

    yang_name = "access-list"; yang_parent_name = "central-policy-push"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::~AccessList()
{
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::has_data() const
{
    return direction.is_set
	|| acl.is_set;
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(acl.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "acl")
        return true;
    return false;
}

Native::Crypto::Isakmp::Default_::Default_()
    :
    policy{YType::empty, "policy"}
{

    yang_name = "default"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Default_::~Default_()
{
}

bool Native::Crypto::Isakmp::Default_::has_data() const
{
    return policy.is_set;
}

bool Native::Crypto::Isakmp::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Crypto::Isakmp::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Crypto::Isakmp::Keepalive::Keepalive()
    :
    number{YType::uint16, "number"},
    retry_number{YType::uint8, "retry-number"},
    send{YType::enumeration, "send"}
{

    yang_name = "keepalive"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Keepalive::~Keepalive()
{
}

bool Native::Crypto::Isakmp::Keepalive::has_data() const
{
    return number.is_set
	|| retry_number.is_set
	|| send.is_set;
}

bool Native::Crypto::Isakmp::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(retry_number.yfilter)
	|| ydk::is_set(send.yfilter);
}

std::string Native::Crypto::Isakmp::Keepalive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (retry_number.is_set || is_set(retry_number.yfilter)) leaf_name_data.push_back(retry_number.get_name_leafdata());
    if (send.is_set || is_set(send.yfilter)) leaf_name_data.push_back(send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-number")
    {
        retry_number = value;
        retry_number.value_namespace = name_space;
        retry_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send")
    {
        send = value;
        send.value_namespace = name_space;
        send.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "retry-number")
    {
        retry_number.yfilter = yfilter;
    }
    if(value_path == "send")
    {
        send.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "retry-number" || name == "send")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::Key()
    :
    key_address(std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress>())
	,key_host(std::make_shared<Native::Crypto::Isakmp::Key::KeyHost>())
{
    key_address->parent = this;
    key_host->parent = this;

    yang_name = "key"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Key::~Key()
{
}

bool Native::Crypto::Isakmp::Key::has_data() const
{
    return (key_address !=  nullptr && key_address->has_data())
	|| (key_host !=  nullptr && key_host->has_data());
}

bool Native::Crypto::Isakmp::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_address !=  nullptr && key_address->has_operation())
	|| (key_host !=  nullptr && key_host->has_operation());
}

std::string Native::Crypto::Isakmp::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-address")
    {
        if(key_address == nullptr)
        {
            key_address = std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress>();
        }
        return key_address;
    }

    if(child_yang_name == "key-host")
    {
        if(key_host == nullptr)
        {
            key_host = std::make_shared<Native::Crypto::Isakmp::Key::KeyHost>();
        }
        return key_host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_address != nullptr)
    {
        children["key-address"] = key_address;
    }

    if(key_host != nullptr)
    {
        children["key-host"] = key_host;
    }

    return children;
}

void Native::Crypto::Isakmp::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-address" || name == "key-host")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::KeyAddress::KeyAddress()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
    	,
    addr4_container(std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container>())
	,addr6_container(std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container>())
{
    addr4_container->parent = this;
    addr6_container->parent = this;

    yang_name = "key-address"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Key::KeyAddress::~KeyAddress()
{
}

bool Native::Crypto::Isakmp::Key::KeyAddress::has_data() const
{
    return encryption.is_set
	|| key.is_set
	|| (addr4_container !=  nullptr && addr4_container->has_data())
	|| (addr6_container !=  nullptr && addr6_container->has_data());
}

bool Native::Crypto::Isakmp::Key::KeyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| (addr4_container !=  nullptr && addr4_container->has_operation())
	|| (addr6_container !=  nullptr && addr6_container->has_operation());
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::KeyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Key::KeyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr4-container")
    {
        if(addr4_container == nullptr)
        {
            addr4_container = std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container>();
        }
        return addr4_container;
    }

    if(child_yang_name == "addr6-container")
    {
        if(addr6_container == nullptr)
        {
            addr6_container = std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container>();
        }
        return addr6_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Key::KeyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr4_container != nullptr)
    {
        children["addr4-container"] = addr4_container;
    }

    if(addr6_container != nullptr)
    {
        children["addr6-container"] = addr6_container;
    }

    return children;
}

void Native::Crypto::Isakmp::Key::KeyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Key::KeyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Key::KeyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr4-container" || name == "addr6-container" || name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::Addr4Container()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    no_xauth{YType::empty, "no-xauth"}
{

    yang_name = "addr4-container"; yang_parent_name = "key-address"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::~Addr4Container()
{
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::has_data() const
{
    return address.is_set
	|| mask.is_set
	|| no_xauth.is_set;
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(no_xauth.yfilter);
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/key/key-address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr4-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (no_xauth.is_set || is_set(no_xauth.yfilter)) leaf_name_data.push_back(no_xauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "no-xauth")
    {
        no_xauth = value;
        no_xauth.value_namespace = name_space;
        no_xauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "no-xauth")
    {
        no_xauth.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "no-xauth")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Addr6Container()
    :
    address(std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address>())
{
    address->parent = this;

    yang_name = "addr6-container"; yang_parent_name = "key-address"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::~Addr6Container()
{
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/key/key-address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr6-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::Address()
    :
    ipv6{YType::str, "ipv6"},
    no_xauth{YType::empty, "no-xauth"}
{

    yang_name = "address"; yang_parent_name = "addr6-container"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::~Address()
{
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::has_data() const
{
    return ipv6.is_set
	|| no_xauth.is_set;
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(no_xauth.yfilter);
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/key/key-address/addr6-container/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (no_xauth.is_set || is_set(no_xauth.yfilter)) leaf_name_data.push_back(no_xauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-xauth")
    {
        no_xauth = value;
        no_xauth.value_namespace = name_space;
        no_xauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "no-xauth")
    {
        no_xauth.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "no-xauth")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::KeyHost::KeyHost()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
    	,
    host_container(std::make_shared<Native::Crypto::Isakmp::Key::KeyHost::HostContainer>())
{
    host_container->parent = this;

    yang_name = "key-host"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Key::KeyHost::~KeyHost()
{
}

bool Native::Crypto::Isakmp::Key::KeyHost::has_data() const
{
    return encryption.is_set
	|| key.is_set
	|| (host_container !=  nullptr && host_container->has_data());
}

bool Native::Crypto::Isakmp::Key::KeyHost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| (host_container !=  nullptr && host_container->has_operation());
}

std::string Native::Crypto::Isakmp::Key::KeyHost::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::KeyHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::KeyHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Key::KeyHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-container")
    {
        if(host_container == nullptr)
        {
            host_container = std::make_shared<Native::Crypto::Isakmp::Key::KeyHost::HostContainer>();
        }
        return host_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Key::KeyHost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host_container != nullptr)
    {
        children["host-container"] = host_container;
    }

    return children;
}

void Native::Crypto::Isakmp::Key::KeyHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Key::KeyHost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Key::KeyHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-container" || name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::KeyHost::HostContainer::HostContainer()
    :
    hostname{YType::str, "hostname"},
    no_xauth{YType::empty, "no-xauth"}
{

    yang_name = "host-container"; yang_parent_name = "key-host"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Key::KeyHost::HostContainer::~HostContainer()
{
}

bool Native::Crypto::Isakmp::Key::KeyHost::HostContainer::has_data() const
{
    return hostname.is_set
	|| no_xauth.is_set;
}

bool Native::Crypto::Isakmp::Key::KeyHost::HostContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(no_xauth.yfilter);
}

std::string Native::Crypto::Isakmp::Key::KeyHost::HostContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/key/key-host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::KeyHost::HostContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::KeyHost::HostContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (no_xauth.is_set || is_set(no_xauth.yfilter)) leaf_name_data.push_back(no_xauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Key::KeyHost::HostContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Key::KeyHost::HostContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Key::KeyHost::HostContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-xauth")
    {
        no_xauth = value;
        no_xauth.value_namespace = name_space;
        no_xauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Key::KeyHost::HostContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "no-xauth")
    {
        no_xauth.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Key::KeyHost::HostContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostname" || name == "no-xauth")
        return true;
    return false;
}

Native::Crypto::Isakmp::Nat::Nat()
    :
    keepalive{YType::uint16, "keepalive"}
{

    yang_name = "nat"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Nat::~Nat()
{
}

bool Native::Crypto::Isakmp::Nat::has_data() const
{
    return keepalive.is_set;
}

bool Native::Crypto::Isakmp::Nat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive.yfilter);
}

std::string Native::Crypto::Isakmp::Nat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Nat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Peer()
    :
    ipv4_addr(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr>())
	,ipv6_addr(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr>())
{
    ipv4_addr->parent = this;
    ipv6_addr->parent = this;

    yang_name = "peer"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Peer::~Peer()
{
}

bool Native::Crypto::Isakmp::Peer::has_data() const
{
    for (std::size_t index=0; index<hostname.size(); index++)
    {
        if(hostname[index]->has_data())
            return true;
    }
    return (ipv4_addr !=  nullptr && ipv4_addr->has_data())
	|| (ipv6_addr !=  nullptr && ipv6_addr->has_data());
}

bool Native::Crypto::Isakmp::Peer::has_operation() const
{
    for (std::size_t index=0; index<hostname.size(); index++)
    {
        if(hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ipv4_addr !=  nullptr && ipv4_addr->has_operation())
	|| (ipv6_addr !=  nullptr && ipv6_addr->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addr")
    {
        if(ipv4_addr == nullptr)
        {
            ipv4_addr = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr>();
        }
        return ipv4_addr;
    }

    if(child_yang_name == "ipv6-addr")
    {
        if(ipv6_addr == nullptr)
        {
            ipv6_addr = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr>();
        }
        return ipv6_addr;
    }

    if(child_yang_name == "hostname")
    {
        for(auto const & c : hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Isakmp::Peer::Hostname>();
        c->parent = this;
        hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_addr != nullptr)
    {
        children["ipv4-addr"] = ipv4_addr;
    }

    if(ipv6_addr != nullptr)
    {
        children["ipv6-addr"] = ipv6_addr;
    }

    for (auto const & c : hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Isakmp::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "ipv6-addr" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Ipv4Addr()
{

    yang_name = "ipv4-addr"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::~Ipv4Addr()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Address()
    :
    ipv4{YType::str, "ipv4"},
    vrf{YType::str, "vrf"},
    description{YType::str, "description"}
    	,
    set(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set>())
{
    set->parent = this;

    yang_name = "address"; yang_parent_name = "ipv4-addr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::~Address()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::has_data() const
{
    return ipv4.is_set
	|| vrf.is_set
	|| description.is_set
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/peer/ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set" || name == "ipv4" || name == "vrf" || name == "description")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::Set()
    :
    aggressive_mode(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode>())
{
    aggressive_mode->parent = this;

    yang_name = "set"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::~Set()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::has_data() const
{
    return (aggressive_mode !=  nullptr && aggressive_mode->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::has_operation() const
{
    return is_set(yfilter)
	|| (aggressive_mode !=  nullptr && aggressive_mode->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-mode")
    {
        if(aggressive_mode == nullptr)
        {
            aggressive_mode = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode>();
        }
        return aggressive_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggressive_mode != nullptr)
    {
        children["aggressive-mode"] = aggressive_mode;
    }

    return children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive-mode")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::AggressiveMode()
    :
    client_endpoint(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint>())
	,password(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password>())
{
    client_endpoint->parent = this;
    password->parent = this;

    yang_name = "aggressive-mode"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::~AggressiveMode()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::has_data() const
{
    return (client_endpoint !=  nullptr && client_endpoint->has_data())
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::has_operation() const
{
    return is_set(yfilter)
	|| (client_endpoint !=  nullptr && client_endpoint->has_operation())
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggressive-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-endpoint")
    {
        if(client_endpoint == nullptr)
        {
            client_endpoint = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint>();
        }
        return client_endpoint;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_endpoint != nullptr)
    {
        children["client-endpoint"] = client_endpoint;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-endpoint" || name == "password")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::ClientEndpoint()
    :
    fqdn{YType::str, "fqdn"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    user_fqdn{YType::str, "user-fqdn"}
{

    yang_name = "client-endpoint"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::~ClientEndpoint()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::has_data() const
{
    return fqdn.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| user_fqdn.is_set;
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fqdn.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(user_fqdn.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (user_fqdn.is_set || is_set(user_fqdn.yfilter)) leaf_name_data.push_back(user_fqdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn = value;
        user_fqdn.value_namespace = name_space;
        user_fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fqdn" || name == "ipv4-address" || name == "ipv6-address" || name == "user-fqdn")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::~Password()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Ipv6Addr()
{

    yang_name = "ipv6-addr"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::~Ipv6Addr()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Address()
    :
    ipv6{YType::str, "ipv6"},
    vrf{YType::str, "vrf"},
    description{YType::str, "description"}
    	,
    set(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set>())
{
    set->parent = this;

    yang_name = "address"; yang_parent_name = "ipv6-addr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::~Address()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::has_data() const
{
    return ipv6.is_set
	|| vrf.is_set
	|| description.is_set
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/peer/ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ipv6='" <<ipv6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set" || name == "ipv6" || name == "vrf" || name == "description")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::Set()
    :
    aggressive_mode(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode>())
{
    aggressive_mode->parent = this;

    yang_name = "set"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::~Set()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::has_data() const
{
    return (aggressive_mode !=  nullptr && aggressive_mode->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::has_operation() const
{
    return is_set(yfilter)
	|| (aggressive_mode !=  nullptr && aggressive_mode->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-mode")
    {
        if(aggressive_mode == nullptr)
        {
            aggressive_mode = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode>();
        }
        return aggressive_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggressive_mode != nullptr)
    {
        children["aggressive-mode"] = aggressive_mode;
    }

    return children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive-mode")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::AggressiveMode()
    :
    client_endpoint(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint>())
	,password(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password>())
{
    client_endpoint->parent = this;
    password->parent = this;

    yang_name = "aggressive-mode"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::~AggressiveMode()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::has_data() const
{
    return (client_endpoint !=  nullptr && client_endpoint->has_data())
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::has_operation() const
{
    return is_set(yfilter)
	|| (client_endpoint !=  nullptr && client_endpoint->has_operation())
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggressive-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-endpoint")
    {
        if(client_endpoint == nullptr)
        {
            client_endpoint = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint>();
        }
        return client_endpoint;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_endpoint != nullptr)
    {
        children["client-endpoint"] = client_endpoint;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-endpoint" || name == "password")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::ClientEndpoint()
    :
    fqdn{YType::str, "fqdn"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    user_fqdn{YType::str, "user-fqdn"}
{

    yang_name = "client-endpoint"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::~ClientEndpoint()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::has_data() const
{
    return fqdn.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| user_fqdn.is_set;
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fqdn.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(user_fqdn.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (user_fqdn.is_set || is_set(user_fqdn.yfilter)) leaf_name_data.push_back(user_fqdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn = value;
        user_fqdn.value_namespace = name_space;
        user_fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fqdn" || name == "ipv4-address" || name == "ipv6-address" || name == "user-fqdn")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::~Password()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Hostname::Hostname()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"},
    description{YType::str, "description"}
    	,
    set(std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set>())
{
    set->parent = this;

    yang_name = "hostname"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Peer::Hostname::~Hostname()
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::has_data() const
{
    return name.is_set
	|| vrf.is_set
	|| description.is_set
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Isakmp::Peer::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Hostname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Peer::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::Isakmp::Peer::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set" || name == "name" || name == "vrf" || name == "description")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Hostname::Set::Set()
    :
    aggressive_mode(std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode>())
{
    aggressive_mode->parent = this;

    yang_name = "set"; yang_parent_name = "hostname"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Peer::Hostname::Set::~Set()
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::has_data() const
{
    return (aggressive_mode !=  nullptr && aggressive_mode->has_data());
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::has_operation() const
{
    return is_set(yfilter)
	|| (aggressive_mode !=  nullptr && aggressive_mode->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Hostname::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Hostname::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Hostname::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-mode")
    {
        if(aggressive_mode == nullptr)
        {
            aggressive_mode = std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode>();
        }
        return aggressive_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Hostname::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggressive_mode != nullptr)
    {
        children["aggressive-mode"] = aggressive_mode;
    }

    return children;
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive-mode")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::AggressiveMode()
    :
    client_endpoint(std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint>())
	,password(std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password>())
{
    client_endpoint->parent = this;
    password->parent = this;

    yang_name = "aggressive-mode"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::~AggressiveMode()
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::has_data() const
{
    return (client_endpoint !=  nullptr && client_endpoint->has_data())
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::has_operation() const
{
    return is_set(yfilter)
	|| (client_endpoint !=  nullptr && client_endpoint->has_operation())
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggressive-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-endpoint")
    {
        if(client_endpoint == nullptr)
        {
            client_endpoint = std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint>();
        }
        return client_endpoint;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_endpoint != nullptr)
    {
        children["client-endpoint"] = client_endpoint;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-endpoint" || name == "password")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::ClientEndpoint()
    :
    fqdn{YType::str, "fqdn"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    user_fqdn{YType::str, "user-fqdn"}
{

    yang_name = "client-endpoint"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::~ClientEndpoint()
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::has_data() const
{
    return fqdn.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| user_fqdn.is_set;
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fqdn.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(user_fqdn.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (user_fqdn.is_set || is_set(user_fqdn.yfilter)) leaf_name_data.push_back(user_fqdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn = value;
        user_fqdn.value_namespace = name_space;
        user_fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fqdn" || name == "ipv4-address" || name == "ipv6-address" || name == "user-fqdn")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::~Password()
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Policy()
    :
    number{YType::uint32, "number"},
    authentication{YType::enumeration, "authentication"},
    group{YType::enumeration, "group"},
    hash{YType::enumeration, "hash"},
    lifetime{YType::uint32, "lifetime"}
    	,
    default_(std::make_shared<Native::Crypto::Isakmp::Policy::Default_>())
	,encryption(std::make_shared<Native::Crypto::Isakmp::Policy::Encryption>())
{
    default_->parent = this;
    encryption->parent = this;

    yang_name = "policy"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Policy::~Policy()
{
}

bool Native::Crypto::Isakmp::Policy::has_data() const
{
    return number.is_set
	|| authentication.is_set
	|| group.is_set
	|| hash.is_set
	|| lifetime.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (encryption !=  nullptr && encryption->has_data());
}

bool Native::Crypto::Isakmp::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(hash.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Native::Crypto::Isakmp::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (hash.is_set || is_set(hash.yfilter)) leaf_name_data.push_back(hash.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Isakmp::Policy::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Isakmp::Policy::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Native::Crypto::Isakmp::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash")
    {
        hash = value;
        hash.value_namespace = name_space;
        hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "hash")
    {
        hash.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "encryption" || name == "number" || name == "authentication" || name == "group" || name == "hash" || name == "lifetime")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Default_::Default_()
    :
    authentication{YType::enumeration, "authentication"},
    group{YType::enumeration, "group"},
    hash{YType::enumeration, "hash"},
    lifetime{YType::empty, "lifetime"}
    	,
    encryption(std::make_shared<Native::Crypto::Isakmp::Policy::Default_::Encryption>())
{
    encryption->parent = this;

    yang_name = "default"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Policy::Default_::~Default_()
{
}

bool Native::Crypto::Isakmp::Policy::Default_::has_data() const
{
    return authentication.is_set
	|| group.is_set
	|| hash.is_set
	|| lifetime.is_set
	|| (encryption !=  nullptr && encryption->has_data());
}

bool Native::Crypto::Isakmp::Policy::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(hash.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Native::Crypto::Isakmp::Policy::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (hash.is_set || is_set(hash.yfilter)) leaf_name_data.push_back(hash.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Policy::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Isakmp::Policy::Default_::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Policy::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Native::Crypto::Isakmp::Policy::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash")
    {
        hash = value;
        hash.value_namespace = name_space;
        hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "hash")
    {
        hash.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "authentication" || name == "group" || name == "hash" || name == "lifetime")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Default_::Encryption::Encryption()
    :
    a3des{YType::empty, "a3des"},
    des{YType::empty, "des"}
    	,
    aes(nullptr) // presence node
{

    yang_name = "encryption"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Policy::Default_::Encryption::~Encryption()
{
}

bool Native::Crypto::Isakmp::Policy::Default_::Encryption::has_data() const
{
    return a3des.is_set
	|| des.is_set
	|| (aes !=  nullptr && aes->has_data());
}

bool Native::Crypto::Isakmp::Policy::Default_::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a3des.yfilter)
	|| ydk::is_set(des.yfilter)
	|| (aes !=  nullptr && aes->has_operation());
}

std::string Native::Crypto::Isakmp::Policy::Default_::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Default_::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a3des.is_set || is_set(a3des.yfilter)) leaf_name_data.push_back(a3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Policy::Default_::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes")
    {
        if(aes == nullptr)
        {
            aes = std::make_shared<Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes>();
        }
        return aes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Policy::Default_::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aes != nullptr)
    {
        children["aes"] = aes;
    }

    return children;
}

void Native::Crypto::Isakmp::Policy::Default_::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a3des")
    {
        a3des = value;
        a3des.value_namespace = name_space;
        a3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Default_::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a3des")
    {
        a3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Default_::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes" || name == "a3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::Aes()
    :
    key{YType::enumeration, "key"}
{

    yang_name = "aes"; yang_parent_name = "encryption"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::~Aes()
{
}

bool Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::has_data() const
{
    return key.is_set;
}

bool Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Encryption::Encryption()
    :
    a3des{YType::empty, "a3des"},
    des{YType::empty, "des"}
    	,
    aes(nullptr) // presence node
{

    yang_name = "encryption"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Policy::Encryption::~Encryption()
{
}

bool Native::Crypto::Isakmp::Policy::Encryption::has_data() const
{
    return a3des.is_set
	|| des.is_set
	|| (aes !=  nullptr && aes->has_data());
}

bool Native::Crypto::Isakmp::Policy::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a3des.yfilter)
	|| ydk::is_set(des.yfilter)
	|| (aes !=  nullptr && aes->has_operation());
}

std::string Native::Crypto::Isakmp::Policy::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a3des.is_set || is_set(a3des.yfilter)) leaf_name_data.push_back(a3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Policy::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes")
    {
        if(aes == nullptr)
        {
            aes = std::make_shared<Native::Crypto::Isakmp::Policy::Encryption::Aes>();
        }
        return aes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Policy::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aes != nullptr)
    {
        children["aes"] = aes;
    }

    return children;
}

void Native::Crypto::Isakmp::Policy::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a3des")
    {
        a3des = value;
        a3des.value_namespace = name_space;
        a3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a3des")
    {
        a3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes" || name == "a3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Encryption::Aes::Aes()
    :
    key{YType::enumeration, "key"}
{

    yang_name = "aes"; yang_parent_name = "encryption"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Policy::Encryption::Aes::~Aes()
{
}

bool Native::Crypto::Isakmp::Policy::Encryption::Aes::has_data() const
{
    return key.is_set;
}

bool Native::Crypto::Isakmp::Policy::Encryption::Aes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Policy::Encryption::Aes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Encryption::Aes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Policy::Encryption::Aes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Policy::Encryption::Aes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Policy::Encryption::Aes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Encryption::Aes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Encryption::Aes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Profile()
    :
    name{YType::str, "name"},
    accounting{YType::str, "accounting"},
    description{YType::str, "description"},
    keyring{YType::str, "keyring"},
    local_address{YType::str, "local-address"},
    qos_group{YType::uint16, "qos-group"},
    virtual_template{YType::uint16, "virtual-template"},
    vrf{YType::str, "vrf"}
    	,
    default_(std::make_shared<Native::Crypto::Isakmp::Profile::Default_>())
	,ca(std::make_shared<Native::Crypto::Isakmp::Profile::Ca>())
	,client(std::make_shared<Native::Crypto::Isakmp::Profile::Client>())
	,initiate(std::make_shared<Native::Crypto::Isakmp::Profile::Initiate>())
	,isakmp(std::make_shared<Native::Crypto::Isakmp::Profile::Isakmp_>())
	,keepalive(std::make_shared<Native::Crypto::Isakmp::Profile::Keepalive>())
	,match(std::make_shared<Native::Crypto::Isakmp::Profile::Match>())
	,self_identity(std::make_shared<Native::Crypto::Isakmp::Profile::SelfIdentity>())
{
    default_->parent = this;
    ca->parent = this;
    client->parent = this;
    initiate->parent = this;
    isakmp->parent = this;
    keepalive->parent = this;
    match->parent = this;
    self_identity->parent = this;

    yang_name = "profile"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Profile::~Profile()
{
}

bool Native::Crypto::Isakmp::Profile::has_data() const
{
    return name.is_set
	|| accounting.is_set
	|| description.is_set
	|| keyring.is_set
	|| local_address.is_set
	|| qos_group.is_set
	|| virtual_template.is_set
	|| vrf.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (ca !=  nullptr && ca->has_data())
	|| (client !=  nullptr && client->has_data())
	|| (initiate !=  nullptr && initiate->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (self_identity !=  nullptr && self_identity->has_data());
}

bool Native::Crypto::Isakmp::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(keyring.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (ca !=  nullptr && ca->has_operation())
	|| (client !=  nullptr && client->has_operation())
	|| (initiate !=  nullptr && initiate->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (self_identity !=  nullptr && self_identity->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (keyring.is_set || is_set(keyring.yfilter)) leaf_name_data.push_back(keyring.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Isakmp::Profile::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "ca")
    {
        if(ca == nullptr)
        {
            ca = std::make_shared<Native::Crypto::Isakmp::Profile::Ca>();
        }
        return ca;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Isakmp::Profile::Client>();
        }
        return client;
    }

    if(child_yang_name == "initiate")
    {
        if(initiate == nullptr)
        {
            initiate = std::make_shared<Native::Crypto::Isakmp::Profile::Initiate>();
        }
        return initiate;
    }

    if(child_yang_name == "isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Native::Crypto::Isakmp::Profile::Isakmp_>();
        }
        return isakmp;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Crypto::Isakmp::Profile::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Isakmp::Profile::Match>();
        }
        return match;
    }

    if(child_yang_name == "self-identity")
    {
        if(self_identity == nullptr)
        {
            self_identity = std::make_shared<Native::Crypto::Isakmp::Profile::SelfIdentity>();
        }
        return self_identity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(ca != nullptr)
    {
        children["ca"] = ca;
    }

    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(initiate != nullptr)
    {
        children["initiate"] = initiate;
    }

    if(isakmp != nullptr)
    {
        children["isakmp"] = isakmp;
    }

    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(self_identity != nullptr)
    {
        children["self-identity"] = self_identity;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyring")
    {
        keyring = value;
        keyring.value_namespace = name_space;
        keyring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "keyring")
    {
        keyring.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "virtual-template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "ca" || name == "client" || name == "initiate" || name == "isakmp" || name == "keepalive" || name == "match" || name == "self-identity" || name == "name" || name == "accounting" || name == "description" || name == "keyring" || name == "local-address" || name == "qos-group" || name == "virtual-template" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Default_()
    :
    accounting{YType::empty, "accounting"},
    description{YType::str, "description"},
    keyring{YType::str, "keyring"},
    local_address{YType::empty, "local-address"},
    qos_group{YType::empty, "qos-group"},
    virtual_template{YType::empty, "virtual-template"},
    vrf{YType::empty, "vrf"}
    	,
    ca(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Ca>())
	,client(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Client>())
	,initiate(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Initiate>())
	,isakmp(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Isakmp_>())
	,keepalive(nullptr) // presence node
	,match(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match>())
	,self_identity(nullptr) // presence node
{
    ca->parent = this;
    client->parent = this;
    initiate->parent = this;
    isakmp->parent = this;
    match->parent = this;

    yang_name = "default"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::~Default_()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::has_data() const
{
    return accounting.is_set
	|| description.is_set
	|| keyring.is_set
	|| local_address.is_set
	|| qos_group.is_set
	|| virtual_template.is_set
	|| vrf.is_set
	|| (ca !=  nullptr && ca->has_data())
	|| (client !=  nullptr && client->has_data())
	|| (initiate !=  nullptr && initiate->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (self_identity !=  nullptr && self_identity->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(keyring.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (ca !=  nullptr && ca->has_operation())
	|| (client !=  nullptr && client->has_operation())
	|| (initiate !=  nullptr && initiate->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (self_identity !=  nullptr && self_identity->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (keyring.is_set || is_set(keyring.yfilter)) leaf_name_data.push_back(keyring.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ca")
    {
        if(ca == nullptr)
        {
            ca = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Ca>();
        }
        return ca;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Client>();
        }
        return client;
    }

    if(child_yang_name == "initiate")
    {
        if(initiate == nullptr)
        {
            initiate = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Initiate>();
        }
        return initiate;
    }

    if(child_yang_name == "isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Isakmp_>();
        }
        return isakmp;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match>();
        }
        return match;
    }

    if(child_yang_name == "self-identity")
    {
        if(self_identity == nullptr)
        {
            self_identity = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::SelfIdentity>();
        }
        return self_identity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ca != nullptr)
    {
        children["ca"] = ca;
    }

    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(initiate != nullptr)
    {
        children["initiate"] = initiate;
    }

    if(isakmp != nullptr)
    {
        children["isakmp"] = isakmp;
    }

    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(self_identity != nullptr)
    {
        children["self-identity"] = self_identity;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyring")
    {
        keyring = value;
        keyring.value_namespace = name_space;
        keyring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "keyring")
    {
        keyring.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "virtual-template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ca" || name == "client" || name == "initiate" || name == "isakmp" || name == "keepalive" || name == "match" || name == "self-identity" || name == "accounting" || name == "description" || name == "keyring" || name == "local-address" || name == "qos-group" || name == "virtual-template" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Ca::Ca()
    :
    trust_point{YType::str, "trust-point"}
{

    yang_name = "ca"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Ca::~Ca()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Ca::has_data() const
{
    return trust_point.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default_::Ca::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust_point.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::Ca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ca";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Ca::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust_point.is_set || is_set(trust_point.yfilter)) leaf_name_data.push_back(trust_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Ca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Ca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Ca::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust-point")
    {
        trust_point = value;
        trust_point.value_namespace = name_space;
        trust_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default_::Ca::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust-point")
    {
        trust_point.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default_::Ca::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust-point")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Client::Client()
    :
    authentication(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Client::Authentication>())
	,configuration(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Client::Configuration>())
	,pki(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Client::Pki>())
{
    authentication->parent = this;
    configuration->parent = this;
    pki->parent = this;

    yang_name = "client"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Client::~Client()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (pki !=  nullptr && pki->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (pki !=  nullptr && pki->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default_::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Client::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Client::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "pki")
    {
        if(pki == nullptr)
        {
            pki = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Client::Pki>();
        }
        return pki;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(pki != nullptr)
    {
        children["pki"] = pki;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default_::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "configuration" || name == "pki")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::Authentication()
    :
    list{YType::empty, "list"}
{

    yang_name = "authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::~Authentication()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::has_data() const
{
    return list.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::Configuration()
    :
    address{YType::enumeration, "address"},
    group{YType::str, "group"}
{

    yang_name = "configuration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::~Configuration()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::has_data() const
{
    return address.is_set
	|| group.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "group")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Pki()
    :
    authorization(nullptr) // presence node
{

    yang_name = "pki"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Client::Pki::~Pki()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Pki::has_data() const
{
    return (authorization !=  nullptr && authorization->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Pki::has_operation() const
{
    return is_set(yfilter)
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default_::Client::Pki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Client::Pki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Client::Pki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Client::Pki::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Client::Pki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default_::Client::Pki::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Pki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::Authorization()
{

    yang_name = "authorization"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::~Authorization()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::has_data() const
{
    return false;
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Initiate::Initiate()
    :
    mode(nullptr) // presence node
{

    yang_name = "initiate"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Initiate::~Initiate()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Initiate::has_data() const
{
    return (mode !=  nullptr && mode->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default_::Initiate::has_operation() const
{
    return is_set(yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default_::Initiate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Initiate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Initiate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Initiate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Initiate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default_::Initiate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Initiate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::Mode()
{

    yang_name = "mode"; yang_parent_name = "initiate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::~Mode()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::has_data() const
{
    return false;
}

bool Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Default_::Client::TransportEncryptKey::group_key {0, "group-key"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Default_::Client::TransportEncryptKey::pair_wise_key {1, "pair-wise-key"};

const Enum::YLeaf Native::Crypto::Ipsec::DfBit::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::Ipsec::DfBit::copy {1, "copy"};
const Enum::YLeaf Native::Crypto::Ipsec::DfBit::set {2, "set"};

const Enum::YLeaf Native::Crypto::Ipsec::Fragmentation::after_encryption {0, "after-encryption"};
const Enum::YLeaf Native::Crypto::Ipsec::Fragmentation::before_encryption {1, "before-encryption"};

const Enum::YLeaf Native::Crypto::Ipsec::Ipv4Deny::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::Ipsec::Ipv4Deny::drop {1, "drop"};
const Enum::YLeaf Native::Crypto::Ipsec::Ipv4Deny::jump {2, "jump"};

const Enum::YLeaf Native::Crypto::Ipsec::NatTransparency::spi_matching {0, "spi-matching"};
const Enum::YLeaf Native::Crypto::Ipsec::NatTransparency::udp_encapsulation {1, "udp-encapsulation"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Level::per_host {0, "per-host"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group1 {0, "group1"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group14 {1, "group14"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group15 {2, "group15"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group16 {3, "group16"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group19 {4, "group19"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group2 {5, "group2"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group20 {6, "group20"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group21 {7, "group21"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group24 {8, "group24"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group5 {9, "group5"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dfbit::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dfbit::copy {1, "copy"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dfbit::set {2, "set"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Ecn::discard {0, "discard"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Ecn::propagate {1, "propagate"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Level::per_host {0, "per-host"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::Kilobytes::disable {0, "disable"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Ecn::discard {0, "discard"};
const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Ecn::propagate {1, "propagate"};

const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Lifetime::Kilobytes::disable {0, "disable"};

const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSize::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSize::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSize::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSize::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSize::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::AhHmac::ah_md5_hmac {0, "ah-md5-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::AhHmac::ah_sha_hmac {1, "ah-sha-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::AhHmac::ah_sha256_hmac {2, "ah-sha256-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::AhHmac::ah_sha384_hmac {3, "ah-sha384-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::AhHmac::ah_sha512_hmac {4, "ah-sha512-hmac"};

const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_3des {0, "esp-3des"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_aes {1, "esp-aes"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_des {2, "esp-des"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_gcm {3, "esp-gcm"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_gmac {4, "esp-gmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_null {5, "esp-null"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_seal {6, "esp-seal"};

const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::KeyBit::Y_128 {0, "128"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::KeyBit::Y_192 {1, "192"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::KeyBit::Y_256 {2, "256"};

const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::EspHmac::esp_md5_hmac {0, "esp-md5-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::EspHmac::esp_sha_hmac {1, "esp-sha-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::EspHmac::esp_sha256_hmac {2, "esp-sha256-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::EspHmac::esp_sha384_hmac {3, "esp-sha384-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::EspHmac::esp_sha512_hmac {4, "esp-sha512-hmac"};

const Enum::YLeaf Native::Crypto::Isakmp::AggressiveMode::disable {0, "disable"};

const Enum::YLeaf Native::Crypto::Isakmp::Identity::address {0, "address"};
const Enum::YLeaf Native::Crypto::Isakmp::Identity::dn {1, "dn"};
const Enum::YLeaf Native::Crypto::Isakmp::Identity::hostname {2, "hostname"};

const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::cns__COLON__ {1, "cns:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::flash__COLON__ {2, "flash:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::ftp__COLON__ {3, "ftp:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::http__COLON__ {4, "http:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::https__COLON__ {5, "https:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::null__COLON__ {6, "null:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::nvram__COLON__ {7, "nvram:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::pram__COLON__ {8, "pram:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::rcp__COLON__ {9, "rcp:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::scp__COLON__ {10, "scp:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::system__COLON__ {11, "system:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::tar__COLON__ {12, "tar:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::tftp__COLON__ {13, "tftp:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::tmpsys__COLON__ {14, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Key::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Optional::cisco_integrated_client_firewall {0, "cisco-integrated-client-firewall"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Optional::cisco_security_agent {1, "cisco-security-agent"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Optional::zonelabs_zonealarm {2, "zonelabs-zonealarm"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Optional::zonelabs_zonealarmpro {3, "zonelabs-zonealarmpro"};

const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Required::cisco_integrated_client_firewall {0, "cisco-integrated-client-firewall"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Required::cisco_security_agent {1, "cisco-security-agent"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Required::zonelabs_zonealarm {2, "zonelabs-zonealarm"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Required::zonelabs_zonealarmpro {3, "zonelabs-zonealarmpro"};

const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::Direction::in {0, "in"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::Direction::out {1, "out"};

const Enum::YLeaf Native::Crypto::Isakmp::Keepalive::Send::on_demand {0, "on-demand"};
const Enum::YLeaf Native::Crypto::Isakmp::Keepalive::Send::periodic {1, "periodic"};

const Enum::YLeaf Native::Crypto::Isakmp::Key::KeyAddress::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Key::KeyAddress::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Key::KeyHost::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Key::KeyHost::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Authentication::pre_share {0, "pre-share"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Authentication::rsa_encr {1, "rsa-encr"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Authentication::rsa_sig {2, "rsa-sig"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_1 {0, "1"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_14 {1, "14"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_15 {2, "15"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_16 {3, "16"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_19 {4, "19"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_2 {5, "2"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_20 {6, "20"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_21 {7, "21"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_24 {8, "24"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_5 {9, "5"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::md5 {0, "md5"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::sha {1, "sha"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::sha256 {2, "sha256"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::sha384 {3, "sha384"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::sha512 {4, "sha512"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Authentication::pre_share {0, "pre-share"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Authentication::rsa_encr {1, "rsa-encr"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Authentication::rsa_sig {2, "rsa-sig"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_1 {0, "1"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_14 {1, "14"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_15 {2, "15"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_16 {3, "16"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_19 {4, "19"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_2 {5, "2"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_20 {6, "20"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_21 {7, "21"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_24 {8, "24"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_5 {9, "5"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Hash::md5 {0, "md5"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Hash::sha {1, "sha"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Hash::sha256 {2, "sha256"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Hash::sha384 {3, "sha384"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Hash::sha512 {4, "sha512"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::Key::Y_128 {0, "128"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::Key::Y_192 {1, "192"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::Key::Y_256 {2, "256"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Encryption::Aes::Key::Y_128 {0, "128"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Encryption::Aes::Key::Y_192 {1, "192"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Encryption::Aes::Key::Y_256 {2, "256"};

const Enum::YLeaf Native::Crypto::Isakmp::Profile::Keyring::default_ {0, "default"};

const Enum::YLeaf Native::Crypto::Isakmp::Profile::Default_::Keyring::default_ {0, "default"};

const Enum::YLeaf Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::Address::initiate {0, "initiate"};
const Enum::YLeaf Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::Address::respond {1, "respond"};


}
}

