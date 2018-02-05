
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_101.hpp"
#include "Cisco_IOS_XE_native_102.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Crypto::MapClient::Map::Redundancy::Redundancy()
    :
    replay_interval(std::make_shared<Native::Crypto::MapClient::Map::Redundancy::ReplayInterval>())
{
    replay_interval->parent = this;

    yang_name = "redundancy"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapClient::Map::Redundancy::~Redundancy()
{
}

bool Native::Crypto::MapClient::Map::Redundancy::has_data() const
{
    return (replay_interval !=  nullptr && replay_interval->has_data());
}

bool Native::Crypto::MapClient::Map::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| (replay_interval !=  nullptr && replay_interval->has_operation());
}

std::string Native::Crypto::MapClient::Map::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "replay-interval")
    {
        if(replay_interval == nullptr)
        {
            replay_interval = std::make_shared<Native::Crypto::MapClient::Map::Redundancy::ReplayInterval>();
        }
        return replay_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(replay_interval != nullptr)
    {
        children["replay-interval"] = replay_interval;
    }

    return children;
}

void Native::Crypto::MapClient::Map::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::MapClient::Map::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::MapClient::Map::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replay-interval")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::ReplayInterval()
    :
    inbound{YType::uint32, "inbound"},
    outbound{YType::uint32, "outbound"}
{

    yang_name = "replay-interval"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::~ReplayInterval()
{
}

bool Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::has_data() const
{
    return inbound.is_set
	|| outbound.is_set;
}

bool Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inbound.yfilter)
	|| ydk::is_set(outbound.yfilter);
}

std::string Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound.is_set || is_set(inbound.yfilter)) leaf_name_data.push_back(inbound.get_name_leafdata());
    if (outbound.is_set || is_set(outbound.yfilter)) leaf_name_data.push_back(outbound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inbound")
    {
        inbound = value;
        inbound.value_namespace = name_space;
        inbound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound")
    {
        outbound = value;
        outbound.value_namespace = name_space;
        outbound.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inbound")
    {
        inbound.yfilter = yfilter;
    }
    if(value_path == "outbound")
    {
        outbound.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound" || name == "outbound")
        return true;
    return false;
}

Native::Crypto::Mib::Mib()
    :
    ipsec(std::make_shared<Native::Crypto::Mib::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "mib"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Mib::~Mib()
{
}

bool Native::Crypto::Mib::has_data() const
{
    return (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Crypto::Mib::has_operation() const
{
    return is_set(yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Crypto::Mib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Crypto::Mib::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Crypto::Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Ipsec()
    :
    flowmib(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib>())
{
    flowmib->parent = this;

    yang_name = "ipsec"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Mib::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Mib::Ipsec::has_data() const
{
    return (flowmib !=  nullptr && flowmib->has_data());
}

bool Native::Crypto::Mib::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| (flowmib !=  nullptr && flowmib->has_operation());
}

std::string Native::Crypto::Mib::Ipsec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Mib::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flowmib")
    {
        if(flowmib == nullptr)
        {
            flowmib = std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib>();
        }
        return flowmib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Mib::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flowmib != nullptr)
    {
        children["flowmib"] = flowmib;
    }

    return children;
}

void Native::Crypto::Mib::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Mib::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Mib::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flowmib")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Flowmib::Flowmib()
    :
    history(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History>())
{
    history->parent = this;

    yang_name = "flowmib"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Mib::Ipsec::Flowmib::~Flowmib()
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::has_data() const
{
    return (history !=  nullptr && history->has_data());
}

bool Native::Crypto::Mib::Ipsec::Flowmib::has_operation() const
{
    return is_set(yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowmib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::Flowmib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Mib::Ipsec::Flowmib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Mib::Ipsec::Flowmib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(history != nullptr)
    {
        children["history"] = history;
    }

    return children;
}

void Native::Crypto::Mib::Ipsec::Flowmib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Mib::Ipsec::Flowmib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::History()
    :
    failure(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History::Failure>())
	,tunnel(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel>())
{
    failure->parent = this;
    tunnel->parent = this;

    yang_name = "history"; yang_parent_name = "flowmib"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::~History()
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::has_data() const
{
    return (failure !=  nullptr && failure->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::has_operation() const
{
    return is_set(yfilter)
	|| (failure !=  nullptr && failure->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/flowmib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::Flowmib::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Mib::Ipsec::Flowmib::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History::Failure>();
        }
        return failure;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Mib::Ipsec::Flowmib::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(failure != nullptr)
    {
        children["failure"] = failure;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "tunnel")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::Failure()
    :
    size{YType::uint8, "size"}
{

    yang_name = "failure"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::~Failure()
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::has_data() const
{
    return size.is_set;
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/flowmib/history/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::Tunnel()
    :
    size{YType::uint8, "size"}
{

    yang_name = "tunnel"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::~Tunnel()
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::has_data() const
{
    return size.is_set;
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/flowmib/history/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Pki::Pki()
    :
    authenticate{YType::str, "authenticate"},
    enroll{YType::str, "enroll"}
    	,
    certificate(std::make_shared<Native::Crypto::Pki::Certificate>())
	,crl(std::make_shared<Native::Crypto::Pki::Crl>())
	,profile(std::make_shared<Native::Crypto::Pki::Profile>())
	,server(std::make_shared<Native::Crypto::Pki::Server>())
	,token(std::make_shared<Native::Crypto::Pki::Token>())
	,trustpool(std::make_shared<Native::Crypto::Pki::Trustpool>())
	,default_(std::make_shared<Native::Crypto::Pki::Default>())
{
    certificate->parent = this;
    crl->parent = this;
    profile->parent = this;
    server->parent = this;
    token->parent = this;
    trustpool->parent = this;
    default_->parent = this;

    yang_name = "pki"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::~Pki()
{
}

bool Native::Crypto::Pki::has_data() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trustpoint.size(); index++)
    {
        if(trustpoint[index]->has_data())
            return true;
    }
    return authenticate.is_set
	|| enroll.is_set
	|| (certificate !=  nullptr && certificate->has_data())
	|| (crl !=  nullptr && crl->has_data())
	|| (profile !=  nullptr && profile->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (token !=  nullptr && token->has_data())
	|| (trustpool !=  nullptr && trustpool->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Pki::has_operation() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trustpoint.size(); index++)
    {
        if(trustpoint[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(authenticate.yfilter)
	|| ydk::is_set(enroll.yfilter)
	|| (certificate !=  nullptr && certificate->has_operation())
	|| (crl !=  nullptr && crl->has_operation())
	|| (profile !=  nullptr && profile->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (token !=  nullptr && token->has_operation())
	|| (trustpool !=  nullptr && trustpool->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Pki::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:pki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticate.is_set || is_set(authenticate.yfilter)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (enroll.is_set || is_set(enroll.yfilter)) leaf_name_data.push_back(enroll.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certificate")
    {
        if(certificate == nullptr)
        {
            certificate = std::make_shared<Native::Crypto::Pki::Certificate>();
        }
        return certificate;
    }

    if(child_yang_name == "crl")
    {
        if(crl == nullptr)
        {
            crl = std::make_shared<Native::Crypto::Pki::Crl>();
        }
        return crl;
    }

    if(child_yang_name == "export")
    {
        auto c = std::make_shared<Native::Crypto::Pki::Export>();
        c->parent = this;
        export_.push_back(c);
        return c;
    }

    if(child_yang_name == "import")
    {
        auto c = std::make_shared<Native::Crypto::Pki::Import>();
        c->parent = this;
        import.push_back(c);
        return c;
    }

    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Crypto::Pki::Profile>();
        }
        return profile;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Crypto::Pki::Server>();
        }
        return server;
    }

    if(child_yang_name == "trustpoint")
    {
        auto c = std::make_shared<Native::Crypto::Pki::Trustpoint>();
        c->parent = this;
        trustpoint.push_back(c);
        return c;
    }

    if(child_yang_name == "token")
    {
        if(token == nullptr)
        {
            token = std::make_shared<Native::Crypto::Pki::Token>();
        }
        return token;
    }

    if(child_yang_name == "trustpool")
    {
        if(trustpool == nullptr)
        {
            trustpool = std::make_shared<Native::Crypto::Pki::Trustpool>();
        }
        return trustpool;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Pki::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(certificate != nullptr)
    {
        children["certificate"] = certificate;
    }

    if(crl != nullptr)
    {
        children["crl"] = crl;
    }

    count = 0;
    for (auto const & c : export_)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : import)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    count = 0;
    for (auto const & c : trustpoint)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(token != nullptr)
    {
        children["token"] = token;
    }

    if(trustpool != nullptr)
    {
        children["trustpool"] = trustpool;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Crypto::Pki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authenticate")
    {
        authenticate = value;
        authenticate.value_namespace = name_space;
        authenticate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enroll")
    {
        enroll = value;
        enroll.value_namespace = name_space;
        enroll.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authenticate")
    {
        authenticate.yfilter = yfilter;
    }
    if(value_path == "enroll")
    {
        enroll.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate" || name == "crl" || name == "export" || name == "import" || name == "profile" || name == "server" || name == "trustpoint" || name == "token" || name == "trustpool" || name == "default" || name == "authenticate" || name == "enroll")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Certificate()
    :
    pool{YType::empty, "pool"},
    query{YType::empty, "query"},
    validate{YType::str, "validate"}
    	,
    storage(std::make_shared<Native::Crypto::Pki::Certificate::Storage>())
{
    storage->parent = this;

    yang_name = "certificate"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Certificate::~Certificate()
{
}

bool Native::Crypto::Pki::Certificate::has_data() const
{
    for (std::size_t index=0; index<chain.size(); index++)
    {
        if(chain[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_data())
            return true;
    }
    return pool.is_set
	|| query.is_set
	|| validate.is_set
	|| (storage !=  nullptr && storage->has_data());
}

bool Native::Crypto::Pki::Certificate::has_operation() const
{
    for (std::size_t index=0; index<chain.size(); index++)
    {
        if(chain[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(query.yfilter)
	|| ydk::is_set(validate.yfilter)
	|| (storage !=  nullptr && storage->has_operation());
}

std::string Native::Crypto::Pki::Certificate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Certificate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (query.is_set || is_set(query.yfilter)) leaf_name_data.push_back(query.get_name_leafdata());
    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chain")
    {
        auto c = std::make_shared<Native::Crypto::Pki::Certificate::Chain>();
        c->parent = this;
        chain.push_back(c);
        return c;
    }

    if(child_yang_name == "map")
    {
        auto c = std::make_shared<Native::Crypto::Pki::Certificate::Map>();
        c->parent = this;
        map.push_back(c);
        return c;
    }

    if(child_yang_name == "storage")
    {
        if(storage == nullptr)
        {
            storage = std::make_shared<Native::Crypto::Pki::Certificate::Storage>();
        }
        return storage;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : chain)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(storage != nullptr)
    {
        children["storage"] = storage;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query")
    {
        query = value;
        query.value_namespace = name_space;
        query.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "query")
    {
        query.yfilter = yfilter;
    }
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chain" || name == "map" || name == "storage" || name == "pool" || name == "query" || name == "validate")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Chain::Chain()
    :
    name{YType::str, "name"}
{

    yang_name = "chain"; yang_parent_name = "certificate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Certificate::Chain::~Chain()
{
}

bool Native::Crypto::Pki::Certificate::Chain::has_data() const
{
    for (std::size_t index=0; index<certificate.size(); index++)
    {
        if(certificate[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Crypto::Pki::Certificate::Chain::has_operation() const
{
    for (std::size_t index=0; index<certificate.size(); index++)
    {
        if(certificate[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Chain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/certificate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Certificate::Chain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chain" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Chain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Chain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certificate")
    {
        auto c = std::make_shared<Native::Crypto::Pki::Certificate::Chain::Certificate_>();
        c->parent = this;
        certificate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Chain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : certificate)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Chain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Chain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Chain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate" || name == "name")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Chain::Certificate_::Certificate_()
    :
    serial{YType::str, "serial"},
    certtype{YType::enumeration, "certtype"}
{

    yang_name = "certificate"; yang_parent_name = "chain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Chain::Certificate_::~Certificate_()
{
}

bool Native::Crypto::Pki::Certificate::Chain::Certificate_::has_data() const
{
    return serial.is_set
	|| certtype.is_set;
}

bool Native::Crypto::Pki::Certificate::Chain::Certificate_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(certtype.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Chain::Certificate_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate" <<"[serial='" <<serial <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Chain::Certificate_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (certtype.is_set || is_set(certtype.yfilter)) leaf_name_data.push_back(certtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Chain::Certificate_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Chain::Certificate_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Certificate::Chain::Certificate_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certtype")
    {
        certtype = value;
        certtype.value_namespace = name_space;
        certtype.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Chain::Certificate_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "certtype")
    {
        certtype.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Chain::Certificate_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serial" || name == "certtype")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::Map()
    :
    tag{YType::str, "tag"},
    sequence{YType::uint16, "sequence"}
    	,
    alt_subject_name(std::make_shared<Native::Crypto::Pki::Certificate::Map::AltSubjectName>())
	,expires_on(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn>())
	,issuer_name(std::make_shared<Native::Crypto::Pki::Certificate::Map::IssuerName>())
	,name(std::make_shared<Native::Crypto::Pki::Certificate::Map::Name>())
	,serial_number(std::make_shared<Native::Crypto::Pki::Certificate::Map::SerialNumber>())
	,subject_name(std::make_shared<Native::Crypto::Pki::Certificate::Map::SubjectName>())
	,unstructured_subject_name(std::make_shared<Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName>())
	,valid_start(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart>())
{
    alt_subject_name->parent = this;
    expires_on->parent = this;
    issuer_name->parent = this;
    name->parent = this;
    serial_number->parent = this;
    subject_name->parent = this;
    unstructured_subject_name->parent = this;
    valid_start->parent = this;

    yang_name = "map"; yang_parent_name = "certificate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Certificate::Map::~Map()
{
}

bool Native::Crypto::Pki::Certificate::Map::has_data() const
{
    return tag.is_set
	|| sequence.is_set
	|| (alt_subject_name !=  nullptr && alt_subject_name->has_data())
	|| (expires_on !=  nullptr && expires_on->has_data())
	|| (issuer_name !=  nullptr && issuer_name->has_data())
	|| (name !=  nullptr && name->has_data())
	|| (serial_number !=  nullptr && serial_number->has_data())
	|| (subject_name !=  nullptr && subject_name->has_data())
	|| (unstructured_subject_name !=  nullptr && unstructured_subject_name->has_data())
	|| (valid_start !=  nullptr && valid_start->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| (alt_subject_name !=  nullptr && alt_subject_name->has_operation())
	|| (expires_on !=  nullptr && expires_on->has_operation())
	|| (issuer_name !=  nullptr && issuer_name->has_operation())
	|| (name !=  nullptr && name->has_operation())
	|| (serial_number !=  nullptr && serial_number->has_operation())
	|| (subject_name !=  nullptr && subject_name->has_operation())
	|| (unstructured_subject_name !=  nullptr && unstructured_subject_name->has_operation())
	|| (valid_start !=  nullptr && valid_start->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/certificate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Certificate::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map" <<"[tag='" <<tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alt-subject-name")
    {
        if(alt_subject_name == nullptr)
        {
            alt_subject_name = std::make_shared<Native::Crypto::Pki::Certificate::Map::AltSubjectName>();
        }
        return alt_subject_name;
    }

    if(child_yang_name == "expires-on")
    {
        if(expires_on == nullptr)
        {
            expires_on = std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn>();
        }
        return expires_on;
    }

    if(child_yang_name == "issuer-name")
    {
        if(issuer_name == nullptr)
        {
            issuer_name = std::make_shared<Native::Crypto::Pki::Certificate::Map::IssuerName>();
        }
        return issuer_name;
    }

    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Crypto::Pki::Certificate::Map::Name>();
        }
        return name;
    }

    if(child_yang_name == "serial-number")
    {
        if(serial_number == nullptr)
        {
            serial_number = std::make_shared<Native::Crypto::Pki::Certificate::Map::SerialNumber>();
        }
        return serial_number;
    }

    if(child_yang_name == "subject-name")
    {
        if(subject_name == nullptr)
        {
            subject_name = std::make_shared<Native::Crypto::Pki::Certificate::Map::SubjectName>();
        }
        return subject_name;
    }

    if(child_yang_name == "unstructured-subject-name")
    {
        if(unstructured_subject_name == nullptr)
        {
            unstructured_subject_name = std::make_shared<Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName>();
        }
        return unstructured_subject_name;
    }

    if(child_yang_name == "valid-start")
    {
        if(valid_start == nullptr)
        {
            valid_start = std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart>();
        }
        return valid_start;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(alt_subject_name != nullptr)
    {
        children["alt-subject-name"] = alt_subject_name;
    }

    if(expires_on != nullptr)
    {
        children["expires-on"] = expires_on;
    }

    if(issuer_name != nullptr)
    {
        children["issuer-name"] = issuer_name;
    }

    if(name != nullptr)
    {
        children["name"] = name;
    }

    if(serial_number != nullptr)
    {
        children["serial-number"] = serial_number;
    }

    if(subject_name != nullptr)
    {
        children["subject-name"] = subject_name;
    }

    if(unstructured_subject_name != nullptr)
    {
        children["unstructured-subject-name"] = unstructured_subject_name;
    }

    if(valid_start != nullptr)
    {
        children["valid-start"] = valid_start;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alt-subject-name" || name == "expires-on" || name == "issuer-name" || name == "name" || name == "serial-number" || name == "subject-name" || name == "unstructured-subject-name" || name == "valid-start" || name == "tag" || name == "sequence")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::AltSubjectName::AltSubjectName()
    :
    co{YType::str, "co"},
    eq{YType::str, "eq"},
    nc{YType::str, "nc"},
    ne{YType::str, "ne"}
{

    yang_name = "alt-subject-name"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::AltSubjectName::~AltSubjectName()
{
}

bool Native::Crypto::Pki::Certificate::Map::AltSubjectName::has_data() const
{
    return co.is_set
	|| eq.is_set
	|| nc.is_set
	|| ne.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::AltSubjectName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(co.yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(nc.yfilter)
	|| ydk::is_set(ne.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::AltSubjectName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alt-subject-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::AltSubjectName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (co.is_set || is_set(co.yfilter)) leaf_name_data.push_back(co.get_name_leafdata());
    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (nc.is_set || is_set(nc.yfilter)) leaf_name_data.push_back(nc.get_name_leafdata());
    if (ne.is_set || is_set(ne.yfilter)) leaf_name_data.push_back(ne.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::AltSubjectName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::AltSubjectName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Certificate::Map::AltSubjectName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "co")
    {
        co = value;
        co.value_namespace = name_space;
        co.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nc")
    {
        nc = value;
        nc.value_namespace = name_space;
        nc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ne")
    {
        ne = value;
        ne.value_namespace = name_space;
        ne.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::AltSubjectName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "co")
    {
        co.yfilter = yfilter;
    }
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "nc")
    {
        nc.yfilter = yfilter;
    }
    if(value_path == "ne")
    {
        ne.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::AltSubjectName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "co" || name == "eq" || name == "nc" || name == "ne")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::ExpiresOn()
    :
    eq(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq>())
	,ge(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge>())
	,lt(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt>())
	,ne(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne>())
{
    eq->parent = this;
    ge->parent = this;
    lt->parent = this;
    ne->parent = this;

    yang_name = "expires-on"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::~ExpiresOn()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::has_data() const
{
    return (eq !=  nullptr && eq->has_data())
	|| (ge !=  nullptr && ge->has_data())
	|| (lt !=  nullptr && lt->has_data())
	|| (ne !=  nullptr && ne->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::has_operation() const
{
    return is_set(yfilter)
	|| (eq !=  nullptr && eq->has_operation())
	|| (ge !=  nullptr && ge->has_operation())
	|| (lt !=  nullptr && lt->has_operation())
	|| (ne !=  nullptr && ne->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expires-on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ExpiresOn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ExpiresOn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eq")
    {
        if(eq == nullptr)
        {
            eq = std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq>();
        }
        return eq;
    }

    if(child_yang_name == "ge")
    {
        if(ge == nullptr)
        {
            ge = std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge>();
        }
        return ge;
    }

    if(child_yang_name == "lt")
    {
        if(lt == nullptr)
        {
            lt = std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt>();
        }
        return lt;
    }

    if(child_yang_name == "ne")
    {
        if(ne == nullptr)
        {
            ne = std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne>();
        }
        return ne;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ExpiresOn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(eq != nullptr)
    {
        children["eq"] = eq;
    }

    if(ge != nullptr)
    {
        children["ge"] = ge;
    }

    if(lt != nullptr)
    {
        children["lt"] = lt;
    }

    if(ne != nullptr)
    {
        children["ne"] = ne;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "ge" || name == "lt" || name == "ne")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Eq()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time>())
{
    time->parent = this;

    yang_name = "eq"; yang_parent_name = "expires-on"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::~Eq()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::has_data() const
{
    return (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::Time()
    :
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    clock_{YType::str, "clock"},
    utc{YType::empty, "utc"}
{

    yang_name = "time"; yang_parent_name = "eq"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::has_data() const
{
    return date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| clock_.is_set
	|| utc.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(clock_.yfilter)
	|| ydk::is_set(utc.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());
    if (utc.is_set || is_set(utc.yfilter)) leaf_name_data.push_back(utc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utc")
    {
        utc = value;
        utc.value_namespace = name_space;
        utc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
    if(value_path == "utc")
    {
        utc.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "clock" || name == "utc")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Ge()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time>())
{
    time->parent = this;

    yang_name = "ge"; yang_parent_name = "expires-on"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::~Ge()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::has_data() const
{
    return (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::Time()
    :
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    clock_{YType::str, "clock"},
    utc{YType::empty, "utc"}
{

    yang_name = "time"; yang_parent_name = "ge"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::has_data() const
{
    return date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| clock_.is_set
	|| utc.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(clock_.yfilter)
	|| ydk::is_set(utc.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());
    if (utc.is_set || is_set(utc.yfilter)) leaf_name_data.push_back(utc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utc")
    {
        utc = value;
        utc.value_namespace = name_space;
        utc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
    if(value_path == "utc")
    {
        utc.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "clock" || name == "utc")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Lt()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time>())
{
    time->parent = this;

    yang_name = "lt"; yang_parent_name = "expires-on"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::~Lt()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::has_data() const
{
    return (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::Time()
    :
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    clock_{YType::str, "clock"},
    utc{YType::empty, "utc"}
{

    yang_name = "time"; yang_parent_name = "lt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::has_data() const
{
    return date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| clock_.is_set
	|| utc.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(clock_.yfilter)
	|| ydk::is_set(utc.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());
    if (utc.is_set || is_set(utc.yfilter)) leaf_name_data.push_back(utc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utc")
    {
        utc = value;
        utc.value_namespace = name_space;
        utc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
    if(value_path == "utc")
    {
        utc.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "clock" || name == "utc")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Ne()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time>())
{
    time->parent = this;

    yang_name = "ne"; yang_parent_name = "expires-on"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::~Ne()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::has_data() const
{
    return (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::Time()
    :
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    clock_{YType::str, "clock"},
    utc{YType::empty, "utc"}
{

    yang_name = "time"; yang_parent_name = "ne"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::has_data() const
{
    return date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| clock_.is_set
	|| utc.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(clock_.yfilter)
	|| ydk::is_set(utc.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());
    if (utc.is_set || is_set(utc.yfilter)) leaf_name_data.push_back(utc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utc")
    {
        utc = value;
        utc.value_namespace = name_space;
        utc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
    if(value_path == "utc")
    {
        utc.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "clock" || name == "utc")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::IssuerName::IssuerName()
    :
    co{YType::str, "co"},
    eq{YType::str, "eq"},
    nc{YType::str, "nc"},
    ne{YType::str, "ne"}
{

    yang_name = "issuer-name"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::IssuerName::~IssuerName()
{
}

bool Native::Crypto::Pki::Certificate::Map::IssuerName::has_data() const
{
    return co.is_set
	|| eq.is_set
	|| nc.is_set
	|| ne.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::IssuerName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(co.yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(nc.yfilter)
	|| ydk::is_set(ne.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::IssuerName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issuer-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::IssuerName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (co.is_set || is_set(co.yfilter)) leaf_name_data.push_back(co.get_name_leafdata());
    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (nc.is_set || is_set(nc.yfilter)) leaf_name_data.push_back(nc.get_name_leafdata());
    if (ne.is_set || is_set(ne.yfilter)) leaf_name_data.push_back(ne.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::IssuerName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::IssuerName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Certificate::Map::IssuerName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "co")
    {
        co = value;
        co.value_namespace = name_space;
        co.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nc")
    {
        nc = value;
        nc.value_namespace = name_space;
        nc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ne")
    {
        ne = value;
        ne.value_namespace = name_space;
        ne.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::IssuerName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "co")
    {
        co.yfilter = yfilter;
    }
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "nc")
    {
        nc.yfilter = yfilter;
    }
    if(value_path == "ne")
    {
        ne.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::IssuerName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "co" || name == "eq" || name == "nc" || name == "ne")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::Name::Name()
    :
    co{YType::str, "co"},
    eq{YType::str, "eq"},
    nc{YType::str, "nc"},
    ne{YType::str, "ne"}
{

    yang_name = "name"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::Name::~Name()
{
}

bool Native::Crypto::Pki::Certificate::Map::Name::has_data() const
{
    return co.is_set
	|| eq.is_set
	|| nc.is_set
	|| ne.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(co.yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(nc.yfilter)
	|| ydk::is_set(ne.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (co.is_set || is_set(co.yfilter)) leaf_name_data.push_back(co.get_name_leafdata());
    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (nc.is_set || is_set(nc.yfilter)) leaf_name_data.push_back(nc.get_name_leafdata());
    if (ne.is_set || is_set(ne.yfilter)) leaf_name_data.push_back(ne.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Certificate::Map::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "co")
    {
        co = value;
        co.value_namespace = name_space;
        co.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nc")
    {
        nc = value;
        nc.value_namespace = name_space;
        nc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ne")
    {
        ne = value;
        ne.value_namespace = name_space;
        ne.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "co")
    {
        co.yfilter = yfilter;
    }
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "nc")
    {
        nc.yfilter = yfilter;
    }
    if(value_path == "ne")
    {
        ne.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "co" || name == "eq" || name == "nc" || name == "ne")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::SerialNumber::SerialNumber()
    :
    co{YType::str, "co"},
    eq{YType::str, "eq"},
    nc{YType::str, "nc"},
    ne{YType::str, "ne"}
{

    yang_name = "serial-number"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::SerialNumber::~SerialNumber()
{
}

bool Native::Crypto::Pki::Certificate::Map::SerialNumber::has_data() const
{
    return co.is_set
	|| eq.is_set
	|| nc.is_set
	|| ne.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::SerialNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(co.yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(nc.yfilter)
	|| ydk::is_set(ne.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::SerialNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serial-number";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::SerialNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (co.is_set || is_set(co.yfilter)) leaf_name_data.push_back(co.get_name_leafdata());
    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (nc.is_set || is_set(nc.yfilter)) leaf_name_data.push_back(nc.get_name_leafdata());
    if (ne.is_set || is_set(ne.yfilter)) leaf_name_data.push_back(ne.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::SerialNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::SerialNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Certificate::Map::SerialNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "co")
    {
        co = value;
        co.value_namespace = name_space;
        co.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nc")
    {
        nc = value;
        nc.value_namespace = name_space;
        nc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ne")
    {
        ne = value;
        ne.value_namespace = name_space;
        ne.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::SerialNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "co")
    {
        co.yfilter = yfilter;
    }
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "nc")
    {
        nc.yfilter = yfilter;
    }
    if(value_path == "ne")
    {
        ne.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::SerialNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "co" || name == "eq" || name == "nc" || name == "ne")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::SubjectName::SubjectName()
    :
    co{YType::str, "co"},
    eq{YType::str, "eq"},
    nc{YType::str, "nc"},
    ne{YType::str, "ne"}
{

    yang_name = "subject-name"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::SubjectName::~SubjectName()
{
}

bool Native::Crypto::Pki::Certificate::Map::SubjectName::has_data() const
{
    return co.is_set
	|| eq.is_set
	|| nc.is_set
	|| ne.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::SubjectName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(co.yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(nc.yfilter)
	|| ydk::is_set(ne.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::SubjectName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subject-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::SubjectName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (co.is_set || is_set(co.yfilter)) leaf_name_data.push_back(co.get_name_leafdata());
    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (nc.is_set || is_set(nc.yfilter)) leaf_name_data.push_back(nc.get_name_leafdata());
    if (ne.is_set || is_set(ne.yfilter)) leaf_name_data.push_back(ne.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::SubjectName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::SubjectName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Certificate::Map::SubjectName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "co")
    {
        co = value;
        co.value_namespace = name_space;
        co.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nc")
    {
        nc = value;
        nc.value_namespace = name_space;
        nc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ne")
    {
        ne = value;
        ne.value_namespace = name_space;
        ne.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::SubjectName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "co")
    {
        co.yfilter = yfilter;
    }
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "nc")
    {
        nc.yfilter = yfilter;
    }
    if(value_path == "ne")
    {
        ne.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::SubjectName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "co" || name == "eq" || name == "nc" || name == "ne")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::UnstructuredSubjectName()
    :
    co{YType::str, "co"},
    eq{YType::str, "eq"},
    nc{YType::str, "nc"},
    ne{YType::str, "ne"}
{

    yang_name = "unstructured-subject-name"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::~UnstructuredSubjectName()
{
}

bool Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::has_data() const
{
    return co.is_set
	|| eq.is_set
	|| nc.is_set
	|| ne.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(co.yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(nc.yfilter)
	|| ydk::is_set(ne.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unstructured-subject-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (co.is_set || is_set(co.yfilter)) leaf_name_data.push_back(co.get_name_leafdata());
    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (nc.is_set || is_set(nc.yfilter)) leaf_name_data.push_back(nc.get_name_leafdata());
    if (ne.is_set || is_set(ne.yfilter)) leaf_name_data.push_back(ne.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "co")
    {
        co = value;
        co.value_namespace = name_space;
        co.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nc")
    {
        nc = value;
        nc.value_namespace = name_space;
        nc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ne")
    {
        ne = value;
        ne.value_namespace = name_space;
        ne.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "co")
    {
        co.yfilter = yfilter;
    }
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "nc")
    {
        nc.yfilter = yfilter;
    }
    if(value_path == "ne")
    {
        ne.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "co" || name == "eq" || name == "nc" || name == "ne")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::ValidStart()
    :
    eq(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Eq>())
	,ge(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Ge>())
	,lt(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Lt>())
	,ne(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Ne>())
{
    eq->parent = this;
    ge->parent = this;
    lt->parent = this;
    ne->parent = this;

    yang_name = "valid-start"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::~ValidStart()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::has_data() const
{
    return (eq !=  nullptr && eq->has_data())
	|| (ge !=  nullptr && ge->has_data())
	|| (lt !=  nullptr && lt->has_data())
	|| (ne !=  nullptr && ne->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::has_operation() const
{
    return is_set(yfilter)
	|| (eq !=  nullptr && eq->has_operation())
	|| (ge !=  nullptr && ge->has_operation())
	|| (lt !=  nullptr && lt->has_operation())
	|| (ne !=  nullptr && ne->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "valid-start";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ValidStart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ValidStart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eq")
    {
        if(eq == nullptr)
        {
            eq = std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Eq>();
        }
        return eq;
    }

    if(child_yang_name == "ge")
    {
        if(ge == nullptr)
        {
            ge = std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Ge>();
        }
        return ge;
    }

    if(child_yang_name == "lt")
    {
        if(lt == nullptr)
        {
            lt = std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Lt>();
        }
        return lt;
    }

    if(child_yang_name == "ne")
    {
        if(ne == nullptr)
        {
            ne = std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Ne>();
        }
        return ne;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ValidStart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(eq != nullptr)
    {
        children["eq"] = eq;
    }

    if(ge != nullptr)
    {
        children["ge"] = ge;
    }

    if(lt != nullptr)
    {
        children["lt"] = lt;
    }

    if(ne != nullptr)
    {
        children["ne"] = ne;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "ge" || name == "lt" || name == "ne")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Eq()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time>())
{
    time->parent = this;

    yang_name = "eq"; yang_parent_name = "valid-start"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::~Eq()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::has_data() const
{
    return (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::Time()
    :
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    clock_{YType::str, "clock"},
    utc{YType::empty, "utc"}
{

    yang_name = "time"; yang_parent_name = "eq"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::has_data() const
{
    return date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| clock_.is_set
	|| utc.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(clock_.yfilter)
	|| ydk::is_set(utc.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());
    if (utc.is_set || is_set(utc.yfilter)) leaf_name_data.push_back(utc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utc")
    {
        utc = value;
        utc.value_namespace = name_space;
        utc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
    if(value_path == "utc")
    {
        utc.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "clock" || name == "utc")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Ge()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time>())
{
    time->parent = this;

    yang_name = "ge"; yang_parent_name = "valid-start"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::~Ge()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::has_data() const
{
    return (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::Time()
    :
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    clock_{YType::str, "clock"},
    utc{YType::empty, "utc"}
{

    yang_name = "time"; yang_parent_name = "ge"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::has_data() const
{
    return date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| clock_.is_set
	|| utc.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(clock_.yfilter)
	|| ydk::is_set(utc.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());
    if (utc.is_set || is_set(utc.yfilter)) leaf_name_data.push_back(utc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utc")
    {
        utc = value;
        utc.value_namespace = name_space;
        utc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
    if(value_path == "utc")
    {
        utc.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "clock" || name == "utc")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Lt()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time>())
{
    time->parent = this;

    yang_name = "lt"; yang_parent_name = "valid-start"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::~Lt()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::has_data() const
{
    return (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::Time()
    :
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    clock_{YType::str, "clock"},
    utc{YType::empty, "utc"}
{

    yang_name = "time"; yang_parent_name = "lt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::has_data() const
{
    return date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| clock_.is_set
	|| utc.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(clock_.yfilter)
	|| ydk::is_set(utc.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());
    if (utc.is_set || is_set(utc.yfilter)) leaf_name_data.push_back(utc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utc")
    {
        utc = value;
        utc.value_namespace = name_space;
        utc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
    if(value_path == "utc")
    {
        utc.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "clock" || name == "utc")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Ne()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time>())
{
    time->parent = this;

    yang_name = "ne"; yang_parent_name = "valid-start"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::~Ne()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::has_data() const
{
    return (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::Time()
    :
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    clock_{YType::str, "clock"},
    utc{YType::empty, "utc"}
{

    yang_name = "time"; yang_parent_name = "ne"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::has_data() const
{
    return date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| clock_.is_set
	|| utc.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(clock_.yfilter)
	|| ydk::is_set(utc.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());
    if (utc.is_set || is_set(utc.yfilter)) leaf_name_data.push_back(utc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utc")
    {
        utc = value;
        utc.value_namespace = name_space;
        utc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
    if(value_path == "utc")
    {
        utc.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "clock" || name == "utc")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Storage::Storage()
    :
    path{YType::str, "path"},
    on{YType::empty, "on"},
    with_keypair{YType::empty, "with-keypair"}
{

    yang_name = "storage"; yang_parent_name = "certificate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Certificate::Storage::~Storage()
{
}

bool Native::Crypto::Pki::Certificate::Storage::has_data() const
{
    return path.is_set
	|| on.is_set
	|| with_keypair.is_set;
}

bool Native::Crypto::Pki::Certificate::Storage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(on.yfilter)
	|| ydk::is_set(with_keypair.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Storage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/certificate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Certificate::Storage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storage";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Storage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());
    if (with_keypair.is_set || is_set(with_keypair.yfilter)) leaf_name_data.push_back(with_keypair.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Storage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Storage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Certificate::Storage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "with-keypair")
    {
        with_keypair = value;
        with_keypair.value_namespace = name_space;
        with_keypair.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Storage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
    if(value_path == "with-keypair")
    {
        with_keypair.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Storage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "on" || name == "with-keypair")
        return true;
    return false;
}

Native::Crypto::Pki::Crl::Crl()
    :
    request{YType::str, "request"}
    	,
    cache(std::make_shared<Native::Crypto::Pki::Crl::Cache>())
	,download(std::make_shared<Native::Crypto::Pki::Crl::Download>())
{
    cache->parent = this;
    download->parent = this;

    yang_name = "crl"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Crl::~Crl()
{
}

bool Native::Crypto::Pki::Crl::has_data() const
{
    return request.is_set
	|| (cache !=  nullptr && cache->has_data())
	|| (download !=  nullptr && download->has_data());
}

bool Native::Crypto::Pki::Crl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(request.yfilter)
	|| (cache !=  nullptr && cache->has_operation())
	|| (download !=  nullptr && download->has_operation());
}

std::string Native::Crypto::Pki::Crl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Crl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Crl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Crl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Crypto::Pki::Crl::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "download")
    {
        if(download == nullptr)
        {
            download = std::make_shared<Native::Crypto::Pki::Crl::Download>();
        }
        return download;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Crl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    if(download != nullptr)
    {
        children["download"] = download;
    }

    return children;
}

void Native::Crypto::Pki::Crl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Crl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Crl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "download" || name == "request")
        return true;
    return false;
}

Native::Crypto::Pki::Crl::Cache::Cache()
    :
    size{YType::uint32, "size"}
{

    yang_name = "cache"; yang_parent_name = "crl"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Crl::Cache::~Cache()
{
}

bool Native::Crypto::Pki::Crl::Cache::has_data() const
{
    return size.is_set;
}

bool Native::Crypto::Pki::Crl::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Crypto::Pki::Crl::Cache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/crl/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Crl::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Crl::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Crl::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Crl::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Crl::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Crl::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Crl::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Pki::Crl::Download::Download()
    :
    trustpoint{YType::str, "trustpoint"}
    	,
    schedule(std::make_shared<Native::Crypto::Pki::Crl::Download::Schedule>())
	,url(std::make_shared<Native::Crypto::Pki::Crl::Download::Url>())
{
    schedule->parent = this;
    url->parent = this;

    yang_name = "download"; yang_parent_name = "crl"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Crl::Download::~Download()
{
}

bool Native::Crypto::Pki::Crl::Download::has_data() const
{
    return trustpoint.is_set
	|| (schedule !=  nullptr && schedule->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Crl::Download::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trustpoint.yfilter)
	|| (schedule !=  nullptr && schedule->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Crl::Download::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/crl/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Crl::Download::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Crl::Download::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Crl::Download::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schedule")
    {
        if(schedule == nullptr)
        {
            schedule = std::make_shared<Native::Crypto::Pki::Crl::Download::Schedule>();
        }
        return schedule;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Crl::Download::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Crl::Download::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(schedule != nullptr)
    {
        children["schedule"] = schedule;
    }

    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Crl::Download::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Crl::Download::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Crl::Download::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule" || name == "url" || name == "trustpoint")
        return true;
    return false;
}

Native::Crypto::Pki::Crl::Download::Schedule::Schedule()
    :
    prepublish{YType::uint16, "prepublish"}
    	,
    retries(std::make_shared<Native::Crypto::Pki::Crl::Download::Schedule::Retries>())
	,time(std::make_shared<Native::Crypto::Pki::Crl::Download::Schedule::Time>())
{
    retries->parent = this;
    time->parent = this;

    yang_name = "schedule"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Crl::Download::Schedule::~Schedule()
{
}

bool Native::Crypto::Pki::Crl::Download::Schedule::has_data() const
{
    return prepublish.is_set
	|| (retries !=  nullptr && retries->has_data())
	|| (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Pki::Crl::Download::Schedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prepublish.yfilter)
	|| (retries !=  nullptr && retries->has_operation())
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Crl::Download::Schedule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/crl/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Crl::Download::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Crl::Download::Schedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prepublish.is_set || is_set(prepublish.yfilter)) leaf_name_data.push_back(prepublish.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Crl::Download::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retries")
    {
        if(retries == nullptr)
        {
            retries = std::make_shared<Native::Crypto::Pki::Crl::Download::Schedule::Retries>();
        }
        return retries;
    }

    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Pki::Crl::Download::Schedule::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Crl::Download::Schedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(retries != nullptr)
    {
        children["retries"] = retries;
    }

    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Pki::Crl::Download::Schedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prepublish")
    {
        prepublish = value;
        prepublish.value_namespace = name_space;
        prepublish.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Crl::Download::Schedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prepublish")
    {
        prepublish.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Crl::Download::Schedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retries" || name == "time" || name == "prepublish")
        return true;
    return false;
}

Native::Crypto::Pki::Crl::Download::Schedule::Retries::Retries()
    :
    number{YType::uint8, "number"},
    interval{YType::uint16, "interval"}
{

    yang_name = "retries"; yang_parent_name = "schedule"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Crl::Download::Schedule::Retries::~Retries()
{
}

bool Native::Crypto::Pki::Crl::Download::Schedule::Retries::has_data() const
{
    return number.is_set
	|| interval.is_set;
}

bool Native::Crypto::Pki::Crl::Download::Schedule::Retries::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Crypto::Pki::Crl::Download::Schedule::Retries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/crl/download/schedule/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Crl::Download::Schedule::Retries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Crl::Download::Schedule::Retries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Crl::Download::Schedule::Retries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Crl::Download::Schedule::Retries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Crl::Download::Schedule::Retries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Crl::Download::Schedule::Retries::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Crl::Download::Schedule::Retries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "interval")
        return true;
    return false;
}

Native::Crypto::Pki::Crl::Download::Schedule::Time::Time()
    :
    date{YType::enumeration, "date"},
    clock_{YType::str, "clock"}
{

    yang_name = "time"; yang_parent_name = "schedule"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Crl::Download::Schedule::Time::~Time()
{
}

bool Native::Crypto::Pki::Crl::Download::Schedule::Time::has_data() const
{
    return date.is_set
	|| clock_.is_set;
}

bool Native::Crypto::Pki::Crl::Download::Schedule::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date.yfilter)
	|| ydk::is_set(clock_.yfilter);
}

std::string Native::Crypto::Pki::Crl::Download::Schedule::Time::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/crl/download/schedule/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Crl::Download::Schedule::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Crl::Download::Schedule::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Crl::Download::Schedule::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Crl::Download::Schedule::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Crl::Download::Schedule::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Crl::Download::Schedule::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Crl::Download::Schedule::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date" || name == "clock")
        return true;
    return false;
}

Native::Crypto::Pki::Crl::Download::Url::Url()
    :
    name{YType::str, "name"},
    source_interface{YType::str, "source-interface"},
    vrf{YType::str, "vrf"}
{

    yang_name = "url"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Crl::Download::Url::~Url()
{
}

bool Native::Crypto::Pki::Crl::Download::Url::has_data() const
{
    return name.is_set
	|| source_interface.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Pki::Crl::Download::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Pki::Crl::Download::Url::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/crl/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Crl::Download::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Crl::Download::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Crl::Download::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Crl::Download::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Crl::Download::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Crl::Download::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Crl::Download::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source-interface" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Pki::Export::Export()
    :
    name{YType::str, "name"}
    	,
    pem(std::make_shared<Native::Crypto::Pki::Export::Pem>())
	,pkcs12(std::make_shared<Native::Crypto::Pki::Export::Pkcs12>())
{
    pem->parent = this;
    pkcs12->parent = this;

    yang_name = "export"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Export::~Export()
{
}

bool Native::Crypto::Pki::Export::has_data() const
{
    return name.is_set
	|| (pem !=  nullptr && pem->has_data())
	|| (pkcs12 !=  nullptr && pkcs12->has_data());
}

bool Native::Crypto::Pki::Export::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (pem !=  nullptr && pem->has_operation())
	|| (pkcs12 !=  nullptr && pkcs12->has_operation());
}

std::string Native::Crypto::Pki::Export::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Export::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Export::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Export::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pem")
    {
        if(pem == nullptr)
        {
            pem = std::make_shared<Native::Crypto::Pki::Export::Pem>();
        }
        return pem;
    }

    if(child_yang_name == "pkcs12")
    {
        if(pkcs12 == nullptr)
        {
            pkcs12 = std::make_shared<Native::Crypto::Pki::Export::Pkcs12>();
        }
        return pkcs12;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Export::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pem != nullptr)
    {
        children["pem"] = pem;
    }

    if(pkcs12 != nullptr)
    {
        children["pkcs12"] = pkcs12;
    }

    return children;
}

void Native::Crypto::Pki::Export::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Export::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Export::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem" || name == "pkcs12" || name == "name")
        return true;
    return false;
}

Native::Crypto::Pki::Export::Pem::Pem()
    :
    terminal(nullptr) // presence node
	,url(std::make_shared<Native::Crypto::Pki::Export::Pem::Url>())
{
    url->parent = this;

    yang_name = "pem"; yang_parent_name = "export"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Export::Pem::~Pem()
{
}

bool Native::Crypto::Pki::Export::Pem::has_data() const
{
    return (terminal !=  nullptr && terminal->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Export::Pem::has_operation() const
{
    return is_set(yfilter)
	|| (terminal !=  nullptr && terminal->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Export::Pem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Export::Pem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Export::Pem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "terminal")
    {
        if(terminal == nullptr)
        {
            terminal = std::make_shared<Native::Crypto::Pki::Export::Pem::Terminal>();
        }
        return terminal;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Export::Pem::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Export::Pem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(terminal != nullptr)
    {
        children["terminal"] = terminal;
    }

    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Export::Pem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Export::Pem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Export::Pem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminal" || name == "url")
        return true;
    return false;
}

Native::Crypto::Pki::Export::Pem::Terminal::Terminal()
    :
    rollover{YType::empty, "rollover"}
    	,
    pem_3des(std::make_shared<Native::Crypto::Pki::Export::Pem::Terminal::Pem3des>())
	,des(std::make_shared<Native::Crypto::Pki::Export::Pem::Terminal::Des>())
{
    pem_3des->parent = this;
    des->parent = this;

    yang_name = "terminal"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Export::Pem::Terminal::~Terminal()
{
}

bool Native::Crypto::Pki::Export::Pem::Terminal::has_data() const
{
    return rollover.is_set
	|| (pem_3des !=  nullptr && pem_3des->has_data())
	|| (des !=  nullptr && des->has_data());
}

bool Native::Crypto::Pki::Export::Pem::Terminal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rollover.yfilter)
	|| (pem_3des !=  nullptr && pem_3des->has_operation())
	|| (des !=  nullptr && des->has_operation());
}

std::string Native::Crypto::Pki::Export::Pem::Terminal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Export::Pem::Terminal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rollover.is_set || is_set(rollover.yfilter)) leaf_name_data.push_back(rollover.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Export::Pem::Terminal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pem-3des")
    {
        if(pem_3des == nullptr)
        {
            pem_3des = std::make_shared<Native::Crypto::Pki::Export::Pem::Terminal::Pem3des>();
        }
        return pem_3des;
    }

    if(child_yang_name == "des")
    {
        if(des == nullptr)
        {
            des = std::make_shared<Native::Crypto::Pki::Export::Pem::Terminal::Des>();
        }
        return des;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Export::Pem::Terminal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pem_3des != nullptr)
    {
        children["pem-3des"] = pem_3des;
    }

    if(des != nullptr)
    {
        children["des"] = des;
    }

    return children;
}

void Native::Crypto::Pki::Export::Pem::Terminal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rollover")
    {
        rollover = value;
        rollover.value_namespace = name_space;
        rollover.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Export::Pem::Terminal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rollover")
    {
        rollover.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Export::Pem::Terminal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem-3des" || name == "des" || name == "rollover")
        return true;
    return false;
}

Native::Crypto::Pki::Export::Pem::Terminal::Pem3des::Pem3des()
    :
    password{YType::str, "password"}
{

    yang_name = "pem-3des"; yang_parent_name = "terminal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Export::Pem::Terminal::Pem3des::~Pem3des()
{
}

bool Native::Crypto::Pki::Export::Pem::Terminal::Pem3des::has_data() const
{
    return password.is_set;
}

bool Native::Crypto::Pki::Export::Pem::Terminal::Pem3des::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Crypto::Pki::Export::Pem::Terminal::Pem3des::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem-3des";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Export::Pem::Terminal::Pem3des::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Export::Pem::Terminal::Pem3des::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Export::Pem::Terminal::Pem3des::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Export::Pem::Terminal::Pem3des::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Export::Pem::Terminal::Pem3des::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Export::Pem::Terminal::Pem3des::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password")
        return true;
    return false;
}

Native::Crypto::Pki::Export::Pem::Terminal::Des::Des()
    :
    password{YType::str, "password"}
{

    yang_name = "des"; yang_parent_name = "terminal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Export::Pem::Terminal::Des::~Des()
{
}

bool Native::Crypto::Pki::Export::Pem::Terminal::Des::has_data() const
{
    return password.is_set;
}

bool Native::Crypto::Pki::Export::Pem::Terminal::Des::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Crypto::Pki::Export::Pem::Terminal::Des::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "des";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Export::Pem::Terminal::Des::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Export::Pem::Terminal::Des::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Export::Pem::Terminal::Des::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Export::Pem::Terminal::Des::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Export::Pem::Terminal::Des::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Export::Pem::Terminal::Des::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password")
        return true;
    return false;
}

Native::Crypto::Pki::Export::Pem::Url::Url()
    :
    file{YType::enumeration, "file"},
    encrypt{YType::enumeration, "encrypt"},
    password{YType::str, "password"}
{

    yang_name = "url"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Export::Pem::Url::~Url()
{
}

bool Native::Crypto::Pki::Export::Pem::Url::has_data() const
{
    return file.is_set
	|| encrypt.is_set
	|| password.is_set;
}

bool Native::Crypto::Pki::Export::Pem::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Crypto::Pki::Export::Pem::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Export::Pem::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Export::Pem::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Export::Pem::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Export::Pem::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Export::Pem::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Export::Pem::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "encrypt" || name == "password")
        return true;
    return false;
}

Native::Crypto::Pki::Export::Pkcs12::Pkcs12()
    :
    file{YType::enumeration, "file"},
    password{YType::str, "password"}
{

    yang_name = "pkcs12"; yang_parent_name = "export"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Export::Pkcs12::~Pkcs12()
{
}

bool Native::Crypto::Pki::Export::Pkcs12::has_data() const
{
    return file.is_set
	|| password.is_set;
}

bool Native::Crypto::Pki::Export::Pkcs12::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Crypto::Pki::Export::Pkcs12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkcs12";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Export::Pkcs12::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Export::Pkcs12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Export::Pkcs12::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Export::Pkcs12::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Export::Pkcs12::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Export::Pkcs12::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "password")
        return true;
    return false;
}

Native::Crypto::Pki::Import::Import()
    :
    name{YType::str, "name"},
    certificate{YType::empty, "certificate"}
    	,
    pem(std::make_shared<Native::Crypto::Pki::Import::Pem>())
	,pkcs12(std::make_shared<Native::Crypto::Pki::Import::Pkcs12>())
{
    pem->parent = this;
    pkcs12->parent = this;

    yang_name = "import"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Import::~Import()
{
}

bool Native::Crypto::Pki::Import::has_data() const
{
    return name.is_set
	|| certificate.is_set
	|| (pem !=  nullptr && pem->has_data())
	|| (pkcs12 !=  nullptr && pkcs12->has_data());
}

bool Native::Crypto::Pki::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(certificate.yfilter)
	|| (pem !=  nullptr && pem->has_operation())
	|| (pkcs12 !=  nullptr && pkcs12->has_operation());
}

std::string Native::Crypto::Pki::Import::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (certificate.is_set || is_set(certificate.yfilter)) leaf_name_data.push_back(certificate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pem")
    {
        if(pem == nullptr)
        {
            pem = std::make_shared<Native::Crypto::Pki::Import::Pem>();
        }
        return pem;
    }

    if(child_yang_name == "pkcs12")
    {
        if(pkcs12 == nullptr)
        {
            pkcs12 = std::make_shared<Native::Crypto::Pki::Import::Pkcs12>();
        }
        return pkcs12;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pem != nullptr)
    {
        children["pem"] = pem;
    }

    if(pkcs12 != nullptr)
    {
        children["pkcs12"] = pkcs12;
    }

    return children;
}

void Native::Crypto::Pki::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certificate")
    {
        certificate = value;
        certificate.value_namespace = name_space;
        certificate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "certificate")
    {
        certificate.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem" || name == "pkcs12" || name == "name" || name == "certificate")
        return true;
    return false;
}

Native::Crypto::Pki::Import::Pem::Pem()
    :
    check{YType::empty, "check"},
    exportable{YType::empty, "exportable"},
    usage_keys{YType::empty, "usage-keys"}
    	,
    terminal(std::make_shared<Native::Crypto::Pki::Import::Pem::Terminal>())
	,url(std::make_shared<Native::Crypto::Pki::Import::Pem::Url>())
{
    terminal->parent = this;
    url->parent = this;

    yang_name = "pem"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Import::Pem::~Pem()
{
}

bool Native::Crypto::Pki::Import::Pem::has_data() const
{
    return check.is_set
	|| exportable.is_set
	|| usage_keys.is_set
	|| (terminal !=  nullptr && terminal->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Import::Pem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(check.yfilter)
	|| ydk::is_set(exportable.yfilter)
	|| ydk::is_set(usage_keys.yfilter)
	|| (terminal !=  nullptr && terminal->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Import::Pem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Import::Pem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (check.is_set || is_set(check.yfilter)) leaf_name_data.push_back(check.get_name_leafdata());
    if (exportable.is_set || is_set(exportable.yfilter)) leaf_name_data.push_back(exportable.get_name_leafdata());
    if (usage_keys.is_set || is_set(usage_keys.yfilter)) leaf_name_data.push_back(usage_keys.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Import::Pem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "terminal")
    {
        if(terminal == nullptr)
        {
            terminal = std::make_shared<Native::Crypto::Pki::Import::Pem::Terminal>();
        }
        return terminal;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Import::Pem::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Import::Pem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(terminal != nullptr)
    {
        children["terminal"] = terminal;
    }

    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Import::Pem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "check")
    {
        check = value;
        check.value_namespace = name_space;
        check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exportable")
    {
        exportable = value;
        exportable.value_namespace = name_space;
        exportable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage-keys")
    {
        usage_keys = value;
        usage_keys.value_namespace = name_space;
        usage_keys.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Import::Pem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "check")
    {
        check.yfilter = yfilter;
    }
    if(value_path == "exportable")
    {
        exportable.yfilter = yfilter;
    }
    if(value_path == "usage-keys")
    {
        usage_keys.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Import::Pem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminal" || name == "url" || name == "check" || name == "exportable" || name == "usage-keys")
        return true;
    return false;
}

Native::Crypto::Pki::Import::Pem::Terminal::Terminal()
    :
    password{YType::str, "password"}
{

    yang_name = "terminal"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Import::Pem::Terminal::~Terminal()
{
}

bool Native::Crypto::Pki::Import::Pem::Terminal::has_data() const
{
    return password.is_set;
}

bool Native::Crypto::Pki::Import::Pem::Terminal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Crypto::Pki::Import::Pem::Terminal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Import::Pem::Terminal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Import::Pem::Terminal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Import::Pem::Terminal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Import::Pem::Terminal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Import::Pem::Terminal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Import::Pem::Terminal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password")
        return true;
    return false;
}

Native::Crypto::Pki::Import::Pem::Url::Url()
    :
    file{YType::enumeration, "file"},
    password{YType::str, "password"}
{

    yang_name = "url"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Import::Pem::Url::~Url()
{
}

bool Native::Crypto::Pki::Import::Pem::Url::has_data() const
{
    return file.is_set
	|| password.is_set;
}

bool Native::Crypto::Pki::Import::Pem::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Crypto::Pki::Import::Pem::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Import::Pem::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Import::Pem::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Import::Pem::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Import::Pem::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Import::Pem::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Import::Pem::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "password")
        return true;
    return false;
}

Native::Crypto::Pki::Import::Pkcs12::Pkcs12()
    :
    file{YType::enumeration, "file"},
    password{YType::str, "password"}
{

    yang_name = "pkcs12"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Import::Pkcs12::~Pkcs12()
{
}

bool Native::Crypto::Pki::Import::Pkcs12::has_data() const
{
    return file.is_set
	|| password.is_set;
}

bool Native::Crypto::Pki::Import::Pkcs12::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Crypto::Pki::Import::Pkcs12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkcs12";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Import::Pkcs12::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Import::Pkcs12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Import::Pkcs12::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Import::Pkcs12::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Import::Pkcs12::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Import::Pkcs12::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "password")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Profile()
{

    yang_name = "profile"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Profile::~Profile()
{
}

bool Native::Crypto::Pki::Profile::has_data() const
{
    for (std::size_t index=0; index<enrollment.size(); index++)
    {
        if(enrollment[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Pki::Profile::has_operation() const
{
    for (std::size_t index=0; index<enrollment.size(); index++)
    {
        if(enrollment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Pki::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enrollment")
    {
        auto c = std::make_shared<Native::Crypto::Pki::Profile::Enrollment>();
        c->parent = this;
        enrollment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : enrollment)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Crypto::Pki::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enrollment")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Enrollment()
    :
    tag{YType::str, "tag"},
    method_est{YType::empty, "method-est"},
    source_interface{YType::str, "source-interface"}
    	,
    authentication(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Authentication>())
	,enrollment(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Enrollment_>())
	,reenrollment(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Reenrollment>())
	,default_(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default>())
{
    authentication->parent = this;
    enrollment->parent = this;
    reenrollment->parent = this;
    default_->parent = this;

    yang_name = "enrollment"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Profile::Enrollment::~Enrollment()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::has_data() const
{
    for (std::size_t index=0; index<parameter.size(); index++)
    {
        if(parameter[index]->has_data())
            return true;
    }
    return tag.is_set
	|| method_est.is_set
	|| source_interface.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (enrollment !=  nullptr && enrollment->has_data())
	|| (reenrollment !=  nullptr && reenrollment->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Pki::Profile::Enrollment::has_operation() const
{
    for (std::size_t index=0; index<parameter.size(); index++)
    {
        if(parameter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(method_est.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (enrollment !=  nullptr && enrollment->has_operation())
	|| (reenrollment !=  nullptr && reenrollment->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/profile/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Profile::Enrollment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enrollment" <<"[tag='" <<tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (method_est.is_set || is_set(method_est.yfilter)) leaf_name_data.push_back(method_est.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "enrollment")
    {
        if(enrollment == nullptr)
        {
            enrollment = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Enrollment_>();
        }
        return enrollment;
    }

    if(child_yang_name == "parameter")
    {
        auto c = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Parameter>();
        c->parent = this;
        parameter.push_back(c);
        return c;
    }

    if(child_yang_name == "reenrollment")
    {
        if(reenrollment == nullptr)
        {
            reenrollment = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Reenrollment>();
        }
        return reenrollment;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(enrollment != nullptr)
    {
        children["enrollment"] = enrollment;
    }

    count = 0;
    for (auto const & c : parameter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(reenrollment != nullptr)
    {
        children["reenrollment"] = reenrollment;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-est")
    {
        method_est = value;
        method_est.value_namespace = name_space;
        method_est.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "method-est")
    {
        method_est.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "enrollment" || name == "parameter" || name == "reenrollment" || name == "default" || name == "tag" || name == "method-est" || name == "source-interface")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Authentication::Authentication()
    :
    command{YType::str, "command"},
    terminal{YType::empty, "terminal"}
    	,
    url(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Authentication::Url>())
{
    url->parent = this;

    yang_name = "authentication"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Authentication::~Authentication()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Authentication::has_data() const
{
    return command.is_set
	|| terminal.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Profile::Enrollment::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Authentication::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "command" || name == "terminal")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::Url()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "url"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::~Url()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::has_data() const
{
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Enrollment_()
    :
    command{YType::str, "command"},
    terminal{YType::empty, "terminal"},
    credential{YType::str, "credential"}
    	,
    url(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url>())
{
    url->parent = this;

    yang_name = "enrollment"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Enrollment_::~Enrollment_()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Enrollment_::has_data() const
{
    return command.is_set
	|| terminal.is_set
	|| credential.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Profile::Enrollment::Enrollment_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| ydk::is_set(credential.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::Enrollment_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enrollment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Enrollment_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());
    if (credential.is_set || is_set(credential.yfilter)) leaf_name_data.push_back(credential.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Enrollment_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Enrollment_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Enrollment_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "credential")
    {
        credential = value;
        credential.value_namespace = name_space;
        credential.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Enrollment_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
    if(value_path == "credential")
    {
        credential.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Enrollment_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "command" || name == "terminal" || name == "credential")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::Url()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "url"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::~Url()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::has_data() const
{
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Parameter::Parameter()
    :
    number{YType::uint8, "number"},
    prompt{YType::str, "prompt"},
    value_{YType::str, "value"}
{

    yang_name = "parameter"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Parameter::~Parameter()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Parameter::has_data() const
{
    return number.is_set
	|| prompt.is_set
	|| value_.is_set;
}

bool Native::Crypto::Pki::Profile::Enrollment::Parameter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(prompt.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Parameter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Parameter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (prompt.is_set || is_set(prompt.yfilter)) leaf_name_data.push_back(prompt.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Parameter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Parameter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Parameter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prompt")
    {
        prompt = value;
        prompt.value_namespace = name_space;
        prompt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Parameter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "prompt")
    {
        prompt.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Parameter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "prompt" || name == "value")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Reenrollment()
    :
    command{YType::str, "command"},
    terminal{YType::empty, "terminal"}
    	,
    url(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url>())
{
    url->parent = this;

    yang_name = "reenrollment"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Reenrollment::~Reenrollment()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Reenrollment::has_data() const
{
    return command.is_set
	|| terminal.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Profile::Enrollment::Reenrollment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::Reenrollment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reenrollment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Reenrollment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Reenrollment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Reenrollment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Reenrollment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Reenrollment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Reenrollment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "command" || name == "terminal")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::Url()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "url"; yang_parent_name = "reenrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::~Url()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::has_data() const
{
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Default::Default()
    :
    method_est{YType::empty, "method-est"},
    source_interface{YType::str, "source-interface"}
    	,
    authentication(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default::Authentication>())
	,enrollment(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_>())
	,reenrollment(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment>())
{
    authentication->parent = this;
    enrollment->parent = this;
    reenrollment->parent = this;

    yang_name = "default"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Default::~Default()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::has_data() const
{
    for (std::size_t index=0; index<parameter.size(); index++)
    {
        if(parameter[index]->has_data())
            return true;
    }
    return method_est.is_set
	|| source_interface.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (enrollment !=  nullptr && enrollment->has_data())
	|| (reenrollment !=  nullptr && reenrollment->has_data());
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::has_operation() const
{
    for (std::size_t index=0; index<parameter.size(); index++)
    {
        if(parameter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(method_est.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (enrollment !=  nullptr && enrollment->has_operation())
	|| (reenrollment !=  nullptr && reenrollment->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_est.is_set || is_set(method_est.yfilter)) leaf_name_data.push_back(method_est.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "enrollment")
    {
        if(enrollment == nullptr)
        {
            enrollment = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_>();
        }
        return enrollment;
    }

    if(child_yang_name == "parameter")
    {
        auto c = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default::Parameter>();
        c->parent = this;
        parameter.push_back(c);
        return c;
    }

    if(child_yang_name == "reenrollment")
    {
        if(reenrollment == nullptr)
        {
            reenrollment = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment>();
        }
        return reenrollment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(enrollment != nullptr)
    {
        children["enrollment"] = enrollment;
    }

    count = 0;
    for (auto const & c : parameter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(reenrollment != nullptr)
    {
        children["reenrollment"] = reenrollment;
    }

    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method-est")
    {
        method_est = value;
        method_est.value_namespace = name_space;
        method_est.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method-est")
    {
        method_est.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "enrollment" || name == "parameter" || name == "reenrollment" || name == "method-est" || name == "source-interface")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::Authentication()
    :
    command{YType::str, "command"},
    terminal{YType::empty, "terminal"}
    	,
    url(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::Url>())
{
    url->parent = this;

    yang_name = "authentication"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::~Authentication()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::has_data() const
{
    return command.is_set
	|| terminal.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "command" || name == "terminal")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::Url::Url()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "url"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::Url::~Url()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::Url::has_data() const
{
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::Enrollment_()
    :
    command{YType::str, "command"},
    terminal{YType::empty, "terminal"},
    credential{YType::str, "credential"}
    	,
    url(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::Url>())
{
    url->parent = this;

    yang_name = "enrollment"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::~Enrollment_()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::has_data() const
{
    return command.is_set
	|| terminal.is_set
	|| credential.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| ydk::is_set(credential.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enrollment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());
    if (credential.is_set || is_set(credential.yfilter)) leaf_name_data.push_back(credential.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "credential")
    {
        credential = value;
        credential.value_namespace = name_space;
        credential.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
    if(value_path == "credential")
    {
        credential.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "command" || name == "terminal" || name == "credential")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::Url::Url()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "url"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::Url::~Url()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::Url::has_data() const
{
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Default::Parameter::Parameter()
    :
    number{YType::uint8, "number"},
    prompt{YType::str, "prompt"},
    value_{YType::str, "value"}
{

    yang_name = "parameter"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Default::Parameter::~Parameter()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Parameter::has_data() const
{
    return number.is_set
	|| prompt.is_set
	|| value_.is_set;
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Parameter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(prompt.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Default::Parameter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Default::Parameter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (prompt.is_set || is_set(prompt.yfilter)) leaf_name_data.push_back(prompt.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Default::Parameter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Default::Parameter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Default::Parameter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prompt")
    {
        prompt = value;
        prompt.value_namespace = name_space;
        prompt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Default::Parameter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "prompt")
    {
        prompt.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Parameter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "prompt" || name == "value")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::Reenrollment()
    :
    command{YType::str, "command"},
    terminal{YType::empty, "terminal"}
    	,
    url(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::Url>())
{
    url->parent = this;

    yang_name = "reenrollment"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::~Reenrollment()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::has_data() const
{
    return command.is_set
	|| terminal.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reenrollment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "command" || name == "terminal")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::Url::Url()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "url"; yang_parent_name = "reenrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::Url::~Url()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::Url::has_data() const
{
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Pki::Server::Server()
    :
    name{YType::str, "name"},
    rollover{YType::empty, "rollover"},
    cancel{YType::empty, "cancel"}
{

    yang_name = "server"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Server::~Server()
{
}

bool Native::Crypto::Pki::Server::has_data() const
{
    return name.is_set
	|| rollover.is_set
	|| cancel.is_set;
}

bool Native::Crypto::Pki::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rollover.yfilter)
	|| ydk::is_set(cancel.yfilter);
}

std::string Native::Crypto::Pki::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rollover.is_set || is_set(rollover.yfilter)) leaf_name_data.push_back(rollover.get_name_leafdata());
    if (cancel.is_set || is_set(cancel.yfilter)) leaf_name_data.push_back(cancel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rollover")
    {
        rollover = value;
        rollover.value_namespace = name_space;
        rollover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cancel")
    {
        cancel = value;
        cancel.value_namespace = name_space;
        cancel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "rollover")
    {
        rollover.yfilter = yfilter;
    }
    if(value_path == "cancel")
    {
        cancel.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "rollover" || name == "cancel")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::Trustpoint()
    :
    id{YType::str, "id"},
    fqdn{YType::str, "fqdn"},
    revocation_check{YType::enumeration, "revocation-check"},
    subject_name{YType::str, "subject-name"},
    vrf{YType::str, "vrf"}
    	,
    auto_enroll(std::make_shared<Native::Crypto::Pki::Trustpoint::AutoEnroll>())
	,enrollment(std::make_shared<Native::Crypto::Pki::Trustpoint::Enrollment>())
	,password(nullptr) // presence node
	,rsakeypair(std::make_shared<Native::Crypto::Pki::Trustpoint::Rsakeypair>())
	,serial_number(nullptr) // presence node
	,ip_address(std::make_shared<Native::Crypto::Pki::Trustpoint::IpAddress>())
{
    auto_enroll->parent = this;
    enrollment->parent = this;
    rsakeypair->parent = this;
    ip_address->parent = this;

    yang_name = "trustpoint"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Trustpoint::~Trustpoint()
{
}

bool Native::Crypto::Pki::Trustpoint::has_data() const
{
    return id.is_set
	|| fqdn.is_set
	|| revocation_check.is_set
	|| subject_name.is_set
	|| vrf.is_set
	|| (auto_enroll !=  nullptr && auto_enroll->has_data())
	|| (enrollment !=  nullptr && enrollment->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (rsakeypair !=  nullptr && rsakeypair->has_data())
	|| (serial_number !=  nullptr && serial_number->has_data())
	|| (ip_address !=  nullptr && ip_address->has_data());
}

bool Native::Crypto::Pki::Trustpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(fqdn.yfilter)
	|| ydk::is_set(revocation_check.yfilter)
	|| ydk::is_set(subject_name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (auto_enroll !=  nullptr && auto_enroll->has_operation())
	|| (enrollment !=  nullptr && enrollment->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (rsakeypair !=  nullptr && rsakeypair->has_operation())
	|| (serial_number !=  nullptr && serial_number->has_operation())
	|| (ip_address !=  nullptr && ip_address->has_operation());
}

std::string Native::Crypto::Pki::Trustpoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Trustpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustpoint" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());
    if (revocation_check.is_set || is_set(revocation_check.yfilter)) leaf_name_data.push_back(revocation_check.get_name_leafdata());
    if (subject_name.is_set || is_set(subject_name.yfilter)) leaf_name_data.push_back(subject_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-enroll")
    {
        if(auto_enroll == nullptr)
        {
            auto_enroll = std::make_shared<Native::Crypto::Pki::Trustpoint::AutoEnroll>();
        }
        return auto_enroll;
    }

    if(child_yang_name == "enrollment")
    {
        if(enrollment == nullptr)
        {
            enrollment = std::make_shared<Native::Crypto::Pki::Trustpoint::Enrollment>();
        }
        return enrollment;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Pki::Trustpoint::Password>();
        }
        return password;
    }

    if(child_yang_name == "rsakeypair")
    {
        if(rsakeypair == nullptr)
        {
            rsakeypair = std::make_shared<Native::Crypto::Pki::Trustpoint::Rsakeypair>();
        }
        return rsakeypair;
    }

    if(child_yang_name == "serial-number")
    {
        if(serial_number == nullptr)
        {
            serial_number = std::make_shared<Native::Crypto::Pki::Trustpoint::SerialNumber>();
        }
        return serial_number;
    }

    if(child_yang_name == "ip-address")
    {
        if(ip_address == nullptr)
        {
            ip_address = std::make_shared<Native::Crypto::Pki::Trustpoint::IpAddress>();
        }
        return ip_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_enroll != nullptr)
    {
        children["auto-enroll"] = auto_enroll;
    }

    if(enrollment != nullptr)
    {
        children["enrollment"] = enrollment;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(rsakeypair != nullptr)
    {
        children["rsakeypair"] = rsakeypair;
    }

    if(serial_number != nullptr)
    {
        children["serial-number"] = serial_number;
    }

    if(ip_address != nullptr)
    {
        children["ip-address"] = ip_address;
    }

    return children;
}

void Native::Crypto::Pki::Trustpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revocation-check")
    {
        revocation_check = value;
        revocation_check.value_namespace = name_space;
        revocation_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subject-name")
    {
        subject_name = value;
        subject_name.value_namespace = name_space;
        subject_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
    if(value_path == "revocation-check")
    {
        revocation_check.yfilter = yfilter;
    }
    if(value_path == "subject-name")
    {
        subject_name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-enroll" || name == "enrollment" || name == "password" || name == "rsakeypair" || name == "serial-number" || name == "ip-address" || name == "id" || name == "fqdn" || name == "revocation-check" || name == "subject-name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::AutoEnroll::AutoEnroll()
    :
    percent{YType::uint8, "percent"},
    regenerate{YType::empty, "regenerate"}
{

    yang_name = "auto-enroll"; yang_parent_name = "trustpoint"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Trustpoint::AutoEnroll::~AutoEnroll()
{
}

bool Native::Crypto::Pki::Trustpoint::AutoEnroll::has_data() const
{
    return percent.is_set
	|| regenerate.is_set;
}

bool Native::Crypto::Pki::Trustpoint::AutoEnroll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(regenerate.yfilter);
}

std::string Native::Crypto::Pki::Trustpoint::AutoEnroll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-enroll";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::AutoEnroll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (regenerate.is_set || is_set(regenerate.yfilter)) leaf_name_data.push_back(regenerate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::AutoEnroll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::AutoEnroll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Trustpoint::AutoEnroll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regenerate")
    {
        regenerate = value;
        regenerate.value_namespace = name_space;
        regenerate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::AutoEnroll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "regenerate")
    {
        regenerate.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::AutoEnroll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "regenerate")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::Enrollment::Enrollment()
    :
    http_proxy{YType::str, "http-proxy"},
    pkcs12{YType::empty, "pkcs12"},
    profile{YType::str, "profile"},
    selfsigned{YType::empty, "selfsigned"},
    url{YType::str, "url"}
    	,
    mode(std::make_shared<Native::Crypto::Pki::Trustpoint::Enrollment::Mode>())
	,retry(std::make_shared<Native::Crypto::Pki::Trustpoint::Enrollment::Retry>())
	,terminal(nullptr) // presence node
{
    mode->parent = this;
    retry->parent = this;

    yang_name = "enrollment"; yang_parent_name = "trustpoint"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Trustpoint::Enrollment::~Enrollment()
{
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::has_data() const
{
    return http_proxy.is_set
	|| pkcs12.is_set
	|| profile.is_set
	|| selfsigned.is_set
	|| url.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (retry !=  nullptr && retry->has_data())
	|| (terminal !=  nullptr && terminal->has_data());
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(http_proxy.yfilter)
	|| ydk::is_set(pkcs12.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(selfsigned.yfilter)
	|| ydk::is_set(url.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (retry !=  nullptr && retry->has_operation())
	|| (terminal !=  nullptr && terminal->has_operation());
}

std::string Native::Crypto::Pki::Trustpoint::Enrollment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enrollment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::Enrollment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (http_proxy.is_set || is_set(http_proxy.yfilter)) leaf_name_data.push_back(http_proxy.get_name_leafdata());
    if (pkcs12.is_set || is_set(pkcs12.yfilter)) leaf_name_data.push_back(pkcs12.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (selfsigned.is_set || is_set(selfsigned.yfilter)) leaf_name_data.push_back(selfsigned.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::Enrollment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Crypto::Pki::Trustpoint::Enrollment::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "retry")
    {
        if(retry == nullptr)
        {
            retry = std::make_shared<Native::Crypto::Pki::Trustpoint::Enrollment::Retry>();
        }
        return retry;
    }

    if(child_yang_name == "terminal")
    {
        if(terminal == nullptr)
        {
            terminal = std::make_shared<Native::Crypto::Pki::Trustpoint::Enrollment::Terminal>();
        }
        return terminal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::Enrollment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(retry != nullptr)
    {
        children["retry"] = retry;
    }

    if(terminal != nullptr)
    {
        children["terminal"] = terminal;
    }

    return children;
}

void Native::Crypto::Pki::Trustpoint::Enrollment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "http-proxy")
    {
        http_proxy = value;
        http_proxy.value_namespace = name_space;
        http_proxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkcs12")
    {
        pkcs12 = value;
        pkcs12.value_namespace = name_space;
        pkcs12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selfsigned")
    {
        selfsigned = value;
        selfsigned.value_namespace = name_space;
        selfsigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::Enrollment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "http-proxy")
    {
        http_proxy.yfilter = yfilter;
    }
    if(value_path == "pkcs12")
    {
        pkcs12.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "selfsigned")
    {
        selfsigned.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "retry" || name == "terminal" || name == "http-proxy" || name == "pkcs12" || name == "profile" || name == "selfsigned" || name == "url")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::Enrollment::Mode::Mode()
    :
    ra{YType::empty, "ra"}
{

    yang_name = "mode"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Trustpoint::Enrollment::Mode::~Mode()
{
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::Mode::has_data() const
{
    return ra.is_set;
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ra.yfilter);
}

std::string Native::Crypto::Pki::Trustpoint::Enrollment::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::Enrollment::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ra.is_set || is_set(ra.yfilter)) leaf_name_data.push_back(ra.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::Enrollment::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::Enrollment::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Trustpoint::Enrollment::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ra")
    {
        ra = value;
        ra.value_namespace = name_space;
        ra.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::Enrollment::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ra")
    {
        ra.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ra")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::Enrollment::Retry::Retry()
    :
    count{YType::uint8, "count"},
    period{YType::uint8, "period"}
{

    yang_name = "retry"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Trustpoint::Enrollment::Retry::~Retry()
{
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::Retry::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::Retry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Crypto::Pki::Trustpoint::Enrollment::Retry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::Enrollment::Retry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::Enrollment::Retry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::Enrollment::Retry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Trustpoint::Enrollment::Retry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::Enrollment::Retry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::Retry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::Terminal()
    :
    pem{YType::empty, "pem"}
{

    yang_name = "terminal"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::~Terminal()
{
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::has_data() const
{
    return pem.is_set;
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pem.yfilter);
}

std::string Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pem.is_set || is_set(pem.yfilter)) leaf_name_data.push_back(pem.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pem")
    {
        pem = value;
        pem.value_namespace = name_space;
        pem.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pem")
    {
        pem.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::Password::Password()
    :
    encryption_type{YType::uint8, "encryption_type"},
    clear_password{YType::str, "clear_password"}
{

    yang_name = "password"; yang_parent_name = "trustpoint"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Trustpoint::Password::~Password()
{
}

bool Native::Crypto::Pki::Trustpoint::Password::has_data() const
{
    return encryption_type.is_set
	|| clear_password.is_set;
}

bool Native::Crypto::Pki::Trustpoint::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption_type.yfilter)
	|| ydk::is_set(clear_password.yfilter);
}

std::string Native::Crypto::Pki::Trustpoint::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption_type.is_set || is_set(encryption_type.yfilter)) leaf_name_data.push_back(encryption_type.get_name_leafdata());
    if (clear_password.is_set || is_set(clear_password.yfilter)) leaf_name_data.push_back(clear_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Trustpoint::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption_type")
    {
        encryption_type = value;
        encryption_type.value_namespace = name_space;
        encryption_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear_password")
    {
        clear_password = value;
        clear_password.value_namespace = name_space;
        clear_password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption_type")
    {
        encryption_type.yfilter = yfilter;
    }
    if(value_path == "clear_password")
    {
        clear_password.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption_type" || name == "clear_password")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::Rsakeypair::Rsakeypair()
    :
    key_label{YType::str, "key-label"},
    gen_key{YType::uint16, "gen-key"},
    encrypt_key{YType::uint16, "encrypt-key"}
{

    yang_name = "rsakeypair"; yang_parent_name = "trustpoint"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Trustpoint::Rsakeypair::~Rsakeypair()
{
}

bool Native::Crypto::Pki::Trustpoint::Rsakeypair::has_data() const
{
    return key_label.is_set
	|| gen_key.is_set
	|| encrypt_key.is_set;
}

bool Native::Crypto::Pki::Trustpoint::Rsakeypair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_label.yfilter)
	|| ydk::is_set(gen_key.yfilter)
	|| ydk::is_set(encrypt_key.yfilter);
}

std::string Native::Crypto::Pki::Trustpoint::Rsakeypair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsakeypair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::Rsakeypair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_label.is_set || is_set(key_label.yfilter)) leaf_name_data.push_back(key_label.get_name_leafdata());
    if (gen_key.is_set || is_set(gen_key.yfilter)) leaf_name_data.push_back(gen_key.get_name_leafdata());
    if (encrypt_key.is_set || is_set(encrypt_key.yfilter)) leaf_name_data.push_back(encrypt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::Rsakeypair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::Rsakeypair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Trustpoint::Rsakeypair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-label")
    {
        key_label = value;
        key_label.value_namespace = name_space;
        key_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen-key")
    {
        gen_key = value;
        gen_key.value_namespace = name_space;
        gen_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypt-key")
    {
        encrypt_key = value;
        encrypt_key.value_namespace = name_space;
        encrypt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::Rsakeypair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-label")
    {
        key_label.yfilter = yfilter;
    }
    if(value_path == "gen-key")
    {
        gen_key.yfilter = yfilter;
    }
    if(value_path == "encrypt-key")
    {
        encrypt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::Rsakeypair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-label" || name == "gen-key" || name == "encrypt-key")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::SerialNumber::SerialNumber()
    :
    none{YType::empty, "none"}
{

    yang_name = "serial-number"; yang_parent_name = "trustpoint"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Trustpoint::SerialNumber::~SerialNumber()
{
}

bool Native::Crypto::Pki::Trustpoint::SerialNumber::has_data() const
{
    return none.is_set;
}

bool Native::Crypto::Pki::Trustpoint::SerialNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Crypto::Pki::Trustpoint::SerialNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serial-number";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::SerialNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::SerialNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::SerialNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Trustpoint::SerialNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::SerialNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::SerialNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::IpAddress::IpAddress()
    :
    address_line{YType::str, "address-line"},
    none{YType::empty, "none"}
{

    yang_name = "ip-address"; yang_parent_name = "trustpoint"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Trustpoint::IpAddress::~IpAddress()
{
}

bool Native::Crypto::Pki::Trustpoint::IpAddress::has_data() const
{
    return address_line.is_set
	|| none.is_set;
}

bool Native::Crypto::Pki::Trustpoint::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_line.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Crypto::Pki::Trustpoint::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_line.is_set || is_set(address_line.yfilter)) leaf_name_data.push_back(address_line.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Trustpoint::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-line")
    {
        address_line = value;
        address_line.value_namespace = name_space;
        address_line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-line")
    {
        address_line.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-line" || name == "none")
        return true;
    return false;
}

Native::Crypto::Pki::Token::Token()
{

    yang_name = "token"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Token::~Token()
{
}

bool Native::Crypto::Pki::Token::has_data() const
{
    for (std::size_t index=0; index<token_name.size(); index++)
    {
        if(token_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Pki::Token::has_operation() const
{
    for (std::size_t index=0; index<token_name.size(); index++)
    {
        if(token_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Pki::Token::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Token::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "token";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Token::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Token::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "token-name")
    {
        auto c = std::make_shared<Native::Crypto::Pki::Token::TokenName>();
        c->parent = this;
        token_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Token::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : token_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Crypto::Pki::Token::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Token::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Token::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "token-name")
        return true;
    return false;
}

Native::Crypto::Pki::Token::TokenName::TokenName()
    :
    name{YType::str, "name"}
    	,
    removal(std::make_shared<Native::Crypto::Pki::Token::TokenName::Removal>())
{
    removal->parent = this;

    yang_name = "token-name"; yang_parent_name = "token"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Token::TokenName::~TokenName()
{
}

bool Native::Crypto::Pki::Token::TokenName::has_data() const
{
    return name.is_set
	|| (removal !=  nullptr && removal->has_data());
}

bool Native::Crypto::Pki::Token::TokenName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (removal !=  nullptr && removal->has_operation());
}

std::string Native::Crypto::Pki::Token::TokenName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/token/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Token::TokenName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "token-name" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Token::TokenName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Token::TokenName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "removal")
    {
        if(removal == nullptr)
        {
            removal = std::make_shared<Native::Crypto::Pki::Token::TokenName::Removal>();
        }
        return removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Token::TokenName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(removal != nullptr)
    {
        children["removal"] = removal;
    }

    return children;
}

void Native::Crypto::Pki::Token::TokenName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Token::TokenName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Token::TokenName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "removal" || name == "name")
        return true;
    return false;
}

Native::Crypto::Pki::Token::TokenName::Removal::Removal()
    :
    timeout{YType::uint16, "timeout"}
{

    yang_name = "removal"; yang_parent_name = "token-name"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Token::TokenName::Removal::~Removal()
{
}

bool Native::Crypto::Pki::Token::TokenName::Removal::has_data() const
{
    return timeout.is_set;
}

bool Native::Crypto::Pki::Token::TokenName::Removal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Crypto::Pki::Token::TokenName::Removal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Token::TokenName::Removal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Token::TokenName::Removal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Token::TokenName::Removal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Token::TokenName::Removal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Token::TokenName::Removal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Token::TokenName::Removal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpool::Trustpool()
    :
    import(nullptr) // presence node
{

    yang_name = "trustpool"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Trustpool::~Trustpool()
{
}

bool Native::Crypto::Pki::Trustpool::has_data() const
{
    return (import !=  nullptr && import->has_data());
}

bool Native::Crypto::Pki::Trustpool::has_operation() const
{
    return is_set(yfilter)
	|| (import !=  nullptr && import->has_operation());
}

std::string Native::Crypto::Pki::Trustpool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Trustpool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustpool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Crypto::Pki::Trustpool::Import>();
        }
        return import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(import != nullptr)
    {
        children["import"] = import;
    }

    return children;
}

void Native::Crypto::Pki::Trustpool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Trustpool::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Trustpool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpool::Import::Import()
    :
    clean{YType::empty, "clean"},
    terminal{YType::empty, "terminal"}
    	,
    url(std::make_shared<Native::Crypto::Pki::Trustpool::Import::Url>())
{
    url->parent = this;

    yang_name = "import"; yang_parent_name = "trustpool"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Trustpool::Import::~Import()
{
}

bool Native::Crypto::Pki::Trustpool::Import::has_data() const
{
    return clean.is_set
	|| terminal.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Trustpool::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clean.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Trustpool::Import::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/trustpool/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Trustpool::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpool::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clean.is_set || is_set(clean.yfilter)) leaf_name_data.push_back(clean.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpool::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Trustpool::Import::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpool::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Trustpool::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clean")
    {
        clean = value;
        clean.value_namespace = name_space;
        clean.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpool::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clean")
    {
        clean.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpool::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "clean" || name == "terminal")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpool::Import::Url::Url()
    :
    file{YType::enumeration, "file"}
{

    yang_name = "url"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Trustpool::Import::Url::~Url()
{
}

bool Native::Crypto::Pki::Trustpool::Import::Url::has_data() const
{
    return file.is_set;
}

bool Native::Crypto::Pki::Trustpool::Import::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter);
}

std::string Native::Crypto::Pki::Trustpool::Import::Url::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/trustpool/import/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Trustpool::Import::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpool::Import::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpool::Import::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpool::Import::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Trustpool::Import::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpool::Import::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpool::Import::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file")
        return true;
    return false;
}

Native::Crypto::Pki::Default::Default()
    :
    removal(std::make_shared<Native::Crypto::Pki::Default::Removal>())
{
    removal->parent = this;

    yang_name = "default"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Default::~Default()
{
}

bool Native::Crypto::Pki::Default::has_data() const
{
    return (removal !=  nullptr && removal->has_data());
}

bool Native::Crypto::Pki::Default::has_operation() const
{
    return is_set(yfilter)
	|| (removal !=  nullptr && removal->has_operation());
}

std::string Native::Crypto::Pki::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "removal")
    {
        if(removal == nullptr)
        {
            removal = std::make_shared<Native::Crypto::Pki::Default::Removal>();
        }
        return removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(removal != nullptr)
    {
        children["removal"] = removal;
    }

    return children;
}

void Native::Crypto::Pki::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "removal")
        return true;
    return false;
}

Native::Crypto::Pki::Default::Removal::Removal()
    :
    timeout{YType::uint16, "timeout"}
{

    yang_name = "removal"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Default::Removal::~Removal()
{
}

bool Native::Crypto::Pki::Default::Removal::has_data() const
{
    return timeout.is_set;
}

bool Native::Crypto::Pki::Default::Removal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Crypto::Pki::Default::Removal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Default::Removal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Default::Removal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Default::Removal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Default::Removal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Pki::Default::Removal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Default::Removal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Default::Removal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnel()
{

    yang_name = "tls-tunnel"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::TlsTunnel::~TlsTunnel()
{
}

bool Native::Crypto::TlsTunnel::has_data() const
{
    for (std::size_t index=0; index<tls_tunnel_list.size(); index++)
    {
        if(tls_tunnel_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::TlsTunnel::has_operation() const
{
    for (std::size_t index=0; index<tls_tunnel_list.size(); index++)
    {
        if(tls_tunnel_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::TlsTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::TlsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:tls-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tls-tunnel-list")
    {
        auto c = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList>();
        c->parent = this;
        tls_tunnel_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tls_tunnel_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Crypto::TlsTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::TlsTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::TlsTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tls-tunnel-list")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::TlsTunnelList()
    :
    tunnel_name{YType::str, "tunnel-name"}
    	,
    overlay_address(std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress>())
	,protection(std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Protection>())
	,psk(std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Psk>())
	,server(std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Server>())
{
    overlay_address->parent = this;
    protection->parent = this;
    psk->parent = this;
    server->parent = this;

    yang_name = "tls-tunnel-list"; yang_parent_name = "tls-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::~TlsTunnelList()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::has_data() const
{
    for (std::size_t index=0; index<local_interface.size(); index++)
    {
        if(local_interface[index]->has_data())
            return true;
    }
    return tunnel_name.is_set
	|| (overlay_address !=  nullptr && overlay_address->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (psk !=  nullptr && psk->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::has_operation() const
{
    for (std::size_t index=0; index<local_interface.size(); index++)
    {
        if(local_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| (overlay_address !=  nullptr && overlay_address->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (psk !=  nullptr && psk->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:tls-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tls-tunnel-list" <<"[tunnel-name='" <<tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-interface")
    {
        auto c = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface>();
        c->parent = this;
        local_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "overlay-address")
    {
        if(overlay_address == nullptr)
        {
            overlay_address = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress>();
        }
        return overlay_address;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "psk")
    {
        if(psk == nullptr)
        {
            psk = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Psk>();
        }
        return psk;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : local_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(overlay_address != nullptr)
    {
        children["overlay-address"] = overlay_address;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    if(psk != nullptr)
    {
        children["psk"] = psk;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::TlsTunnel::TlsTunnelList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-interface" || name == "overlay-address" || name == "protection" || name == "psk" || name == "server" || name == "tunnel-name")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::LocalInterface()
    :
    interface_name{YType::str, "interface-name"},
    priority{YType::uint8, "priority"}
{

    yang_name = "local-interface"; yang_parent_name = "tls-tunnel-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::~LocalInterface()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::has_data() const
{
    return interface_name.is_set
	|| priority.is_set;
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "priority")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::OverlayAddress()
    :
    addresses{YType::str, "addresses"},
    vrf{YType::str, "vrf"}
{

    yang_name = "overlay-address"; yang_parent_name = "tls-tunnel-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::~OverlayAddress()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::has_data() const
{
    return addresses.is_set
	|| vrf.is_set;
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addresses.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overlay-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.yfilter)) leaf_name_data.push_back(addresses.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addresses")
    {
        addresses = value;
        addresses.value_namespace = name_space;
        addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addresses")
    {
        addresses.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Protection::Protection()
    :
    protection{YType::enumeration, "protection"}
{

    yang_name = "protection"; yang_parent_name = "tls-tunnel-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Protection::~Protection()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Protection::has_data() const
{
    return protection.is_set;
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protection.yfilter);
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protection.is_set || is_set(protection.yfilter)) leaf_name_data.push_back(protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protection")
    {
        protection = value;
        protection.value_namespace = name_space;
        protection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protection")
    {
        protection.yfilter = yfilter;
    }
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Psk()
{

    yang_name = "psk"; yang_parent_name = "tls-tunnel-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Psk::~Psk()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Psk::has_data() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Psk::has_operation() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::Psk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::Psk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::Psk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        auto c = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id>();
        c->parent = this;
        id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::Psk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Psk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Psk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Psk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Id()
    :
    id{YType::str, "id"}
    	,
    key(std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key>())
{
    key->parent = this;

    yang_name = "id"; yang_parent_name = "psk"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::~Id()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::has_data() const
{
    return id.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "id")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::Key()
    :
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "key"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::~Key()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::has_data() const
{
    return key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Server::Server()
{

    yang_name = "server"; yang_parent_name = "tls-tunnel-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Server::~Server()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Server::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Server::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto c = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        auto c = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ipv6)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    port{YType::uint32, "port"}
{

    yang_name = "ipv4"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::~Ipv4()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::has_data() const
{
    return ipv4.is_set
	|| port.is_set;
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "port")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::Ipv6()
    :
    ipv6{YType::str, "ipv6"},
    port{YType::uint32, "port"}
{

    yang_name = "ipv6"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::~Ipv6()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::has_data() const
{
    return ipv6.is_set
	|| port.is_set;
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[ipv6='" <<ipv6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "port")
        return true;
    return false;
}

Native::Crypto::Ssl::Ssl()
    :
    policy{YType::str, "policy"},
    profile{YType::str, "profile"}
    	,
    authorization(std::make_shared<Native::Crypto::Ssl::Authorization>())
	,diagnose(std::make_shared<Native::Crypto::Ssl::Diagnose>())
	,proposal(std::make_shared<Native::Crypto::Ssl::Proposal>())
{
    authorization->parent = this;
    diagnose->parent = this;
    proposal->parent = this;

    yang_name = "ssl"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ssl::~Ssl()
{
}

bool Native::Crypto::Ssl::has_data() const
{
    return policy.is_set
	|| profile.is_set
	|| (authorization !=  nullptr && authorization->has_data())
	|| (diagnose !=  nullptr && diagnose->has_data())
	|| (proposal !=  nullptr && proposal->has_data());
}

bool Native::Crypto::Ssl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (diagnose !=  nullptr && diagnose->has_operation())
	|| (proposal !=  nullptr && proposal->has_operation());
}

std::string Native::Crypto::Ssl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:ssl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ssl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ssl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Ssl::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "diagnose")
    {
        if(diagnose == nullptr)
        {
            diagnose = std::make_shared<Native::Crypto::Ssl::Diagnose>();
        }
        return diagnose;
    }

    if(child_yang_name == "proposal")
    {
        if(proposal == nullptr)
        {
            proposal = std::make_shared<Native::Crypto::Ssl::Proposal>();
        }
        return proposal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ssl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(diagnose != nullptr)
    {
        children["diagnose"] = diagnose;
    }

    if(proposal != nullptr)
    {
        children["proposal"] = proposal;
    }

    return children;
}

void Native::Crypto::Ssl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ssl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Crypto::Ssl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization" || name == "diagnose" || name == "proposal" || name == "policy" || name == "profile")
        return true;
    return false;
}

Native::Crypto::Ssl::Authorization::Authorization()
    :
    policy{YType::str, "policy"}
{

    yang_name = "authorization"; yang_parent_name = "ssl"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ssl::Authorization::~Authorization()
{
}

bool Native::Crypto::Ssl::Authorization::has_data() const
{
    return policy.is_set;
}

bool Native::Crypto::Ssl::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Crypto::Ssl::Authorization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ssl/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ssl::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ssl::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ssl::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ssl::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Ssl::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ssl::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Crypto::Ssl::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Crypto::Ssl::Diagnose::Diagnose()
    :
    error{YType::uint16, "error"}
{

    yang_name = "diagnose"; yang_parent_name = "ssl"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ssl::Diagnose::~Diagnose()
{
}

bool Native::Crypto::Ssl::Diagnose::has_data() const
{
    return error.is_set;
}

bool Native::Crypto::Ssl::Diagnose::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string Native::Crypto::Ssl::Diagnose::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ssl/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ssl::Diagnose::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diagnose";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ssl::Diagnose::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ssl::Diagnose::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ssl::Diagnose::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Ssl::Diagnose::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ssl::Diagnose::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool Native::Crypto::Ssl::Diagnose::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

Native::Crypto::Ssl::Proposal::Proposal()
    :
    name{YType::str, "name"}
    	,
    protection(std::make_shared<Native::Crypto::Ssl::Proposal::Protection>())
{
    protection->parent = this;

    yang_name = "proposal"; yang_parent_name = "ssl"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ssl::Proposal::~Proposal()
{
}

bool Native::Crypto::Ssl::Proposal::has_data() const
{
    return name.is_set
	|| (protection !=  nullptr && protection->has_data());
}

bool Native::Crypto::Ssl::Proposal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (protection !=  nullptr && protection->has_operation());
}

std::string Native::Crypto::Ssl::Proposal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ssl/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ssl::Proposal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proposal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ssl::Proposal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ssl::Proposal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Crypto::Ssl::Proposal::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ssl::Proposal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    return children;
}

void Native::Crypto::Ssl::Proposal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ssl::Proposal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ssl::Proposal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection" || name == "name")
        return true;
    return false;
}

Native::Crypto::Ssl::Proposal::Protection::Protection()
    :
    rsa_3des_ede_sha1{YType::empty, "rsa-3des-ede-sha1"},
    rsa_aes128_sha1{YType::empty, "rsa-aes128-sha1"},
    rsa_aes256_sha1{YType::empty, "rsa-aes256-sha1"},
    rsa_rc4128_md5{YType::empty, "rsa-rc4128-md5"}
{

    yang_name = "protection"; yang_parent_name = "proposal"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ssl::Proposal::Protection::~Protection()
{
}

bool Native::Crypto::Ssl::Proposal::Protection::has_data() const
{
    return rsa_3des_ede_sha1.is_set
	|| rsa_aes128_sha1.is_set
	|| rsa_aes256_sha1.is_set
	|| rsa_rc4128_md5.is_set;
}

bool Native::Crypto::Ssl::Proposal::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rsa_3des_ede_sha1.yfilter)
	|| ydk::is_set(rsa_aes128_sha1.yfilter)
	|| ydk::is_set(rsa_aes256_sha1.yfilter)
	|| ydk::is_set(rsa_rc4128_md5.yfilter);
}

std::string Native::Crypto::Ssl::Proposal::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ssl/proposal/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ssl::Proposal::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ssl::Proposal::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsa_3des_ede_sha1.is_set || is_set(rsa_3des_ede_sha1.yfilter)) leaf_name_data.push_back(rsa_3des_ede_sha1.get_name_leafdata());
    if (rsa_aes128_sha1.is_set || is_set(rsa_aes128_sha1.yfilter)) leaf_name_data.push_back(rsa_aes128_sha1.get_name_leafdata());
    if (rsa_aes256_sha1.is_set || is_set(rsa_aes256_sha1.yfilter)) leaf_name_data.push_back(rsa_aes256_sha1.get_name_leafdata());
    if (rsa_rc4128_md5.is_set || is_set(rsa_rc4128_md5.yfilter)) leaf_name_data.push_back(rsa_rc4128_md5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ssl::Proposal::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ssl::Proposal::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Ssl::Proposal::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsa-3des-ede-sha1")
    {
        rsa_3des_ede_sha1 = value;
        rsa_3des_ede_sha1.value_namespace = name_space;
        rsa_3des_ede_sha1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsa-aes128-sha1")
    {
        rsa_aes128_sha1 = value;
        rsa_aes128_sha1.value_namespace = name_space;
        rsa_aes128_sha1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsa-aes256-sha1")
    {
        rsa_aes256_sha1 = value;
        rsa_aes256_sha1.value_namespace = name_space;
        rsa_aes256_sha1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsa-rc4128-md5")
    {
        rsa_rc4128_md5 = value;
        rsa_rc4128_md5.value_namespace = name_space;
        rsa_rc4128_md5.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ssl::Proposal::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsa-3des-ede-sha1")
    {
        rsa_3des_ede_sha1.yfilter = yfilter;
    }
    if(value_path == "rsa-aes128-sha1")
    {
        rsa_aes128_sha1.yfilter = yfilter;
    }
    if(value_path == "rsa-aes256-sha1")
    {
        rsa_aes256_sha1.yfilter = yfilter;
    }
    if(value_path == "rsa-rc4128-md5")
    {
        rsa_rc4128_md5.yfilter = yfilter;
    }
}

bool Native::Crypto::Ssl::Proposal::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsa-3des-ede-sha1" || name == "rsa-aes128-sha1" || name == "rsa-aes256-sha1" || name == "rsa-rc4128-md5")
        return true;
    return false;
}

Native::Crypto::Vpn::Vpn()
    :
    csd{YType::str, "csd"}
    	,
    anyconnect(std::make_shared<Native::Crypto::Vpn::Anyconnect>())
{
    anyconnect->parent = this;

    yang_name = "vpn"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Vpn::~Vpn()
{
}

bool Native::Crypto::Vpn::has_data() const
{
    return csd.is_set
	|| (anyconnect !=  nullptr && anyconnect->has_data());
}

bool Native::Crypto::Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csd.yfilter)
	|| (anyconnect !=  nullptr && anyconnect->has_operation());
}

std::string Native::Crypto::Vpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csd.is_set || is_set(csd.yfilter)) leaf_name_data.push_back(csd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "anyconnect")
    {
        if(anyconnect == nullptr)
        {
            anyconnect = std::make_shared<Native::Crypto::Vpn::Anyconnect>();
        }
        return anyconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(anyconnect != nullptr)
    {
        children["anyconnect"] = anyconnect;
    }

    return children;
}

void Native::Crypto::Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csd")
    {
        csd = value;
        csd.value_namespace = name_space;
        csd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csd")
    {
        csd.yfilter = yfilter;
    }
}

bool Native::Crypto::Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anyconnect" || name == "csd")
        return true;
    return false;
}

Native::Crypto::Vpn::Anyconnect::Anyconnect()
    :
    file(std::make_shared<Native::Crypto::Vpn::Anyconnect::File>())
	,profile_container(std::make_shared<Native::Crypto::Vpn::Anyconnect::ProfileContainer>())
{
    file->parent = this;
    profile_container->parent = this;

    yang_name = "anyconnect"; yang_parent_name = "vpn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Vpn::Anyconnect::~Anyconnect()
{
}

bool Native::Crypto::Vpn::Anyconnect::has_data() const
{
    return (file !=  nullptr && file->has_data())
	|| (profile_container !=  nullptr && profile_container->has_data());
}

bool Native::Crypto::Vpn::Anyconnect::has_operation() const
{
    return is_set(yfilter)
	|| (file !=  nullptr && file->has_operation())
	|| (profile_container !=  nullptr && profile_container->has_operation());
}

std::string Native::Crypto::Vpn::Anyconnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Vpn::Anyconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anyconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Vpn::Anyconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Vpn::Anyconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file")
    {
        if(file == nullptr)
        {
            file = std::make_shared<Native::Crypto::Vpn::Anyconnect::File>();
        }
        return file;
    }

    if(child_yang_name == "profile-container")
    {
        if(profile_container == nullptr)
        {
            profile_container = std::make_shared<Native::Crypto::Vpn::Anyconnect::ProfileContainer>();
        }
        return profile_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Vpn::Anyconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(file != nullptr)
    {
        children["file"] = file;
    }

    if(profile_container != nullptr)
    {
        children["profile-container"] = profile_container;
    }

    return children;
}

void Native::Crypto::Vpn::Anyconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Vpn::Anyconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Vpn::Anyconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "profile-container")
        return true;
    return false;
}

Native::Crypto::Vpn::Anyconnect::File::File()
    :
    filename{YType::str, "filename"},
    sequence{YType::uint8, "sequence"}
{

    yang_name = "file"; yang_parent_name = "anyconnect"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Vpn::Anyconnect::File::~File()
{
}

bool Native::Crypto::Vpn::Anyconnect::File::has_data() const
{
    return filename.is_set
	|| sequence.is_set;
}

bool Native::Crypto::Vpn::Anyconnect::File::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filename.yfilter)
	|| ydk::is_set(sequence.yfilter);
}

std::string Native::Crypto::Vpn::Anyconnect::File::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:vpn/anyconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Vpn::Anyconnect::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Vpn::Anyconnect::File::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Vpn::Anyconnect::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Vpn::Anyconnect::File::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Vpn::Anyconnect::File::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Vpn::Anyconnect::File::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
}

bool Native::Crypto::Vpn::Anyconnect::File::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filename" || name == "sequence")
        return true;
    return false;
}

Native::Crypto::Vpn::Anyconnect::ProfileContainer::ProfileContainer()
    :
    profile{YType::str, "profile"},
    filename{YType::str, "filename"}
{

    yang_name = "profile-container"; yang_parent_name = "anyconnect"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Vpn::Anyconnect::ProfileContainer::~ProfileContainer()
{
}

bool Native::Crypto::Vpn::Anyconnect::ProfileContainer::has_data() const
{
    return profile.is_set
	|| filename.is_set;
}

bool Native::Crypto::Vpn::Anyconnect::ProfileContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(filename.yfilter);
}

std::string Native::Crypto::Vpn::Anyconnect::ProfileContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:vpn/anyconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Vpn::Anyconnect::ProfileContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Vpn::Anyconnect::ProfileContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Vpn::Anyconnect::ProfileContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Vpn::Anyconnect::ProfileContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Vpn::Anyconnect::ProfileContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Vpn::Anyconnect::ProfileContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
}

bool Native::Crypto::Vpn::Anyconnect::ProfileContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile" || name == "filename")
        return true;
    return false;
}

Native::Cts::Cts()
    :
    critical_authentication_conf{YType::empty, "Cisco-IOS-XE-cts:critical-authentication-conf"},
    dot1x_server_timeout{YType::uint16, "Cisco-IOS-XE-cts:dot1x-server-timeout"},
    dot1x_supp_timeout{YType::uint16, "Cisco-IOS-XE-cts:dot1x-supp-timeout"},
    logging{YType::enumeration, "Cisco-IOS-XE-cts:logging"},
    sgt{YType::uint16, "Cisco-IOS-XE-cts:sgt"},
    sg_epg{YType::enumeration, "Cisco-IOS-XE-cts:sg-epg"}
    	,
    cache(std::make_shared<Native::Cts::Cache>())
	,critical_authentication(nullptr) // presence node
	,authorization(std::make_shared<Native::Cts::Authorization>())
	,role_based(std::make_shared<Native::Cts::RoleBased>())
	,server(std::make_shared<Native::Cts::Server>())
	,sxp(std::make_shared<Native::Cts::Sxp>())
{
    cache->parent = this;
    authorization->parent = this;
    role_based->parent = this;
    server->parent = this;
    sxp->parent = this;

    yang_name = "cts"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::~Cts()
{
}

bool Native::Cts::has_data() const
{
    return critical_authentication_conf.is_set
	|| dot1x_server_timeout.is_set
	|| dot1x_supp_timeout.is_set
	|| logging.is_set
	|| sgt.is_set
	|| sg_epg.is_set
	|| (cache !=  nullptr && cache->has_data())
	|| (critical_authentication !=  nullptr && critical_authentication->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (role_based !=  nullptr && role_based->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (sxp !=  nullptr && sxp->has_data());
}

bool Native::Cts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical_authentication_conf.yfilter)
	|| ydk::is_set(dot1x_server_timeout.yfilter)
	|| ydk::is_set(dot1x_supp_timeout.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(sg_epg.yfilter)
	|| (cache !=  nullptr && cache->has_operation())
	|| (critical_authentication !=  nullptr && critical_authentication->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (role_based !=  nullptr && role_based->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (sxp !=  nullptr && sxp->has_operation());
}

std::string Native::Cts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical_authentication_conf.is_set || is_set(critical_authentication_conf.yfilter)) leaf_name_data.push_back(critical_authentication_conf.get_name_leafdata());
    if (dot1x_server_timeout.is_set || is_set(dot1x_server_timeout.yfilter)) leaf_name_data.push_back(dot1x_server_timeout.get_name_leafdata());
    if (dot1x_supp_timeout.is_set || is_set(dot1x_supp_timeout.yfilter)) leaf_name_data.push_back(dot1x_supp_timeout.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (sg_epg.is_set || is_set(sg_epg.yfilter)) leaf_name_data.push_back(sg_epg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-cts:cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Cts::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "Cisco-IOS-XE-cts:critical-authentication")
    {
        if(critical_authentication == nullptr)
        {
            critical_authentication = std::make_shared<Native::Cts::CriticalAuthentication>();
        }
        return critical_authentication;
    }

    if(child_yang_name == "Cisco-IOS-XE-cts:authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Cts::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "Cisco-IOS-XE-cts:role-based")
    {
        if(role_based == nullptr)
        {
            role_based = std::make_shared<Native::Cts::RoleBased>();
        }
        return role_based;
    }

    if(child_yang_name == "Cisco-IOS-XE-cts:server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Cts::Server>();
        }
        return server;
    }

    if(child_yang_name == "Cisco-IOS-XE-cts:sxp")
    {
        if(sxp == nullptr)
        {
            sxp = std::make_shared<Native::Cts::Sxp>();
        }
        return sxp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cache != nullptr)
    {
        children["Cisco-IOS-XE-cts:cache"] = cache;
    }

    if(critical_authentication != nullptr)
    {
        children["Cisco-IOS-XE-cts:critical-authentication"] = critical_authentication;
    }

    if(authorization != nullptr)
    {
        children["Cisco-IOS-XE-cts:authorization"] = authorization;
    }

    if(role_based != nullptr)
    {
        children["Cisco-IOS-XE-cts:role-based"] = role_based;
    }

    if(server != nullptr)
    {
        children["Cisco-IOS-XE-cts:server"] = server;
    }

    if(sxp != nullptr)
    {
        children["Cisco-IOS-XE-cts:sxp"] = sxp;
    }

    return children;
}

void Native::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-cts:critical-authentication-conf")
    {
        critical_authentication_conf = value;
        critical_authentication_conf.value_namespace = name_space;
        critical_authentication_conf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-cts:dot1x-server-timeout")
    {
        dot1x_server_timeout = value;
        dot1x_server_timeout.value_namespace = name_space;
        dot1x_server_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-cts:dot1x-supp-timeout")
    {
        dot1x_supp_timeout = value;
        dot1x_supp_timeout.value_namespace = name_space;
        dot1x_supp_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-cts:logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-cts:sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-cts:sg-epg")
    {
        sg_epg = value;
        sg_epg.value_namespace = name_space;
        sg_epg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical-authentication-conf")
    {
        critical_authentication_conf.yfilter = yfilter;
    }
    if(value_path == "dot1x-server-timeout")
    {
        dot1x_server_timeout.yfilter = yfilter;
    }
    if(value_path == "dot1x-supp-timeout")
    {
        dot1x_supp_timeout.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "sg-epg")
    {
        sg_epg.yfilter = yfilter;
    }
}

bool Native::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "critical-authentication" || name == "authorization" || name == "role-based" || name == "server" || name == "sxp" || name == "critical-authentication-conf" || name == "dot1x-server-timeout" || name == "dot1x-supp-timeout" || name == "logging" || name == "sgt" || name == "sg-epg")
        return true;
    return false;
}

Native::Cts::Cache::Cache()
    :
    enable{YType::empty, "enable"}
    	,
    nv_storage(std::make_shared<Native::Cts::Cache::NvStorage>())
{
    nv_storage->parent = this;

    yang_name = "cache"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Cache::~Cache()
{
}

bool Native::Cts::Cache::has_data() const
{
    return enable.is_set
	|| (nv_storage !=  nullptr && nv_storage->has_data());
}

bool Native::Cts::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (nv_storage !=  nullptr && nv_storage->has_operation());
}

std::string Native::Cts::Cache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nv-storage")
    {
        if(nv_storage == nullptr)
        {
            nv_storage = std::make_shared<Native::Cts::Cache::NvStorage>();
        }
        return nv_storage;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nv_storage != nullptr)
    {
        children["nv-storage"] = nv_storage;
    }

    return children;
}

void Native::Cts::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Cts::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nv-storage" || name == "enable")
        return true;
    return false;
}

Native::Cts::Cache::NvStorage::NvStorage()
    :
    nv_storage{YType::enumeration, "nv-storage"}
{

    yang_name = "nv-storage"; yang_parent_name = "cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Cache::NvStorage::~NvStorage()
{
}

bool Native::Cts::Cache::NvStorage::has_data() const
{
    return nv_storage.is_set;
}

bool Native::Cts::Cache::NvStorage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nv_storage.yfilter);
}

std::string Native::Cts::Cache::NvStorage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Cache::NvStorage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-storage";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Cache::NvStorage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nv_storage.is_set || is_set(nv_storage.yfilter)) leaf_name_data.push_back(nv_storage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Cache::NvStorage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Cache::NvStorage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cts::Cache::NvStorage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nv-storage")
    {
        nv_storage = value;
        nv_storage.value_namespace = name_space;
        nv_storage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Cache::NvStorage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nv-storage")
    {
        nv_storage.yfilter = yfilter;
    }
}

bool Native::Cts::Cache::NvStorage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nv-storage")
        return true;
    return false;
}

Native::Cts::CriticalAuthentication::CriticalAuthentication()
    :
    default_(std::make_shared<Native::Cts::CriticalAuthentication::Default>())
	,fallback(std::make_shared<Native::Cts::CriticalAuthentication::Fallback>())
{
    default_->parent = this;
    fallback->parent = this;

    yang_name = "critical-authentication"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::CriticalAuthentication::~CriticalAuthentication()
{
}

bool Native::Cts::CriticalAuthentication::has_data() const
{
    return (default_ !=  nullptr && default_->has_data())
	|| (fallback !=  nullptr && fallback->has_data());
}

bool Native::Cts::CriticalAuthentication::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (fallback !=  nullptr && fallback->has_operation());
}

std::string Native::Cts::CriticalAuthentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::CriticalAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:critical-authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::CriticalAuthentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::CriticalAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Cts::CriticalAuthentication::Default>();
        }
        return default_;
    }

    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::Cts::CriticalAuthentication::Fallback>();
        }
        return fallback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::CriticalAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    return children;
}

void Native::Cts::CriticalAuthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::CriticalAuthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::CriticalAuthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "fallback")
        return true;
    return false;
}

Native::Cts::CriticalAuthentication::Default::Default()
    :
    peer_sgt(std::make_shared<Native::Cts::CriticalAuthentication::Default::PeerSgt>())
	,pmk(std::make_shared<Native::Cts::CriticalAuthentication::Default::Pmk>())
{
    peer_sgt->parent = this;
    pmk->parent = this;

    yang_name = "default"; yang_parent_name = "critical-authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::CriticalAuthentication::Default::~Default()
{
}

bool Native::Cts::CriticalAuthentication::Default::has_data() const
{
    return (peer_sgt !=  nullptr && peer_sgt->has_data())
	|| (pmk !=  nullptr && pmk->has_data());
}

bool Native::Cts::CriticalAuthentication::Default::has_operation() const
{
    return is_set(yfilter)
	|| (peer_sgt !=  nullptr && peer_sgt->has_operation())
	|| (pmk !=  nullptr && pmk->has_operation());
}

std::string Native::Cts::CriticalAuthentication::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:critical-authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::CriticalAuthentication::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::CriticalAuthentication::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::CriticalAuthentication::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-sgt")
    {
        if(peer_sgt == nullptr)
        {
            peer_sgt = std::make_shared<Native::Cts::CriticalAuthentication::Default::PeerSgt>();
        }
        return peer_sgt;
    }

    if(child_yang_name == "pmk")
    {
        if(pmk == nullptr)
        {
            pmk = std::make_shared<Native::Cts::CriticalAuthentication::Default::Pmk>();
        }
        return pmk;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::CriticalAuthentication::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer_sgt != nullptr)
    {
        children["peer-sgt"] = peer_sgt;
    }

    if(pmk != nullptr)
    {
        children["pmk"] = pmk;
    }

    return children;
}

void Native::Cts::CriticalAuthentication::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::CriticalAuthentication::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::CriticalAuthentication::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-sgt" || name == "pmk")
        return true;
    return false;
}

Native::Cts::CriticalAuthentication::Default::PeerSgt::PeerSgt()
{

    yang_name = "peer-sgt"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::CriticalAuthentication::Default::PeerSgt::~PeerSgt()
{
}

bool Native::Cts::CriticalAuthentication::Default::PeerSgt::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Cts::CriticalAuthentication::Default::PeerSgt::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Cts::CriticalAuthentication::Default::PeerSgt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:critical-authentication/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::CriticalAuthentication::Default::PeerSgt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-sgt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::CriticalAuthentication::Default::PeerSgt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::CriticalAuthentication::Default::PeerSgt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto c = std::make_shared<Native::Cts::CriticalAuthentication::Default::PeerSgt::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::CriticalAuthentication::Default::PeerSgt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Cts::CriticalAuthentication::Default::PeerSgt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::CriticalAuthentication::Default::PeerSgt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::CriticalAuthentication::Default::PeerSgt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Cts::CriticalAuthentication::Default::PeerSgt::Range::Range()
    :
    range{YType::uint16, "range"},
    trusted{YType::empty, "trusted"}
{

    yang_name = "range"; yang_parent_name = "peer-sgt"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::CriticalAuthentication::Default::PeerSgt::Range::~Range()
{
}

bool Native::Cts::CriticalAuthentication::Default::PeerSgt::Range::has_data() const
{
    return range.is_set
	|| trusted.is_set;
}

bool Native::Cts::CriticalAuthentication::Default::PeerSgt::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(trusted.yfilter);
}

std::string Native::Cts::CriticalAuthentication::Default::PeerSgt::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:critical-authentication/default/peer-sgt/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::CriticalAuthentication::Default::PeerSgt::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::CriticalAuthentication::Default::PeerSgt::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::CriticalAuthentication::Default::PeerSgt::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::CriticalAuthentication::Default::PeerSgt::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cts::CriticalAuthentication::Default::PeerSgt::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trusted")
    {
        trusted = value;
        trusted.value_namespace = name_space;
        trusted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::CriticalAuthentication::Default::PeerSgt::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "trusted")
    {
        trusted.yfilter = yfilter;
    }
}

bool Native::Cts::CriticalAuthentication::Default::PeerSgt::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "trusted")
        return true;
    return false;
}

Native::Cts::CriticalAuthentication::Default::Pmk::Pmk()
    :
    type{YType::enumeration, "type"},
    secret{YType::str, "secret"}
{

    yang_name = "pmk"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::CriticalAuthentication::Default::Pmk::~Pmk()
{
}

bool Native::Cts::CriticalAuthentication::Default::Pmk::has_data() const
{
    return type.is_set
	|| secret.is_set;
}

bool Native::Cts::CriticalAuthentication::Default::Pmk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Cts::CriticalAuthentication::Default::Pmk::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:critical-authentication/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::CriticalAuthentication::Default::Pmk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::CriticalAuthentication::Default::Pmk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::CriticalAuthentication::Default::Pmk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::CriticalAuthentication::Default::Pmk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cts::CriticalAuthentication::Default::Pmk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Cts::CriticalAuthentication::Default::Pmk::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Cts::CriticalAuthentication::Default::Pmk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "secret")
        return true;
    return false;
}

Native::Cts::CriticalAuthentication::Fallback::Fallback()
    :
    cached{YType::empty, "Cached"},
    default_{YType::empty, "default"}
{

    yang_name = "fallback"; yang_parent_name = "critical-authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::CriticalAuthentication::Fallback::~Fallback()
{
}

bool Native::Cts::CriticalAuthentication::Fallback::has_data() const
{
    return cached.is_set
	|| default_.is_set;
}

bool Native::Cts::CriticalAuthentication::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cached.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Cts::CriticalAuthentication::Fallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:critical-authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::CriticalAuthentication::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::CriticalAuthentication::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cached.is_set || is_set(cached.yfilter)) leaf_name_data.push_back(cached.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::CriticalAuthentication::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::CriticalAuthentication::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cts::CriticalAuthentication::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cached")
    {
        cached = value;
        cached.value_namespace = name_space;
        cached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::CriticalAuthentication::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Cached")
    {
        cached.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Cts::CriticalAuthentication::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Cached" || name == "default")
        return true;
    return false;
}

Native::Cts::Authorization::Authorization()
    :
    list{YType::str, "list"}
{

    yang_name = "authorization"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Authorization::~Authorization()
{
}

bool Native::Cts::Authorization::has_data() const
{
    return list.is_set;
}

bool Native::Cts::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Cts::Authorization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cts::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Cts::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Cts::RoleBased::RoleBased()
    :
    sgt_caching{YType::empty, "sgt-caching"}
    	,
    permissions(std::make_shared<Native::Cts::RoleBased::Permissions>())
	,enforcement_only(std::make_shared<Native::Cts::RoleBased::EnforcementOnly>())
	,enforcement(std::make_shared<Native::Cts::RoleBased::Enforcement>())
	,monitor(std::make_shared<Native::Cts::RoleBased::Monitor>())
	,sgt_map_vlan_list(std::make_shared<Native::Cts::RoleBased::SgtMapVlanList>())
{
    permissions->parent = this;
    enforcement_only->parent = this;
    enforcement->parent = this;
    monitor->parent = this;
    sgt_map_vlan_list->parent = this;

    yang_name = "role-based"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::~RoleBased()
{
}

bool Native::Cts::RoleBased::has_data() const
{
    for (std::size_t index=0; index<sgt_map.size(); index++)
    {
        if(sgt_map[index]->has_data())
            return true;
    }
    return sgt_caching.is_set
	|| (permissions !=  nullptr && permissions->has_data())
	|| (enforcement_only !=  nullptr && enforcement_only->has_data())
	|| (enforcement !=  nullptr && enforcement->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (sgt_map_vlan_list !=  nullptr && sgt_map_vlan_list->has_data());
}

bool Native::Cts::RoleBased::has_operation() const
{
    for (std::size_t index=0; index<sgt_map.size(); index++)
    {
        if(sgt_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sgt_caching.yfilter)
	|| (permissions !=  nullptr && permissions->has_operation())
	|| (enforcement_only !=  nullptr && enforcement_only->has_operation())
	|| (enforcement !=  nullptr && enforcement->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (sgt_map_vlan_list !=  nullptr && sgt_map_vlan_list->has_operation());
}

std::string Native::Cts::RoleBased::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:role-based";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt_caching.is_set || is_set(sgt_caching.yfilter)) leaf_name_data.push_back(sgt_caching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permissions")
    {
        if(permissions == nullptr)
        {
            permissions = std::make_shared<Native::Cts::RoleBased::Permissions>();
        }
        return permissions;
    }

    if(child_yang_name == "enforcement-only")
    {
        if(enforcement_only == nullptr)
        {
            enforcement_only = std::make_shared<Native::Cts::RoleBased::EnforcementOnly>();
        }
        return enforcement_only;
    }

    if(child_yang_name == "enforcement")
    {
        if(enforcement == nullptr)
        {
            enforcement = std::make_shared<Native::Cts::RoleBased::Enforcement>();
        }
        return enforcement;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Cts::RoleBased::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "sgt-map")
    {
        auto c = std::make_shared<Native::Cts::RoleBased::SgtMap>();
        c->parent = this;
        sgt_map.push_back(c);
        return c;
    }

    if(child_yang_name == "sgt-map-vlan-list")
    {
        if(sgt_map_vlan_list == nullptr)
        {
            sgt_map_vlan_list = std::make_shared<Native::Cts::RoleBased::SgtMapVlanList>();
        }
        return sgt_map_vlan_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(permissions != nullptr)
    {
        children["permissions"] = permissions;
    }

    if(enforcement_only != nullptr)
    {
        children["enforcement-only"] = enforcement_only;
    }

    if(enforcement != nullptr)
    {
        children["enforcement"] = enforcement;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    count = 0;
    for (auto const & c : sgt_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(sgt_map_vlan_list != nullptr)
    {
        children["sgt-map-vlan-list"] = sgt_map_vlan_list;
    }

    return children;
}

void Native::Cts::RoleBased::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt-caching")
    {
        sgt_caching = value;
        sgt_caching.value_namespace = name_space;
        sgt_caching.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt-caching")
    {
        sgt_caching.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permissions" || name == "enforcement-only" || name == "enforcement" || name == "monitor" || name == "sgt-map" || name == "sgt-map-vlan-list" || name == "sgt-caching")
        return true;
    return false;
}

Native::Cts::RoleBased::Permissions::Permissions()
    :
    default_(std::make_shared<Native::Cts::RoleBased::Permissions::Default>())
	,from(std::make_shared<Native::Cts::RoleBased::Permissions::From>())
{
    default_->parent = this;
    from->parent = this;

    yang_name = "permissions"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::Permissions::~Permissions()
{
}

bool Native::Cts::RoleBased::Permissions::has_data() const
{
    return (default_ !=  nullptr && default_->has_data())
	|| (from !=  nullptr && from->has_data());
}

bool Native::Cts::RoleBased::Permissions::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (from !=  nullptr && from->has_operation());
}

std::string Native::Cts::RoleBased::Permissions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::Permissions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permissions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::Permissions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::Permissions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Cts::RoleBased::Permissions::Default>();
        }
        return default_;
    }

    if(child_yang_name == "from")
    {
        if(from == nullptr)
        {
            from = std::make_shared<Native::Cts::RoleBased::Permissions::From>();
        }
        return from;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::Permissions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(from != nullptr)
    {
        children["from"] = from;
    }

    return children;
}

void Native::Cts::RoleBased::Permissions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::RoleBased::Permissions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::RoleBased::Permissions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "from")
        return true;
    return false;
}

Native::Cts::RoleBased::Permissions::Default::Default()
    :
    name{YType::str, "name"}
{

    yang_name = "default"; yang_parent_name = "permissions"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::Permissions::Default::~Default()
{
}

bool Native::Cts::RoleBased::Permissions::Default::has_data() const
{
    return name.is_set;
}

bool Native::Cts::RoleBased::Permissions::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Cts::RoleBased::Permissions::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/permissions/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::Permissions::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::Permissions::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::Permissions::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::Permissions::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cts::RoleBased::Permissions::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::Permissions::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::Permissions::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Cts::RoleBased::Permissions::From::From()
{

    yang_name = "from"; yang_parent_name = "permissions"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::Permissions::From::~From()
{
}

bool Native::Cts::RoleBased::Permissions::From::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Cts::RoleBased::Permissions::From::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Cts::RoleBased::Permissions::From::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/permissions/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::Permissions::From::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "from";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::Permissions::From::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::Permissions::From::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto c = std::make_shared<Native::Cts::RoleBased::Permissions::From::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::Permissions::From::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Cts::RoleBased::Permissions::From::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::RoleBased::Permissions::From::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::RoleBased::Permissions::From::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Cts::RoleBased::Permissions::From::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    to(std::make_shared<Native::Cts::RoleBased::Permissions::From::Range::To>())
{
    to->parent = this;

    yang_name = "range"; yang_parent_name = "from"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::Permissions::From::Range::~Range()
{
}

bool Native::Cts::RoleBased::Permissions::From::Range::has_data() const
{
    return range.is_set
	|| (to !=  nullptr && to->has_data());
}

bool Native::Cts::RoleBased::Permissions::From::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (to !=  nullptr && to->has_operation());
}

std::string Native::Cts::RoleBased::Permissions::From::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/permissions/from/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::Permissions::From::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::Permissions::From::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::Permissions::From::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "to")
    {
        if(to == nullptr)
        {
            to = std::make_shared<Native::Cts::RoleBased::Permissions::From::Range::To>();
        }
        return to;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::Permissions::From::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(to != nullptr)
    {
        children["to"] = to;
    }

    return children;
}

void Native::Cts::RoleBased::Permissions::From::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::Permissions::From::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::Permissions::From::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "to" || name == "range")
        return true;
    return false;
}

Native::Cts::RoleBased::Permissions::From::Range::To::To()
{

    yang_name = "to"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::RoleBased::Permissions::From::Range::To::~To()
{
}

bool Native::Cts::RoleBased::Permissions::From::Range::To::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Cts::RoleBased::Permissions::From::Range::To::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Cts::RoleBased::Permissions::From::Range::To::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::Permissions::From::Range::To::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::Permissions::From::Range::To::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto c = std::make_shared<Native::Cts::RoleBased::Permissions::From::Range::To::Range_>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::Permissions::From::Range::To::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Cts::RoleBased::Permissions::From::Range::To::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::RoleBased::Permissions::From::Range::To::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::RoleBased::Permissions::From::Range::To::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Cts::RoleBased::Permissions::From::Range::To::Range_::Range_()
    :
    range{YType::uint16, "range"},
    name{YType::str, "name"}
{

    yang_name = "range"; yang_parent_name = "to"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::RoleBased::Permissions::From::Range::To::Range_::~Range_()
{
}

bool Native::Cts::RoleBased::Permissions::From::Range::To::Range_::has_data() const
{
    return range.is_set
	|| name.is_set;
}

bool Native::Cts::RoleBased::Permissions::From::Range::To::Range_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Cts::RoleBased::Permissions::From::Range::To::Range_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::Permissions::From::Range::To::Range_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::Permissions::From::Range::To::Range_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::Permissions::From::Range::To::Range_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cts::RoleBased::Permissions::From::Range::To::Range_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::Permissions::From::Range::To::Range_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::Permissions::From::Range::To::Range_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "name")
        return true;
    return false;
}

Native::Cts::RoleBased::EnforcementOnly::EnforcementOnly()
    :
    enforcement{YType::empty, "enforcement"}
{

    yang_name = "enforcement-only"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::EnforcementOnly::~EnforcementOnly()
{
}

bool Native::Cts::RoleBased::EnforcementOnly::has_data() const
{
    return enforcement.is_set;
}

bool Native::Cts::RoleBased::EnforcementOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enforcement.yfilter);
}

std::string Native::Cts::RoleBased::EnforcementOnly::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::EnforcementOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enforcement-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::EnforcementOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enforcement.is_set || is_set(enforcement.yfilter)) leaf_name_data.push_back(enforcement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::EnforcementOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::EnforcementOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cts::RoleBased::EnforcementOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enforcement")
    {
        enforcement = value;
        enforcement.value_namespace = name_space;
        enforcement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::EnforcementOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enforcement")
    {
        enforcement.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::EnforcementOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enforcement")
        return true;
    return false;
}

Native::Cts::RoleBased::Enforcement::Enforcement()
    :
    logging_interval{YType::uint32, "logging-interval"}
{

    yang_name = "enforcement"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::Enforcement::~Enforcement()
{
}

bool Native::Cts::RoleBased::Enforcement::has_data() const
{
    for (std::size_t index=0; index<vlan_list.size(); index++)
    {
        if(vlan_list[index]->has_data())
            return true;
    }
    return logging_interval.is_set;
}

bool Native::Cts::RoleBased::Enforcement::has_operation() const
{
    for (std::size_t index=0; index<vlan_list.size(); index++)
    {
        if(vlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(logging_interval.yfilter);
}

std::string Native::Cts::RoleBased::Enforcement::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::Enforcement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enforcement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::Enforcement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging_interval.is_set || is_set(logging_interval.yfilter)) leaf_name_data.push_back(logging_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::Enforcement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-list")
    {
        auto c = std::make_shared<Native::Cts::RoleBased::Enforcement::VlanList>();
        c->parent = this;
        vlan_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::Enforcement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vlan_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Cts::RoleBased::Enforcement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging-interval")
    {
        logging_interval = value;
        logging_interval.value_namespace = name_space;
        logging_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::Enforcement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging-interval")
    {
        logging_interval.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::Enforcement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-list" || name == "logging-interval")
        return true;
    return false;
}

Native::Cts::RoleBased::Enforcement::VlanList::VlanList()
    :
    id{YType::str, "id"}
{

    yang_name = "vlan-list"; yang_parent_name = "enforcement"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::Enforcement::VlanList::~VlanList()
{
}

bool Native::Cts::RoleBased::Enforcement::VlanList::has_data() const
{
    return id.is_set;
}

bool Native::Cts::RoleBased::Enforcement::VlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Cts::RoleBased::Enforcement::VlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/enforcement/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::Enforcement::VlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::Enforcement::VlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::Enforcement::VlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::Enforcement::VlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cts::RoleBased::Enforcement::VlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::Enforcement::VlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::Enforcement::VlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::Cts::RoleBased::Monitor::Monitor()
    :
    all{YType::empty, "all"}
{

    yang_name = "monitor"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::Monitor::~Monitor()
{
}

bool Native::Cts::RoleBased::Monitor::has_data() const
{
    return all.is_set;
}

bool Native::Cts::RoleBased::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Cts::RoleBased::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cts::RoleBased::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Cts::RoleBased::SgtMap::SgtMap()
    :
    ip{YType::str, "ip"},
    sgt{YType::uint16, "sgt"},
    vrf{YType::str, "vrf"},
    host{YType::empty, "host"}
{

    yang_name = "sgt-map"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::SgtMap::~SgtMap()
{
}

bool Native::Cts::RoleBased::SgtMap::has_data() const
{
    return ip.is_set
	|| sgt.is_set
	|| vrf.is_set
	|| host.is_set;
}

bool Native::Cts::RoleBased::SgtMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Native::Cts::RoleBased::SgtMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::SgtMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sgt-map" <<"[ip='" <<ip <<"']" <<"[sgt='" <<sgt <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::SgtMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::SgtMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::SgtMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cts::RoleBased::SgtMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::SgtMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::SgtMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "sgt" || name == "vrf" || name == "host")
        return true;
    return false;
}

Native::Cts::RoleBased::SgtMapVlanList::SgtMapVlanList()
{

    yang_name = "sgt-map-vlan-list"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::SgtMapVlanList::~SgtMapVlanList()
{
}

bool Native::Cts::RoleBased::SgtMapVlanList::has_data() const
{
    for (std::size_t index=0; index<sgt_map.size(); index++)
    {
        if(sgt_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Cts::RoleBased::SgtMapVlanList::has_operation() const
{
    for (std::size_t index=0; index<sgt_map.size(); index++)
    {
        if(sgt_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Cts::RoleBased::SgtMapVlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::SgtMapVlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sgt-map-vlan-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::SgtMapVlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::SgtMapVlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sgt-map")
    {
        auto c = std::make_shared<Native::Cts::RoleBased::SgtMapVlanList::SgtMap>();
        c->parent = this;
        sgt_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::SgtMapVlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sgt_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Cts::RoleBased::SgtMapVlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::RoleBased::SgtMapVlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::RoleBased::SgtMapVlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt-map")
        return true;
    return false;
}

Native::Cts::RoleBased::SgtMapVlanList::SgtMap::SgtMap()
    :
    vlan_list{YType::str, "vlan-list"},
    sgt{YType::int16, "sgt"}
{

    yang_name = "sgt-map"; yang_parent_name = "sgt-map-vlan-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::SgtMapVlanList::SgtMap::~SgtMap()
{
}

bool Native::Cts::RoleBased::SgtMapVlanList::SgtMap::has_data() const
{
    return vlan_list.is_set
	|| sgt.is_set;
}

bool Native::Cts::RoleBased::SgtMapVlanList::SgtMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_list.yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Cts::RoleBased::SgtMapVlanList::SgtMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/sgt-map-vlan-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::SgtMapVlanList::SgtMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sgt-map" <<"[vlan-list='" <<vlan_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::SgtMapVlanList::SgtMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_list.is_set || is_set(vlan_list.yfilter)) leaf_name_data.push_back(vlan_list.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::SgtMapVlanList::SgtMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::SgtMapVlanList::SgtMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cts::RoleBased::SgtMapVlanList::SgtMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-list")
    {
        vlan_list = value;
        vlan_list.value_namespace = name_space;
        vlan_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::SgtMapVlanList::SgtMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-list")
    {
        vlan_list.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::SgtMapVlanList::SgtMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-list" || name == "sgt")
        return true;
    return false;
}

Native::Cts::Server::Server()
    :
    deadtime{YType::uint32, "deadtime"}
    	,
    key_wrap(std::make_shared<Native::Cts::Server::KeyWrap>())
	,load_balance(std::make_shared<Native::Cts::Server::LoadBalance>())
	,test(std::make_shared<Native::Cts::Server::Test>())
{
    key_wrap->parent = this;
    load_balance->parent = this;
    test->parent = this;

    yang_name = "server"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Server::~Server()
{
}

bool Native::Cts::Server::has_data() const
{
    return deadtime.is_set
	|| (key_wrap !=  nullptr && key_wrap->has_data())
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (test !=  nullptr && test->has_data());
}

bool Native::Cts::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| (key_wrap !=  nullptr && key_wrap->has_operation())
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Cts::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-wrap")
    {
        if(key_wrap == nullptr)
        {
            key_wrap = std::make_shared<Native::Cts::Server::KeyWrap>();
        }
        return key_wrap;
    }

    if(child_yang_name == "load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<Native::Cts::Server::LoadBalance>();
        }
        return load_balance;
    }

    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Cts::Server::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_wrap != nullptr)
    {
        children["key-wrap"] = key_wrap;
    }

    if(load_balance != nullptr)
    {
        children["load-balance"] = load_balance;
    }

    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Cts::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
}

bool Native::Cts::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-wrap" || name == "load-balance" || name == "test" || name == "deadtime")
        return true;
    return false;
}

Native::Cts::Server::KeyWrap::KeyWrap()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "key-wrap"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Server::KeyWrap::~KeyWrap()
{
}

bool Native::Cts::Server::KeyWrap::has_data() const
{
    return enable.is_set;
}

bool Native::Cts::Server::KeyWrap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Cts::Server::KeyWrap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Server::KeyWrap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-wrap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Server::KeyWrap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Server::KeyWrap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Server::KeyWrap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cts::Server::KeyWrap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Server::KeyWrap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Cts::Server::KeyWrap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Cts::Server::LoadBalance::LoadBalance()
    :
    method(std::make_shared<Native::Cts::Server::LoadBalance::Method>())
{
    method->parent = this;

    yang_name = "load-balance"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Server::LoadBalance::~LoadBalance()
{
}

bool Native::Cts::Server::LoadBalance::has_data() const
{
    return (method !=  nullptr && method->has_data());
}

bool Native::Cts::Server::LoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::Cts::Server::LoadBalance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Server::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Server::LoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Server::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Cts::Server::LoadBalance::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Server::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::Cts::Server::LoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Server::LoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Server::LoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method")
        return true;
    return false;
}

Native::Cts::Server::LoadBalance::Method::Method()
    :
    least_outstanding(nullptr) // presence node
{

    yang_name = "method"; yang_parent_name = "load-balance"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Server::LoadBalance::Method::~Method()
{
}

bool Native::Cts::Server::LoadBalance::Method::has_data() const
{
    return (least_outstanding !=  nullptr && least_outstanding->has_data());
}

bool Native::Cts::Server::LoadBalance::Method::has_operation() const
{
    return is_set(yfilter)
	|| (least_outstanding !=  nullptr && least_outstanding->has_operation());
}

std::string Native::Cts::Server::LoadBalance::Method::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:server/load-balance/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Server::LoadBalance::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Server::LoadBalance::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Server::LoadBalance::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "least-outstanding")
    {
        if(least_outstanding == nullptr)
        {
            least_outstanding = std::make_shared<Native::Cts::Server::LoadBalance::Method::LeastOutstanding>();
        }
        return least_outstanding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Server::LoadBalance::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(least_outstanding != nullptr)
    {
        children["least-outstanding"] = least_outstanding;
    }

    return children;
}

void Native::Cts::Server::LoadBalance::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Server::LoadBalance::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Server::LoadBalance::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "least-outstanding")
        return true;
    return false;
}

Native::Cts::Server::LoadBalance::Method::LeastOutstanding::LeastOutstanding()
    :
    batch_size{YType::uint32, "batch-size"},
    ignore_preferred_server{YType::empty, "ignore-preferred-server"}
{

    yang_name = "least-outstanding"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Server::LoadBalance::Method::LeastOutstanding::~LeastOutstanding()
{
}

bool Native::Cts::Server::LoadBalance::Method::LeastOutstanding::has_data() const
{
    return batch_size.is_set
	|| ignore_preferred_server.is_set;
}

bool Native::Cts::Server::LoadBalance::Method::LeastOutstanding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(batch_size.yfilter)
	|| ydk::is_set(ignore_preferred_server.yfilter);
}

std::string Native::Cts::Server::LoadBalance::Method::LeastOutstanding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:server/load-balance/method/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Server::LoadBalance::Method::LeastOutstanding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "least-outstanding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Server::LoadBalance::Method::LeastOutstanding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (batch_size.is_set || is_set(batch_size.yfilter)) leaf_name_data.push_back(batch_size.get_name_leafdata());
    if (ignore_preferred_server.is_set || is_set(ignore_preferred_server.yfilter)) leaf_name_data.push_back(ignore_preferred_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Server::LoadBalance::Method::LeastOutstanding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Server::LoadBalance::Method::LeastOutstanding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cts::Server::LoadBalance::Method::LeastOutstanding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "batch-size")
    {
        batch_size = value;
        batch_size.value_namespace = name_space;
        batch_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-preferred-server")
    {
        ignore_preferred_server = value;
        ignore_preferred_server.value_namespace = name_space;
        ignore_preferred_server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Server::LoadBalance::Method::LeastOutstanding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "batch-size")
    {
        batch_size.yfilter = yfilter;
    }
    if(value_path == "ignore-preferred-server")
    {
        ignore_preferred_server.yfilter = yfilter;
    }
}

bool Native::Cts::Server::LoadBalance::Method::LeastOutstanding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "batch-size" || name == "ignore-preferred-server")
        return true;
    return false;
}

Native::Cts::Server::Test::Test()
    :
    all(std::make_shared<Native::Cts::Server::Test::All>())
{
    all->parent = this;

    yang_name = "test"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Server::Test::~Test()
{
}

bool Native::Cts::Server::Test::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Cts::Server::Test::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Cts::Server::Test::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Server::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Server::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Server::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        auto c = std::make_shared<Native::Cts::Server::Test::Server_>();
        c->parent = this;
        server.push_back(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Cts::Server::Test::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Server::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : server)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Cts::Server::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Server::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Server::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server" || name == "all")
        return true;
    return false;
}

Native::Cts::Server::Test::Server_::Server_()
    :
    ip{YType::str, "ip"},
    deadtime{YType::uint32, "deadtime"},
    enable{YType::boolean, "enable"},
    idle_time{YType::uint32, "idle-time"}
{

    yang_name = "server"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Server::Test::Server_::~Server_()
{
}

bool Native::Cts::Server::Test::Server_::has_data() const
{
    return ip.is_set
	|| deadtime.is_set
	|| enable.is_set
	|| idle_time.is_set;
}

bool Native::Cts::Server::Test::Server_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(idle_time.yfilter);
}

std::string Native::Cts::Server::Test::Server_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:server/test/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Server::Test::Server_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Server::Test::Server_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Server::Test::Server_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Server::Test::Server_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cts::Server::Test::Server_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Server::Test::Server_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::Cts::Server::Test::Server_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "deadtime" || name == "enable" || name == "idle-time")
        return true;
    return false;
}

Native::Cts::Server::Test::All::All()
    :
    deadtime{YType::uint32, "deadtime"},
    enable{YType::boolean, "enable"},
    idle_time{YType::uint32, "idle-time"}
{

    yang_name = "all"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Server::Test::All::~All()
{
}

bool Native::Cts::Server::Test::All::has_data() const
{
    return deadtime.is_set
	|| enable.is_set
	|| idle_time.is_set;
}

bool Native::Cts::Server::Test::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(idle_time.yfilter);
}

std::string Native::Cts::Server::Test::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:server/test/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Server::Test::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Server::Test::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Server::Test::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Server::Test::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cts::Server::Test::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Server::Test::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::Cts::Server::Test::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deadtime" || name == "enable" || name == "idle-time")
        return true;
    return false;
}

Native::Cts::Sxp::Sxp()
    :
    enable{YType::empty, "enable"}
    	,
    default_(std::make_shared<Native::Cts::Sxp::Default>())
	,connection(std::make_shared<Native::Cts::Sxp::Connection>())
{
    default_->parent = this;
    connection->parent = this;

    yang_name = "sxp"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Sxp::~Sxp()
{
}

bool Native::Cts::Sxp::has_data() const
{
    return enable.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (connection !=  nullptr && connection->has_data());
}

bool Native::Cts::Sxp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (connection !=  nullptr && connection->has_operation());
}

std::string Native::Cts::Sxp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Sxp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:sxp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Cts::Sxp::Default>();
        }
        return default_;
    }

    if(child_yang_name == "connection")
    {
        if(connection == nullptr)
        {
            connection = std::make_shared<Native::Cts::Sxp::Connection>();
        }
        return connection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(connection != nullptr)
    {
        children["connection"] = connection;
    }

    return children;
}

void Native::Cts::Sxp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "connection" || name == "enable")
        return true;
    return false;
}

Native::Cts::Sxp::Default::Default()
    :
    source_ip{YType::str, "source-ip"}
    	,
    password(std::make_shared<Native::Cts::Sxp::Default::Password>())
{
    password->parent = this;

    yang_name = "default"; yang_parent_name = "sxp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Sxp::Default::~Default()
{
}

bool Native::Cts::Sxp::Default::has_data() const
{
    return source_ip.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Cts::Sxp::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Cts::Sxp::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:sxp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Sxp::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Cts::Sxp::Default::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Cts::Sxp::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "source-ip")
        return true;
    return false;
}

Native::Cts::Sxp::Default::Password::Password()
    :
    type{YType::enumeration, "type"},
    secret{YType::str, "secret"}
{

    yang_name = "password"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Sxp::Default::Password::~Password()
{
}

bool Native::Cts::Sxp::Default::Password::has_data() const
{
    return type.is_set
	|| secret.is_set;
}

bool Native::Cts::Sxp::Default::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Cts::Sxp::Default::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:sxp/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Sxp::Default::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Default::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Default::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Default::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cts::Sxp::Default::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Cts::Sxp::Default::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Cts::Sxp::Default::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "secret")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Connection()
    :
    peer(std::make_shared<Native::Cts::Sxp::Connection::Peer>())
{
    peer->parent = this;

    yang_name = "connection"; yang_parent_name = "sxp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Sxp::Connection::~Connection()
{
}

bool Native::Cts::Sxp::Connection::has_data() const
{
    return (peer !=  nullptr && peer->has_data());
}

bool Native::Cts::Sxp::Connection::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Cts::Sxp::Connection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:sxp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Sxp::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Cts::Sxp::Connection::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Cts::Sxp::Connection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Sxp::Connection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Sxp::Connection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Peer()
{

    yang_name = "peer"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Sxp::Connection::Peer::~Peer()
{
}

bool Native::Cts::Sxp::Connection::Peer::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Cts::Sxp::Connection::Peer::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:sxp/connection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Sxp::Connection::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto c = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Sxp::Connection::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Sxp::Connection::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

const Enum::YLeaf Native::Crypto::Pki::Certificate::Chain::Certificate_::Certtype::ca {0, "ca"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Chain::Certificate_::Certtype::ra_encrypt {1, "ra-encrypt"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Chain::Certificate_::Certtype::ra_general {2, "ra-general"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Chain::Certificate_::Certtype::ra_sign {3, "ra-sign"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Chain::Certificate_::Certtype::rollover {4, "rollover"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Chain::Certificate_::Certtype::self_signed {5, "self-signed"};

const Enum::YLeaf Native::Crypto::Pki::Certificate::Storage::Path::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Storage::Path::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Storage::Path::nvram__COLON__ {2, "nvram:"};

const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::Date::Friday {0, "Friday"};
const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::Date::Monday {1, "Monday"};
const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::Date::Saturday {2, "Saturday"};
const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::Date::Sunday {3, "Sunday"};
const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::Date::Thursday {4, "Thursday"};
const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::Date::Tuesday {5, "Tuesday"};
const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::Date::Wednesday {6, "Wednesday"};

const Enum::YLeaf Native::Crypto::Pki::Export::Pem::Url::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pem::Url::File::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pem::Url::File::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pem::Url::File::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pem::Url::File::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pem::Url::File::null__COLON__ {5, "null:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pem::Url::File::nvram__COLON__ {6, "nvram:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pem::Url::File::pram__COLON__ {7, "pram:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pem::Url::File::rcp__COLON__ {8, "rcp:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pem::Url::File::scp__COLON__ {9, "scp:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pem::Url::File::system__COLON__ {10, "system:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pem::Url::File::tftp__COLON__ {11, "tftp:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pem::Url::File::tmpsys__COLON__ {12, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Pki::Export::Pem::Url::Encrypt::Y_3des {0, "3des"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pem::Url::Encrypt::des {1, "des"};

const Enum::YLeaf Native::Crypto::Pki::Export::Pkcs12::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pkcs12::File::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pkcs12::File::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pkcs12::File::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pkcs12::File::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pkcs12::File::null__COLON__ {5, "null:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pkcs12::File::nvram__COLON__ {6, "nvram:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pkcs12::File::pram__COLON__ {7, "pram:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pkcs12::File::rcp__COLON__ {8, "rcp:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pkcs12::File::scp__COLON__ {9, "scp:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pkcs12::File::system__COLON__ {10, "system:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pkcs12::File::tftp__COLON__ {11, "tftp:"};
const Enum::YLeaf Native::Crypto::Pki::Export::Pkcs12::File::tmpsys__COLON__ {12, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::null__COLON__ {5, "null:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::nvram__COLON__ {6, "nvram:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::pram__COLON__ {7, "pram:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::rcp__COLON__ {8, "rcp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::scp__COLON__ {9, "scp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::system__COLON__ {10, "system:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::tftp__COLON__ {11, "tftp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::tmpsys__COLON__ {12, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::null__COLON__ {5, "null:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::nvram__COLON__ {6, "nvram:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::pram__COLON__ {7, "pram:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::rcp__COLON__ {8, "rcp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::scp__COLON__ {9, "scp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::system__COLON__ {10, "system:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::tftp__COLON__ {11, "tftp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::tmpsys__COLON__ {12, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Pki::Trustpoint::RevocationCheck::crl {0, "crl"};
const Enum::YLeaf Native::Crypto::Pki::Trustpoint::RevocationCheck::none {1, "none"};
const Enum::YLeaf Native::Crypto::Pki::Trustpoint::RevocationCheck::ocsp {2, "ocsp"};

const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::cns__COLON__ {1, "cns:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::flash__COLON__ {2, "flash:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::ftp__COLON__ {3, "ftp:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::http__COLON__ {4, "http:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::https__COLON__ {5, "https:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::null__COLON__ {6, "null:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::nvram__COLON__ {7, "nvram:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::pram__COLON__ {8, "pram:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::rcp__COLON__ {9, "rcp:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::scp__COLON__ {10, "scp:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::system__COLON__ {11, "system:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::tar__COLON__ {12, "tar:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::tftp__COLON__ {13, "tftp:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::tmpsys__COLON__ {14, "tmpsys:"};

const Enum::YLeaf Native::Crypto::TlsTunnel::TlsTunnelList::Protection::Protection_::dhe_psk_aes128_cbc_sha1 {0, "dhe-psk-aes128-cbc-sha1"};
const Enum::YLeaf Native::Crypto::TlsTunnel::TlsTunnelList::Protection::Protection_::dhe_psk_aes256_cbc_sha1 {1, "dhe-psk-aes256-cbc-sha1"};
const Enum::YLeaf Native::Crypto::TlsTunnel::TlsTunnelList::Protection::Protection_::psk_aes128_cbc_sha1 {2, "psk-aes128-cbc-sha1"};
const Enum::YLeaf Native::Crypto::TlsTunnel::TlsTunnelList::Protection::Protection_::psk_aes256_cbc_sha1 {3, "psk-aes256-cbc-sha1"};

const Enum::YLeaf Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Cts::Logging::verbose {0, "verbose"};

const Enum::YLeaf Native::Cts::SgEpg::translation {0, "translation"};

const Enum::YLeaf Native::Cts::Cache::NvStorage::NvStorage_::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Cts::Cache::NvStorage::NvStorage_::crashinfo__COLON__ {1, "crashinfo:"};
const Enum::YLeaf Native::Cts::Cache::NvStorage::NvStorage_::kinfo__COLON__ {2, "kinfo:"};
const Enum::YLeaf Native::Cts::Cache::NvStorage::NvStorage_::slot0__COLON__ {3, "slot0:"};
const Enum::YLeaf Native::Cts::Cache::NvStorage::NvStorage_::usb0__COLON__ {4, "usb0:"};

const Enum::YLeaf Native::Cts::CriticalAuthentication::Default::Pmk::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Cts::CriticalAuthentication::Default::Pmk::Type::Y_6 {1, "6"};

const Enum::YLeaf Native::Cts::RoleBased::Enforcement::VlanList::Id::all {0, "all"};

const Enum::YLeaf Native::Cts::RoleBased::SgtMapVlanList::SgtMap::VlanList::all {0, "all"};

const Enum::YLeaf Native::Cts::Sxp::Default::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Cts::Sxp::Default::Password::Type::Y_6 {1, "6"};
const Enum::YLeaf Native::Cts::Sxp::Default::Password::Type::Y_7 {2, "7"};


}
}

