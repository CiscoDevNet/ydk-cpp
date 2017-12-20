
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_97.hpp"
#include "Cisco_IOS_XE_native_98.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Crypto::DynamicMap::Default_::Set::Nat::Nat()
    :
    demux{YType::empty, "demux"}
{

    yang_name = "nat"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::Nat::~Nat()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::Nat::has_data() const
{
    return demux.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Set::Nat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(demux.yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Set::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::Nat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (demux.is_set || is_set(demux.yfilter)) leaf_name_data.push_back(demux.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "demux")
    {
        demux = value;
        demux.value_namespace = name_space;
        demux.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default_::Set::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "demux")
    {
        demux.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default_::Set::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "demux")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::PeerContainer::PeerContainer()
    :
    peer{YType::str, "peer"},
    default_{YType::empty, "default"}
{

    yang_name = "peer-container"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::PeerContainer::~PeerContainer()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::PeerContainer::has_data() const
{
    return peer.is_set
	|| default_.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Set::PeerContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Set::PeerContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::PeerContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::PeerContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::PeerContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::PeerContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default_::Set::PeerContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default_::Set::PeerContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "default")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::Pfs::Pfs()
{

    yang_name = "pfs"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::Pfs::has_data() const
{
    return false;
}

bool Native::Crypto::DynamicMap::Default_::Set::Pfs::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::Pfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::DynamicMap::Default_::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::DynamicMap::Default_::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::ReverseRoute()
{

    yang_name = "reverse-route"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::has_data() const
{
    return false;
}

bool Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::empty, "dfbit"},
    ecn{YType::empty, "ecn"}
    	,
    dummy(nullptr) // presence node
	,idle_time_container(std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay>())
{
    idle_time_container->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dfbit.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::get_children() const
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

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dfbit")
    {
        dfbit.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::Dummy()
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::has_data() const
{
    return false;
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    idle_time{YType::empty, "idle-time"},
    default_{YType::empty, "default"}
{

    yang_name = "idle-time-container"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return idle_time.is_set
	|| default_.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time" || name == "default")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::empty, "days"},
    kilobytes{YType::empty, "kilobytes"},
    seconds{YType::empty, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::empty, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "dialer"; yang_parent_name = "dynamic-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Dialer::~Dialer()
{
}

bool Native::Crypto::DynamicMap::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::DynamicMap::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::DynamicMap::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Match::Match()
    :
    address{YType::str, "address"}
{

    yang_name = "match"; yang_parent_name = "dynamic-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Match::~Match()
{
}

bool Native::Crypto::DynamicMap::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::DynamicMap::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::DynamicMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Qos::Qos()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "qos"; yang_parent_name = "dynamic-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Qos::~Qos()
{
}

bool Native::Crypto::DynamicMap::Qos::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::DynamicMap::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::DynamicMap::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::DynamicMap::ReverseRoute::ReverseRoute()
    :
    static_{YType::empty, "static"}
    	,
    remote_peer_conatiner(std::make_shared<Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner>())
{
    remote_peer_conatiner->parent = this;

    yang_name = "reverse-route"; yang_parent_name = "dynamic-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::DynamicMap::ReverseRoute::has_data() const
{
    return static_.is_set
	|| (remote_peer_conatiner !=  nullptr && remote_peer_conatiner->has_data());
}

bool Native::Crypto::DynamicMap::ReverseRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| (remote_peer_conatiner !=  nullptr && remote_peer_conatiner->has_operation());
}

std::string Native::Crypto::DynamicMap::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-peer-conatiner")
    {
        if(remote_peer_conatiner == nullptr)
        {
            remote_peer_conatiner = std::make_shared<Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner>();
        }
        return remote_peer_conatiner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_peer_conatiner != nullptr)
    {
        children["remote-peer-conatiner"] = remote_peer_conatiner;
    }

    return children;
}

void Native::Crypto::DynamicMap::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-peer-conatiner" || name == "static")
        return true;
    return false;
}

Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::RemotePeerConatiner()
    :
    remote_peer{YType::str, "remote-peer"},
    gateway{YType::empty, "gateway"},
    static_{YType::empty, "static"}
{

    yang_name = "remote-peer-conatiner"; yang_parent_name = "reverse-route"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::~RemotePeerConatiner()
{
}

bool Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::has_data() const
{
    return remote_peer.is_set
	|| gateway.is_set
	|| static_.is_set;
}

bool Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_peer.yfilter)
	|| ydk::is_set(gateway.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-peer-conatiner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_peer.is_set || is_set(remote_peer.yfilter)) leaf_name_data.push_back(remote_peer.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.yfilter)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-peer")
    {
        remote_peer = value;
        remote_peer.value_namespace = name_space;
        remote_peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway")
    {
        gateway = value;
        gateway.value_namespace = name_space;
        gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-peer")
    {
        remote_peer.yfilter = yfilter;
    }
    if(value_path == "gateway")
    {
        gateway.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-peer" || name == "gateway" || name == "static")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::Set()
    :
    group{YType::str, "group"},
    identity{YType::str, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::str, "isakmp-profile"},
    transform_set{YType::str, "transform-set"}
    	,
    peer(std::make_shared<Native::Crypto::DynamicMap::Set::Peer>())
	,pfs(nullptr) // presence node
	,reverse_route(std::make_shared<Native::Crypto::DynamicMap::Set::ReverseRoute>())
	,ip_in(std::make_shared<Native::Crypto::DynamicMap::Set::IpIn>())
	,ip_out(std::make_shared<Native::Crypto::DynamicMap::Set::IpOut>())
	,nat(std::make_shared<Native::Crypto::DynamicMap::Set::Nat>())
	,peer_container(std::make_shared<Native::Crypto::DynamicMap::Set::PeerContainer>())
	,security_association(std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation>())
{
    peer->parent = this;
    reverse_route->parent = this;
    ip_in->parent = this;
    ip_out->parent = this;
    nat->parent = this;
    peer_container->parent = this;
    security_association->parent = this;

    yang_name = "set"; yang_parent_name = "dynamic-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::~Set()
{
}

bool Native::Crypto::DynamicMap::Set::has_data() const
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
	|| (peer !=  nullptr && peer->has_data())
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (ip_in !=  nullptr && ip_in->has_data())
	|| (ip_out !=  nullptr && ip_out->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (peer_container !=  nullptr && peer_container->has_data())
	|| (security_association !=  nullptr && security_association->has_data());
}

bool Native::Crypto::DynamicMap::Set::has_operation() const
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
	|| (peer !=  nullptr && peer->has_operation())
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (ip_in !=  nullptr && ip_in->has_operation())
	|| (ip_out !=  nullptr && ip_out->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (peer_container !=  nullptr && peer_container->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::DynamicMap::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());

    auto transform_set_name_datas = transform_set.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), transform_set_name_datas.begin(), transform_set_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::DynamicMap::Set::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::DynamicMap::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::DynamicMap::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "ip-in")
    {
        if(ip_in == nullptr)
        {
            ip_in = std::make_shared<Native::Crypto::DynamicMap::Set::IpIn>();
        }
        return ip_in;
    }

    if(child_yang_name == "ip-out")
    {
        if(ip_out == nullptr)
        {
            ip_out = std::make_shared<Native::Crypto::DynamicMap::Set::IpOut>();
        }
        return ip_out;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Crypto::DynamicMap::Set::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "peer-container")
    {
        if(peer_container == nullptr)
        {
            peer_container = std::make_shared<Native::Crypto::DynamicMap::Set::PeerContainer>();
        }
        return peer_container;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation>();
        }
        return security_association;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::get_children() const
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

    if(ip_in != nullptr)
    {
        children["ip-in"] = ip_in;
    }

    if(ip_out != nullptr)
    {
        children["ip-out"] = ip_out;
    }

    if(nat != nullptr)
    {
        children["nat"] = nat;
    }

    if(peer_container != nullptr)
    {
        children["peer-container"] = peer_container;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    return children;
}

void Native::Crypto::DynamicMap::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Crypto::DynamicMap::Set::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Native::Crypto::DynamicMap::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "pfs" || name == "reverse-route" || name == "ip-in" || name == "ip-out" || name == "nat" || name == "peer-container" || name == "security-association" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "transform-set")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::Peer::Peer()
    :
    address{YType::str, "address"},
    default_{YType::empty, "default"},
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "peer"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::Peer::~Peer()
{
}

bool Native::Crypto::DynamicMap::Set::Peer::has_data() const
{
    return address.is_set
	|| default_.is_set
	|| dynamic.is_set;
}

bool Native::Crypto::DynamicMap::Set::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::DynamicMap::Set::Peer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::DynamicMap::Set::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "default" || name == "dynamic")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::Pfs::Pfs()
    :
    group{YType::enumeration, "group"}
{

    yang_name = "pfs"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::DynamicMap::Set::Pfs::has_data() const
{
    return group.is_set;
}

bool Native::Crypto::DynamicMap::Set::Pfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::Pfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::ReverseRoute::ReverseRoute()
    :
    distance{YType::uint8, "distance"},
    tag{YType::uint64, "tag"}
{

    yang_name = "reverse-route"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::DynamicMap::Set::ReverseRoute::has_data() const
{
    return distance.is_set
	|| tag.is_set;
}

bool Native::Crypto::DynamicMap::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::DynamicMap::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::DynamicMap::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "tag")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::IpIn::IpIn()
    :
    ip(std::make_shared<Native::Crypto::DynamicMap::Set::IpIn::Ip>())
{
    ip->parent = this;

    yang_name = "ip-in"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::IpIn::~IpIn()
{
}

bool Native::Crypto::DynamicMap::Set::IpIn::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Crypto::DynamicMap::Set::IpIn::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Crypto::DynamicMap::Set::IpIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::IpIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::IpIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Crypto::DynamicMap::Set::IpIn::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::IpIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Crypto::DynamicMap::Set::IpIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::DynamicMap::Set::IpIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::DynamicMap::Set::IpIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::IpIn::Ip::Ip()
    :
    access_group{YType::str, "access-group"},
    in{YType::empty, "in"}
{

    yang_name = "ip"; yang_parent_name = "ip-in"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::IpIn::Ip::~Ip()
{
}

bool Native::Crypto::DynamicMap::Set::IpIn::Ip::has_data() const
{
    return access_group.is_set
	|| in.is_set;
}

bool Native::Crypto::DynamicMap::Set::IpIn::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::IpIn::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::IpIn::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::IpIn::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::IpIn::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::IpIn::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Set::IpIn::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::IpIn::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "in")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::IpOut::IpOut()
    :
    ip(std::make_shared<Native::Crypto::DynamicMap::Set::IpOut::Ip>())
{
    ip->parent = this;

    yang_name = "ip-out"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::IpOut::~IpOut()
{
}

bool Native::Crypto::DynamicMap::Set::IpOut::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Crypto::DynamicMap::Set::IpOut::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Crypto::DynamicMap::Set::IpOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::IpOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::IpOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Crypto::DynamicMap::Set::IpOut::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::IpOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Crypto::DynamicMap::Set::IpOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::DynamicMap::Set::IpOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::DynamicMap::Set::IpOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::IpOut::Ip::Ip()
    :
    access_group{YType::str, "access-group"},
    out{YType::empty, "out"}
{

    yang_name = "ip"; yang_parent_name = "ip-out"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::IpOut::Ip::~Ip()
{
}

bool Native::Crypto::DynamicMap::Set::IpOut::Ip::has_data() const
{
    return access_group.is_set
	|| out.is_set;
}

bool Native::Crypto::DynamicMap::Set::IpOut::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::IpOut::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::IpOut::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::IpOut::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::IpOut::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::IpOut::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Set::IpOut::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::IpOut::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "out")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::Nat::Nat()
    :
    demux{YType::empty, "demux"}
{

    yang_name = "nat"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::Nat::~Nat()
{
}

bool Native::Crypto::DynamicMap::Set::Nat::has_data() const
{
    return demux.is_set;
}

bool Native::Crypto::DynamicMap::Set::Nat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(demux.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::Nat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (demux.is_set || is_set(demux.yfilter)) leaf_name_data.push_back(demux.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "demux")
    {
        demux = value;
        demux.value_namespace = name_space;
        demux.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Set::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "demux")
    {
        demux.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "demux")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::PeerContainer::PeerContainer()
    :
    peer{YType::str, "peer"},
    default_{YType::empty, "default"}
{

    yang_name = "peer-container"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::PeerContainer::~PeerContainer()
{
}

bool Native::Crypto::DynamicMap::Set::PeerContainer::has_data() const
{
    return peer.is_set
	|| default_.is_set;
}

bool Native::Crypto::DynamicMap::Set::PeerContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::PeerContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::PeerContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::PeerContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::PeerContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::PeerContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Set::PeerContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::PeerContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "default")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::enumeration, "dfbit"},
    ecn{YType::enumeration, "ecn"}
    	,
    dummy(std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy>())
	,idle_time_container(std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay>())
{
    dummy->parent = this;
    idle_time_container->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dfbit.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::DynamicMap::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::SecurityAssociation::get_children() const
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

void Native::Crypto::DynamicMap::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dfbit")
    {
        dfbit.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::Dummy()
    :
    pps{YType::uint8, "pps"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::has_data() const
{
    return pps.is_set
	|| seconds.is_set;
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pps.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pps.is_set || is_set(pps.yfilter)) leaf_name_data.push_back(pps.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    idle_time{YType::uint32, "idle-time"},
    default_{YType::empty, "default"}
{

    yang_name = "idle-time-container"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return idle_time.is_set
	|| default_.is_set;
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time" || name == "default")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    kilobytes{YType::str, "kilobytes"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::enumeration, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::Engine::Engine()
    :
    software{YType::enumeration, "software"}
{

    yang_name = "engine"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Engine::~Engine()
{
}

bool Native::Crypto::Engine::has_data() const
{
    return software.is_set;
}

bool Native::Crypto::Engine::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(software.yfilter);
}

std::string Native::Crypto::Engine::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Engine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:engine";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Engine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (software.is_set || is_set(software.yfilter)) leaf_name_data.push_back(software.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Engine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Engine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Engine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "software")
    {
        software = value;
        software.value_namespace = name_space;
        software.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Engine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "software")
    {
        software.yfilter = yfilter;
    }
}

bool Native::Crypto::Engine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "software")
        return true;
    return false;
}

Native::Crypto::Gdoi::Gdoi()
{

    yang_name = "gdoi"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Gdoi::~Gdoi()
{
}

bool Native::Crypto::Gdoi::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Gdoi::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Gdoi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:gdoi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Native::Crypto::Gdoi::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Gdoi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Group()
    :
    name{YType::str, "name"},
    ipv6{YType::empty, "ipv6"},
    passive{YType::empty, "passive"}
    	,
    client(std::make_shared<Native::Crypto::Gdoi::Group::Client>())
	,identity(std::make_shared<Native::Crypto::Gdoi::Group::Identity>())
	,server(std::make_shared<Native::Crypto::Gdoi::Group::Server>())
	,default_(std::make_shared<Native::Crypto::Gdoi::Group::Default_>())
{
    client->parent = this;
    identity->parent = this;
    server->parent = this;
    default_->parent = this;

    yang_name = "group"; yang_parent_name = "gdoi"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Gdoi::Group::~Group()
{
}

bool Native::Crypto::Gdoi::Group::has_data() const
{
    return name.is_set
	|| ipv6.is_set
	|| passive.is_set
	|| (client !=  nullptr && client->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Gdoi::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Gdoi::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:gdoi/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Gdoi::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Gdoi::Group::Client>();
        }
        return client;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Gdoi::Group::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Crypto::Gdoi::Group::Server>();
        }
        return server;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gdoi::Group::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::get_children() const
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

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "identity" || name == "server" || name == "default" || name == "name" || name == "ipv6" || name == "passive")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Client::Client()
    :
    bypass_policy{YType::empty, "bypass-policy"},
    transform_sets{YType::str, "transform-sets"},
    transport_encrypt_key{YType::enumeration, "transport-encrypt-key"}
    	,
    protocol(std::make_shared<Native::Crypto::Gdoi::Group::Client::Protocol>())
	,recovery_check(std::make_shared<Native::Crypto::Gdoi::Group::Client::RecoveryCheck>())
	,registration(std::make_shared<Native::Crypto::Gdoi::Group::Client::Registration>())
	,rekey(std::make_shared<Native::Crypto::Gdoi::Group::Client::Rekey>())
	,status(std::make_shared<Native::Crypto::Gdoi::Group::Client::Status>())
{
    protocol->parent = this;
    recovery_check->parent = this;
    registration->parent = this;
    rekey->parent = this;
    status->parent = this;

    yang_name = "client"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Client::~Client()
{
}

bool Native::Crypto::Gdoi::Group::Client::has_data() const
{
    for (auto const & leaf : transform_sets.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bypass_policy.is_set
	|| transport_encrypt_key.is_set
	|| (protocol !=  nullptr && protocol->has_data())
	|| (recovery_check !=  nullptr && recovery_check->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Native::Crypto::Gdoi::Group::Client::has_operation() const
{
    for (auto const & leaf : transform_sets.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
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

std::string Native::Crypto::Gdoi::Group::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypass_policy.is_set || is_set(bypass_policy.yfilter)) leaf_name_data.push_back(bypass_policy.get_name_leafdata());
    if (transport_encrypt_key.is_set || is_set(transport_encrypt_key.yfilter)) leaf_name_data.push_back(transport_encrypt_key.get_name_leafdata());

    auto transform_sets_name_datas = transform_sets.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), transform_sets_name_datas.begin(), transform_sets_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gdoi::Group::Client::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "recovery-check")
    {
        if(recovery_check == nullptr)
        {
            recovery_check = std::make_shared<Native::Crypto::Gdoi::Group::Client::RecoveryCheck>();
        }
        return recovery_check;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gdoi::Group::Client::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gdoi::Group::Client::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Native::Crypto::Gdoi::Group::Client::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::get_children() const
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

void Native::Crypto::Gdoi::Group::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy = value;
        bypass_policy.value_namespace = name_space;
        bypass_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-sets")
    {
        transform_sets.append(value);
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key = value;
        transport_encrypt_key.value_namespace = name_space;
        transport_encrypt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Client::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Gdoi::Group::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "recovery-check" || name == "registration" || name == "rekey" || name == "status" || name == "bypass-policy" || name == "transform-sets" || name == "transport-encrypt-key")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Client::Protocol::Protocol()
    :
    gdoi{YType::empty, "gdoi"},
    gikev2{YType::str, "gikev2"}
{

    yang_name = "protocol"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Client::Protocol::~Protocol()
{
}

bool Native::Crypto::Gdoi::Group::Client::Protocol::has_data() const
{
    return gdoi.is_set
	|| gikev2.is_set;
}

bool Native::Crypto::Gdoi::Group::Client::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(gikev2.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Client::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Client::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (gikev2.is_set || is_set(gikev2.yfilter)) leaf_name_data.push_back(gikev2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Client::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Gdoi::Group::Client::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Gdoi::Group::Client::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gdoi" || name == "gikev2")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Client::RecoveryCheck::RecoveryCheck()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "recovery-check"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Client::RecoveryCheck::~RecoveryCheck()
{
}

bool Native::Crypto::Gdoi::Group::Client::RecoveryCheck::has_data() const
{
    return interval.is_set;
}

bool Native::Crypto::Gdoi::Group::Client::RecoveryCheck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Client::RecoveryCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Client::RecoveryCheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::RecoveryCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::RecoveryCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Client::RecoveryCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Client::RecoveryCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Client::RecoveryCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Client::Registration::Registration()
    :
    interface{YType::str, "interface"}
{

    yang_name = "registration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Client::Registration::~Registration()
{
}

bool Native::Crypto::Gdoi::Group::Client::Registration::has_data() const
{
    return interface.is_set;
}

bool Native::Crypto::Gdoi::Group::Client::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Client::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Client::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Client::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Client::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Client::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Client::Rekey::Rekey()
    :
    encryption(std::make_shared<Native::Crypto::Gdoi::Group::Client::Rekey::Encryption>())
	,hash(std::make_shared<Native::Crypto::Gdoi::Group::Client::Rekey::Hash>())
{
    encryption->parent = this;
    hash->parent = this;

    yang_name = "rekey"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Client::Rekey::~Rekey()
{
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::has_data() const
{
    return (encryption !=  nullptr && encryption->has_data())
	|| (hash !=  nullptr && hash->has_data());
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (hash !=  nullptr && hash->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Client::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Client::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Gdoi::Group::Client::Rekey::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "hash")
    {
        if(hash == nullptr)
        {
            hash = std::make_shared<Native::Crypto::Gdoi::Group::Client::Rekey::Hash>();
        }
        return hash;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Rekey::get_children() const
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

void Native::Crypto::Gdoi::Group::Client::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Client::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "hash")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::Encryption()
    :
    rekey_3des_cbc{YType::empty, "rekey-3des-cbc"},
    aes_128{YType::empty, "aes-128"},
    aes_192{YType::empty, "aes-192"},
    aes_256{YType::empty, "aes-256"},
    des_cbc{YType::empty, "des-cbc"}
{

    yang_name = "encryption"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::~Encryption()
{
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::has_data() const
{
    return rekey_3des_cbc.is_set
	|| aes_128.is_set
	|| aes_192.is_set
	|| aes_256.is_set
	|| des_cbc.is_set;
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rekey_3des_cbc.yfilter)
	|| ydk::is_set(aes_128.yfilter)
	|| ydk::is_set(aes_192.yfilter)
	|| ydk::is_set(aes_256.yfilter)
	|| ydk::is_set(des_cbc.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rekey_3des_cbc.is_set || is_set(rekey_3des_cbc.yfilter)) leaf_name_data.push_back(rekey_3des_cbc.get_name_leafdata());
    if (aes_128.is_set || is_set(aes_128.yfilter)) leaf_name_data.push_back(aes_128.get_name_leafdata());
    if (aes_192.is_set || is_set(aes_192.yfilter)) leaf_name_data.push_back(aes_192.get_name_leafdata());
    if (aes_256.is_set || is_set(aes_256.yfilter)) leaf_name_data.push_back(aes_256.get_name_leafdata());
    if (des_cbc.is_set || is_set(des_cbc.yfilter)) leaf_name_data.push_back(des_cbc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rekey-3des-cbc")
    {
        rekey_3des_cbc = value;
        rekey_3des_cbc.value_namespace = name_space;
        rekey_3des_cbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-128")
    {
        aes_128 = value;
        aes_128.value_namespace = name_space;
        aes_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-192")
    {
        aes_192 = value;
        aes_192.value_namespace = name_space;
        aes_192.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-256")
    {
        aes_256 = value;
        aes_256.value_namespace = name_space;
        aes_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des-cbc")
    {
        des_cbc = value;
        des_cbc.value_namespace = name_space;
        des_cbc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rekey-3des-cbc")
    {
        rekey_3des_cbc.yfilter = yfilter;
    }
    if(value_path == "aes-128")
    {
        aes_128.yfilter = yfilter;
    }
    if(value_path == "aes-192")
    {
        aes_192.yfilter = yfilter;
    }
    if(value_path == "aes-256")
    {
        aes_256.yfilter = yfilter;
    }
    if(value_path == "des-cbc")
    {
        des_cbc.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rekey-3des-cbc" || name == "aes-128" || name == "aes-192" || name == "aes-256" || name == "des-cbc")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Client::Rekey::Hash::Hash()
    :
    sha{YType::empty, "sha"},
    sha256{YType::empty, "sha256"},
    sha384{YType::empty, "sha384"},
    sha512{YType::empty, "sha512"}
{

    yang_name = "hash"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Client::Rekey::Hash::~Hash()
{
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::Hash::has_data() const
{
    return sha.is_set
	|| sha256.is_set
	|| sha384.is_set
	|| sha512.is_set;
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::Hash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sha.yfilter)
	|| ydk::is_set(sha256.yfilter)
	|| ydk::is_set(sha384.yfilter)
	|| ydk::is_set(sha512.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Client::Rekey::Hash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Client::Rekey::Hash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sha.is_set || is_set(sha.yfilter)) leaf_name_data.push_back(sha.get_name_leafdata());
    if (sha256.is_set || is_set(sha256.yfilter)) leaf_name_data.push_back(sha256.get_name_leafdata());
    if (sha384.is_set || is_set(sha384.yfilter)) leaf_name_data.push_back(sha384.get_name_leafdata());
    if (sha512.is_set || is_set(sha512.yfilter)) leaf_name_data.push_back(sha512.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Rekey::Hash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Rekey::Hash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Client::Rekey::Hash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sha")
    {
        sha = value;
        sha.value_namespace = name_space;
        sha.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha256")
    {
        sha256 = value;
        sha256.value_namespace = name_space;
        sha256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha384")
    {
        sha384 = value;
        sha384.value_namespace = name_space;
        sha384.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha512")
    {
        sha512 = value;
        sha512.value_namespace = name_space;
        sha512.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Client::Rekey::Hash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sha")
    {
        sha.yfilter = yfilter;
    }
    if(value_path == "sha256")
    {
        sha256.yfilter = yfilter;
    }
    if(value_path == "sha384")
    {
        sha384.yfilter = yfilter;
    }
    if(value_path == "sha512")
    {
        sha512.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::Hash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sha" || name == "sha256" || name == "sha384" || name == "sha512")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Client::Status::Status()
    :
    active_sa(std::make_shared<Native::Crypto::Gdoi::Group::Client::Status::ActiveSa>())
{
    active_sa->parent = this;

    yang_name = "status"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Client::Status::~Status()
{
}

bool Native::Crypto::Gdoi::Group::Client::Status::has_data() const
{
    return (active_sa !=  nullptr && active_sa->has_data());
}

bool Native::Crypto::Gdoi::Group::Client::Status::has_operation() const
{
    return is_set(yfilter)
	|| (active_sa !=  nullptr && active_sa->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Client::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Client::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-sa")
    {
        if(active_sa == nullptr)
        {
            active_sa = std::make_shared<Native::Crypto::Gdoi::Group::Client::Status::ActiveSa>();
        }
        return active_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_sa != nullptr)
    {
        children["active-sa"] = active_sa;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Client::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Client::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Client::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-sa")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::ActiveSa()
    :
    track{YType::uint16, "track"}
{

    yang_name = "active-sa"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::~ActiveSa()
{
}

bool Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::has_data() const
{
    return track.is_set;
}

bool Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Identity::Identity()
    :
    number{YType::uint64, "number"}
    	,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Identity::Address>())
{
    address->parent = this;

    yang_name = "identity"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Identity::~Identity()
{
}

bool Native::Crypto::Gdoi::Group::Identity::has_data() const
{
    return number.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Identity::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "number")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Identity::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Identity::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Identity::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Identity::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Identity::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Identity::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Identity::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Identity::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Identity::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Identity::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Identity::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Server()
    :
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Address>())
	,hostname(std::make_shared<Native::Crypto::Gdoi::Group::Server::Hostname>())
	,local(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local>())
{
    address->parent = this;
    hostname->parent = this;
    local->parent = this;

    yang_name = "server"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::~Server()
{
}

bool Native::Crypto::Gdoi::Group::Server::has_data() const
{
    return (address !=  nullptr && address->has_data())
	|| (hostname !=  nullptr && hostname->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Gdoi::Group::Server::Hostname>();
        }
        return hostname;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::get_children() const
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

    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hostname" || name == "local")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Address::Address()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "address"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Address::has_data() const
{
    for (auto const & leaf : ipv4.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Address::has_operation() const
{
    for (auto const & leaf : ipv4.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv6.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv4_name_datas = ipv4.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_name_datas.begin(), ipv4_name_datas.end());
    auto ipv6_name_datas = ipv6.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_name_datas.begin(), ipv6_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4.append(value);
    }
    if(value_path == "ipv6")
    {
        ipv6.append(value);
    }
}

void Native::Crypto::Gdoi::Group::Server::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Gdoi::Group::Server::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Hostname::Hostname()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "hostname"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Hostname::~Hostname()
{
}

bool Native::Crypto::Gdoi::Group::Server::Hostname::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Local()
    :
    gdoi{YType::empty, "gdoi"},
    gikev2{YType::str, "gikev2"}
    	,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Address>())
	,authorization(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Authorization>())
	,group(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Group_>())
	,identifier(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier>())
	,redundancy(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy>())
	,registration(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration>())
	,rekey(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey>())
	,sa(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa>())
	,default_(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_>())
{
    address->parent = this;
    authorization->parent = this;
    group->parent = this;
    identifier->parent = this;
    redundancy->parent = this;
    registration->parent = this;
    rekey->parent = this;
    sa->parent = this;
    default_->parent = this;

    yang_name = "local"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::~Local()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::has_data() const
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
	|| (sa !=  nullptr && sa->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::has_operation() const
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
	|| (sa !=  nullptr && sa->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (gikev2.is_set || is_set(gikev2.yfilter)) leaf_name_data.push_back(gikev2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Address>();
        }
        return address;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Group_>();
        }
        return group;
    }

    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "sa")
    {
        if(sa == nullptr)
        {
            sa = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa>();
        }
        return sa;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::get_children() const
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

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Gdoi::Group::Server::Local::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Gdoi::Group::Server::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "authorization" || name == "group" || name == "identifier" || name == "redundancy" || name == "registration" || name == "rekey" || name == "sa" || name == "default" || name == "gdoi" || name == "gikev2")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Authorization::Authorization()
    :
    identity{YType::str, "identity"}
    	,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address>())
{
    address->parent = this;

    yang_name = "authorization"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Authorization::~Authorization()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Authorization::has_data() const
{
    return identity.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identity.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "identity")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Group_::Group_()
    :
    size(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Group_::Size>())
{
    size->parent = this;

    yang_name = "group"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Group_::~Group_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Group_::has_data() const
{
    return (size !=  nullptr && size->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Group_::has_operation() const
{
    return is_set(yfilter)
	|| (size !=  nullptr && size->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Group_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Group_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Group_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "size")
    {
        if(size == nullptr)
        {
            size = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Group_::Size>();
        }
        return size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Group_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(size != nullptr)
    {
        children["size"] = size;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Group_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Group_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Group_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::Size()
    :
    large{YType::empty, "large"},
    medium{YType::empty, "medium"},
    small{YType::enumeration, "small"}
{

    yang_name = "size"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::~Size()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::has_data() const
{
    return large.is_set
	|| medium.is_set
	|| small.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(large.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(small.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (large.is_set || is_set(large.yfilter)) leaf_name_data.push_back(large.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (small.is_set || is_set(small.yfilter)) leaf_name_data.push_back(small.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "large")
    {
        large = value;
        large.value_namespace = name_space;
        large.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "small")
    {
        small = value;
        small.value_namespace = name_space;
        small.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "large")
    {
        large.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "small")
    {
        small.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "large" || name == "medium" || name == "small")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Identifier()
    :
    value_{YType::uint8, "value"}
    	,
    default_(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_>())
	,range(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range>())
{
    default_->parent = this;
    range->parent = this;

    yang_name = "identifier"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::~Identifier()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::has_data() const
{
    return value_.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "range" || name == "value")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Default_()
    :
    value_{YType::uint8, "value"}
    	,
    range(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range>())
{
    range->parent = this;

    yang_name = "default"; yang_parent_name = "identifier"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::~Default_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::has_data() const
{
    return value_.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "value")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::Range()
    :
    lowest{YType::uint8, "lowest"},
    hyphen{YType::empty, "hyphen"},
    highest{YType::uint8, "highest"}
{

    yang_name = "range"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::~Range()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::has_data() const
{
    return lowest.is_set
	|| hyphen.is_set
	|| highest.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lowest.yfilter)
	|| ydk::is_set(hyphen.yfilter)
	|| ydk::is_set(highest.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lowest.is_set || is_set(lowest.yfilter)) leaf_name_data.push_back(lowest.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.yfilter)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (highest.is_set || is_set(highest.yfilter)) leaf_name_data.push_back(highest.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lowest")
    {
        lowest = value;
        lowest.value_namespace = name_space;
        lowest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hyphen")
    {
        hyphen = value;
        hyphen.value_namespace = name_space;
        hyphen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest")
    {
        highest = value;
        highest.value_namespace = name_space;
        highest.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lowest")
    {
        lowest.yfilter = yfilter;
    }
    if(value_path == "hyphen")
    {
        hyphen.yfilter = yfilter;
    }
    if(value_path == "highest")
    {
        highest.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lowest" || name == "hyphen" || name == "highest")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::Range()
    :
    lowest{YType::uint8, "lowest"},
    hyphen{YType::empty, "hyphen"},
    highest{YType::uint8, "highest"}
{

    yang_name = "range"; yang_parent_name = "identifier"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::~Range()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::has_data() const
{
    return lowest.is_set
	|| hyphen.is_set
	|| highest.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lowest.yfilter)
	|| ydk::is_set(hyphen.yfilter)
	|| ydk::is_set(highest.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lowest.is_set || is_set(lowest.yfilter)) leaf_name_data.push_back(lowest.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.yfilter)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (highest.is_set || is_set(highest.yfilter)) leaf_name_data.push_back(highest.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lowest")
    {
        lowest = value;
        lowest.value_namespace = name_space;
        lowest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hyphen")
    {
        hyphen = value;
        hyphen.value_namespace = name_space;
        hyphen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest")
    {
        highest = value;
        highest.value_namespace = name_space;
        highest.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lowest")
    {
        lowest.yfilter = yfilter;
    }
    if(value_path == "hyphen")
    {
        hyphen.yfilter = yfilter;
    }
    if(value_path == "highest")
    {
        highest.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lowest" || name == "hyphen" || name == "highest")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Redundancy()
    :
    default_(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_>())
	,local(nullptr) // presence node
	,peer(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer>())
	,protocol(nullptr) // presence node
{
    default_->parent = this;
    peer->parent = this;

    yang_name = "redundancy"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::~Redundancy()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::has_data() const
{
    return (default_ !=  nullptr && default_->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_>();
        }
        return local;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "local" || name == "peer" || name == "protocol")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Default_()
    :
    local(nullptr) // presence node
	,peer(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer>())
	,protocol(nullptr) // presence node
{
    peer->parent = this;

    yang_name = "default"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::~Default_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::has_data() const
{
    return (local !=  nullptr && local->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_>();
        }
        return local;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::get_children() const
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

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "peer" || name == "protocol")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::Local_()
    :
    priority{YType::uint8, "priority"}
{

    yang_name = "local"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::~Local_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::has_data() const
{
    return priority.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Peer()
    :
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address>())
{
    address->parent = this;

    yang_name = "peer"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::~Peer()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::Protocol()
    :
    pdu{YType::uint32, "pdu"},
    version{YType::enumeration, "version"}
{

    yang_name = "protocol"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::~Protocol()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::has_data() const
{
    return pdu.is_set
	|| version.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu.is_set || is_set(pdu.yfilter)) leaf_name_data.push_back(pdu.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu")
    {
        pdu = value;
        pdu.value_namespace = name_space;
        pdu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu")
    {
        pdu.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu" || name == "version")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::Local_()
    :
    priority{YType::uint8, "priority"}
{

    yang_name = "local"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::~Local_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::has_data() const
{
    return priority.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Peer()
    :
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address>())
{
    address->parent = this;

    yang_name = "peer"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::~Peer()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::Protocol()
    :
    pdu{YType::uint32, "pdu"},
    version{YType::enumeration, "version"}
{

    yang_name = "protocol"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::~Protocol()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::has_data() const
{
    return pdu.is_set
	|| version.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu.is_set || is_set(pdu.yfilter)) leaf_name_data.push_back(pdu.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu")
    {
        pdu = value;
        pdu.value_namespace = name_space;
        pdu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu")
    {
        pdu.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu" || name == "version")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Registration()
    :
    interface{YType::str, "interface"}
    	,
    periodic(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic>())
{
    periodic->parent = this;

    yang_name = "registration"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::~Registration()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::has_data() const
{
    return interface.is_set
	|| (periodic !=  nullptr && periodic->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(periodic != nullptr)
    {
        children["periodic"] = periodic;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic" || name == "interface")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Periodic()
    :
    crl(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl>())
{
    crl->parent = this;

    yang_name = "periodic"; yang_parent_name = "registration"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::~Periodic()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::has_data() const
{
    return (crl !=  nullptr && crl->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| (crl !=  nullptr && crl->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crl")
    {
        if(crl == nullptr)
        {
            crl = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl>();
        }
        return crl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crl != nullptr)
    {
        children["crl"] = crl;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crl")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::Crl()
    :
    trustpoint{YType::str, "trustpoint"}
{

    yang_name = "crl"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::~Crl()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::has_data() const
{
    return trustpoint.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trustpoint.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustpoint")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Rekey()
    :
    acknowledgement{YType::enumeration, "acknowledgement"}
    	,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address>())
	,algorithm(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm>())
	,authentication(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication>())
	,lifetime(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime>())
	,retransmit(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit>())
	,sig_hash(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash>())
	,transport(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport>())
{
    address->parent = this;
    algorithm->parent = this;
    authentication->parent = this;
    lifetime->parent = this;
    retransmit->parent = this;
    sig_hash->parent = this;
    transport->parent = this;

    yang_name = "rekey"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::~Rekey()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::has_data() const
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

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::has_operation() const
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

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address>();
        }
        return address;
    }

    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "sig-hash")
    {
        if(sig_hash == nullptr)
        {
            sig_hash = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash>();
        }
        return sig_hash;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::get_children() const
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

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "algorithm" || name == "authentication" || name == "lifetime" || name == "retransmit" || name == "sig-hash" || name == "transport" || name == "acknowledgement")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::Algorithm()
    :
    a3des_cbc{YType::empty, "a3des-cbc"},
    aes_128{YType::empty, "aes-128"},
    aes_192{YType::empty, "aes-192"},
    aes_256{YType::empty, "aes-256"},
    des_cbc{YType::empty, "des-cbc"}
{

    yang_name = "algorithm"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::~Algorithm()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::has_data() const
{
    return a3des_cbc.is_set
	|| aes_128.is_set
	|| aes_192.is_set
	|| aes_256.is_set
	|| des_cbc.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a3des_cbc.yfilter)
	|| ydk::is_set(aes_128.yfilter)
	|| ydk::is_set(aes_192.yfilter)
	|| ydk::is_set(aes_256.yfilter)
	|| ydk::is_set(des_cbc.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a3des_cbc.is_set || is_set(a3des_cbc.yfilter)) leaf_name_data.push_back(a3des_cbc.get_name_leafdata());
    if (aes_128.is_set || is_set(aes_128.yfilter)) leaf_name_data.push_back(aes_128.get_name_leafdata());
    if (aes_192.is_set || is_set(aes_192.yfilter)) leaf_name_data.push_back(aes_192.get_name_leafdata());
    if (aes_256.is_set || is_set(aes_256.yfilter)) leaf_name_data.push_back(aes_256.get_name_leafdata());
    if (des_cbc.is_set || is_set(des_cbc.yfilter)) leaf_name_data.push_back(des_cbc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a3des-cbc")
    {
        a3des_cbc = value;
        a3des_cbc.value_namespace = name_space;
        a3des_cbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-128")
    {
        aes_128 = value;
        aes_128.value_namespace = name_space;
        aes_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-192")
    {
        aes_192 = value;
        aes_192.value_namespace = name_space;
        aes_192.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-256")
    {
        aes_256 = value;
        aes_256.value_namespace = name_space;
        aes_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des-cbc")
    {
        des_cbc = value;
        des_cbc.value_namespace = name_space;
        des_cbc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a3des-cbc")
    {
        a3des_cbc.yfilter = yfilter;
    }
    if(value_path == "aes-128")
    {
        aes_128.yfilter = yfilter;
    }
    if(value_path == "aes-192")
    {
        aes_192.yfilter = yfilter;
    }
    if(value_path == "aes-256")
    {
        aes_256.yfilter = yfilter;
    }
    if(value_path == "des-cbc")
    {
        des_cbc.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a3des-cbc" || name == "aes-128" || name == "aes-192" || name == "aes-256" || name == "des-cbc")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Authentication()
    :
    mypubkey(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey>())
{
    mypubkey->parent = this;

    yang_name = "authentication"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::~Authentication()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::has_data() const
{
    return (mypubkey !=  nullptr && mypubkey->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (mypubkey !=  nullptr && mypubkey->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mypubkey")
    {
        if(mypubkey == nullptr)
        {
            mypubkey = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey>();
        }
        return mypubkey;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mypubkey != nullptr)
    {
        children["mypubkey"] = mypubkey;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mypubkey")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::Mypubkey()
    :
    rsa{YType::str, "rsa"}
{

    yang_name = "mypubkey"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::~Mypubkey()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::has_data() const
{
    return rsa.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rsa.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mypubkey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsa.is_set || is_set(rsa.yfilter)) leaf_name_data.push_back(rsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsa")
    {
        rsa = value;
        rsa.value_namespace = name_space;
        rsa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsa")
    {
        rsa.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsa")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::has_data() const
{
    return days.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::Retransmit()
    :
    seconds{YType::uint8, "seconds"},
    number{YType::uint8, "number"},
    periodic{YType::empty, "periodic"}
{

    yang_name = "retransmit"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::~Retransmit()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::has_data() const
{
    return seconds.is_set
	|| number.is_set
	|| periodic.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(periodic.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "number" || name == "periodic")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::SigHash()
    :
    algorithm{YType::enumeration, "algorithm"}
{

    yang_name = "sig-hash"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::~SigHash()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::has_data() const
{
    return algorithm.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sig-hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::Transport()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "transport"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::~Transport()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::has_data() const
{
    return unicast.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Sa()
    :
    receive_only{YType::empty, "receive-only"}
    	,
    d3p(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P>())
	,pair_wise_keying(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying>())
{
    d3p->parent = this;
    pair_wise_keying->parent = this;

    yang_name = "sa"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::~Sa()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::has_data() const
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

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::has_operation() const
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

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "d3p")
    {
        if(d3p == nullptr)
        {
            d3p = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P>();
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
        auto c = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec>();
        c->parent = this;
        ipsec.push_back(c);
        return c;
    }

    if(child_yang_name == "pair-wise-keying")
    {
        if(pair_wise_keying == nullptr)
        {
            pair_wise_keying = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying>();
        }
        return pair_wise_keying;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::get_children() const
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

void Native::Crypto::Gdoi::Group::Server::Local::Sa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "d3p" || name == "ipsec" || name == "pair-wise-keying" || name == "receive-only")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::D3P()
    :
    window(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window>())
{
    window->parent = this;

    yang_name = "d3p"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::~D3P()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::has_data() const
{
    return (window !=  nullptr && window->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::has_operation() const
{
    return is_set(yfilter)
	|| (window !=  nullptr && window->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "d3p";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "window")
    {
        if(window == nullptr)
        {
            window = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window>();
        }
        return window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(window != nullptr)
    {
        children["window"] = window;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::Window()
    :
    msec{YType::uint32, "msec"},
    sec{YType::uint8, "sec"}
{

    yang_name = "window"; yang_parent_name = "d3p"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::~Window()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::has_data() const
{
    return msec.is_set
	|| sec.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(sec.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (sec.is_set || is_set(sec.yfilter)) leaf_name_data.push_back(sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec")
    {
        sec = value;
        sec.value_namespace = name_space;
        sec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "sec")
    {
        sec.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "sec")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Ipsec()
    :
    sequence{YType::uint16, "sequence"},
    profile{YType::str, "profile"}
    	,
    default_(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_>())
	,match(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match>())
	,replay(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay>())
	,tag(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag>())
{
    default_->parent = this;
    match->parent = this;
    replay->parent = this;
    tag->parent = this;

    yang_name = "ipsec"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::has_data() const
{
    return sequence.is_set
	|| profile.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (replay !=  nullptr && replay->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (replay !=  nullptr && replay->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match>();
        }
        return match;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay>();
        }
        return replay;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::get_children() const
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

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "match" || name == "replay" || name == "tag" || name == "sequence" || name == "profile")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Default_()
    :
    profile{YType::empty, "profile"}
    	,
    match(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match>())
	,replay(nullptr) // presence node
	,tag(nullptr) // presence node
{
    match->parent = this;

    yang_name = "default"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::~Default_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::has_data() const
{
    return profile.is_set
	|| (match !=  nullptr && match->has_data())
	|| (replay !=  nullptr && replay->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (replay !=  nullptr && replay->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match>();
        }
        return match;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay>();
        }
        return replay;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::get_children() const
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

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "replay" || name == "tag" || name == "profile")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Match()
    :
    address(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::~Match()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::Address()
{

    yang_name = "address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::Replay()
{

    yang_name = "replay"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::~Replay()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::Tag()
{

    yang_name = "tag"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::~Tag()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Match()
    :
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address>())
{
    address->parent = this;

    yang_name = "match"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::~Match()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::Address()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Replay()
    :
    counter(nullptr) // presence node
	,time(nullptr) // presence node
{

    yang_name = "replay"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::~Replay()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::has_data() const
{
    return (counter !=  nullptr && counter->has_data())
	|| (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::get_children() const
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

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "time")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::Counter()
    :
    window_size{YType::enumeration, "window-size"}
{

    yang_name = "counter"; yang_parent_name = "replay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::~Counter()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::has_data() const
{
    return window_size.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window-size")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::Time()
    :
    window_size{YType::uint8, "window-size"}
{

    yang_name = "time"; yang_parent_name = "replay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::~Time()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::has_data() const
{
    return window_size.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window-size")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Tag()
    :
    cts(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts>())
{
    cts->parent = this;

    yang_name = "tag"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::~Tag()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::has_data() const
{
    return (cts !=  nullptr && cts->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (cts !=  nullptr && cts->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts>();
        }
        return cts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cts != nullptr)
    {
        children["cts"] = cts;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cts")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::Cts()
    :
    sgt{YType::empty, "sgt"}
{

    yang_name = "cts"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::~Cts()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::has_data() const
{
    return sgt.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::PairWiseKeying()
    :
    safety_limit{YType::uint8, "safety-limit"}
{

    yang_name = "pair-wise-keying"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::~PairWiseKeying()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::has_data() const
{
    return safety_limit.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(safety_limit.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pair-wise-keying";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (safety_limit.is_set || is_set(safety_limit.yfilter)) leaf_name_data.push_back(safety_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "safety-limit")
    {
        safety_limit = value;
        safety_limit.value_namespace = name_space;
        safety_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "safety-limit")
    {
        safety_limit.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "safety-limit")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Default_()
    :
    gdoi{YType::empty, "gdoi"},
    gikev2{YType::empty, "gikev2"}
    	,
    address(nullptr) // presence node
	,authorization(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization>())
	,group(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_>())
	,identifier(nullptr) // presence node
	,redundancy(nullptr) // presence node
	,registration(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration>())
	,rekey(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey>())
	,sa(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa>())
{
    authorization->parent = this;
    group->parent = this;
    registration->parent = this;
    rekey->parent = this;
    sa->parent = this;

    yang_name = "default"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::~Default_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::has_data() const
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

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::has_operation() const
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

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (gikev2.is_set || is_set(gikev2.yfilter)) leaf_name_data.push_back(gikev2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Address>();
        }
        return address;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_>();
        }
        return group;
    }

    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "sa")
    {
        if(sa == nullptr)
        {
            sa = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa>();
        }
        return sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::get_children() const
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

void Native::Crypto::Gdoi::Group::Server::Local::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Gdoi::Group::Server::Local::Default_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "authorization" || name == "group" || name == "identifier" || name == "redundancy" || name == "registration" || name == "rekey" || name == "sa" || name == "gdoi" || name == "gikev2")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::Address()
{

    yang_name = "address"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Authorization()
    :
    identity{YType::empty, "identity"}
    	,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address>())
{
    address->parent = this;

    yang_name = "authorization"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::~Authorization()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::has_data() const
{
    return identity.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identity.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "identity")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::Address()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Group_()
    :
    size(nullptr) // presence node
{

    yang_name = "group"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::~Group_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::has_data() const
{
    return (size !=  nullptr && size->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::has_operation() const
{
    return is_set(yfilter)
	|| (size !=  nullptr && size->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "size")
    {
        if(size == nullptr)
        {
            size = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size>();
        }
        return size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(size != nullptr)
    {
        children["size"] = size;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::Size()
{

    yang_name = "size"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::~Size()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::Identifier()
{

    yang_name = "identifier"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::~Identifier()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::Redundancy()
{

    yang_name = "redundancy"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::~Redundancy()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Registration()
    :
    interface{YType::str, "interface"}
    	,
    periodic(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic>())
{
    periodic->parent = this;

    yang_name = "registration"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::~Registration()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::has_data() const
{
    return interface.is_set
	|| (periodic !=  nullptr && periodic->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(periodic != nullptr)
    {
        children["periodic"] = periodic;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic" || name == "interface")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Periodic()
    :
    crl(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl>())
{
    crl->parent = this;

    yang_name = "periodic"; yang_parent_name = "registration"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::~Periodic()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::has_data() const
{
    return (crl !=  nullptr && crl->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| (crl !=  nullptr && crl->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crl")
    {
        if(crl == nullptr)
        {
            crl = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl>();
        }
        return crl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crl != nullptr)
    {
        children["crl"] = crl;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crl")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::Crl()
    :
    trustpoint{YType::empty, "trustpoint"}
{

    yang_name = "crl"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::~Crl()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::has_data() const
{
    return trustpoint.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trustpoint.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustpoint")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Rekey()
    :
    acknowledgement{YType::empty, "acknowledgement"}
    	,
    address(nullptr) // presence node
	,algorithm(nullptr) // presence node
	,authentication(nullptr) // presence node
	,lifetime(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime>())
	,retransmit(nullptr) // presence node
	,sig_hash(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash>())
	,transport(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport>())
{
    lifetime->parent = this;
    sig_hash->parent = this;
    transport->parent = this;

    yang_name = "rekey"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::~Rekey()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::has_data() const
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

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::has_operation() const
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

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address>();
        }
        return address;
    }

    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "sig-hash")
    {
        if(sig_hash == nullptr)
        {
            sig_hash = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash>();
        }
        return sig_hash;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::get_children() const
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

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "algorithm" || name == "authentication" || name == "lifetime" || name == "retransmit" || name == "sig-hash" || name == "transport" || name == "acknowledgement")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::Address()
{

    yang_name = "address"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::Algorithm()
{

    yang_name = "algorithm"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::~Algorithm()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::Authentication()
{

    yang_name = "authentication"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::~Authentication()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::Lifetime()
    :
    days{YType::empty, "days"},
    seconds{YType::empty, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::has_data() const
{
    return days.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::Retransmit()
{

    yang_name = "retransmit"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::~Retransmit()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::SigHash()
    :
    algorithm{YType::empty, "algorithm"}
{

    yang_name = "sig-hash"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::~SigHash()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::has_data() const
{
    return algorithm.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sig-hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::Transport()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "transport"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::~Transport()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::has_data() const
{
    return unicast.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Sa()
    :
    receive_only{YType::empty, "receive-only"}
    	,
    d3p(nullptr) // presence node
	,pair_wise_keying(nullptr) // presence node
{

    yang_name = "sa"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::~Sa()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::has_data() const
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

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::has_operation() const
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

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "d3p")
    {
        if(d3p == nullptr)
        {
            d3p = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P>();
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
        auto c = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec>();
        c->parent = this;
        ipsec.push_back(c);
        return c;
    }

    if(child_yang_name == "pair-wise-keying")
    {
        if(pair_wise_keying == nullptr)
        {
            pair_wise_keying = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying>();
        }
        return pair_wise_keying;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::get_children() const
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

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "d3p" || name == "ipsec" || name == "pair-wise-keying" || name == "receive-only")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::D3P()
{

    yang_name = "d3p"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::~D3P()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "d3p";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::Ipsec()
    :
    sequence{YType::uint16, "sequence"}
{

    yang_name = "ipsec"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::has_data() const
{
    return sequence.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::PairWiseKeying()
{

    yang_name = "pair-wise-keying"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::~PairWiseKeying()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pair-wise-keying";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Default_::Default_()
    :
    passive{YType::empty, "passive"}
    	,
    client(std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client>())
	,identity(nullptr) // presence node
	,server(std::make_shared<Native::Crypto::Gdoi::Group::Default_::Server>())
{
    client->parent = this;
    server->parent = this;

    yang_name = "default"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Default_::~Default_()
{
}

bool Native::Crypto::Gdoi::Group::Default_::has_data() const
{
    return passive.is_set
	|| (client !=  nullptr && client->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Crypto::Gdoi::Group::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client>();
        }
        return client;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::get_children() const
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

void Native::Crypto::Gdoi::Group::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "identity" || name == "server" || name == "passive")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Default_::Client::Client()
    :
    bypass_policy{YType::empty, "bypass-policy"},
    transform_sets{YType::empty, "transform-sets"},
    transport_encrypt_key{YType::enumeration, "transport-encrypt-key"}
    	,
    protocol(nullptr) // presence node
	,recovery_check(nullptr) // presence node
	,registration(std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Registration>())
	,rekey(std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Rekey>())
	,status(std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Status>())
{
    registration->parent = this;
    rekey->parent = this;
    status->parent = this;

    yang_name = "client"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Default_::Client::~Client()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::has_data() const
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

bool Native::Crypto::Gdoi::Group::Default_::Client::has_operation() const
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

std::string Native::Crypto::Gdoi::Group::Default_::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default_::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypass_policy.is_set || is_set(bypass_policy.yfilter)) leaf_name_data.push_back(bypass_policy.get_name_leafdata());
    if (transform_sets.is_set || is_set(transform_sets.yfilter)) leaf_name_data.push_back(transform_sets.get_name_leafdata());
    if (transport_encrypt_key.is_set || is_set(transport_encrypt_key.yfilter)) leaf_name_data.push_back(transport_encrypt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "recovery-check")
    {
        if(recovery_check == nullptr)
        {
            recovery_check = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck>();
        }
        return recovery_check;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Client::get_children() const
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

void Native::Crypto::Gdoi::Group::Default_::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Gdoi::Group::Default_::Client::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Gdoi::Group::Default_::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "recovery-check" || name == "registration" || name == "rekey" || name == "status" || name == "bypass-policy" || name == "transform-sets" || name == "transport-encrypt-key")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Default_::Client::Protocol::Protocol()
{

    yang_name = "protocol"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Default_::Client::Protocol::~Protocol()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Protocol::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Protocol::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Default_::Client::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default_::Client::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Client::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Client::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Client::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Default_::Client::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::RecoveryCheck()
{

    yang_name = "recovery-check"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::~RecoveryCheck()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Default_::Client::Registration::Registration()
    :
    interface{YType::empty, "interface"}
{

    yang_name = "registration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Default_::Client::Registration::~Registration()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Registration::has_data() const
{
    return interface.is_set;
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Default_::Client::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default_::Client::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Client::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Client::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Client::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Default_::Client::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Rekey()
    :
    encryption(nullptr) // presence node
	,hash(nullptr) // presence node
{

    yang_name = "rekey"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Default_::Client::Rekey::~Rekey()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Rekey::has_data() const
{
    return (encryption !=  nullptr && encryption->has_data())
	|| (hash !=  nullptr && hash->has_data());
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (hash !=  nullptr && hash->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Default_::Client::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default_::Client::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Client::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "hash")
    {
        if(hash == nullptr)
        {
            hash = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash>();
        }
        return hash;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Client::Rekey::get_children() const
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

void Native::Crypto::Gdoi::Group::Default_::Client::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Default_::Client::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "hash")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::Encryption()
{

    yang_name = "encryption"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::~Encryption()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::Hash()
{

    yang_name = "hash"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::~Hash()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Default_::Client::Status::Status()
    :
    active_sa(nullptr) // presence node
{

    yang_name = "status"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Default_::Client::Status::~Status()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Status::has_data() const
{
    return (active_sa !=  nullptr && active_sa->has_data());
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Status::has_operation() const
{
    return is_set(yfilter)
	|| (active_sa !=  nullptr && active_sa->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Default_::Client::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default_::Client::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Client::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-sa")
    {
        if(active_sa == nullptr)
        {
            active_sa = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa>();
        }
        return active_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Client::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_sa != nullptr)
    {
        children["active-sa"] = active_sa;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Client::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Default_::Client::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-sa")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::ActiveSa()
{

    yang_name = "active-sa"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::~ActiveSa()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Default_::Identity::Identity()
{

    yang_name = "identity"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Default_::Identity::~Identity()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Identity::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Default_::Identity::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Default_::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default_::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Default_::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Default_::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Default_::Server::Server()
    :
    local{YType::empty, "local"}
    	,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Default_::Server::Address>())
	,hostname(std::make_shared<Native::Crypto::Gdoi::Group::Default_::Server::Hostname>())
{
    address->parent = this;
    hostname->parent = this;

    yang_name = "server"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Default_::Server::~Server()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Server::has_data() const
{
    return local.is_set
	|| (address !=  nullptr && address->has_data())
	|| (hostname !=  nullptr && hostname->has_data());
}

bool Native::Crypto::Gdoi::Group::Default_::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Default_::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default_::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Server::Hostname>();
        }
        return hostname;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Server::get_children() const
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

void Native::Crypto::Gdoi::Group::Default_::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Default_::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Default_::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hostname" || name == "local")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Default_::Server::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Default_::Server::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Server::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Default_::Server::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Default_::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default_::Server::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Server::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Default_::Server::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Default_::Server::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Default_::Server::Hostname::Hostname()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "hostname"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Default_::Server::Hostname::~Hostname()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Server::Hostname::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Default_::Server::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Default_::Server::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default_::Server::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Server::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Server::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Server::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Default_::Server::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Default_::Server::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Ikev2::Ikev2()
    :
    certificate_cache{YType::uint16, "certificate-cache"},
    cluster{YType::empty, "cluster"},
    cookie_challenge{YType::uint16, "cookie-challenge"},
    disconnect_revoked_peers{YType::empty, "disconnect-revoked-peers"},
    name_mangler{YType::str, "name-mangler"},
    window{YType::uint8, "window"}
    	,
    authorization(std::make_shared<Native::Crypto::Ikev2::Authorization>())
	,client(std::make_shared<Native::Crypto::Ikev2::Client>())
	,cts(std::make_shared<Native::Crypto::Ikev2::Cts>())
	,diagnose(std::make_shared<Native::Crypto::Ikev2::Diagnose>())
	,dpd_container(std::make_shared<Native::Crypto::Ikev2::DpdContainer>())
	,fragmentation(nullptr) // presence node
	,http_url(std::make_shared<Native::Crypto::Ikev2::HttpUrl>())
	,limit(std::make_shared<Native::Crypto::Ikev2::Limit>())
	,nat(std::make_shared<Native::Crypto::Ikev2::Nat>())
	,reconnect(std::make_shared<Native::Crypto::Ikev2::Reconnect>())
	,redirect(std::make_shared<Native::Crypto::Ikev2::Redirect>())
{
    authorization->parent = this;
    client->parent = this;
    cts->parent = this;
    diagnose->parent = this;
    dpd_container->parent = this;
    http_url->parent = this;
    limit->parent = this;
    nat->parent = this;
    reconnect->parent = this;
    redirect->parent = this;

    yang_name = "ikev2"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::~Ikev2()
{
}

bool Native::Crypto::Ikev2::has_data() const
{
    for (std::size_t index=0; index<keyring.size(); index++)
    {
        if(keyring[index]->has_data())
            return true;
    }
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
    for (std::size_t index=0; index<proposal.size(); index++)
    {
        if(proposal[index]->has_data())
            return true;
    }
    return certificate_cache.is_set
	|| cluster.is_set
	|| cookie_challenge.is_set
	|| disconnect_revoked_peers.is_set
	|| name_mangler.is_set
	|| window.is_set
	|| (authorization !=  nullptr && authorization->has_data())
	|| (client !=  nullptr && client->has_data())
	|| (cts !=  nullptr && cts->has_data())
	|| (diagnose !=  nullptr && diagnose->has_data())
	|| (dpd_container !=  nullptr && dpd_container->has_data())
	|| (fragmentation !=  nullptr && fragmentation->has_data())
	|| (http_url !=  nullptr && http_url->has_data())
	|| (limit !=  nullptr && limit->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (reconnect !=  nullptr && reconnect->has_data())
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Crypto::Ikev2::has_operation() const
{
    for (std::size_t index=0; index<keyring.size(); index++)
    {
        if(keyring[index]->has_operation())
            return true;
    }
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
    for (std::size_t index=0; index<proposal.size(); index++)
    {
        if(proposal[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(certificate_cache.yfilter)
	|| ydk::is_set(cluster.yfilter)
	|| ydk::is_set(cookie_challenge.yfilter)
	|| ydk::is_set(disconnect_revoked_peers.yfilter)
	|| ydk::is_set(name_mangler.yfilter)
	|| ydk::is_set(window.yfilter)
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (client !=  nullptr && client->has_operation())
	|| (cts !=  nullptr && cts->has_operation())
	|| (diagnose !=  nullptr && diagnose->has_operation())
	|| (dpd_container !=  nullptr && dpd_container->has_operation())
	|| (fragmentation !=  nullptr && fragmentation->has_operation())
	|| (http_url !=  nullptr && http_url->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (reconnect !=  nullptr && reconnect->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Crypto::Ikev2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:ikev2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (certificate_cache.is_set || is_set(certificate_cache.yfilter)) leaf_name_data.push_back(certificate_cache.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());
    if (cookie_challenge.is_set || is_set(cookie_challenge.yfilter)) leaf_name_data.push_back(cookie_challenge.get_name_leafdata());
    if (disconnect_revoked_peers.is_set || is_set(disconnect_revoked_peers.yfilter)) leaf_name_data.push_back(disconnect_revoked_peers.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());
    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Ikev2::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Ikev2::Client>();
        }
        return client;
    }

    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Crypto::Ikev2::Cts>();
        }
        return cts;
    }

    if(child_yang_name == "diagnose")
    {
        if(diagnose == nullptr)
        {
            diagnose = std::make_shared<Native::Crypto::Ikev2::Diagnose>();
        }
        return diagnose;
    }

    if(child_yang_name == "dpd-container")
    {
        if(dpd_container == nullptr)
        {
            dpd_container = std::make_shared<Native::Crypto::Ikev2::DpdContainer>();
        }
        return dpd_container;
    }

    if(child_yang_name == "fragmentation")
    {
        if(fragmentation == nullptr)
        {
            fragmentation = std::make_shared<Native::Crypto::Ikev2::Fragmentation>();
        }
        return fragmentation;
    }

    if(child_yang_name == "http-url")
    {
        if(http_url == nullptr)
        {
            http_url = std::make_shared<Native::Crypto::Ikev2::HttpUrl>();
        }
        return http_url;
    }

    if(child_yang_name == "keyring")
    {
        for(auto const & c : keyring)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Keyring>();
        c->parent = this;
        keyring.push_back(c);
        return c;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Crypto::Ikev2::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Crypto::Ikev2::Nat>();
        }
        return nat;
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
        auto c = std::make_shared<Native::Crypto::Ikev2::Policy>();
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
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    if(child_yang_name == "proposal")
    {
        for(auto const & c : proposal)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Proposal>();
        c->parent = this;
        proposal.push_back(c);
        return c;
    }

    if(child_yang_name == "reconnect")
    {
        if(reconnect == nullptr)
        {
            reconnect = std::make_shared<Native::Crypto::Ikev2::Reconnect>();
        }
        return reconnect;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Crypto::Ikev2::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(cts != nullptr)
    {
        children["cts"] = cts;
    }

    if(diagnose != nullptr)
    {
        children["diagnose"] = diagnose;
    }

    if(dpd_container != nullptr)
    {
        children["dpd-container"] = dpd_container;
    }

    if(fragmentation != nullptr)
    {
        children["fragmentation"] = fragmentation;
    }

    if(http_url != nullptr)
    {
        children["http-url"] = http_url;
    }

    for (auto const & c : keyring)
    {
        children[c->get_segment_path()] = c;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    if(nat != nullptr)
    {
        children["nat"] = nat;
    }

    for (auto const & c : policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : proposal)
    {
        children[c->get_segment_path()] = c;
    }

    if(reconnect != nullptr)
    {
        children["reconnect"] = reconnect;
    }

    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    return children;
}

void Native::Crypto::Ikev2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "certificate-cache")
    {
        certificate_cache = value;
        certificate_cache.value_namespace = name_space;
        certificate_cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-challenge")
    {
        cookie_challenge = value;
        cookie_challenge.value_namespace = name_space;
        cookie_challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnect-revoked-peers")
    {
        disconnect_revoked_peers = value;
        disconnect_revoked_peers.value_namespace = name_space;
        disconnect_revoked_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
        name_mangler.value_namespace = name_space;
        name_mangler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "certificate-cache")
    {
        certificate_cache.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
    if(value_path == "cookie-challenge")
    {
        cookie_challenge.yfilter = yfilter;
    }
    if(value_path == "disconnect-revoked-peers")
    {
        disconnect_revoked_peers.yfilter = yfilter;
    }
    if(value_path == "name-mangler")
    {
        name_mangler.yfilter = yfilter;
    }
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization" || name == "client" || name == "cts" || name == "diagnose" || name == "dpd-container" || name == "fragmentation" || name == "http-url" || name == "keyring" || name == "limit" || name == "nat" || name == "policy" || name == "profile" || name == "proposal" || name == "reconnect" || name == "redirect" || name == "certificate-cache" || name == "cluster" || name == "cookie-challenge" || name == "disconnect-revoked-peers" || name == "name-mangler" || name == "window")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Authorization()
{

    yang_name = "authorization"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Authorization::~Authorization()
{
}

bool Native::Crypto::Ikev2::Authorization::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Authorization::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Policy()
    :
    policy_name{YType::str, "policy-name"}
    	,
    route(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route>())
{
    route->parent = this;

    yang_name = "policy"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Authorization::Policy::~Policy()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::has_data() const
{
    return policy_name.is_set
	|| (route !=  nullptr && route->has_data());
}

bool Native::Crypto::Ikev2::Authorization::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Crypto::Ikev2::Authorization::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Authorization::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy" <<"[policy-name='" <<policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Authorization::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Authorization::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Crypto::Ikev2::Authorization::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route" || name == "policy-name")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Route()
    :
    set(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set>())
{
    set->parent = this;

    yang_name = "route"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::~Route()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::has_data() const
{
    return (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::has_operation() const
{
    return is_set(yfilter)
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Set()
    :
    interface(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface>())
{
    interface->parent = this;

    yang_name = "set"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::~Set()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Route::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::Interface()
    :
    interface_default{YType::empty, "interface-default"}
{

    yang_name = "interface"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::~Interface()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::has_data() const
{
    for (std::size_t index=0; index<interface_list.size(); index++)
    {
        if(interface_list[index]->has_data())
            return true;
    }
    return interface_default.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::has_operation() const
{
    for (std::size_t index=0; index<interface_list.size(); index++)
    {
        if(interface_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_default.yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_default.is_set || is_set(interface_default.yfilter)) leaf_name_data.push_back(interface_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        for(auto const & c : interface_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList>();
        c->parent = this;
        interface_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-default")
    {
        interface_default = value;
        interface_default.value_namespace = name_space;
        interface_default.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-default")
    {
        interface_default.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "interface-default")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::InterfaceList()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface-list"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::~InterfaceList()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::has_data() const
{
    return interface_name.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Client()
{

    yang_name = "client"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Client::~Client()
{
}

bool Native::Crypto::Ikev2::Client::has_data() const
{
    for (std::size_t index=0; index<flexvpn.size(); index++)
    {
        if(flexvpn[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Client::has_operation() const
{
    for (std::size_t index=0; index<flexvpn.size(); index++)
    {
        if(flexvpn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Ikev2::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flexvpn")
    {
        for(auto const & c : flexvpn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn>();
        c->parent = this;
        flexvpn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flexvpn)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flexvpn")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Flexvpn()
    :
    flexvpn_name{YType::str, "flexvpn-name"}
    	,
    connect(std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Connect>())
	,client(std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Client_>())
{
    connect->parent = this;
    client->parent = this;

    yang_name = "flexvpn"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Client::Flexvpn::~Flexvpn()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    return flexvpn_name.is_set
	|| (connect !=  nullptr && connect->has_data())
	|| (client !=  nullptr && client->has_data());
}

bool Native::Crypto::Ikev2::Client::Flexvpn::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flexvpn_name.yfilter)
	|| (connect !=  nullptr && connect->has_operation())
	|| (client !=  nullptr && client->has_operation());
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexvpn" <<"[flexvpn-name='" <<flexvpn_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flexvpn_name.is_set || is_set(flexvpn_name.yfilter)) leaf_name_data.push_back(flexvpn_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Client::Flexvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    if(child_yang_name == "connect")
    {
        if(connect == nullptr)
        {
            connect = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Connect>();
        }
        return connect;
    }

    if(child_yang_name == "source")
    {
        for(auto const & c : source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Source>();
        c->parent = this;
        source.push_back(c);
        return c;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Client_>();
        }
        return client;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Client::Flexvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    if(connect != nullptr)
    {
        children["connect"] = connect;
    }

    for (auto const & c : source)
    {
        children[c->get_segment_path()] = c;
    }

    if(client != nullptr)
    {
        children["client"] = client;
    }

    return children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flexvpn-name")
    {
        flexvpn_name = value;
        flexvpn_name.value_namespace = name_space;
        flexvpn_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Client::Flexvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flexvpn-name")
    {
        flexvpn_name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Client::Flexvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "connect" || name == "source" || name == "client" || name == "flexvpn-name")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Peer::Peer()
    :
    peer_id{YType::uint8, "peer-id"}
    	,
    peer_id_container(std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer>())
{
    peer_id_container->parent = this;

    yang_name = "peer"; yang_parent_name = "flexvpn"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Client::Flexvpn::Peer::~Peer()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::has_data() const
{
    return peer_id.is_set
	|| (peer_id_container !=  nullptr && peer_id_container->has_data());
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_id.yfilter)
	|| (peer_id_container !=  nullptr && peer_id_container->has_operation());
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[peer-id='" <<peer_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Client::Flexvpn::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-id-container")
    {
        if(peer_id_container == nullptr)
        {
            peer_id_container = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer>();
        }
        return peer_id_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_id_container != nullptr)
    {
        children["peer-id-container"] = peer_id_container;
    }

    return children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Client::Flexvpn::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-id-container" || name == "peer-id")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::PeerIdContainer()
    :
    peer_address{YType::str, "peer-address"},
    track{YType::uint16, "track"},
    up_down{YType::enumeration, "up-down"}
{

    yang_name = "peer-id-container"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::~PeerIdContainer()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::has_data() const
{
    return peer_address.is_set
	|| track.is_set
	|| up_down.is_set;
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(track.yfilter)
	|| ydk::is_set(up_down.yfilter);
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-id-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());
    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-address" || name == "track" || name == "up-down")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Connect::Connect()
    :
    track{YType::uint16, "track"},
    up_down{YType::enumeration, "up-down"}
{

    yang_name = "connect"; yang_parent_name = "flexvpn"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Client::Flexvpn::Connect::~Connect()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Connect::has_data() const
{
    return track.is_set
	|| up_down.is_set;
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Connect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(track.yfilter)
	|| ydk::is_set(up_down.yfilter);
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Connect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::Connect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());
    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Client::Flexvpn::Connect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Connect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Connect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Client::Flexvpn::Connect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Connect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track" || name == "up-down")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Source::Source()
    :
    source_id{YType::uint8, "source-id"}
    	,
    source_id_container(std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer>())
{
    source_id_container->parent = this;

    yang_name = "source"; yang_parent_name = "flexvpn"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Client::Flexvpn::Source::~Source()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Source::has_data() const
{
    return source_id.is_set
	|| (source_id_container !=  nullptr && source_id_container->has_data());
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_id.yfilter)
	|| (source_id_container !=  nullptr && source_id_container->has_operation());
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source" <<"[source-id='" <<source_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_id.is_set || is_set(source_id.yfilter)) leaf_name_data.push_back(source_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Client::Flexvpn::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-id-container")
    {
        if(source_id_container == nullptr)
        {
            source_id_container = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer>();
        }
        return source_id_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_id_container != nullptr)
    {
        children["source-id-container"] = source_id_container;
    }

    return children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-id")
    {
        source_id = value;
        source_id.value_namespace = name_space;
        source_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Client::Flexvpn::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-id")
    {
        source_id.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-id-container" || name == "source-id")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::SourceIdContainer()
    :
    interface_name{YType::str, "interface-name"},
    track{YType::uint16, "track"}
{

    yang_name = "source-id-container"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::~SourceIdContainer()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::has_data() const
{
    return interface_name.is_set
	|| track.is_set;
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-id-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "track")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Client_::Client_()
    :
    connect(std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect>())
{
    connect->parent = this;

    yang_name = "client"; yang_parent_name = "flexvpn"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Client::Flexvpn::Client_::~Client_()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Client_::has_data() const
{
    return (connect !=  nullptr && connect->has_data());
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Client_::has_operation() const
{
    return is_set(yfilter)
	|| (connect !=  nullptr && connect->has_operation());
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Client_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::Client_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Client::Flexvpn::Client_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connect")
    {
        if(connect == nullptr)
        {
            connect = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect>();
        }
        return connect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Client_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connect != nullptr)
    {
        children["connect"] = connect;
    }

    return children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Client_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Client::Flexvpn::Client_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Client_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connect")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::Connect()
    :
    tunnel{YType::uint32, "Tunnel"}
{

    yang_name = "connect"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::~Connect()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::has_data() const
{
    return tunnel.is_set;
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Tunnel")
        return true;
    return false;
}

Native::Crypto::Ikev2::Cts::Cts()
    :
    sgt{YType::empty, "sgt"}
{

    yang_name = "cts"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Cts::~Cts()
{
}

bool Native::Crypto::Ikev2::Cts::has_data() const
{
    return sgt.is_set;
}

bool Native::Crypto::Ikev2::Cts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Crypto::Ikev2::Cts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Cts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt")
        return true;
    return false;
}

Native::Crypto::Ikev2::Diagnose::Diagnose()
    :
    error{YType::uint16, "error"}
{

    yang_name = "diagnose"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Diagnose::~Diagnose()
{
}

bool Native::Crypto::Ikev2::Diagnose::has_data() const
{
    return error.is_set;
}

bool Native::Crypto::Ikev2::Diagnose::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string Native::Crypto::Ikev2::Diagnose::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Diagnose::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diagnose";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Diagnose::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Diagnose::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Diagnose::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Diagnose::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Diagnose::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Diagnose::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group1 {0, "group1"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group14 {1, "group14"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group15 {2, "group15"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group16 {3, "group16"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group19 {4, "group19"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group2 {5, "group2"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group20 {6, "group20"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group21 {7, "group21"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group24 {8, "group24"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group5 {9, "group5"};

const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Dfbit::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Dfbit::copy {1, "copy"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Dfbit::set {2, "set"};

const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Ecn::discard {0, "discard"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Ecn::propagate {1, "propagate"};

const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::Kilobytes::disable {0, "disable"};

const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::WindowSize::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::WindowSize::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::WindowSize::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::WindowSize::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::WindowSize::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::Engine::Software::ipsec {0, "ipsec"};
const Enum::YLeaf Native::Crypto::Engine::Software::isakmp {1, "isakmp"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Client::TransportEncryptKey::group_key {0, "group-key"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Client::TransportEncryptKey::pair_wise_key {1, "pair-wise-key"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::Small::Y_12 {0, "12"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::Small::Y_16 {1, "16"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::Small::Y_8 {2, "8"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::Version::base {0, "base"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::Version::optimize {1, "optimize"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::Version::base {0, "base"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::Version::optimize {1, "optimize"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::Acknowledgement::any {0, "any"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::Acknowledgement::cisco {1, "cisco"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::Acknowledgement::interoperable {2, "interoperable"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::Algorithm::sha {0, "sha"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::Algorithm::sha256 {1, "sha256"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::Algorithm::sha384 {2, "sha384"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::Algorithm::sha512 {3, "sha512"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Default_::Client::TransportEncryptKey::group_key {0, "group-key"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Default_::Client::TransportEncryptKey::pair_wise_key {1, "pair-wise-key"};

const Enum::YLeaf Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::UpDown::up {0, "up"};
const Enum::YLeaf Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::UpDown::down {1, "down"};

const Enum::YLeaf Native::Crypto::Ikev2::Client::Flexvpn::Connect::UpDown::up {0, "up"};
const Enum::YLeaf Native::Crypto::Ikev2::Client::Flexvpn::Connect::UpDown::down {1, "down"};


}
}

