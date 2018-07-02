
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_7.hpp"
#include "Cisco_IOS_XE_native_11.hpp"
#include "Cisco_IOS_XE_native_9.hpp"
#include "Cisco_IOS_XE_native_8.hpp"
#include "Cisco_IOS_XE_native_10.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Flow::Monitor::Record::Wireless::Avc::Ipv6::Ipv6()
    :
    basic{YType::empty, "basic"}
{

    yang_name = "ipv6"; yang_parent_name = "avc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Monitor::Record::Wireless::Avc::Ipv6::~Ipv6()
{
}

bool Native::Flow::Monitor::Record::Wireless::Avc::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return basic.is_set;
}

bool Native::Flow::Monitor::Record::Wireless::Avc::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(basic.yfilter);
}

std::string Native::Flow::Monitor::Record::Wireless::Avc::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Wireless::Avc::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (basic.is_set || is_set(basic.yfilter)) leaf_name_data.push_back(basic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Wireless::Avc::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Wireless::Avc::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Wireless::Avc::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "basic")
    {
        basic = value;
        basic.value_namespace = name_space;
        basic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Wireless::Avc::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "basic")
    {
        basic.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Wireless::Avc::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic")
        return true;
    return false;
}

Native::Flow::Monitor::Statistics::Statistics()
    :
    packet(std::make_shared<Native::Flow::Monitor::Statistics::Packet>())
{
    packet->parent = this;

    yang_name = "statistics"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Monitor::Statistics::~Statistics()
{
}

bool Native::Flow::Monitor::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return (packet !=  nullptr && packet->has_data());
}

bool Native::Flow::Monitor::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (packet !=  nullptr && packet->has_operation());
}

std::string Native::Flow::Monitor::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Flow::Monitor::Statistics::Packet>();
        }
        return packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    return children;
}

void Native::Flow::Monitor::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Monitor::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Monitor::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet")
        return true;
    return false;
}

Native::Flow::Monitor::Statistics::Packet::Packet()
    :
    protocol{YType::empty, "protocol"},
    size{YType::empty, "size"}
{

    yang_name = "packet"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Monitor::Statistics::Packet::~Packet()
{
}

bool Native::Flow::Monitor::Statistics::Packet::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| size.is_set;
}

bool Native::Flow::Monitor::Statistics::Packet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Monitor::Statistics::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Statistics::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Statistics::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Statistics::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Statistics::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Statistics::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Statistics::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "size")
        return true;
    return false;
}

Native::Flow::Monitor::Default::Default()
    :
    description{YType::empty, "description"},
    exporter{YType::empty, "exporter"},
    record{YType::empty, "record"}
        ,
    cache(std::make_shared<Native::Flow::Monitor::Default::Cache>())
    , statistics(std::make_shared<Native::Flow::Monitor::Default::Statistics>())
{
    cache->parent = this;
    statistics->parent = this;

    yang_name = "default"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Monitor::Default::~Default()
{
}

bool Native::Flow::Monitor::Default::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| exporter.is_set
	|| record.is_set
	|| (cache !=  nullptr && cache->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Native::Flow::Monitor::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(exporter.yfilter)
	|| ydk::is_set(record.yfilter)
	|| (cache !=  nullptr && cache->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Native::Flow::Monitor::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (exporter.is_set || is_set(exporter.yfilter)) leaf_name_data.push_back(exporter.get_name_leafdata());
    if (record.is_set || is_set(record.yfilter)) leaf_name_data.push_back(record.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Flow::Monitor::Default::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Native::Flow::Monitor::Default::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Native::Flow::Monitor::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exporter")
    {
        exporter = value;
        exporter.value_namespace = name_space;
        exporter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record")
    {
        record = value;
        record.value_namespace = name_space;
        record.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "exporter")
    {
        exporter.yfilter = yfilter;
    }
    if(value_path == "record")
    {
        record.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "statistics" || name == "description" || name == "exporter" || name == "record")
        return true;
    return false;
}

Native::Flow::Monitor::Default::Cache::Cache()
    :
    entries{YType::empty, "entries"},
    type{YType::empty, "type"}
        ,
    timeout(std::make_shared<Native::Flow::Monitor::Default::Cache::Timeout>())
{
    timeout->parent = this;

    yang_name = "cache"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Monitor::Default::Cache::~Cache()
{
}

bool Native::Flow::Monitor::Default::Cache::has_data() const
{
    if (is_presence_container) return true;
    return entries.is_set
	|| type.is_set
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::Flow::Monitor::Default::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entries.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Native::Flow::Monitor::Default::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Default::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.yfilter)) leaf_name_data.push_back(entries.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Flow::Monitor::Default::Cache::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void Native::Flow::Monitor::Default::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entries")
    {
        entries = value;
        entries.value_namespace = name_space;
        entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Default::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entries")
    {
        entries.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Default::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "entries" || name == "type")
        return true;
    return false;
}

Native::Flow::Monitor::Default::Cache::Timeout::Timeout()
    :
    active{YType::empty, "active"},
    inactive{YType::empty, "inactive"},
    synchronized{YType::empty, "synchronized"},
    update{YType::empty, "update"}
        ,
    event(std::make_shared<Native::Flow::Monitor::Default::Cache::Timeout::Event>())
{
    event->parent = this;

    yang_name = "timeout"; yang_parent_name = "cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Monitor::Default::Cache::Timeout::~Timeout()
{
}

bool Native::Flow::Monitor::Default::Cache::Timeout::has_data() const
{
    if (is_presence_container) return true;
    return active.is_set
	|| inactive.is_set
	|| synchronized.is_set
	|| update.is_set
	|| (event !=  nullptr && event->has_data());
}

bool Native::Flow::Monitor::Default::Cache::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(inactive.yfilter)
	|| ydk::is_set(synchronized.yfilter)
	|| ydk::is_set(update.yfilter)
	|| (event !=  nullptr && event->has_operation());
}

std::string Native::Flow::Monitor::Default::Cache::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Default::Cache::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (inactive.is_set || is_set(inactive.yfilter)) leaf_name_data.push_back(inactive.get_name_leafdata());
    if (synchronized.is_set || is_set(synchronized.yfilter)) leaf_name_data.push_back(synchronized.get_name_leafdata());
    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default::Cache::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Flow::Monitor::Default::Cache::Timeout::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default::Cache::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(event != nullptr)
    {
        children["event"] = event;
    }

    return children;
}

void Native::Flow::Monitor::Default::Cache::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inactive")
    {
        inactive = value;
        inactive.value_namespace = name_space;
        inactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronized")
    {
        synchronized = value;
        synchronized.value_namespace = name_space;
        synchronized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Default::Cache::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "inactive")
    {
        inactive.yfilter = yfilter;
    }
    if(value_path == "synchronized")
    {
        synchronized.yfilter = yfilter;
    }
    if(value_path == "update")
    {
        update.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Default::Cache::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "active" || name == "inactive" || name == "synchronized" || name == "update")
        return true;
    return false;
}

Native::Flow::Monitor::Default::Cache::Timeout::Event::Event()
    :
    transaction_end{YType::empty, "transaction-end"}
{

    yang_name = "event"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Monitor::Default::Cache::Timeout::Event::~Event()
{
}

bool Native::Flow::Monitor::Default::Cache::Timeout::Event::has_data() const
{
    if (is_presence_container) return true;
    return transaction_end.is_set;
}

bool Native::Flow::Monitor::Default::Cache::Timeout::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transaction_end.yfilter);
}

std::string Native::Flow::Monitor::Default::Cache::Timeout::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Default::Cache::Timeout::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transaction_end.is_set || is_set(transaction_end.yfilter)) leaf_name_data.push_back(transaction_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default::Cache::Timeout::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default::Cache::Timeout::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Default::Cache::Timeout::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transaction-end")
    {
        transaction_end = value;
        transaction_end.value_namespace = name_space;
        transaction_end.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Default::Cache::Timeout::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transaction-end")
    {
        transaction_end.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Default::Cache::Timeout::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transaction-end")
        return true;
    return false;
}

Native::Flow::Monitor::Default::Statistics::Statistics()
    :
    packet(std::make_shared<Native::Flow::Monitor::Default::Statistics::Packet>())
{
    packet->parent = this;

    yang_name = "statistics"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Monitor::Default::Statistics::~Statistics()
{
}

bool Native::Flow::Monitor::Default::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return (packet !=  nullptr && packet->has_data());
}

bool Native::Flow::Monitor::Default::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (packet !=  nullptr && packet->has_operation());
}

std::string Native::Flow::Monitor::Default::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Default::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Flow::Monitor::Default::Statistics::Packet>();
        }
        return packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    return children;
}

void Native::Flow::Monitor::Default::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Monitor::Default::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Monitor::Default::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet")
        return true;
    return false;
}

Native::Flow::Monitor::Default::Statistics::Packet::Packet()
    :
    protocol{YType::empty, "protocol"},
    size{YType::empty, "size"}
{

    yang_name = "packet"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Monitor::Default::Statistics::Packet::~Packet()
{
}

bool Native::Flow::Monitor::Default::Statistics::Packet::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| size.is_set;
}

bool Native::Flow::Monitor::Default::Statistics::Packet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Monitor::Default::Statistics::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Default::Statistics::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default::Statistics::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default::Statistics::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Default::Statistics::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Default::Statistics::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Default::Statistics::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "size")
        return true;
    return false;
}

Native::Ip::Ip()
    :
    subnet_zero{YType::boolean, "subnet-zero"},
    host_routing{YType::empty, "host-routing"},
    classless{YType::empty, "classless"},
    domain_name{YType::str, "domain-name"},
    default_gateway{YType::str, "default-gateway"},
    source_route{YType::boolean, "source-route"}
        ,
    admission(std::make_shared<Native::Ip::Admission>())
    , arp(std::make_shared<Native::Ip::Arp>())
    , domain_list(std::make_shared<Native::Ip::DomainList>())
    , finger(nullptr) // presence node
    , rcmd(std::make_shared<Native::Ip::Rcmd>())
    , bgp_community(std::make_shared<Native::Ip::BgpCommunity>())
    , vrf(this, {"name"})
    , as_path(std::make_shared<Native::Ip::AsPath>())
    , local(std::make_shared<Native::Ip::Local>())
    , cef(nullptr) // presence node
    , domain(std::make_shared<Native::Ip::Domain>())
    , domain_lookup_conf(std::make_shared<Native::Ip::DomainLookupConf>())
    , domain_lookup(nullptr) // presence node
    , dns(std::make_shared<Native::Ip::Dns>())
    , dhcp(std::make_shared<Native::Ip::Dhcp>())
    , forward_protocol(std::make_shared<Native::Ip::ForwardProtocol>())
    , gratuitous_arps_conf(std::make_shared<Native::Ip::GratuitousArpsConf>())
    , ftp(std::make_shared<Native::Ip::Ftp>())
    , telnet(std::make_shared<Native::Ip::Telnet>())
    , host(std::make_shared<Native::Ip::Host>())
    , multicast(std::make_shared<Native::Ip::Multicast>())
    , name_server(std::make_shared<Native::Ip::NameServer>())
    , pim(std::make_shared<Native::Ip::Pim>())
    , prefix_list(std::make_shared<Native::Ip::PrefixList>())
    , route(std::make_shared<Native::Ip::Route>())
    , routing(nullptr) // presence node
    , explicit_path(std::make_shared<Native::Ip::ExplicitPath>())
    , scp(std::make_shared<Native::Ip::Scp>())
    , spd(std::make_shared<Native::Ip::Spd>())
    , bootp(std::make_shared<Native::Ip::Bootp>())
    , ssh(std::make_shared<Native::Ip::Ssh>())
    , tcp(std::make_shared<Native::Ip::Tcp>())
    , tftp(std::make_shared<Native::Ip::Tftp>())
    , access_list(std::make_shared<Native::Ip::AccessList>())
    , device(std::make_shared<Native::Ip::Device>())
    , icmp(std::make_shared<Native::Ip::Icmp>())
    , igmp(std::make_shared<Native::Ip::Igmp>())
    , rsvp(std::make_shared<Native::Ip::Rsvp>())
    , community_list(std::make_shared<Native::Ip::CommunityList>())
    , extcommunity_list(std::make_shared<Native::Ip::ExtcommunityList>())
    , radius(std::make_shared<Native::Ip::Radius>())
    , tacacs(std::make_shared<Native::Ip::Tacacs>())
    , http(std::make_shared<Native::Ip::Http>())
    , nbar(std::make_shared<Native::Ip::Nbar>())
    , msdp(std::make_shared<Native::Ip::Msdp>())
    , mcr_conf(std::make_shared<Native::Ip::McrConf>())
    , multicast_routing(nullptr) // presence node
    , mroute(std::make_shared<Native::Ip::Mroute>())
    , sla(std::make_shared<Native::Ip::Sla>())
    , nat(std::make_shared<Native::Ip::Nat>())
    , wccp(std::make_shared<Native::Ip::Wccp>())
{
    admission->parent = this;
    arp->parent = this;
    domain_list->parent = this;
    rcmd->parent = this;
    bgp_community->parent = this;
    as_path->parent = this;
    local->parent = this;
    domain->parent = this;
    domain_lookup_conf->parent = this;
    dns->parent = this;
    dhcp->parent = this;
    forward_protocol->parent = this;
    gratuitous_arps_conf->parent = this;
    ftp->parent = this;
    telnet->parent = this;
    host->parent = this;
    multicast->parent = this;
    name_server->parent = this;
    pim->parent = this;
    prefix_list->parent = this;
    route->parent = this;
    explicit_path->parent = this;
    scp->parent = this;
    spd->parent = this;
    bootp->parent = this;
    ssh->parent = this;
    tcp->parent = this;
    tftp->parent = this;
    access_list->parent = this;
    device->parent = this;
    icmp->parent = this;
    igmp->parent = this;
    rsvp->parent = this;
    community_list->parent = this;
    extcommunity_list->parent = this;
    radius->parent = this;
    tacacs->parent = this;
    http->parent = this;
    nbar->parent = this;
    msdp->parent = this;
    mcr_conf->parent = this;
    mroute->parent = this;
    sla->parent = this;
    nat->parent = this;
    wccp->parent = this;

    yang_name = "ip"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::~Ip()
{
}

bool Native::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return subnet_zero.is_set
	|| host_routing.is_set
	|| classless.is_set
	|| domain_name.is_set
	|| default_gateway.is_set
	|| source_route.is_set
	|| (admission !=  nullptr && admission->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (domain_list !=  nullptr && domain_list->has_data())
	|| (finger !=  nullptr && finger->has_data())
	|| (rcmd !=  nullptr && rcmd->has_data())
	|| (bgp_community !=  nullptr && bgp_community->has_data())
	|| (as_path !=  nullptr && as_path->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (cef !=  nullptr && cef->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (domain_lookup_conf !=  nullptr && domain_lookup_conf->has_data())
	|| (domain_lookup !=  nullptr && domain_lookup->has_data())
	|| (dns !=  nullptr && dns->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (forward_protocol !=  nullptr && forward_protocol->has_data())
	|| (gratuitous_arps_conf !=  nullptr && gratuitous_arps_conf->has_data())
	|| (ftp !=  nullptr && ftp->has_data())
	|| (telnet !=  nullptr && telnet->has_data())
	|| (host !=  nullptr && host->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (name_server !=  nullptr && name_server->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (prefix_list !=  nullptr && prefix_list->has_data())
	|| (route !=  nullptr && route->has_data())
	|| (routing !=  nullptr && routing->has_data())
	|| (explicit_path !=  nullptr && explicit_path->has_data())
	|| (scp !=  nullptr && scp->has_data())
	|| (spd !=  nullptr && spd->has_data())
	|| (bootp !=  nullptr && bootp->has_data())
	|| (ssh !=  nullptr && ssh->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (tftp !=  nullptr && tftp->has_data())
	|| (access_list !=  nullptr && access_list->has_data())
	|| (device !=  nullptr && device->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (rsvp !=  nullptr && rsvp->has_data())
	|| (community_list !=  nullptr && community_list->has_data())
	|| (extcommunity_list !=  nullptr && extcommunity_list->has_data())
	|| (radius !=  nullptr && radius->has_data())
	|| (tacacs !=  nullptr && tacacs->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (nbar !=  nullptr && nbar->has_data())
	|| (msdp !=  nullptr && msdp->has_data())
	|| (mcr_conf !=  nullptr && mcr_conf->has_data())
	|| (multicast_routing !=  nullptr && multicast_routing->has_data())
	|| (mroute !=  nullptr && mroute->has_data())
	|| (sla !=  nullptr && sla->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (wccp !=  nullptr && wccp->has_data());
}

bool Native::Ip::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(subnet_zero.yfilter)
	|| ydk::is_set(host_routing.yfilter)
	|| ydk::is_set(classless.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(default_gateway.yfilter)
	|| ydk::is_set(source_route.yfilter)
	|| (admission !=  nullptr && admission->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (domain_list !=  nullptr && domain_list->has_operation())
	|| (finger !=  nullptr && finger->has_operation())
	|| (rcmd !=  nullptr && rcmd->has_operation())
	|| (bgp_community !=  nullptr && bgp_community->has_operation())
	|| (as_path !=  nullptr && as_path->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (cef !=  nullptr && cef->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (domain_lookup_conf !=  nullptr && domain_lookup_conf->has_operation())
	|| (domain_lookup !=  nullptr && domain_lookup->has_operation())
	|| (dns !=  nullptr && dns->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (forward_protocol !=  nullptr && forward_protocol->has_operation())
	|| (gratuitous_arps_conf !=  nullptr && gratuitous_arps_conf->has_operation())
	|| (ftp !=  nullptr && ftp->has_operation())
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (host !=  nullptr && host->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (name_server !=  nullptr && name_server->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (prefix_list !=  nullptr && prefix_list->has_operation())
	|| (route !=  nullptr && route->has_operation())
	|| (routing !=  nullptr && routing->has_operation())
	|| (explicit_path !=  nullptr && explicit_path->has_operation())
	|| (scp !=  nullptr && scp->has_operation())
	|| (spd !=  nullptr && spd->has_operation())
	|| (bootp !=  nullptr && bootp->has_operation())
	|| (ssh !=  nullptr && ssh->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (tftp !=  nullptr && tftp->has_operation())
	|| (access_list !=  nullptr && access_list->has_operation())
	|| (device !=  nullptr && device->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (rsvp !=  nullptr && rsvp->has_operation())
	|| (community_list !=  nullptr && community_list->has_operation())
	|| (extcommunity_list !=  nullptr && extcommunity_list->has_operation())
	|| (radius !=  nullptr && radius->has_operation())
	|| (tacacs !=  nullptr && tacacs->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (nbar !=  nullptr && nbar->has_operation())
	|| (msdp !=  nullptr && msdp->has_operation())
	|| (mcr_conf !=  nullptr && mcr_conf->has_operation())
	|| (multicast_routing !=  nullptr && multicast_routing->has_operation())
	|| (mroute !=  nullptr && mroute->has_operation())
	|| (sla !=  nullptr && sla->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (wccp !=  nullptr && wccp->has_operation());
}

std::string Native::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet_zero.is_set || is_set(subnet_zero.yfilter)) leaf_name_data.push_back(subnet_zero.get_name_leafdata());
    if (host_routing.is_set || is_set(host_routing.yfilter)) leaf_name_data.push_back(host_routing.get_name_leafdata());
    if (classless.is_set || is_set(classless.yfilter)) leaf_name_data.push_back(classless.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (default_gateway.is_set || is_set(default_gateway.yfilter)) leaf_name_data.push_back(default_gateway.get_name_leafdata());
    if (source_route.is_set || is_set(source_route.yfilter)) leaf_name_data.push_back(source_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admission")
    {
        if(admission == nullptr)
        {
            admission = std::make_shared<Native::Ip::Admission>();
        }
        return admission;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Ip::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "domain-list")
    {
        if(domain_list == nullptr)
        {
            domain_list = std::make_shared<Native::Ip::DomainList>();
        }
        return domain_list;
    }

    if(child_yang_name == "finger")
    {
        if(finger == nullptr)
        {
            finger = std::make_shared<Native::Ip::Finger>();
        }
        return finger;
    }

    if(child_yang_name == "rcmd")
    {
        if(rcmd == nullptr)
        {
            rcmd = std::make_shared<Native::Ip::Rcmd>();
        }
        return rcmd;
    }

    if(child_yang_name == "bgp-community")
    {
        if(bgp_community == nullptr)
        {
            bgp_community = std::make_shared<Native::Ip::BgpCommunity>();
        }
        return bgp_community;
    }

    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Ip::Vrf>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    if(child_yang_name == "as-path")
    {
        if(as_path == nullptr)
        {
            as_path = std::make_shared<Native::Ip::AsPath>();
        }
        return as_path;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Ip::Local>();
        }
        return local;
    }

    if(child_yang_name == "cef")
    {
        if(cef == nullptr)
        {
            cef = std::make_shared<Native::Ip::Cef>();
        }
        return cef;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Ip::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "domain-lookup-conf")
    {
        if(domain_lookup_conf == nullptr)
        {
            domain_lookup_conf = std::make_shared<Native::Ip::DomainLookupConf>();
        }
        return domain_lookup_conf;
    }

    if(child_yang_name == "domain-lookup")
    {
        if(domain_lookup == nullptr)
        {
            domain_lookup = std::make_shared<Native::Ip::DomainLookup>();
        }
        return domain_lookup;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Ip::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "forward-protocol")
    {
        if(forward_protocol == nullptr)
        {
            forward_protocol = std::make_shared<Native::Ip::ForwardProtocol>();
        }
        return forward_protocol;
    }

    if(child_yang_name == "gratuitous-arps-conf")
    {
        if(gratuitous_arps_conf == nullptr)
        {
            gratuitous_arps_conf = std::make_shared<Native::Ip::GratuitousArpsConf>();
        }
        return gratuitous_arps_conf;
    }

    if(child_yang_name == "ftp")
    {
        if(ftp == nullptr)
        {
            ftp = std::make_shared<Native::Ip::Ftp>();
        }
        return ftp;
    }

    if(child_yang_name == "telnet")
    {
        if(telnet == nullptr)
        {
            telnet = std::make_shared<Native::Ip::Telnet>();
        }
        return telnet;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Ip::Host>();
        }
        return host;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Ip::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "name-server")
    {
        if(name_server == nullptr)
        {
            name_server = std::make_shared<Native::Ip::NameServer>();
        }
        return name_server;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Ip::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "prefix-list")
    {
        if(prefix_list == nullptr)
        {
            prefix_list = std::make_shared<Native::Ip::PrefixList>();
        }
        return prefix_list;
    }

    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Ip::Route>();
        }
        return route;
    }

    if(child_yang_name == "routing")
    {
        if(routing == nullptr)
        {
            routing = std::make_shared<Native::Ip::Routing>();
        }
        return routing;
    }

    if(child_yang_name == "explicit-path")
    {
        if(explicit_path == nullptr)
        {
            explicit_path = std::make_shared<Native::Ip::ExplicitPath>();
        }
        return explicit_path;
    }

    if(child_yang_name == "scp")
    {
        if(scp == nullptr)
        {
            scp = std::make_shared<Native::Ip::Scp>();
        }
        return scp;
    }

    if(child_yang_name == "spd")
    {
        if(spd == nullptr)
        {
            spd = std::make_shared<Native::Ip::Spd>();
        }
        return spd;
    }

    if(child_yang_name == "bootp")
    {
        if(bootp == nullptr)
        {
            bootp = std::make_shared<Native::Ip::Bootp>();
        }
        return bootp;
    }

    if(child_yang_name == "ssh")
    {
        if(ssh == nullptr)
        {
            ssh = std::make_shared<Native::Ip::Ssh>();
        }
        return ssh;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Ip::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "tftp")
    {
        if(tftp == nullptr)
        {
            tftp = std::make_shared<Native::Ip::Tftp>();
        }
        return tftp;
    }

    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Ip::AccessList>();
        }
        return access_list;
    }

    if(child_yang_name == "device")
    {
        if(device == nullptr)
        {
            device = std::make_shared<Native::Ip::Device>();
        }
        return device;
    }

    if(child_yang_name == "Cisco-IOS-XE-icmp:icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::Ip::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "Cisco-IOS-XE-igmp:igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::Ip::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "Cisco-IOS-XE-rsvp:rsvp")
    {
        if(rsvp == nullptr)
        {
            rsvp = std::make_shared<Native::Ip::Rsvp>();
        }
        return rsvp;
    }

    if(child_yang_name == "Cisco-IOS-XE-bgp:community-list")
    {
        if(community_list == nullptr)
        {
            community_list = std::make_shared<Native::Ip::CommunityList>();
        }
        return community_list;
    }

    if(child_yang_name == "Cisco-IOS-XE-bgp:extcommunity-list")
    {
        if(extcommunity_list == nullptr)
        {
            extcommunity_list = std::make_shared<Native::Ip::ExtcommunityList>();
        }
        return extcommunity_list;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:radius")
    {
        if(radius == nullptr)
        {
            radius = std::make_shared<Native::Ip::Radius>();
        }
        return radius;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:tacacs")
    {
        if(tacacs == nullptr)
        {
            tacacs = std::make_shared<Native::Ip::Tacacs>();
        }
        return tacacs;
    }

    if(child_yang_name == "Cisco-IOS-XE-http:http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Ip::Http>();
        }
        return http;
    }

    if(child_yang_name == "Cisco-IOS-XE-nbar:nbar")
    {
        if(nbar == nullptr)
        {
            nbar = std::make_shared<Native::Ip::Nbar>();
        }
        return nbar;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:msdp")
    {
        if(msdp == nullptr)
        {
            msdp = std::make_shared<Native::Ip::Msdp>();
        }
        return msdp;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:mcr-conf")
    {
        if(mcr_conf == nullptr)
        {
            mcr_conf = std::make_shared<Native::Ip::McrConf>();
        }
        return mcr_conf;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:multicast-routing")
    {
        if(multicast_routing == nullptr)
        {
            multicast_routing = std::make_shared<Native::Ip::MulticastRouting>();
        }
        return multicast_routing;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:mroute")
    {
        if(mroute == nullptr)
        {
            mroute = std::make_shared<Native::Ip::Mroute>();
        }
        return mroute;
    }

    if(child_yang_name == "Cisco-IOS-XE-sla:sla")
    {
        if(sla == nullptr)
        {
            sla = std::make_shared<Native::Ip::Sla>();
        }
        return sla;
    }

    if(child_yang_name == "Cisco-IOS-XE-nat:nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Ip::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "Cisco-IOS-XE-wccp:wccp")
    {
        if(wccp == nullptr)
        {
            wccp = std::make_shared<Native::Ip::Wccp>();
        }
        return wccp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(admission != nullptr)
    {
        children["admission"] = admission;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(domain_list != nullptr)
    {
        children["domain-list"] = domain_list;
    }

    if(finger != nullptr)
    {
        children["finger"] = finger;
    }

    if(rcmd != nullptr)
    {
        children["rcmd"] = rcmd;
    }

    if(bgp_community != nullptr)
    {
        children["bgp-community"] = bgp_community;
    }

    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(as_path != nullptr)
    {
        children["as-path"] = as_path;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(cef != nullptr)
    {
        children["cef"] = cef;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(domain_lookup_conf != nullptr)
    {
        children["domain-lookup-conf"] = domain_lookup_conf;
    }

    if(domain_lookup != nullptr)
    {
        children["domain-lookup"] = domain_lookup;
    }

    if(dns != nullptr)
    {
        children["dns"] = dns;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(forward_protocol != nullptr)
    {
        children["forward-protocol"] = forward_protocol;
    }

    if(gratuitous_arps_conf != nullptr)
    {
        children["gratuitous-arps-conf"] = gratuitous_arps_conf;
    }

    if(ftp != nullptr)
    {
        children["ftp"] = ftp;
    }

    if(telnet != nullptr)
    {
        children["telnet"] = telnet;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(name_server != nullptr)
    {
        children["name-server"] = name_server;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    if(prefix_list != nullptr)
    {
        children["prefix-list"] = prefix_list;
    }

    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(routing != nullptr)
    {
        children["routing"] = routing;
    }

    if(explicit_path != nullptr)
    {
        children["explicit-path"] = explicit_path;
    }

    if(scp != nullptr)
    {
        children["scp"] = scp;
    }

    if(spd != nullptr)
    {
        children["spd"] = spd;
    }

    if(bootp != nullptr)
    {
        children["bootp"] = bootp;
    }

    if(ssh != nullptr)
    {
        children["ssh"] = ssh;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(tftp != nullptr)
    {
        children["tftp"] = tftp;
    }

    if(access_list != nullptr)
    {
        children["access-list"] = access_list;
    }

    if(device != nullptr)
    {
        children["device"] = device;
    }

    if(icmp != nullptr)
    {
        children["Cisco-IOS-XE-icmp:icmp"] = icmp;
    }

    if(igmp != nullptr)
    {
        children["Cisco-IOS-XE-igmp:igmp"] = igmp;
    }

    if(rsvp != nullptr)
    {
        children["Cisco-IOS-XE-rsvp:rsvp"] = rsvp;
    }

    if(community_list != nullptr)
    {
        children["Cisco-IOS-XE-bgp:community-list"] = community_list;
    }

    if(extcommunity_list != nullptr)
    {
        children["Cisco-IOS-XE-bgp:extcommunity-list"] = extcommunity_list;
    }

    if(radius != nullptr)
    {
        children["Cisco-IOS-XE-aaa:radius"] = radius;
    }

    if(tacacs != nullptr)
    {
        children["Cisco-IOS-XE-aaa:tacacs"] = tacacs;
    }

    if(http != nullptr)
    {
        children["Cisco-IOS-XE-http:http"] = http;
    }

    if(nbar != nullptr)
    {
        children["Cisco-IOS-XE-nbar:nbar"] = nbar;
    }

    if(msdp != nullptr)
    {
        children["Cisco-IOS-XE-multicast:msdp"] = msdp;
    }

    if(mcr_conf != nullptr)
    {
        children["Cisco-IOS-XE-multicast:mcr-conf"] = mcr_conf;
    }

    if(multicast_routing != nullptr)
    {
        children["Cisco-IOS-XE-multicast:multicast-routing"] = multicast_routing;
    }

    if(mroute != nullptr)
    {
        children["Cisco-IOS-XE-multicast:mroute"] = mroute;
    }

    if(sla != nullptr)
    {
        children["Cisco-IOS-XE-sla:sla"] = sla;
    }

    if(nat != nullptr)
    {
        children["Cisco-IOS-XE-nat:nat"] = nat;
    }

    if(wccp != nullptr)
    {
        children["Cisco-IOS-XE-wccp:wccp"] = wccp;
    }

    return children;
}

void Native::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet-zero")
    {
        subnet_zero = value;
        subnet_zero.value_namespace = name_space;
        subnet_zero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-routing")
    {
        host_routing = value;
        host_routing.value_namespace = name_space;
        host_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classless")
    {
        classless = value;
        classless.value_namespace = name_space;
        classless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-gateway")
    {
        default_gateway = value;
        default_gateway.value_namespace = name_space;
        default_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-route")
    {
        source_route = value;
        source_route.value_namespace = name_space;
        source_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet-zero")
    {
        subnet_zero.yfilter = yfilter;
    }
    if(value_path == "host-routing")
    {
        host_routing.yfilter = yfilter;
    }
    if(value_path == "classless")
    {
        classless.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "default-gateway")
    {
        default_gateway.yfilter = yfilter;
    }
    if(value_path == "source-route")
    {
        source_route.yfilter = yfilter;
    }
}

bool Native::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admission" || name == "arp" || name == "domain-list" || name == "finger" || name == "rcmd" || name == "bgp-community" || name == "vrf" || name == "as-path" || name == "local" || name == "cef" || name == "domain" || name == "domain-lookup-conf" || name == "domain-lookup" || name == "dns" || name == "dhcp" || name == "forward-protocol" || name == "gratuitous-arps-conf" || name == "ftp" || name == "telnet" || name == "host" || name == "multicast" || name == "name-server" || name == "pim" || name == "prefix-list" || name == "route" || name == "routing" || name == "explicit-path" || name == "scp" || name == "spd" || name == "bootp" || name == "ssh" || name == "tcp" || name == "tftp" || name == "access-list" || name == "device" || name == "icmp" || name == "igmp" || name == "rsvp" || name == "community-list" || name == "extcommunity-list" || name == "radius" || name == "tacacs" || name == "http" || name == "nbar" || name == "msdp" || name == "mcr-conf" || name == "multicast-routing" || name == "mroute" || name == "sla" || name == "nat" || name == "wccp" || name == "subnet-zero" || name == "host-routing" || name == "classless" || name == "domain-name" || name == "default-gateway" || name == "source-route")
        return true;
    return false;
}

Native::Ip::Admission::Admission()
    :
    watch_list(std::make_shared<Native::Ip::Admission::WatchList>())
    , name(std::make_shared<Native::Ip::Admission::Name>())
{
    watch_list->parent = this;
    name->parent = this;

    yang_name = "admission"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Admission::~Admission()
{
}

bool Native::Ip::Admission::has_data() const
{
    if (is_presence_container) return true;
    return (watch_list !=  nullptr && watch_list->has_data())
	|| (name !=  nullptr && name->has_data());
}

bool Native::Ip::Admission::has_operation() const
{
    return is_set(yfilter)
	|| (watch_list !=  nullptr && watch_list->has_operation())
	|| (name !=  nullptr && name->has_operation());
}

std::string Native::Ip::Admission::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Admission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admission";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Admission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Admission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "watch-list")
    {
        if(watch_list == nullptr)
        {
            watch_list = std::make_shared<Native::Ip::Admission::WatchList>();
        }
        return watch_list;
    }

    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Ip::Admission::Name>();
        }
        return name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(watch_list != nullptr)
    {
        children["watch-list"] = watch_list;
    }

    if(name != nullptr)
    {
        children["name"] = name;
    }

    return children;
}

void Native::Ip::Admission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Admission::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Admission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "watch-list" || name == "name")
        return true;
    return false;
}

Native::Ip::Admission::WatchList::WatchList()
    :
    expiry_time{YType::uint16, "expiry-time"}
{

    yang_name = "watch-list"; yang_parent_name = "admission"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Admission::WatchList::~WatchList()
{
}

bool Native::Ip::Admission::WatchList::has_data() const
{
    if (is_presence_container) return true;
    return expiry_time.is_set;
}

bool Native::Ip::Admission::WatchList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expiry_time.yfilter);
}

std::string Native::Ip::Admission::WatchList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/admission/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Admission::WatchList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "watch-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Admission::WatchList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiry_time.is_set || is_set(expiry_time.yfilter)) leaf_name_data.push_back(expiry_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Admission::WatchList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::WatchList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Admission::WatchList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expiry-time")
    {
        expiry_time = value;
        expiry_time.value_namespace = name_space;
        expiry_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Admission::WatchList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiry-time")
    {
        expiry_time.yfilter = yfilter;
    }
}

bool Native::Ip::Admission::WatchList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expiry-time")
        return true;
    return false;
}

Native::Ip::Admission::Name::Name()
    :
    webauth(std::make_shared<Native::Ip::Admission::Name::Webauth>())
{
    webauth->parent = this;

    yang_name = "name"; yang_parent_name = "admission"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Admission::Name::~Name()
{
}

bool Native::Ip::Admission::Name::has_data() const
{
    if (is_presence_container) return true;
    return (webauth !=  nullptr && webauth->has_data());
}

bool Native::Ip::Admission::Name::has_operation() const
{
    return is_set(yfilter)
	|| (webauth !=  nullptr && webauth->has_operation());
}

std::string Native::Ip::Admission::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/admission/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Admission::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Admission::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Admission::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "webauth")
    {
        if(webauth == nullptr)
        {
            webauth = std::make_shared<Native::Ip::Admission::Name::Webauth>();
        }
        return webauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(webauth != nullptr)
    {
        children["webauth"] = webauth;
    }

    return children;
}

void Native::Ip::Admission::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Admission::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Admission::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "webauth")
        return true;
    return false;
}

Native::Ip::Admission::Name::Webauth::Webauth()
    :
    proxy(std::make_shared<Native::Ip::Admission::Name::Webauth::Proxy>())
{
    proxy->parent = this;

    yang_name = "webauth"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Admission::Name::Webauth::~Webauth()
{
}

bool Native::Ip::Admission::Name::Webauth::has_data() const
{
    if (is_presence_container) return true;
    return (proxy !=  nullptr && proxy->has_data());
}

bool Native::Ip::Admission::Name::Webauth::has_operation() const
{
    return is_set(yfilter)
	|| (proxy !=  nullptr && proxy->has_operation());
}

std::string Native::Ip::Admission::Name::Webauth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/admission/name/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Admission::Name::Webauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webauth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Admission::Name::Webauth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Admission::Name::Webauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proxy")
    {
        if(proxy == nullptr)
        {
            proxy = std::make_shared<Native::Ip::Admission::Name::Webauth::Proxy>();
        }
        return proxy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::Name::Webauth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(proxy != nullptr)
    {
        children["proxy"] = proxy;
    }

    return children;
}

void Native::Ip::Admission::Name::Webauth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Admission::Name::Webauth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Admission::Name::Webauth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy")
        return true;
    return false;
}

Native::Ip::Admission::Name::Webauth::Proxy::Proxy()
    :
    http{YType::empty, "http"}
{

    yang_name = "proxy"; yang_parent_name = "webauth"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Admission::Name::Webauth::Proxy::~Proxy()
{
}

bool Native::Ip::Admission::Name::Webauth::Proxy::has_data() const
{
    if (is_presence_container) return true;
    return http.is_set;
}

bool Native::Ip::Admission::Name::Webauth::Proxy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(http.yfilter);
}

std::string Native::Ip::Admission::Name::Webauth::Proxy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/admission/name/webauth/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Admission::Name::Webauth::Proxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Admission::Name::Webauth::Proxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (http.is_set || is_set(http.yfilter)) leaf_name_data.push_back(http.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Admission::Name::Webauth::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::Name::Webauth::Proxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Admission::Name::Webauth::Proxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "http")
    {
        http = value;
        http.value_namespace = name_space;
        http.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Admission::Name::Webauth::Proxy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "http")
    {
        http.yfilter = yfilter;
    }
}

bool Native::Ip::Admission::Name::Webauth::Proxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "http")
        return true;
    return false;
}

Native::Ip::Arp::Arp()
    :
    incomplete(std::make_shared<Native::Ip::Arp::Incomplete>())
    , inspection(std::make_shared<Native::Ip::Arp::Inspection>())
    , proxy(std::make_shared<Native::Ip::Arp::Proxy>())
{
    incomplete->parent = this;
    inspection->parent = this;
    proxy->parent = this;

    yang_name = "arp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Arp::~Arp()
{
}

bool Native::Ip::Arp::has_data() const
{
    if (is_presence_container) return true;
    return (incomplete !=  nullptr && incomplete->has_data())
	|| (inspection !=  nullptr && inspection->has_data())
	|| (proxy !=  nullptr && proxy->has_data());
}

bool Native::Ip::Arp::has_operation() const
{
    return is_set(yfilter)
	|| (incomplete !=  nullptr && incomplete->has_operation())
	|| (inspection !=  nullptr && inspection->has_operation())
	|| (proxy !=  nullptr && proxy->has_operation());
}

std::string Native::Ip::Arp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incomplete")
    {
        if(incomplete == nullptr)
        {
            incomplete = std::make_shared<Native::Ip::Arp::Incomplete>();
        }
        return incomplete;
    }

    if(child_yang_name == "inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Ip::Arp::Inspection>();
        }
        return inspection;
    }

    if(child_yang_name == "proxy")
    {
        if(proxy == nullptr)
        {
            proxy = std::make_shared<Native::Ip::Arp::Proxy>();
        }
        return proxy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(incomplete != nullptr)
    {
        children["incomplete"] = incomplete;
    }

    if(inspection != nullptr)
    {
        children["inspection"] = inspection;
    }

    if(proxy != nullptr)
    {
        children["proxy"] = proxy;
    }

    return children;
}

void Native::Ip::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incomplete" || name == "inspection" || name == "proxy")
        return true;
    return false;
}

Native::Ip::Arp::Incomplete::Incomplete()
    :
    entries{YType::uint32, "entries"}
{

    yang_name = "incomplete"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Arp::Incomplete::~Incomplete()
{
}

bool Native::Ip::Arp::Incomplete::has_data() const
{
    if (is_presence_container) return true;
    return entries.is_set;
}

bool Native::Ip::Arp::Incomplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entries.yfilter);
}

std::string Native::Ip::Arp::Incomplete::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Incomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incomplete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Incomplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.yfilter)) leaf_name_data.push_back(entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Incomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Incomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Arp::Incomplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entries")
    {
        entries = value;
        entries.value_namespace = name_space;
        entries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Incomplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entries")
    {
        entries.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Incomplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entries")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::Inspection()
    :
    vlan{YType::str, "vlan"}
        ,
    filter(this, {"arpacl"})
    , validate(std::make_shared<Native::Ip::Arp::Inspection::Validate>())
    , log_buffer(std::make_shared<Native::Ip::Arp::Inspection::LogBuffer>())
{
    validate->parent = this;
    log_buffer->parent = this;

    yang_name = "inspection"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Arp::Inspection::~Inspection()
{
}

bool Native::Ip::Arp::Inspection::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<filter.len(); index++)
    {
        if(filter[index]->has_data())
            return true;
    }
    return vlan.is_set
	|| (validate !=  nullptr && validate->has_data())
	|| (log_buffer !=  nullptr && log_buffer->has_data());
}

bool Native::Ip::Arp::Inspection::has_operation() const
{
    for (std::size_t index=0; index<filter.len(); index++)
    {
        if(filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (validate !=  nullptr && validate->has_operation())
	|| (log_buffer !=  nullptr && log_buffer->has_operation());
}

std::string Native::Ip::Arp::Inspection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        auto c = std::make_shared<Native::Ip::Arp::Inspection::Filter>();
        c->parent = this;
        filter.append(c);
        return c;
    }

    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Ip::Arp::Inspection::Validate>();
        }
        return validate;
    }

    if(child_yang_name == "log-buffer")
    {
        if(log_buffer == nullptr)
        {
            log_buffer = std::make_shared<Native::Ip::Arp::Inspection::LogBuffer>();
        }
        return log_buffer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : filter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    if(log_buffer != nullptr)
    {
        children["log-buffer"] = log_buffer;
    }

    return children;
}

void Native::Ip::Arp::Inspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter" || name == "validate" || name == "log-buffer" || name == "vlan")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::Filter::Filter()
    :
    arpacl{YType::str, "arpacl"}
        ,
    vlan(this, {"vlan_range"})
{

    yang_name = "filter"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Arp::Inspection::Filter::~Filter()
{
}

bool Native::Ip::Arp::Inspection::Filter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return arpacl.is_set;
}

bool Native::Ip::Arp::Inspection::Filter::has_operation() const
{
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(arpacl.yfilter);
}

std::string Native::Ip::Arp::Inspection::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Inspection::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    ADD_KEY_TOKEN(arpacl, "arpacl");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arpacl.is_set || is_set(arpacl.yfilter)) leaf_name_data.push_back(arpacl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        auto c = std::make_shared<Native::Ip::Arp::Inspection::Filter::Vlan>();
        c->parent = this;
        vlan.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlan.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Arp::Inspection::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arpacl")
    {
        arpacl = value;
        arpacl.value_namespace = name_space;
        arpacl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arpacl")
    {
        arpacl.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "arpacl")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::Filter::Vlan::Vlan()
    :
    vlan_range{YType::str, "vlan-range"},
    static_{YType::empty, "static"}
{

    yang_name = "vlan"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Arp::Inspection::Filter::Vlan::~Vlan()
{
}

bool Native::Ip::Arp::Inspection::Filter::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return vlan_range.is_set
	|| static_.is_set;
}

bool Native::Ip::Arp::Inspection::Filter::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_range.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string Native::Ip::Arp::Inspection::Filter::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    ADD_KEY_TOKEN(vlan_range, "vlan-range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::Filter::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_range.is_set || is_set(vlan_range.yfilter)) leaf_name_data.push_back(vlan_range.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::Filter::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::Filter::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Arp::Inspection::Filter::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-range")
    {
        vlan_range = value;
        vlan_range.value_namespace = name_space;
        vlan_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::Filter::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-range")
    {
        vlan_range.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::Filter::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-range" || name == "static")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::Validate::Validate()
    :
    src_mac{YType::empty, "src-mac"},
    dst_mac{YType::empty, "dst-mac"},
    ip{YType::empty, "ip"}
        ,
    allow(std::make_shared<Native::Ip::Arp::Inspection::Validate::Allow>())
{
    allow->parent = this;

    yang_name = "validate"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Arp::Inspection::Validate::~Validate()
{
}

bool Native::Ip::Arp::Inspection::Validate::has_data() const
{
    if (is_presence_container) return true;
    return src_mac.is_set
	|| dst_mac.is_set
	|| ip.is_set
	|| (allow !=  nullptr && allow->has_data());
}

bool Native::Ip::Arp::Inspection::Validate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_mac.yfilter)
	|| ydk::is_set(dst_mac.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (allow !=  nullptr && allow->has_operation());
}

std::string Native::Ip::Arp::Inspection::Validate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Inspection::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_mac.is_set || is_set(src_mac.yfilter)) leaf_name_data.push_back(src_mac.get_name_leafdata());
    if (dst_mac.is_set || is_set(dst_mac.yfilter)) leaf_name_data.push_back(dst_mac.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::Ip::Arp::Inspection::Validate::Allow>();
        }
        return allow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(allow != nullptr)
    {
        children["allow"] = allow;
    }

    return children;
}

void Native::Ip::Arp::Inspection::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-mac")
    {
        src_mac = value;
        src_mac.value_namespace = name_space;
        src_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-mac")
    {
        dst_mac = value;
        dst_mac.value_namespace = name_space;
        dst_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-mac")
    {
        src_mac.yfilter = yfilter;
    }
    if(value_path == "dst-mac")
    {
        dst_mac.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "src-mac" || name == "dst-mac" || name == "ip")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::Validate::Allow::Allow()
    :
    zeros{YType::empty, "zeros"}
{

    yang_name = "allow"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Arp::Inspection::Validate::Allow::~Allow()
{
}

bool Native::Ip::Arp::Inspection::Validate::Allow::has_data() const
{
    if (is_presence_container) return true;
    return zeros.is_set;
}

bool Native::Ip::Arp::Inspection::Validate::Allow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(zeros.yfilter);
}

std::string Native::Ip::Arp::Inspection::Validate::Allow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/validate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Inspection::Validate::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::Validate::Allow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (zeros.is_set || is_set(zeros.yfilter)) leaf_name_data.push_back(zeros.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::Validate::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::Validate::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Arp::Inspection::Validate::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "zeros")
    {
        zeros = value;
        zeros.value_namespace = name_space;
        zeros.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::Validate::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "zeros")
    {
        zeros.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::Validate::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "zeros")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::LogBuffer::LogBuffer()
    :
    entries{YType::uint16, "entries"}
        ,
    logs(std::make_shared<Native::Ip::Arp::Inspection::LogBuffer::Logs>())
{
    logs->parent = this;

    yang_name = "log-buffer"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Arp::Inspection::LogBuffer::~LogBuffer()
{
}

bool Native::Ip::Arp::Inspection::LogBuffer::has_data() const
{
    if (is_presence_container) return true;
    return entries.is_set
	|| (logs !=  nullptr && logs->has_data());
}

bool Native::Ip::Arp::Inspection::LogBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entries.yfilter)
	|| (logs !=  nullptr && logs->has_operation());
}

std::string Native::Ip::Arp::Inspection::LogBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Inspection::LogBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-buffer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::LogBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.yfilter)) leaf_name_data.push_back(entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::LogBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logs")
    {
        if(logs == nullptr)
        {
            logs = std::make_shared<Native::Ip::Arp::Inspection::LogBuffer::Logs>();
        }
        return logs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::LogBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(logs != nullptr)
    {
        children["logs"] = logs;
    }

    return children;
}

void Native::Ip::Arp::Inspection::LogBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entries")
    {
        entries = value;
        entries.value_namespace = name_space;
        entries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::LogBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entries")
    {
        entries.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::LogBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logs" || name == "entries")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::LogBuffer::Logs::Logs()
    :
    entries{YType::uint16, "entries"},
    interval{YType::uint32, "interval"}
{

    yang_name = "logs"; yang_parent_name = "log-buffer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Arp::Inspection::LogBuffer::Logs::~Logs()
{
}

bool Native::Ip::Arp::Inspection::LogBuffer::Logs::has_data() const
{
    if (is_presence_container) return true;
    return entries.is_set
	|| interval.is_set;
}

bool Native::Ip::Arp::Inspection::LogBuffer::Logs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entries.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Arp::Inspection::LogBuffer::Logs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/log-buffer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Inspection::LogBuffer::Logs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::LogBuffer::Logs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.yfilter)) leaf_name_data.push_back(entries.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::LogBuffer::Logs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::LogBuffer::Logs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Arp::Inspection::LogBuffer::Logs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entries")
    {
        entries = value;
        entries.value_namespace = name_space;
        entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::LogBuffer::Logs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entries")
    {
        entries.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::LogBuffer::Logs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entries" || name == "interval")
        return true;
    return false;
}

Native::Ip::Arp::Proxy::Proxy()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "proxy"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Arp::Proxy::~Proxy()
{
}

bool Native::Ip::Arp::Proxy::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Ip::Arp::Proxy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Ip::Arp::Proxy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Proxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Proxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Proxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Arp::Proxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Proxy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Proxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Ip::DomainList::DomainList()
    :
    domain_name{YType::str, "domain-name"}
        ,
    vrf(std::make_shared<Native::Ip::DomainList::Vrf>())
{
    vrf->parent = this;

    yang_name = "domain-list"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::DomainList::~DomainList()
{
}

bool Native::Ip::DomainList::has_data() const
{
    if (is_presence_container) return true;
    return domain_name.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Ip::DomainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Ip::DomainList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::DomainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Ip::DomainList::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Ip::DomainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
}

bool Native::Ip::DomainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "domain-name")
        return true;
    return false;
}

Native::Ip::DomainList::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    domain_name{YType::str, "domain-name"}
{

    yang_name = "vrf"; yang_parent_name = "domain-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::DomainList::Vrf::~Vrf()
{
}

bool Native::Ip::DomainList::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| domain_name.is_set;
}

bool Native::Ip::DomainList::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(domain_name.yfilter);
}

std::string Native::Ip::DomainList::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainList::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainList::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::DomainList::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainList::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::DomainList::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainList::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
}

bool Native::Ip::DomainList::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "domain-name")
        return true;
    return false;
}

Native::Ip::Finger::Finger()
{

    yang_name = "finger"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Finger::~Finger()
{
}

bool Native::Ip::Finger::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Ip::Finger::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Ip::Finger::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Finger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "finger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Finger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Finger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Finger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Finger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Finger::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Finger::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Ip::Rcmd::Rcmd()
    :
    rcp_enable{YType::empty, "rcp-enable"},
    rsh_enable{YType::empty, "rsh-enable"}
{

    yang_name = "rcmd"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rcmd::~Rcmd()
{
}

bool Native::Ip::Rcmd::has_data() const
{
    if (is_presence_container) return true;
    return rcp_enable.is_set
	|| rsh_enable.is_set;
}

bool Native::Ip::Rcmd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rcp_enable.yfilter)
	|| ydk::is_set(rsh_enable.yfilter);
}

std::string Native::Ip::Rcmd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rcmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcmd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rcmd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rcp_enable.is_set || is_set(rcp_enable.yfilter)) leaf_name_data.push_back(rcp_enable.get_name_leafdata());
    if (rsh_enable.is_set || is_set(rsh_enable.yfilter)) leaf_name_data.push_back(rsh_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rcmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rcmd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Rcmd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rcp-enable")
    {
        rcp_enable = value;
        rcp_enable.value_namespace = name_space;
        rcp_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsh-enable")
    {
        rsh_enable = value;
        rsh_enable.value_namespace = name_space;
        rsh_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rcmd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rcp-enable")
    {
        rcp_enable.yfilter = yfilter;
    }
    if(value_path == "rsh-enable")
    {
        rsh_enable.yfilter = yfilter;
    }
}

bool Native::Ip::Rcmd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rcp-enable" || name == "rsh-enable")
        return true;
    return false;
}

Native::Ip::BgpCommunity::BgpCommunity()
    :
    new_format{YType::empty, "new-format"}
{

    yang_name = "bgp-community"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::BgpCommunity::~BgpCommunity()
{
}

bool Native::Ip::BgpCommunity::has_data() const
{
    if (is_presence_container) return true;
    return new_format.is_set;
}

bool Native::Ip::BgpCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(new_format.yfilter);
}

std::string Native::Ip::BgpCommunity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::BgpCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::BgpCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (new_format.is_set || is_set(new_format.yfilter)) leaf_name_data.push_back(new_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::BgpCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::BgpCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::BgpCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "new-format")
    {
        new_format = value;
        new_format.value_namespace = name_space;
        new_format.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::BgpCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "new-format")
    {
        new_format.yfilter = yfilter;
    }
}

bool Native::Ip::BgpCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-format")
        return true;
    return false;
}

Native::Ip::Vrf::Vrf()
    :
    name{YType::str, "name"},
    context{YType::str, "context"},
    description{YType::str, "description"},
    rd{YType::str, "rd"}
        ,
    bgp(std::make_shared<Native::Ip::Vrf::Bgp>())
    , export_(std::make_shared<Native::Ip::Vrf::Export>())
    , import(std::make_shared<Native::Ip::Vrf::Import>())
    , maximum(nullptr) // presence node
    , mdt(nullptr) // presence node
    , route_target(this, {"direction", "target"})
    , vpn(std::make_shared<Native::Ip::Vrf::Vpn>())
{
    bgp->parent = this;
    export_->parent = this;
    import->parent = this;
    vpn->parent = this;

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Vrf::~Vrf()
{
}

bool Native::Ip::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_target.len(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return name.is_set
	|| context.is_set
	|| description.is_set
	|| rd.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (export_ !=  nullptr && export_->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (mdt !=  nullptr && mdt->has_data())
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::Ip::Vrf::has_operation() const
{
    for (std::size_t index=0; index<route_target.len(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (export_ !=  nullptr && export_->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (mdt !=  nullptr && mdt->has_operation())
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::Ip::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Ip::Vrf::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "export")
    {
        if(export_ == nullptr)
        {
            export_ = std::make_shared<Native::Ip::Vrf::Export>();
        }
        return export_;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Ip::Vrf::Import>();
        }
        return import;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Ip::Vrf::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "mdt")
    {
        if(mdt == nullptr)
        {
            mdt = std::make_shared<Native::Ip::Vrf::Mdt>();
        }
        return mdt;
    }

    if(child_yang_name == "route-target")
    {
        auto c = std::make_shared<Native::Ip::Vrf::RouteTarget>();
        c->parent = this;
        route_target.append(c);
        return c;
    }

    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::Ip::Vrf::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(export_ != nullptr)
    {
        children["export"] = export_;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(mdt != nullptr)
    {
        children["mdt"] = mdt;
    }

    count = 0;
    for (auto c : route_target.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(vpn != nullptr)
    {
        children["vpn"] = vpn;
    }

    return children;
}

void Native::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "export" || name == "import" || name == "maximum" || name == "mdt" || name == "route-target" || name == "vpn" || name == "name" || name == "context" || name == "description" || name == "rd")
        return true;
    return false;
}

Native::Ip::Vrf::Bgp::Bgp()
    :
    next_hop(std::make_shared<Native::Ip::Vrf::Bgp::NextHop>())
{
    next_hop->parent = this;

    yang_name = "bgp"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Vrf::Bgp::~Bgp()
{
}

bool Native::Ip::Vrf::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::Ip::Vrf::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::Ip::Vrf::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::Ip::Vrf::Bgp::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::Ip::Vrf::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Vrf::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Vrf::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::Ip::Vrf::Bgp::NextHop::NextHop()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "next-hop"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Vrf::Bgp::NextHop::~NextHop()
{
}

bool Native::Ip::Vrf::Bgp::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return loopback.is_set;
}

bool Native::Ip::Vrf::Bgp::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::Ip::Vrf::Bgp::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Bgp::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Bgp::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Bgp::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Vrf::Bgp::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Bgp::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Bgp::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

Native::Ip::Vrf::Export::Export()
    :
    map{YType::str, "map"}
        ,
    ipv4(std::make_shared<Native::Ip::Vrf::Export::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "export"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Vrf::Export::~Export()
{
}

bool Native::Ip::Vrf::Export::has_data() const
{
    if (is_presence_container) return true;
    return map.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Ip::Vrf::Export::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Ip::Vrf::Export::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Export::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Export::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Ip::Vrf::Export::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Export::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Ip::Vrf::Export::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Export::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Export::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "map")
        return true;
    return false;
}

Native::Ip::Vrf::Export::Ipv4::Ipv4()
    :
    ipv4_type{YType::enumeration, "ipv4-type"},
    upper_limit{YType::uint32, "upper-limit"},
    map{YType::str, "map"},
    map_only{YType::str, "map-only"}
{

    yang_name = "ipv4"; yang_parent_name = "export"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Vrf::Export::Ipv4::~Ipv4()
{
}

bool Native::Ip::Vrf::Export::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_type.is_set
	|| upper_limit.is_set
	|| map.is_set
	|| map_only.is_set;
}

bool Native::Ip::Vrf::Export::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_type.yfilter)
	|| ydk::is_set(upper_limit.yfilter)
	|| ydk::is_set(map.yfilter)
	|| ydk::is_set(map_only.yfilter);
}

std::string Native::Ip::Vrf::Export::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Export::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_type.is_set || is_set(ipv4_type.yfilter)) leaf_name_data.push_back(ipv4_type.get_name_leafdata());
    if (upper_limit.is_set || is_set(upper_limit.yfilter)) leaf_name_data.push_back(upper_limit.get_name_leafdata());
    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());
    if (map_only.is_set || is_set(map_only.yfilter)) leaf_name_data.push_back(map_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Export::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Export::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Vrf::Export::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-type")
    {
        ipv4_type = value;
        ipv4_type.value_namespace = name_space;
        ipv4_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-limit")
    {
        upper_limit = value;
        upper_limit.value_namespace = name_space;
        upper_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-only")
    {
        map_only = value;
        map_only.value_namespace = name_space;
        map_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Export::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-type")
    {
        ipv4_type.yfilter = yfilter;
    }
    if(value_path == "upper-limit")
    {
        upper_limit.yfilter = yfilter;
    }
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
    if(value_path == "map-only")
    {
        map_only.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Export::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-type" || name == "upper-limit" || name == "map" || name == "map-only")
        return true;
    return false;
}

Native::Ip::Vrf::Import::Import()
    :
    map{YType::str, "map"}
        ,
    ipv4(std::make_shared<Native::Ip::Vrf::Import::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "import"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Vrf::Import::~Import()
{
}

bool Native::Ip::Vrf::Import::has_data() const
{
    if (is_presence_container) return true;
    return map.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Ip::Vrf::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Ip::Vrf::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Ip::Vrf::Import::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Ip::Vrf::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "map")
        return true;
    return false;
}

Native::Ip::Vrf::Import::Ipv4::Ipv4()
    :
    ipv4_type{YType::enumeration, "ipv4-type"},
    upper_limit{YType::uint32, "upper-limit"},
    map{YType::str, "map"}
{

    yang_name = "ipv4"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Vrf::Import::Ipv4::~Ipv4()
{
}

bool Native::Ip::Vrf::Import::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_type.is_set
	|| upper_limit.is_set
	|| map.is_set;
}

bool Native::Ip::Vrf::Import::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_type.yfilter)
	|| ydk::is_set(upper_limit.yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Ip::Vrf::Import::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Import::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_type.is_set || is_set(ipv4_type.yfilter)) leaf_name_data.push_back(ipv4_type.get_name_leafdata());
    if (upper_limit.is_set || is_set(upper_limit.yfilter)) leaf_name_data.push_back(upper_limit.get_name_leafdata());
    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Import::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Import::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Vrf::Import::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-type")
    {
        ipv4_type = value;
        ipv4_type.value_namespace = name_space;
        ipv4_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-limit")
    {
        upper_limit = value;
        upper_limit.value_namespace = name_space;
        upper_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Import::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-type")
    {
        ipv4_type.yfilter = yfilter;
    }
    if(value_path == "upper-limit")
    {
        upper_limit.yfilter = yfilter;
    }
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Import::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-type" || name == "upper-limit" || name == "map")
        return true;
    return false;
}

Native::Ip::Vrf::Maximum::Maximum()
    :
    routes{YType::uint32, "routes"},
    threshold{YType::uint16, "threshold"},
    reinstall{YType::uint16, "reinstall"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ip::Vrf::Maximum::~Maximum()
{
}

bool Native::Ip::Vrf::Maximum::has_data() const
{
    if (is_presence_container) return true;
    return routes.is_set
	|| threshold.is_set
	|| reinstall.is_set
	|| warning_only.is_set;
}

bool Native::Ip::Vrf::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(routes.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(reinstall.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Ip::Vrf::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routes.is_set || is_set(routes.yfilter)) leaf_name_data.push_back(routes.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (reinstall.is_set || is_set(reinstall.yfilter)) leaf_name_data.push_back(reinstall.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Vrf::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "routes")
    {
        routes = value;
        routes.value_namespace = name_space;
        routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reinstall")
    {
        reinstall = value;
        reinstall.value_namespace = name_space;
        reinstall.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "routes")
    {
        routes.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "reinstall")
    {
        reinstall.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "threshold" || name == "reinstall" || name == "warning-only")
        return true;
    return false;
}

Native::Ip::Vrf::Mdt::Mdt()
    :
    default_{YType::str, "default"},
    log_reuse{YType::empty, "log-reuse"}
        ,
    data(std::make_shared<Native::Ip::Vrf::Mdt::Data>())
{
    data->parent = this;

    yang_name = "mdt"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ip::Vrf::Mdt::~Mdt()
{
}

bool Native::Ip::Vrf::Mdt::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| log_reuse.is_set
	|| (data !=  nullptr && data->has_data());
}

bool Native::Ip::Vrf::Mdt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(log_reuse.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string Native::Ip::Vrf::Mdt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Mdt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (log_reuse.is_set || is_set(log_reuse.yfilter)) leaf_name_data.push_back(log_reuse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Mdt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Native::Ip::Vrf::Mdt::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Mdt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void Native::Ip::Vrf::Mdt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-reuse")
    {
        log_reuse = value;
        log_reuse.value_namespace = name_space;
        log_reuse.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Mdt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "log-reuse")
    {
        log_reuse.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Mdt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "default" || name == "log-reuse")
        return true;
    return false;
}

Native::Ip::Vrf::Mdt::Data::Data()
    :
    mulicast_address{YType::str, "mulicast-address"},
    wildcard_bits{YType::str, "wildcard-bits"},
    threshold{YType::uint32, "threshold"},
    threshold_list{YType::str, "threshold-list"},
    list{YType::str, "list"}
{

    yang_name = "data"; yang_parent_name = "mdt"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Vrf::Mdt::Data::~Data()
{
}

bool Native::Ip::Vrf::Mdt::Data::has_data() const
{
    if (is_presence_container) return true;
    return mulicast_address.is_set
	|| wildcard_bits.is_set
	|| threshold.is_set
	|| threshold_list.is_set
	|| list.is_set;
}

bool Native::Ip::Vrf::Mdt::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mulicast_address.yfilter)
	|| ydk::is_set(wildcard_bits.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold_list.yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Ip::Vrf::Mdt::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Mdt::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mulicast_address.is_set || is_set(mulicast_address.yfilter)) leaf_name_data.push_back(mulicast_address.get_name_leafdata());
    if (wildcard_bits.is_set || is_set(wildcard_bits.yfilter)) leaf_name_data.push_back(wildcard_bits.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold_list.is_set || is_set(threshold_list.yfilter)) leaf_name_data.push_back(threshold_list.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Mdt::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Mdt::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Vrf::Mdt::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mulicast-address")
    {
        mulicast_address = value;
        mulicast_address.value_namespace = name_space;
        mulicast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wildcard-bits")
    {
        wildcard_bits = value;
        wildcard_bits.value_namespace = name_space;
        wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-list")
    {
        threshold_list = value;
        threshold_list.value_namespace = name_space;
        threshold_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Mdt::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mulicast-address")
    {
        mulicast_address.yfilter = yfilter;
    }
    if(value_path == "wildcard-bits")
    {
        wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "threshold-list")
    {
        threshold_list.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Mdt::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mulicast-address" || name == "wildcard-bits" || name == "threshold" || name == "threshold-list" || name == "list")
        return true;
    return false;
}

Native::Ip::Vrf::RouteTarget::RouteTarget()
    :
    direction{YType::enumeration, "direction"},
    target{YType::str, "target"}
{

    yang_name = "route-target"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Vrf::RouteTarget::~RouteTarget()
{
}

bool Native::Ip::Vrf::RouteTarget::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| target.is_set;
}

bool Native::Ip::Vrf::RouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(target.yfilter);
}

std::string Native::Ip::Vrf::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    ADD_KEY_TOKEN(direction, "direction");
    ADD_KEY_TOKEN(target, "target");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (target.is_set || is_set(target.yfilter)) leaf_name_data.push_back(target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Vrf::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target")
    {
        target = value;
        target.value_namespace = name_space;
        target.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "target")
    {
        target.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "target")
        return true;
    return false;
}

Native::Ip::Vrf::Vpn::Vpn()
    :
    id{YType::str, "id"}
{

    yang_name = "vpn"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Vrf::Vpn::~Vpn()
{
}

bool Native::Ip::Vrf::Vpn::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool Native::Ip::Vrf::Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Ip::Vrf::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Vrf::Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::Ip::AsPath::AsPath()
    :
    access_list(this, {"name"})
{

    yang_name = "as-path"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::AsPath::~AsPath()
{
}

bool Native::Ip::AsPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list.len(); index++)
    {
        if(access_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AsPath::has_operation() const
{
    for (std::size_t index=0; index<access_list.len(); index++)
    {
        if(access_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::AsPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-bgp:access-list")
    {
        auto c = std::make_shared<Native::Ip::AsPath::AccessList>();
        c->parent = this;
        access_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : access_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::AsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Ip::AsPath::AccessList::AccessList()
    :
    name{YType::uint16, "name"}
        ,
    deny(std::make_shared<Native::Ip::AsPath::AccessList::Deny>())
    , permit(std::make_shared<Native::Ip::AsPath::AccessList::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "access-list"; yang_parent_name = "as-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::AsPath::AccessList::~AccessList()
{
}

bool Native::Ip::AsPath::AccessList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::AsPath::AccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::AsPath::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/as-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AsPath::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp:access-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AsPath::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AsPath::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::AsPath::AccessList::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::AsPath::AccessList::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AsPath::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::AsPath::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AsPath::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::AsPath::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "name")
        return true;
    return false;
}

Native::Ip::AsPath::AccessList::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AsPath::AccessList::Deny::~Deny()
{
}

bool Native::Ip::AsPath::AccessList::Deny::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::AsPath::AccessList::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::AsPath::AccessList::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AsPath::AccessList::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AsPath::AccessList::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AsPath::AccessList::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::AsPath::AccessList::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::AsPath::AccessList::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::AsPath::AccessList::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::AsPath::AccessList::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AsPath::AccessList::Permit::~Permit()
{
}

bool Native::Ip::AsPath::AccessList::Permit::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::AsPath::AccessList::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::AsPath::AccessList::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AsPath::AccessList::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AsPath::AccessList::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AsPath::AccessList::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::AsPath::AccessList::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::AsPath::AccessList::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::AsPath::AccessList::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::Local::Local()
    :
    pool(this, {"id"})
{

    yang_name = "local"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Local::~Local()
{
}

bool Native::Ip::Local::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Local::has_operation() const
{
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Local::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        auto c = std::make_shared<Native::Ip::Local::Pool>();
        c->parent = this;
        pool.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pool.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool")
        return true;
    return false;
}

Native::Ip::Local::Pool::Pool()
    :
    id{YType::str, "id"},
    start{YType::str, "start"},
    last{YType::str, "last"},
    group{YType::str, "group"}
{

    yang_name = "pool"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Local::Pool::~Pool()
{
}

bool Native::Ip::Local::Pool::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| start.is_set
	|| last.is_set
	|| group.is_set;
}

bool Native::Ip::Local::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Ip::Local::Pool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/local/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Local::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Local::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Local::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Local::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Local::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Local::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Ip::Local::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "start" || name == "last" || name == "group")
        return true;
    return false;
}

Native::Ip::Cef::Cef()
    :
    distributed{YType::empty, "Cisco-IOS-XE-cef:distributed"}
        ,
    accounting(std::make_shared<Native::Ip::Cef::Accounting>())
    , optimize(std::make_shared<Native::Ip::Cef::Optimize>())
    , traffic_statistics(std::make_shared<Native::Ip::Cef::TrafficStatistics>())
    , load_sharing(std::make_shared<Native::Ip::Cef::LoadSharing>())
{
    accounting->parent = this;
    optimize->parent = this;
    traffic_statistics->parent = this;
    load_sharing->parent = this;

    yang_name = "cef"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Cef::~Cef()
{
}

bool Native::Ip::Cef::has_data() const
{
    if (is_presence_container) return true;
    return distributed.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (optimize !=  nullptr && optimize->has_data())
	|| (traffic_statistics !=  nullptr && traffic_statistics->has_data())
	|| (load_sharing !=  nullptr && load_sharing->has_data());
}

bool Native::Ip::Cef::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distributed.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (optimize !=  nullptr && optimize->has_operation())
	|| (traffic_statistics !=  nullptr && traffic_statistics->has_operation())
	|| (load_sharing !=  nullptr && load_sharing->has_operation());
}

std::string Native::Ip::Cef::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cef";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distributed.is_set || is_set(distributed.yfilter)) leaf_name_data.push_back(distributed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-cef:accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Ip::Cef::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "Cisco-IOS-XE-cef:optimize")
    {
        if(optimize == nullptr)
        {
            optimize = std::make_shared<Native::Ip::Cef::Optimize>();
        }
        return optimize;
    }

    if(child_yang_name == "Cisco-IOS-XE-cef:traffic-statistics")
    {
        if(traffic_statistics == nullptr)
        {
            traffic_statistics = std::make_shared<Native::Ip::Cef::TrafficStatistics>();
        }
        return traffic_statistics;
    }

    if(child_yang_name == "Cisco-IOS-XE-cef:load-sharing")
    {
        if(load_sharing == nullptr)
        {
            load_sharing = std::make_shared<Native::Ip::Cef::LoadSharing>();
        }
        return load_sharing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(accounting != nullptr)
    {
        children["Cisco-IOS-XE-cef:accounting"] = accounting;
    }

    if(optimize != nullptr)
    {
        children["Cisco-IOS-XE-cef:optimize"] = optimize;
    }

    if(traffic_statistics != nullptr)
    {
        children["Cisco-IOS-XE-cef:traffic-statistics"] = traffic_statistics;
    }

    if(load_sharing != nullptr)
    {
        children["Cisco-IOS-XE-cef:load-sharing"] = load_sharing;
    }

    return children;
}

void Native::Ip::Cef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-cef:distributed")
    {
        distributed = value;
        distributed.value_namespace = name_space;
        distributed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distributed")
    {
        distributed.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "optimize" || name == "traffic-statistics" || name == "load-sharing" || name == "distributed")
        return true;
    return false;
}

Native::Ip::Cef::Accounting::Accounting()
    :
    per_prefix{YType::empty, "per-prefix"},
    non_recursive{YType::empty, "non-recursive"},
    prefix_length{YType::empty, "prefix-length"},
    load_balance_hash{YType::empty, "load-balance-hash"}
{

    yang_name = "accounting"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Cef::Accounting::~Accounting()
{
}

bool Native::Ip::Cef::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return per_prefix.is_set
	|| non_recursive.is_set
	|| prefix_length.is_set
	|| load_balance_hash.is_set;
}

bool Native::Ip::Cef::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_prefix.yfilter)
	|| ydk::is_set(non_recursive.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(load_balance_hash.yfilter);
}

std::string Native::Ip::Cef::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_prefix.is_set || is_set(per_prefix.yfilter)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (non_recursive.is_set || is_set(non_recursive.yfilter)) leaf_name_data.push_back(non_recursive.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (load_balance_hash.is_set || is_set(load_balance_hash.yfilter)) leaf_name_data.push_back(load_balance_hash.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Cef::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-prefix")
    {
        per_prefix = value;
        per_prefix.value_namespace = name_space;
        per_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-recursive")
    {
        non_recursive = value;
        non_recursive.value_namespace = name_space;
        non_recursive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-hash")
    {
        load_balance_hash = value;
        load_balance_hash.value_namespace = name_space;
        load_balance_hash.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-prefix")
    {
        per_prefix.yfilter = yfilter;
    }
    if(value_path == "non-recursive")
    {
        non_recursive.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "load-balance-hash")
    {
        load_balance_hash.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-prefix" || name == "non-recursive" || name == "prefix-length" || name == "load-balance-hash")
        return true;
    return false;
}

Native::Ip::Cef::Optimize::Optimize()
    :
    neighbor(std::make_shared<Native::Ip::Cef::Optimize::Neighbor>())
{
    neighbor->parent = this;

    yang_name = "optimize"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Cef::Optimize::~Optimize()
{
}

bool Native::Ip::Cef::Optimize::has_data() const
{
    if (is_presence_container) return true;
    return (neighbor !=  nullptr && neighbor->has_data());
}

bool Native::Ip::Cef::Optimize::has_operation() const
{
    return is_set(yfilter)
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string Native::Ip::Cef::Optimize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::Optimize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:optimize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::Optimize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::Optimize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Ip::Cef::Optimize::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::Optimize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void Native::Ip::Cef::Optimize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Cef::Optimize::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Cef::Optimize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Native::Ip::Cef::Optimize::Neighbor::Neighbor()
    :
    resolution{YType::empty, "resolution"}
{

    yang_name = "neighbor"; yang_parent_name = "optimize"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Cef::Optimize::Neighbor::~Neighbor()
{
}

bool Native::Ip::Cef::Optimize::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return resolution.is_set;
}

bool Native::Ip::Cef::Optimize::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(resolution.yfilter);
}

std::string Native::Ip::Cef::Optimize::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:optimize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::Optimize::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::Optimize::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resolution.is_set || is_set(resolution.yfilter)) leaf_name_data.push_back(resolution.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::Optimize::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::Optimize::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Cef::Optimize::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "resolution")
    {
        resolution = value;
        resolution.value_namespace = name_space;
        resolution.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::Optimize::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "resolution")
    {
        resolution.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::Optimize::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resolution")
        return true;
    return false;
}

Native::Ip::Cef::TrafficStatistics::TrafficStatistics()
    :
    load_interval{YType::uint16, "load-interval"},
    update_rate{YType::uint16, "update-rate"}
{

    yang_name = "traffic-statistics"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Cef::TrafficStatistics::~TrafficStatistics()
{
}

bool Native::Ip::Cef::TrafficStatistics::has_data() const
{
    if (is_presence_container) return true;
    return load_interval.is_set
	|| update_rate.is_set;
}

bool Native::Ip::Cef::TrafficStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(update_rate.yfilter);
}

std::string Native::Ip::Cef::TrafficStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::TrafficStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:traffic-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::TrafficStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.yfilter)) leaf_name_data.push_back(update_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::TrafficStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::TrafficStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Cef::TrafficStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
        update_rate.value_namespace = name_space;
        update_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::TrafficStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "update-rate")
    {
        update_rate.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::TrafficStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-interval" || name == "update-rate")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::LoadSharing()
    :
    algorithm(std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm>())
    , key_control(std::make_shared<Native::Ip::Cef::LoadSharing::KeyControl>())
{
    algorithm->parent = this;
    key_control->parent = this;

    yang_name = "load-sharing"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Cef::LoadSharing::~LoadSharing()
{
}

bool Native::Ip::Cef::LoadSharing::has_data() const
{
    if (is_presence_container) return true;
    return (algorithm !=  nullptr && algorithm->has_data())
	|| (key_control !=  nullptr && key_control->has_data());
}

bool Native::Ip::Cef::LoadSharing::has_operation() const
{
    return is_set(yfilter)
	|| (algorithm !=  nullptr && algorithm->has_operation())
	|| (key_control !=  nullptr && key_control->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:load-sharing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "key-control")
    {
        if(key_control == nullptr)
        {
            key_control = std::make_shared<Native::Ip::Cef::LoadSharing::KeyControl>();
        }
        return key_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(algorithm != nullptr)
    {
        children["algorithm"] = algorithm;
    }

    if(key_control != nullptr)
    {
        children["key-control"] = key_control;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Cef::LoadSharing::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Cef::LoadSharing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm" || name == "key-control")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::Algorithm()
    :
    universal(std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::Universal>())
    , tunnel(std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::Tunnel>())
    , original(std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::Original>())
    , include_ports(nullptr) // presence node
{
    universal->parent = this;
    tunnel->parent = this;
    original->parent = this;

    yang_name = "algorithm"; yang_parent_name = "load-sharing"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Cef::LoadSharing::Algorithm::~Algorithm()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::has_data() const
{
    if (is_presence_container) return true;
    return (universal !=  nullptr && universal->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (original !=  nullptr && original->has_data())
	|| (include_ports !=  nullptr && include_ports->has_data());
}

bool Native::Ip::Cef::LoadSharing::Algorithm::has_operation() const
{
    return is_set(yfilter)
	|| (universal !=  nullptr && universal->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (original !=  nullptr && original->has_operation())
	|| (include_ports !=  nullptr && include_ports->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "universal")
    {
        if(universal == nullptr)
        {
            universal = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::Universal>();
        }
        return universal;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::Tunnel>();
        }
        return tunnel;
    }

    if(child_yang_name == "original")
    {
        if(original == nullptr)
        {
            original = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::Original>();
        }
        return original;
    }

    if(child_yang_name == "include-ports")
    {
        if(include_ports == nullptr)
        {
            include_ports = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts>();
        }
        return include_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(universal != nullptr)
    {
        children["universal"] = universal;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    if(original != nullptr)
    {
        children["original"] = original;
    }

    if(include_ports != nullptr)
    {
        children["include-ports"] = include_ports;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Cef::LoadSharing::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "universal" || name == "tunnel" || name == "original" || name == "include-ports")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::Universal::Universal()
    :
    universal{YType::empty, "universal"},
    fixed_id{YType::str, "fixed-id"}
{

    yang_name = "universal"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Cef::LoadSharing::Algorithm::Universal::~Universal()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Universal::has_data() const
{
    if (is_presence_container) return true;
    return universal.is_set
	|| fixed_id.is_set;
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Universal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(universal.yfilter)
	|| ydk::is_set(fixed_id.yfilter);
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::Universal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::Universal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "universal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::Universal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (universal.is_set || is_set(universal.yfilter)) leaf_name_data.push_back(universal.get_name_leafdata());
    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::Universal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::Universal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::Universal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "universal")
    {
        universal = value;
        universal.value_namespace = name_space;
        universal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::Universal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "universal")
    {
        universal.yfilter = yfilter;
    }
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Universal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "universal" || name == "fixed-id")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::Tunnel()
    :
    tunnel{YType::empty, "tunnel"},
    fixed_id{YType::str, "fixed-id"}
{

    yang_name = "tunnel"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::~Tunnel()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return tunnel.is_set
	|| fixed_id.is_set;
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(fixed_id.yfilter);
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel" || name == "fixed-id")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::Original::Original()
    :
    original{YType::empty, "original"}
{

    yang_name = "original"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Cef::LoadSharing::Algorithm::Original::~Original()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Original::has_data() const
{
    if (is_presence_container) return true;
    return original.is_set;
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Original::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(original.yfilter);
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::Original::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::Original::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::Original::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (original.is_set || is_set(original.yfilter)) leaf_name_data.push_back(original.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::Original::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::Original::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::Original::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "original")
    {
        original = value;
        original.value_namespace = name_space;
        original.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::Original::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "original")
    {
        original.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Original::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "original")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::IncludePorts()
    :
    destination(nullptr) // presence node
    , source(nullptr) // presence node
{

    yang_name = "include-ports"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::~IncludePorts()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::has_data() const
{
    if (is_presence_container) return true;
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::Destination()
    :
    fixed_id{YType::str, "fixed-id"}
{

    yang_name = "destination"; yang_parent_name = "include-ports"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::~Destination()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::has_data() const
{
    if (is_presence_container) return true;
    return fixed_id.is_set;
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter);
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-id")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Source()
    :
    fixed_id{YType::str, "fixed-id"}
        ,
    destination(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "include-ports"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::~Source()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::has_data() const
{
    if (is_presence_container) return true;
    return fixed_id.is_set
	|| (destination !=  nullptr && destination->has_data());
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "fixed-id")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Destination()
    :
    fixed_id{YType::str, "fixed-id"}
        ,
    gtp(nullptr) // presence node
{

    yang_name = "destination"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::~Destination()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::has_data() const
{
    if (is_presence_container) return true;
    return fixed_id.is_set
	|| (gtp !=  nullptr && gtp->has_data());
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter)
	|| (gtp !=  nullptr && gtp->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gtp")
    {
        if(gtp == nullptr)
        {
            gtp = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp>();
        }
        return gtp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gtp != nullptr)
    {
        children["gtp"] = gtp;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gtp" || name == "fixed-id")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::Gtp()
    :
    fixed_id{YType::str, "fixed-id"}
{

    yang_name = "gtp"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::~Gtp()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::has_data() const
{
    if (is_presence_container) return true;
    return fixed_id.is_set;
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter);
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/source/destination/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-id")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::KeyControl::KeyControl()
{

    yang_name = "key-control"; yang_parent_name = "load-sharing"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Cef::LoadSharing::KeyControl::~KeyControl()
{
}

bool Native::Ip::Cef::LoadSharing::KeyControl::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Ip::Cef::LoadSharing::KeyControl::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Ip::Cef::LoadSharing::KeyControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::KeyControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::KeyControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::KeyControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::KeyControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Cef::LoadSharing::KeyControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Cef::LoadSharing::KeyControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Cef::LoadSharing::KeyControl::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Ip::Domain::Domain()
    :
    lookup{YType::boolean, "lookup"},
    name{YType::str, "name"}
        ,
    list(std::make_shared<Native::Ip::Domain::List>())
    , lookup_settings(std::make_shared<Native::Ip::Domain::LookupSettings>())
{
    list->parent = this;
    lookup_settings->parent = this;

    yang_name = "domain"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Domain::~Domain()
{
}

bool Native::Ip::Domain::has_data() const
{
    if (is_presence_container) return true;
    return lookup.is_set
	|| name.is_set
	|| (list !=  nullptr && list->has_data())
	|| (lookup_settings !=  nullptr && lookup_settings->has_data());
}

bool Native::Ip::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lookup.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (list !=  nullptr && list->has_operation())
	|| (lookup_settings !=  nullptr && lookup_settings->has_operation());
}

std::string Native::Ip::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lookup.is_set || is_set(lookup.yfilter)) leaf_name_data.push_back(lookup.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Ip::Domain::List>();
        }
        return list;
    }

    if(child_yang_name == "lookup-settings")
    {
        if(lookup_settings == nullptr)
        {
            lookup_settings = std::make_shared<Native::Ip::Domain::LookupSettings>();
        }
        return lookup_settings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(lookup_settings != nullptr)
    {
        children["lookup-settings"] = lookup_settings;
    }

    return children;
}

void Native::Ip::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lookup")
    {
        lookup = value;
        lookup.value_namespace = name_space;
        lookup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lookup")
    {
        lookup.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "lookup-settings" || name == "lookup" || name == "name")
        return true;
    return false;
}

Native::Ip::Domain::List::List()
    :
    domain_name{YType::str, "domain-name"}
        ,
    vrf(std::make_shared<Native::Ip::Domain::List::Vrf>())
{
    vrf->parent = this;

    yang_name = "list"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Domain::List::~List()
{
}

bool Native::Ip::Domain::List::has_data() const
{
    if (is_presence_container) return true;
    return domain_name.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Ip::Domain::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Ip::Domain::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Ip::Domain::List::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Ip::Domain::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "domain-name")
        return true;
    return false;
}

Native::Ip::Domain::List::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    domain_name{YType::str, "domain-name"}
{

    yang_name = "vrf"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Domain::List::Vrf::~Vrf()
{
}

bool Native::Ip::Domain::List::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| domain_name.is_set;
}

bool Native::Ip::Domain::List::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(domain_name.yfilter);
}

std::string Native::Ip::Domain::List::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::List::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::List::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::List::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::List::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Domain::List::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::List::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::List::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "domain-name")
        return true;
    return false;
}

Native::Ip::Domain::LookupSettings::LookupSettings()
    :
    name{YType::str, "name"}
        ,
    lookup(std::make_shared<Native::Ip::Domain::LookupSettings::Lookup>())
{
    lookup->parent = this;

    yang_name = "lookup-settings"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Domain::LookupSettings::~LookupSettings()
{
}

bool Native::Ip::Domain::LookupSettings::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (lookup !=  nullptr && lookup->has_data());
}

bool Native::Ip::Domain::LookupSettings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (lookup !=  nullptr && lookup->has_operation());
}

std::string Native::Ip::Domain::LookupSettings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::LookupSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lookup-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::LookupSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lookup")
    {
        if(lookup == nullptr)
        {
            lookup = std::make_shared<Native::Ip::Domain::LookupSettings::Lookup>();
        }
        return lookup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lookup != nullptr)
    {
        children["lookup"] = lookup;
    }

    return children;
}

void Native::Ip::Domain::LookupSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::LookupSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::LookupSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lookup" || name == "name")
        return true;
    return false;
}

Native::Ip::Domain::LookupSettings::Lookup::Lookup()
    :
    nsap{YType::empty, "nsap"}
        ,
    source_interface(std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface>())
{
    source_interface->parent = this;

    yang_name = "lookup"; yang_parent_name = "lookup-settings"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Domain::LookupSettings::Lookup::~Lookup()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::has_data() const
{
    if (is_presence_container) return true;
    return nsap.is_set
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::Domain::LookupSettings::Lookup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsap.yfilter)
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::Domain::LookupSettings::Lookup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::LookupSettings::Lookup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lookup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::LookupSettings::Lookup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsap.is_set || is_set(nsap.yfilter)) leaf_name_data.push_back(nsap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::Lookup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::Lookup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Ip::Domain::LookupSettings::Lookup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsap")
    {
        nsap = value;
        nsap.value_namespace = name_space;
        nsap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::LookupSettings::Lookup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsap")
    {
        nsap.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::LookupSettings::Lookup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface" || name == "nsap")
        return true;
    return false;
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::SourceInterface()
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
    atm_subinterface(std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "lookup"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::has_data() const
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

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::has_operation() const
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

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/lookup/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::DomainLookupConf::DomainLookupConf()
    :
    domain_lookup{YType::boolean, "domain-lookup"}
{

    yang_name = "domain-lookup-conf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::DomainLookupConf::~DomainLookupConf()
{
}

bool Native::Ip::DomainLookupConf::has_data() const
{
    if (is_presence_container) return true;
    return domain_lookup.is_set;
}

bool Native::Ip::DomainLookupConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_lookup.yfilter);
}

std::string Native::Ip::DomainLookupConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookupConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-lookup-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookupConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_lookup.is_set || is_set(domain_lookup.yfilter)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::DomainLookupConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookupConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::DomainLookupConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
        domain_lookup.value_namespace = name_space;
        domain_lookup.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookupConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-lookup")
    {
        domain_lookup.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookupConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-lookup")
        return true;
    return false;
}

Native::Ip::DomainLookup::DomainLookup()
    :
    nsap{YType::empty, "nsap"}
        ,
    source_interface(std::make_shared<Native::Ip::DomainLookup::SourceInterface>())
{
    source_interface->parent = this;

    yang_name = "domain-lookup"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::DomainLookup::~DomainLookup()
{
}

bool Native::Ip::DomainLookup::has_data() const
{
    if (is_presence_container) return true;
    return nsap.is_set
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::DomainLookup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsap.yfilter)
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::DomainLookup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-lookup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsap.is_set || is_set(nsap.yfilter)) leaf_name_data.push_back(nsap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::DomainLookup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::DomainLookup::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Ip::DomainLookup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsap")
    {
        nsap = value;
        nsap.value_namespace = name_space;
        nsap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsap")
    {
        nsap.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface" || name == "nsap")
        return true;
    return false;
}

Native::Ip::DomainLookup::SourceInterface::SourceInterface()
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
    atm_subinterface(std::make_shared<Native::Ip::DomainLookup::SourceInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Ip::DomainLookup::SourceInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "domain-lookup"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::DomainLookup::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::has_data() const
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

bool Native::Ip::DomainLookup::SourceInterface::has_operation() const
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

std::string Native::Ip::DomainLookup::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookup::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookup::SourceInterface::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Ip::DomainLookup::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::DomainLookup::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::DomainLookup::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookup::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Ip::DomainLookup::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::DomainLookup::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::DomainLookup::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Dns::Dns()
    :
    server(nullptr) // presence node
{

    yang_name = "dns"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dns::~Dns()
{
}

bool Native::Ip::Dns::has_data() const
{
    if (is_presence_container) return true;
    return (server !=  nullptr && server->has_data());
}

bool Native::Ip::Dns::has_operation() const
{
    return is_set(yfilter)
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Ip::Dns::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ip::Dns::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Ip::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Ip::Dns::Server::Server()
{

    yang_name = "server"; yang_parent_name = "dns"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Dns::Server::~Server()
{
}

bool Native::Ip::Dns::Server::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Ip::Dns::Server::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Ip::Dns::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dns/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dns::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dns::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dns::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dns::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Dns::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dns::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dns::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Ip::Dhcp::Dhcp()
    :
    smart_relay{YType::empty, "Cisco-IOS-XE-dhcp:smart-relay"}
        ,
    bootp(std::make_shared<Native::Ip::Dhcp::Bootp>())
    , class_(this, {"id"})
    , conflict(std::make_shared<Native::Ip::Dhcp::Conflict>())
    , excluded_address(this, {"low_address"})
    , relay(std::make_shared<Native::Ip::Dhcp::Relay>())
    , pool(this, {"id"})
    , snooping_conf(std::make_shared<Native::Ip::Dhcp::SnoopingConf>())
    , snooping(std::make_shared<Native::Ip::Dhcp::Snooping>())
{
    bootp->parent = this;
    conflict->parent = this;
    relay->parent = this;
    snooping_conf->parent = this;
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::~Dhcp()
{
}

bool Native::Ip::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<excluded_address.len(); index++)
    {
        if(excluded_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return smart_relay.is_set
	|| (bootp !=  nullptr && bootp->has_data())
	|| (conflict !=  nullptr && conflict->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (snooping_conf !=  nullptr && snooping_conf->has_data())
	|| (snooping !=  nullptr && snooping->has_data());
}

bool Native::Ip::Dhcp::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<excluded_address.len(); index++)
    {
        if(excluded_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(smart_relay.yfilter)
	|| (bootp !=  nullptr && bootp->has_operation())
	|| (conflict !=  nullptr && conflict->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (snooping_conf !=  nullptr && snooping_conf->has_operation())
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Ip::Dhcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (smart_relay.is_set || is_set(smart_relay.yfilter)) leaf_name_data.push_back(smart_relay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-dhcp:bootp")
    {
        if(bootp == nullptr)
        {
            bootp = std::make_shared<Native::Ip::Dhcp::Bootp>();
        }
        return bootp;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:class")
    {
        auto c = std::make_shared<Native::Ip::Dhcp::Class>();
        c->parent = this;
        class_.append(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:conflict")
    {
        if(conflict == nullptr)
        {
            conflict = std::make_shared<Native::Ip::Dhcp::Conflict>();
        }
        return conflict;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:excluded-address")
    {
        auto c = std::make_shared<Native::Ip::Dhcp::ExcludedAddress>();
        c->parent = this;
        excluded_address.append(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:pool")
    {
        auto c = std::make_shared<Native::Ip::Dhcp::Pool>();
        c->parent = this;
        pool.append(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:snooping-conf")
    {
        if(snooping_conf == nullptr)
        {
            snooping_conf = std::make_shared<Native::Ip::Dhcp::SnoopingConf>();
        }
        return snooping_conf;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bootp != nullptr)
    {
        children["Cisco-IOS-XE-dhcp:bootp"] = bootp;
    }

    count = 0;
    for (auto c : class_.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(conflict != nullptr)
    {
        children["Cisco-IOS-XE-dhcp:conflict"] = conflict;
    }

    count = 0;
    for (auto c : excluded_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(relay != nullptr)
    {
        children["Cisco-IOS-XE-dhcp:relay"] = relay;
    }

    count = 0;
    for (auto c : pool.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(snooping_conf != nullptr)
    {
        children["Cisco-IOS-XE-dhcp:snooping-conf"] = snooping_conf;
    }

    if(snooping != nullptr)
    {
        children["Cisco-IOS-XE-dhcp:snooping"] = snooping;
    }

    return children;
}

void Native::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-dhcp:smart-relay")
    {
        smart_relay = value;
        smart_relay.value_namespace = name_space;
        smart_relay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "smart-relay")
    {
        smart_relay.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootp" || name == "class" || name == "conflict" || name == "excluded-address" || name == "relay" || name == "pool" || name == "snooping-conf" || name == "snooping" || name == "smart-relay")
        return true;
    return false;
}

Native::Ip::Dhcp::Bootp::Bootp()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "bootp"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Bootp::~Bootp()
{
}

bool Native::Ip::Dhcp::Bootp::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set;
}

bool Native::Ip::Dhcp::Bootp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Ip::Dhcp::Bootp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Bootp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:bootp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Bootp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Bootp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Bootp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Dhcp::Bootp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Bootp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Bootp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Ip::Dhcp::Class::Class()
    :
    id{YType::str, "id"},
    remark{YType::str, "remark"}
        ,
    relay(std::make_shared<Native::Ip::Dhcp::Class::Relay>())
{
    relay->parent = this;

    yang_name = "class"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Class::~Class()
{
}

bool Native::Ip::Dhcp::Class::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| remark.is_set
	|| (relay !=  nullptr && relay->has_data());
}

bool Native::Ip::Dhcp::Class::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (relay !=  nullptr && relay->has_operation());
}

std::string Native::Ip::Dhcp::Class::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:class";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Ip::Dhcp::Class::Relay>();
        }
        return relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    return children;
}

void Native::Ip::Dhcp::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relay" || name == "id" || name == "remark")
        return true;
    return false;
}

Native::Ip::Dhcp::Class::Relay::Relay()
    :
    agent(std::make_shared<Native::Ip::Dhcp::Class::Relay::Agent>())
{
    agent->parent = this;

    yang_name = "relay"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Class::Relay::~Relay()
{
}

bool Native::Ip::Dhcp::Class::Relay::has_data() const
{
    if (is_presence_container) return true;
    return (agent !=  nullptr && agent->has_data());
}

bool Native::Ip::Dhcp::Class::Relay::has_operation() const
{
    return is_set(yfilter)
	|| (agent !=  nullptr && agent->has_operation());
}

std::string Native::Ip::Dhcp::Class::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Class::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Class::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agent")
    {
        if(agent == nullptr)
        {
            agent = std::make_shared<Native::Ip::Dhcp::Class::Relay::Agent>();
        }
        return agent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Class::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(agent != nullptr)
    {
        children["agent"] = agent;
    }

    return children;
}

void Native::Ip::Dhcp::Class::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Class::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Class::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent")
        return true;
    return false;
}

Native::Ip::Dhcp::Class::Relay::Agent::Agent()
    :
    information{YType::empty, "information"}
{

    yang_name = "agent"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Class::Relay::Agent::~Agent()
{
}

bool Native::Ip::Dhcp::Class::Relay::Agent::has_data() const
{
    if (is_presence_container) return true;
    return information.is_set;
}

bool Native::Ip::Dhcp::Class::Relay::Agent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(information.yfilter);
}

std::string Native::Ip::Dhcp::Class::Relay::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Class::Relay::Agent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (information.is_set || is_set(information.yfilter)) leaf_name_data.push_back(information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Class::Relay::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Class::Relay::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Dhcp::Class::Relay::Agent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "information")
    {
        information = value;
        information.value_namespace = name_space;
        information.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Class::Relay::Agent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "information")
    {
        information.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Class::Relay::Agent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information")
        return true;
    return false;
}

Native::Ip::Dhcp::Conflict::Conflict()
    :
    logging{YType::boolean, "logging"}
        ,
    resolution(nullptr) // presence node
{

    yang_name = "conflict"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Conflict::~Conflict()
{
}

bool Native::Ip::Dhcp::Conflict::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| (resolution !=  nullptr && resolution->has_data());
}

bool Native::Ip::Dhcp::Conflict::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| (resolution !=  nullptr && resolution->has_operation());
}

std::string Native::Ip::Dhcp::Conflict::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Conflict::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:conflict";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Conflict::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Conflict::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resolution")
    {
        if(resolution == nullptr)
        {
            resolution = std::make_shared<Native::Ip::Dhcp::Conflict::Resolution>();
        }
        return resolution;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Conflict::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(resolution != nullptr)
    {
        children["resolution"] = resolution;
    }

    return children;
}

void Native::Ip::Dhcp::Conflict::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Conflict::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Conflict::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resolution" || name == "logging")
        return true;
    return false;
}

Native::Ip::Dhcp::Conflict::Resolution::Resolution()
    :
    interval{YType::uint32, "interval"}
{

    yang_name = "resolution"; yang_parent_name = "conflict"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Dhcp::Conflict::Resolution::~Resolution()
{
}

bool Native::Ip::Dhcp::Conflict::Resolution::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Ip::Dhcp::Conflict::Resolution::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Dhcp::Conflict::Resolution::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:conflict/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Conflict::Resolution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resolution";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Conflict::Resolution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Conflict::Resolution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Conflict::Resolution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Dhcp::Conflict::Resolution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Conflict::Resolution::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Conflict::Resolution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Ip::Dhcp::ExcludedAddress::ExcludedAddress()
    :
    low_address{YType::str, "low-address"},
    vrf{YType::str, "vrf"},
    high_address{YType::str, "high-address"}
{

    yang_name = "excluded-address"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::ExcludedAddress::~ExcludedAddress()
{
}

bool Native::Ip::Dhcp::ExcludedAddress::has_data() const
{
    if (is_presence_container) return true;
    return low_address.is_set
	|| vrf.is_set
	|| high_address.is_set;
}

bool Native::Ip::Dhcp::ExcludedAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low_address.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(high_address.yfilter);
}

std::string Native::Ip::Dhcp::ExcludedAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::ExcludedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:excluded-address";
    ADD_KEY_TOKEN(low_address, "low-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::ExcludedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low_address.is_set || is_set(low_address.yfilter)) leaf_name_data.push_back(low_address.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (high_address.is_set || is_set(high_address.yfilter)) leaf_name_data.push_back(high_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::ExcludedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::ExcludedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Dhcp::ExcludedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low-address")
    {
        low_address = value;
        low_address.value_namespace = name_space;
        low_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-address")
    {
        high_address = value;
        high_address.value_namespace = name_space;
        high_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::ExcludedAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low-address")
    {
        low_address.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "high-address")
    {
        high_address.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::ExcludedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "low-address" || name == "vrf" || name == "high-address")
        return true;
    return false;
}

Native::Ip::Dhcp::Relay::Relay()
    :
    information(std::make_shared<Native::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Ip::Dhcp::Relay::has_data() const
{
    if (is_presence_container) return true;
    return (information !=  nullptr && information->has_data());
}

bool Native::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Ip::Dhcp::Relay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Ip::Dhcp::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information")
        return true;
    return false;
}

Native::Ip::Dhcp::Relay::Information::Information()
    :
    trust_all{YType::empty, "trust-all"}
        ,
    option(std::make_shared<Native::Ip::Dhcp::Relay::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Ip::Dhcp::Relay::Information::has_data() const
{
    if (is_presence_container) return true;
    return trust_all.is_set
	|| (option !=  nullptr && option->has_data());
}

bool Native::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust_all.yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Ip::Dhcp::Relay::Information::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:relay/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Relay::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust_all.is_set || is_set(trust_all.yfilter)) leaf_name_data.push_back(trust_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust-all")
    {
        trust_all = value;
        trust_all.value_namespace = name_space;
        trust_all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Relay::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust-all")
    {
        trust_all.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Relay::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "trust-all")
        return true;
    return false;
}

Native::Ip::Dhcp::Relay::Information::Option::Option()
    :
    option_default{YType::empty, "option-default"},
    vpn{YType::empty, "vpn"}
{

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    if (is_presence_container) return true;
    return option_default.is_set
	|| vpn.is_set;
}

bool Native::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option_default.yfilter)
	|| ydk::is_set(vpn.yfilter);
}

std::string Native::Ip::Dhcp::Relay::Information::Option::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:relay/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Relay::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_default.is_set || is_set(option_default.yfilter)) leaf_name_data.push_back(option_default.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.yfilter)) leaf_name_data.push_back(vpn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-default")
    {
        option_default = value;
        option_default.value_namespace = name_space;
        option_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn")
    {
        vpn = value;
        vpn.value_namespace = name_space;
        vpn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Relay::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-default")
    {
        option_default.yfilter = yfilter;
    }
    if(value_path == "vpn")
    {
        vpn.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Relay::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-default" || name == "vpn")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Pool()
    :
    id{YType::str, "id"},
    vrf{YType::str, "vrf"},
    default_router{YType::str, "default-router"},
    dns_server{YType::str, "dns-server"},
    domain_name{YType::str, "domain-name"},
    client_identifier{YType::str, "client-identifier"},
    client_name{YType::str, "client-name"}
        ,
    option(std::make_shared<Native::Ip::Dhcp::Pool::Option>())
    , class_(this, {"name"})
    , lease(this, {"days"})
    , network(std::make_shared<Native::Ip::Dhcp::Pool::Network>())
    , host(std::make_shared<Native::Ip::Dhcp::Pool::Host>())
    , hardware_address(std::make_shared<Native::Ip::Dhcp::Pool::HardwareAddress>())
{
    option->parent = this;
    network->parent = this;
    host->parent = this;
    hardware_address->parent = this;

    yang_name = "pool"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Pool::~Pool()
{
}

bool Native::Ip::Dhcp::Pool::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lease.len(); index++)
    {
        if(lease[index]->has_data())
            return true;
    }
    for (auto const & leaf : default_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set
	|| vrf.is_set
	|| domain_name.is_set
	|| client_identifier.is_set
	|| client_name.is_set
	|| (option !=  nullptr && option->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (host !=  nullptr && host->has_data())
	|| (hardware_address !=  nullptr && hardware_address->has_data());
}

bool Native::Ip::Dhcp::Pool::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lease.len(); index++)
    {
        if(lease[index]->has_operation())
            return true;
    }
    for (auto const & leaf : default_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(default_router.yfilter)
	|| ydk::is_set(dns_server.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(client_identifier.yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| (option !=  nullptr && option->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (host !=  nullptr && host->has_operation())
	|| (hardware_address !=  nullptr && hardware_address->has_operation());
}

std::string Native::Ip::Dhcp::Pool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:pool";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (client_identifier.is_set || is_set(client_identifier.yfilter)) leaf_name_data.push_back(client_identifier.get_name_leafdata());
    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());

    auto default_router_name_datas = default_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), default_router_name_datas.begin(), default_router_name_datas.end());
    auto dns_server_name_datas = dns_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_server_name_datas.begin(), dns_server_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Ip::Dhcp::Pool::Option>();
        }
        return option;
    }

    if(child_yang_name == "class")
    {
        auto c = std::make_shared<Native::Ip::Dhcp::Pool::Class>();
        c->parent = this;
        class_.append(c);
        return c;
    }

    if(child_yang_name == "lease")
    {
        auto c = std::make_shared<Native::Ip::Dhcp::Pool::Lease>();
        c->parent = this;
        lease.append(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Ip::Dhcp::Pool::Network>();
        }
        return network;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Ip::Dhcp::Pool::Host>();
        }
        return host;
    }

    if(child_yang_name == "hardware-address")
    {
        if(hardware_address == nullptr)
        {
            hardware_address = std::make_shared<Native::Ip::Dhcp::Pool::HardwareAddress>();
        }
        return hardware_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(option != nullptr)
    {
        children["option"] = option;
    }

    count = 0;
    for (auto c : class_.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : lease.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    if(hardware_address != nullptr)
    {
        children["hardware-address"] = hardware_address;
    }

    return children;
}

void Native::Ip::Dhcp::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-router")
    {
        default_router.append(value);
    }
    if(value_path == "dns-server")
    {
        dns_server.append(value);
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-identifier")
    {
        client_identifier = value;
        client_identifier.value_namespace = name_space;
        client_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "default-router")
    {
        default_router.yfilter = yfilter;
    }
    if(value_path == "dns-server")
    {
        dns_server.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "client-identifier")
    {
        client_identifier.yfilter = yfilter;
    }
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "class" || name == "lease" || name == "network" || name == "host" || name == "hardware-address" || name == "id" || name == "vrf" || name == "default-router" || name == "dns-server" || name == "domain-name" || name == "client-identifier" || name == "client-name")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Option::Option()
    :
    option_range(this, {"option_range"})
{

    yang_name = "option"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Option::~Option()
{
}

bool Native::Ip::Dhcp::Pool::Option::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<option_range.len(); index++)
    {
        if(option_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Dhcp::Pool::Option::has_operation() const
{
    for (std::size_t index=0; index<option_range.len(); index++)
    {
        if(option_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Dhcp::Pool::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option-range")
    {
        auto c = std::make_shared<Native::Ip::Dhcp::Pool::Option::OptionRange>();
        c->parent = this;
        option_range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : option_range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Dhcp::Pool::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Pool::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Pool::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-range")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Option::OptionRange::OptionRange()
    :
    option_range{YType::uint8, "option-range"},
    ascii{YType::str, "ascii"},
    ip{YType::str, "ip"}
        ,
    hex(std::make_shared<Native::Ip::Dhcp::Pool::Option::OptionRange::Hex>())
{
    hex->parent = this;

    yang_name = "option-range"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Option::OptionRange::~OptionRange()
{
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ip.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return option_range.is_set
	|| ascii.is_set
	|| (hex !=  nullptr && hex->has_data());
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::has_operation() const
{
    for (auto const & leaf : ip.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option_range.yfilter)
	|| ydk::is_set(ascii.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (hex !=  nullptr && hex->has_operation());
}

std::string Native::Ip::Dhcp::Pool::Option::OptionRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-range";
    ADD_KEY_TOKEN(option_range, "option-range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Option::OptionRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_range.is_set || is_set(option_range.yfilter)) leaf_name_data.push_back(option_range.get_name_leafdata());
    if (ascii.is_set || is_set(ascii.yfilter)) leaf_name_data.push_back(ascii.get_name_leafdata());

    auto ip_name_datas = ip.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ip_name_datas.begin(), ip_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Option::OptionRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hex")
    {
        if(hex == nullptr)
        {
            hex = std::make_shared<Native::Ip::Dhcp::Pool::Option::OptionRange::Hex>();
        }
        return hex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Option::OptionRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hex != nullptr)
    {
        children["hex"] = hex;
    }

    return children;
}

void Native::Ip::Dhcp::Pool::Option::OptionRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-range")
    {
        option_range = value;
        option_range.value_namespace = name_space;
        option_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ascii")
    {
        ascii = value;
        ascii.value_namespace = name_space;
        ascii.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip.append(value);
    }
}

void Native::Ip::Dhcp::Pool::Option::OptionRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-range")
    {
        option_range.yfilter = yfilter;
    }
    if(value_path == "ascii")
    {
        ascii.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex" || name == "option-range" || name == "ascii" || name == "ip")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::Hex()
    :
    hex_line{YType::str, "hex-line"},
    none{YType::empty, "none"}
{

    yang_name = "hex"; yang_parent_name = "option-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::~Hex()
{
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::has_data() const
{
    if (is_presence_container) return true;
    return hex_line.is_set
	|| none.is_set;
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_line.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_line.is_set || is_set(hex_line.yfilter)) leaf_name_data.push_back(hex_line.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex-line")
    {
        hex_line = value;
        hex_line.value_namespace = name_space;
        hex_line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex-line")
    {
        hex_line.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex-line" || name == "none")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Class::Class()
    :
    name{YType::str, "name"}
        ,
    address(std::make_shared<Native::Ip::Dhcp::Pool::Class::Address>())
{
    address->parent = this;

    yang_name = "class"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Class::~Class()
{
}

bool Native::Ip::Dhcp::Pool::Class::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Ip::Dhcp::Pool::Class::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Ip::Dhcp::Pool::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Ip::Dhcp::Pool::Class::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Ip::Dhcp::Pool::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Class::Address::Address()
    :
    range(std::make_shared<Native::Ip::Dhcp::Pool::Class::Address::Range>())
{
    range->parent = this;

    yang_name = "address"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Class::Address::~Address()
{
}

bool Native::Ip::Dhcp::Pool::Class::Address::has_data() const
{
    if (is_presence_container) return true;
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Dhcp::Pool::Class::Address::has_operation() const
{
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Dhcp::Pool::Class::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Class::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Class::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Dhcp::Pool::Class::Address::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Class::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::Dhcp::Pool::Class::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Pool::Class::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Pool::Class::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Class::Address::Range::Range()
    :
    ipv4_start{YType::str, "ipv4-start"},
    ipv4_end{YType::str, "ipv4-end"}
{

    yang_name = "range"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Class::Address::Range::~Range()
{
}

bool Native::Ip::Dhcp::Pool::Class::Address::Range::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_start.is_set
	|| ipv4_end.is_set;
}

bool Native::Ip::Dhcp::Pool::Class::Address::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_start.yfilter)
	|| ydk::is_set(ipv4_end.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Class::Address::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Class::Address::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_start.is_set || is_set(ipv4_start.yfilter)) leaf_name_data.push_back(ipv4_start.get_name_leafdata());
    if (ipv4_end.is_set || is_set(ipv4_end.yfilter)) leaf_name_data.push_back(ipv4_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Class::Address::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Class::Address::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Dhcp::Pool::Class::Address::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-start")
    {
        ipv4_start = value;
        ipv4_start.value_namespace = name_space;
        ipv4_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-end")
    {
        ipv4_end = value;
        ipv4_end.value_namespace = name_space;
        ipv4_end.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Class::Address::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-start")
    {
        ipv4_start.yfilter = yfilter;
    }
    if(value_path == "ipv4-end")
    {
        ipv4_end.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Class::Address::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-start" || name == "ipv4-end")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Lease::Lease()
    :
    days{YType::uint16, "Days"},
    hours{YType::uint8, "Hours"},
    minutes{YType::uint8, "Minutes"}
{

    yang_name = "lease"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Lease::~Lease()
{
}

bool Native::Ip::Dhcp::Pool::Lease::has_data() const
{
    if (is_presence_container) return true;
    return days.is_set
	|| hours.is_set
	|| minutes.is_set;
}

bool Native::Ip::Dhcp::Pool::Lease::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Lease::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease";
    ADD_KEY_TOKEN(days, "Days");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Lease::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Lease::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Lease::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Dhcp::Pool::Lease::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Lease::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "Hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "Minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Lease::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Days" || name == "Hours" || name == "Minutes")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Network::Network()
    :
    number{YType::str, "number"},
    mask{YType::str, "mask"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "network"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Network::~Network()
{
}

bool Native::Ip::Dhcp::Pool::Network::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| mask.is_set
	|| secondary.is_set;
}

bool Native::Ip::Dhcp::Pool::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Dhcp::Pool::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "mask" || name == "secondary")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Host::Host()
    :
    number{YType::str, "number"},
    mask{YType::str, "mask"}
{

    yang_name = "host"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Host::~Host()
{
}

bool Native::Ip::Dhcp::Pool::Host::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| mask.is_set;
}

bool Native::Ip::Dhcp::Pool::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Dhcp::Pool::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "mask")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::HardwareAddress::HardwareAddress()
    :
    hardware_address_val{YType::str, "hardware-address-val"}
{

    yang_name = "hardware-address"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::HardwareAddress::~HardwareAddress()
{
}

bool Native::Ip::Dhcp::Pool::HardwareAddress::has_data() const
{
    if (is_presence_container) return true;
    return hardware_address_val.is_set;
}

bool Native::Ip::Dhcp::Pool::HardwareAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hardware_address_val.yfilter);
}

std::string Native::Ip::Dhcp::Pool::HardwareAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::HardwareAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hardware_address_val.is_set || is_set(hardware_address_val.yfilter)) leaf_name_data.push_back(hardware_address_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::HardwareAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::HardwareAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Dhcp::Pool::HardwareAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hardware-address-val")
    {
        hardware_address_val = value;
        hardware_address_val.value_namespace = name_space;
        hardware_address_val.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::HardwareAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hardware-address-val")
    {
        hardware_address_val.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::HardwareAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-address-val")
        return true;
    return false;
}

Native::Ip::Dhcp::SnoopingConf::SnoopingConf()
    :
    snooping{YType::empty, "snooping"}
{

    yang_name = "snooping-conf"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::SnoopingConf::~SnoopingConf()
{
}

bool Native::Ip::Dhcp::SnoopingConf::has_data() const
{
    if (is_presence_container) return true;
    return snooping.is_set;
}

bool Native::Ip::Dhcp::SnoopingConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snooping.yfilter);
}

std::string Native::Ip::Dhcp::SnoopingConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::SnoopingConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:snooping-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::SnoopingConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snooping.is_set || is_set(snooping.yfilter)) leaf_name_data.push_back(snooping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::SnoopingConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::SnoopingConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Dhcp::SnoopingConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snooping")
    {
        snooping = value;
        snooping.value_namespace = name_space;
        snooping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::SnoopingConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snooping")
    {
        snooping.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::SnoopingConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Snooping()
    :
    vlan{YType::str, "vlan"}
        ,
    database(std::make_shared<Native::Ip::Dhcp::Snooping::Database>())
    , information(std::make_shared<Native::Ip::Dhcp::Snooping::Information>())
    , track(std::make_shared<Native::Ip::Dhcp::Snooping::Track>())
    , verify(std::make_shared<Native::Ip::Dhcp::Snooping::Verify>())
{
    database->parent = this;
    information->parent = this;
    track->parent = this;
    verify->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Ip::Dhcp::Snooping::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| (database !=  nullptr && database->has_data())
	|| (information !=  nullptr && information->has_data())
	|| (track !=  nullptr && track->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (database !=  nullptr && database->has_operation())
	|| (information !=  nullptr && information->has_operation())
	|| (track !=  nullptr && track->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Ip::Dhcp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Native::Ip::Dhcp::Snooping::Database>();
        }
        return database;
    }

    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Ip::Dhcp::Snooping::Information>();
        }
        return information;
    }

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Ip::Dhcp::Snooping::Track>();
        }
        return track;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Ip::Dhcp::Snooping::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(track != nullptr)
    {
        children["track"] = track;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    return children;
}

void Native::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database" || name == "information" || name == "track" || name == "verify" || name == "vlan")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Database::Database()
    :
    url{YType::str, "url"},
    timeout{YType::uint32, "timeout"},
    write_delay{YType::uint32, "write-delay"}
{

    yang_name = "database"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Snooping::Database::~Database()
{
}

bool Native::Ip::Dhcp::Snooping::Database::has_data() const
{
    if (is_presence_container) return true;
    return url.is_set
	|| timeout.is_set
	|| write_delay.is_set;
}

bool Native::Ip::Dhcp::Snooping::Database::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(write_delay.yfilter);
}

std::string Native::Ip::Dhcp::Snooping::Database::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (write_delay.is_set || is_set(write_delay.yfilter)) leaf_name_data.push_back(write_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Dhcp::Snooping::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-delay")
    {
        write_delay = value;
        write_delay.value_namespace = name_space;
        write_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Snooping::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "write-delay")
    {
        write_delay.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Snooping::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "timeout" || name == "write-delay")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Information::Information()
    :
    option_conf{YType::boolean, "option-conf"}
        ,
    option(nullptr) // presence node
{

    yang_name = "information"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Snooping::Information::~Information()
{
}

bool Native::Ip::Dhcp::Snooping::Information::has_data() const
{
    if (is_presence_container) return true;
    return option_conf.is_set
	|| (option !=  nullptr && option->has_data());
}

bool Native::Ip::Dhcp::Snooping::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option_conf.yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Ip::Dhcp::Snooping::Information::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_conf.is_set || is_set(option_conf.yfilter)) leaf_name_data.push_back(option_conf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Ip::Dhcp::Snooping::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Ip::Dhcp::Snooping::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-conf")
    {
        option_conf = value;
        option_conf.value_namespace = name_space;
        option_conf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Snooping::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-conf")
    {
        option_conf.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Snooping::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "option-conf")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Information::Option::Option()
    :
    allow_untrusted{YType::empty, "allow-untrusted"}
        ,
    format(std::make_shared<Native::Ip::Dhcp::Snooping::Information::Option::Format>())
{
    format->parent = this;

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Dhcp::Snooping::Information::Option::~Option()
{
}

bool Native::Ip::Dhcp::Snooping::Information::Option::has_data() const
{
    if (is_presence_container) return true;
    return allow_untrusted.is_set
	|| (format !=  nullptr && format->has_data());
}

bool Native::Ip::Dhcp::Snooping::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_untrusted.yfilter)
	|| (format !=  nullptr && format->has_operation());
}

std::string Native::Ip::Dhcp::Snooping::Information::Option::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_untrusted.is_set || is_set(allow_untrusted.yfilter)) leaf_name_data.push_back(allow_untrusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format")
    {
        if(format == nullptr)
        {
            format = std::make_shared<Native::Ip::Dhcp::Snooping::Information::Option::Format>();
        }
        return format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(format != nullptr)
    {
        children["format"] = format;
    }

    return children;
}

void Native::Ip::Dhcp::Snooping::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted = value;
        allow_untrusted.value_namespace = name_space;
        allow_untrusted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Snooping::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Snooping::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "allow-untrusted")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Information::Option::Format::Format()
    :
    remote_id(std::make_shared<Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId>())
{
    remote_id->parent = this;

    yang_name = "format"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Snooping::Information::Option::Format::~Format()
{
}

bool Native::Ip::Dhcp::Snooping::Information::Option::Format::has_data() const
{
    if (is_presence_container) return true;
    return (remote_id !=  nullptr && remote_id->has_data());
}

bool Native::Ip::Dhcp::Snooping::Information::Option::Format::has_operation() const
{
    return is_set(yfilter)
	|| (remote_id !=  nullptr && remote_id->has_operation());
}

std::string Native::Ip::Dhcp::Snooping::Information::Option::Format::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/information/option/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::Information::Option::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::Information::Option::Format::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Information::Option::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-id")
    {
        if(remote_id == nullptr)
        {
            remote_id = std::make_shared<Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId>();
        }
        return remote_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Information::Option::Format::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(remote_id != nullptr)
    {
        children["remote-id"] = remote_id;
    }

    return children;
}

void Native::Ip::Dhcp::Snooping::Information::Option::Format::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Snooping::Information::Option::Format::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Snooping::Information::Option::Format::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-id")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::RemoteId()
    :
    hostname{YType::empty, "hostname"},
    string{YType::str, "string"}
{

    yang_name = "remote-id"; yang_parent_name = "format"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::~RemoteId()
{
}

bool Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::has_data() const
{
    if (is_presence_container) return true;
    return hostname.is_set
	|| string.is_set;
}

bool Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/information/option/format/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostname" || name == "string")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Track::Track()
    :
    host{YType::empty, "host"}
{

    yang_name = "track"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Snooping::Track::~Track()
{
}

bool Native::Ip::Dhcp::Snooping::Track::has_data() const
{
    if (is_presence_container) return true;
    return host.is_set;
}

bool Native::Ip::Dhcp::Snooping::Track::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Native::Ip::Dhcp::Snooping::Track::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Dhcp::Snooping::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Snooping::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Snooping::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Verify::Verify()
    :
    mac_address{YType::empty, "mac-address"},
    no_relay_agent_address{YType::empty, "no-relay-agent-address"}
{

    yang_name = "verify"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Snooping::Verify::~Verify()
{
}

bool Native::Ip::Dhcp::Snooping::Verify::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| no_relay_agent_address.is_set;
}

bool Native::Ip::Dhcp::Snooping::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(no_relay_agent_address.yfilter);
}

std::string Native::Ip::Dhcp::Snooping::Verify::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (no_relay_agent_address.is_set || is_set(no_relay_agent_address.yfilter)) leaf_name_data.push_back(no_relay_agent_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Dhcp::Snooping::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-relay-agent-address")
    {
        no_relay_agent_address = value;
        no_relay_agent_address.value_namespace = name_space;
        no_relay_agent_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Snooping::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "no-relay-agent-address")
    {
        no_relay_agent_address.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Snooping::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "no-relay-agent-address")
        return true;
    return false;
}

Native::Ip::ForwardProtocol::ForwardProtocol()
    :
    protocol{YType::enumeration, "protocol"}
        ,
    spanning_tree(nullptr) // presence node
    , udp(std::make_shared<Native::Ip::ForwardProtocol::Udp>())
{
    udp->parent = this;

    yang_name = "forward-protocol"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::ForwardProtocol::~ForwardProtocol()
{
}

bool Native::Ip::ForwardProtocol::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Ip::ForwardProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Ip::ForwardProtocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ForwardProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ForwardProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ForwardProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Ip::ForwardProtocol::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Ip::ForwardProtocol::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ForwardProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Ip::ForwardProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ForwardProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Ip::ForwardProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spanning-tree" || name == "udp" || name == "protocol")
        return true;
    return false;
}

Native::Ip::ForwardProtocol::SpanningTree::SpanningTree()
    :
    any_local_broadcast{YType::empty, "any-local-broadcast"}
{

    yang_name = "spanning-tree"; yang_parent_name = "forward-protocol"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::ForwardProtocol::SpanningTree::~SpanningTree()
{
}

bool Native::Ip::ForwardProtocol::SpanningTree::has_data() const
{
    if (is_presence_container) return true;
    return any_local_broadcast.is_set;
}

bool Native::Ip::ForwardProtocol::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any_local_broadcast.yfilter);
}

std::string Native::Ip::ForwardProtocol::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/forward-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ForwardProtocol::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ForwardProtocol::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_local_broadcast.is_set || is_set(any_local_broadcast.yfilter)) leaf_name_data.push_back(any_local_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ForwardProtocol::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ForwardProtocol::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::ForwardProtocol::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-local-broadcast")
    {
        any_local_broadcast = value;
        any_local_broadcast.value_namespace = name_space;
        any_local_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ForwardProtocol::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-local-broadcast")
    {
        any_local_broadcast.yfilter = yfilter;
    }
}

bool Native::Ip::ForwardProtocol::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any-local-broadcast")
        return true;
    return false;
}

Native::Ip::ForwardProtocol::Udp::Udp()
    :
    biff{YType::boolean, "biff"},
    bootpc{YType::boolean, "bootpc"},
    bootps{YType::boolean, "bootps"},
    discard{YType::boolean, "discard"},
    dnsix{YType::boolean, "dnsix"},
    domain{YType::boolean, "domain"},
    echo{YType::boolean, "echo"},
    isakmp{YType::boolean, "isakmp"},
    mobile_ip{YType::boolean, "mobile-ip"},
    nameserver{YType::boolean, "nameserver"},
    netbios_dgm{YType::boolean, "netbios-dgm"},
    netbios_ns{YType::boolean, "netbios-ns"},
    netbios_ss{YType::boolean, "netbios-ss"},
    non500_isakmp{YType::boolean, "non500-isakmp"},
    ntp{YType::boolean, "ntp"},
    pim_auto_rp{YType::boolean, "pim-auto-rp"},
    rip{YType::boolean, "rip"},
    snmp{YType::boolean, "snmp"},
    snmptrap{YType::boolean, "snmptrap"},
    sunrpc{YType::boolean, "sunrpc"},
    syslog{YType::boolean, "syslog"},
    tacacs{YType::boolean, "tacacs"},
    talk{YType::boolean, "talk"},
    tftp{YType::boolean, "tftp"},
    time{YType::boolean, "time"},
    who{YType::boolean, "who"},
    xdmcp{YType::boolean, "xdmcp"}
{

    yang_name = "udp"; yang_parent_name = "forward-protocol"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::ForwardProtocol::Udp::~Udp()
{
}

bool Native::Ip::ForwardProtocol::Udp::has_data() const
{
    if (is_presence_container) return true;
    return biff.is_set
	|| bootpc.is_set
	|| bootps.is_set
	|| discard.is_set
	|| dnsix.is_set
	|| domain.is_set
	|| echo.is_set
	|| isakmp.is_set
	|| mobile_ip.is_set
	|| nameserver.is_set
	|| netbios_dgm.is_set
	|| netbios_ns.is_set
	|| netbios_ss.is_set
	|| non500_isakmp.is_set
	|| ntp.is_set
	|| pim_auto_rp.is_set
	|| rip.is_set
	|| snmp.is_set
	|| snmptrap.is_set
	|| sunrpc.is_set
	|| syslog.is_set
	|| tacacs.is_set
	|| talk.is_set
	|| tftp.is_set
	|| time.is_set
	|| who.is_set
	|| xdmcp.is_set;
}

bool Native::Ip::ForwardProtocol::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(biff.yfilter)
	|| ydk::is_set(bootpc.yfilter)
	|| ydk::is_set(bootps.yfilter)
	|| ydk::is_set(discard.yfilter)
	|| ydk::is_set(dnsix.yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(echo.yfilter)
	|| ydk::is_set(isakmp.yfilter)
	|| ydk::is_set(mobile_ip.yfilter)
	|| ydk::is_set(nameserver.yfilter)
	|| ydk::is_set(netbios_dgm.yfilter)
	|| ydk::is_set(netbios_ns.yfilter)
	|| ydk::is_set(netbios_ss.yfilter)
	|| ydk::is_set(non500_isakmp.yfilter)
	|| ydk::is_set(ntp.yfilter)
	|| ydk::is_set(pim_auto_rp.yfilter)
	|| ydk::is_set(rip.yfilter)
	|| ydk::is_set(snmp.yfilter)
	|| ydk::is_set(snmptrap.yfilter)
	|| ydk::is_set(sunrpc.yfilter)
	|| ydk::is_set(syslog.yfilter)
	|| ydk::is_set(tacacs.yfilter)
	|| ydk::is_set(talk.yfilter)
	|| ydk::is_set(tftp.yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(who.yfilter)
	|| ydk::is_set(xdmcp.yfilter);
}

std::string Native::Ip::ForwardProtocol::Udp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/forward-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ForwardProtocol::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ForwardProtocol::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (biff.is_set || is_set(biff.yfilter)) leaf_name_data.push_back(biff.get_name_leafdata());
    if (bootpc.is_set || is_set(bootpc.yfilter)) leaf_name_data.push_back(bootpc.get_name_leafdata());
    if (bootps.is_set || is_set(bootps.yfilter)) leaf_name_data.push_back(bootps.get_name_leafdata());
    if (discard.is_set || is_set(discard.yfilter)) leaf_name_data.push_back(discard.get_name_leafdata());
    if (dnsix.is_set || is_set(dnsix.yfilter)) leaf_name_data.push_back(dnsix.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (echo.is_set || is_set(echo.yfilter)) leaf_name_data.push_back(echo.get_name_leafdata());
    if (isakmp.is_set || is_set(isakmp.yfilter)) leaf_name_data.push_back(isakmp.get_name_leafdata());
    if (mobile_ip.is_set || is_set(mobile_ip.yfilter)) leaf_name_data.push_back(mobile_ip.get_name_leafdata());
    if (nameserver.is_set || is_set(nameserver.yfilter)) leaf_name_data.push_back(nameserver.get_name_leafdata());
    if (netbios_dgm.is_set || is_set(netbios_dgm.yfilter)) leaf_name_data.push_back(netbios_dgm.get_name_leafdata());
    if (netbios_ns.is_set || is_set(netbios_ns.yfilter)) leaf_name_data.push_back(netbios_ns.get_name_leafdata());
    if (netbios_ss.is_set || is_set(netbios_ss.yfilter)) leaf_name_data.push_back(netbios_ss.get_name_leafdata());
    if (non500_isakmp.is_set || is_set(non500_isakmp.yfilter)) leaf_name_data.push_back(non500_isakmp.get_name_leafdata());
    if (ntp.is_set || is_set(ntp.yfilter)) leaf_name_data.push_back(ntp.get_name_leafdata());
    if (pim_auto_rp.is_set || is_set(pim_auto_rp.yfilter)) leaf_name_data.push_back(pim_auto_rp.get_name_leafdata());
    if (rip.is_set || is_set(rip.yfilter)) leaf_name_data.push_back(rip.get_name_leafdata());
    if (snmp.is_set || is_set(snmp.yfilter)) leaf_name_data.push_back(snmp.get_name_leafdata());
    if (snmptrap.is_set || is_set(snmptrap.yfilter)) leaf_name_data.push_back(snmptrap.get_name_leafdata());
    if (sunrpc.is_set || is_set(sunrpc.yfilter)) leaf_name_data.push_back(sunrpc.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());
    if (tacacs.is_set || is_set(tacacs.yfilter)) leaf_name_data.push_back(tacacs.get_name_leafdata());
    if (talk.is_set || is_set(talk.yfilter)) leaf_name_data.push_back(talk.get_name_leafdata());
    if (tftp.is_set || is_set(tftp.yfilter)) leaf_name_data.push_back(tftp.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (who.is_set || is_set(who.yfilter)) leaf_name_data.push_back(who.get_name_leafdata());
    if (xdmcp.is_set || is_set(xdmcp.yfilter)) leaf_name_data.push_back(xdmcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ForwardProtocol::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ForwardProtocol::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::ForwardProtocol::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "biff")
    {
        biff = value;
        biff.value_namespace = name_space;
        biff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootpc")
    {
        bootpc = value;
        bootpc.value_namespace = name_space;
        bootpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootps")
    {
        bootps = value;
        bootps.value_namespace = name_space;
        bootps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discard")
    {
        discard = value;
        discard.value_namespace = name_space;
        discard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnsix")
    {
        dnsix = value;
        dnsix.value_namespace = name_space;
        dnsix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo")
    {
        echo = value;
        echo.value_namespace = name_space;
        echo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp")
    {
        isakmp = value;
        isakmp.value_namespace = name_space;
        isakmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobile-ip")
    {
        mobile_ip = value;
        mobile_ip.value_namespace = name_space;
        mobile_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nameserver")
    {
        nameserver = value;
        nameserver.value_namespace = name_space;
        nameserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netbios-dgm")
    {
        netbios_dgm = value;
        netbios_dgm.value_namespace = name_space;
        netbios_dgm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netbios-ns")
    {
        netbios_ns = value;
        netbios_ns.value_namespace = name_space;
        netbios_ns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netbios-ss")
    {
        netbios_ss = value;
        netbios_ss.value_namespace = name_space;
        netbios_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non500-isakmp")
    {
        non500_isakmp = value;
        non500_isakmp.value_namespace = name_space;
        non500_isakmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp")
    {
        ntp = value;
        ntp.value_namespace = name_space;
        ntp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim-auto-rp")
    {
        pim_auto_rp = value;
        pim_auto_rp.value_namespace = name_space;
        pim_auto_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rip")
    {
        rip = value;
        rip.value_namespace = name_space;
        rip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp")
    {
        snmp = value;
        snmp.value_namespace = name_space;
        snmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmptrap")
    {
        snmptrap = value;
        snmptrap.value_namespace = name_space;
        snmptrap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sunrpc")
    {
        sunrpc = value;
        sunrpc.value_namespace = name_space;
        sunrpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tacacs")
    {
        tacacs = value;
        tacacs.value_namespace = name_space;
        tacacs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "talk")
    {
        talk = value;
        talk.value_namespace = name_space;
        talk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tftp")
    {
        tftp = value;
        tftp.value_namespace = name_space;
        tftp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "who")
    {
        who = value;
        who.value_namespace = name_space;
        who.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xdmcp")
    {
        xdmcp = value;
        xdmcp.value_namespace = name_space;
        xdmcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ForwardProtocol::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "biff")
    {
        biff.yfilter = yfilter;
    }
    if(value_path == "bootpc")
    {
        bootpc.yfilter = yfilter;
    }
    if(value_path == "bootps")
    {
        bootps.yfilter = yfilter;
    }
    if(value_path == "discard")
    {
        discard.yfilter = yfilter;
    }
    if(value_path == "dnsix")
    {
        dnsix.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "echo")
    {
        echo.yfilter = yfilter;
    }
    if(value_path == "isakmp")
    {
        isakmp.yfilter = yfilter;
    }
    if(value_path == "mobile-ip")
    {
        mobile_ip.yfilter = yfilter;
    }
    if(value_path == "nameserver")
    {
        nameserver.yfilter = yfilter;
    }
    if(value_path == "netbios-dgm")
    {
        netbios_dgm.yfilter = yfilter;
    }
    if(value_path == "netbios-ns")
    {
        netbios_ns.yfilter = yfilter;
    }
    if(value_path == "netbios-ss")
    {
        netbios_ss.yfilter = yfilter;
    }
    if(value_path == "non500-isakmp")
    {
        non500_isakmp.yfilter = yfilter;
    }
    if(value_path == "ntp")
    {
        ntp.yfilter = yfilter;
    }
    if(value_path == "pim-auto-rp")
    {
        pim_auto_rp.yfilter = yfilter;
    }
    if(value_path == "rip")
    {
        rip.yfilter = yfilter;
    }
    if(value_path == "snmp")
    {
        snmp.yfilter = yfilter;
    }
    if(value_path == "snmptrap")
    {
        snmptrap.yfilter = yfilter;
    }
    if(value_path == "sunrpc")
    {
        sunrpc.yfilter = yfilter;
    }
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
    if(value_path == "tacacs")
    {
        tacacs.yfilter = yfilter;
    }
    if(value_path == "talk")
    {
        talk.yfilter = yfilter;
    }
    if(value_path == "tftp")
    {
        tftp.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "who")
    {
        who.yfilter = yfilter;
    }
    if(value_path == "xdmcp")
    {
        xdmcp.yfilter = yfilter;
    }
}

bool Native::Ip::ForwardProtocol::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "biff" || name == "bootpc" || name == "bootps" || name == "discard" || name == "dnsix" || name == "domain" || name == "echo" || name == "isakmp" || name == "mobile-ip" || name == "nameserver" || name == "netbios-dgm" || name == "netbios-ns" || name == "netbios-ss" || name == "non500-isakmp" || name == "ntp" || name == "pim-auto-rp" || name == "rip" || name == "snmp" || name == "snmptrap" || name == "sunrpc" || name == "syslog" || name == "tacacs" || name == "talk" || name == "tftp" || name == "time" || name == "who" || name == "xdmcp")
        return true;
    return false;
}

Native::Ip::GratuitousArpsConf::GratuitousArpsConf()
    :
    gratuitous_arps{YType::boolean, "gratuitous-arps"}
{

    yang_name = "gratuitous-arps-conf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::GratuitousArpsConf::~GratuitousArpsConf()
{
}

bool Native::Ip::GratuitousArpsConf::has_data() const
{
    if (is_presence_container) return true;
    return gratuitous_arps.is_set;
}

bool Native::Ip::GratuitousArpsConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gratuitous_arps.yfilter);
}

std::string Native::Ip::GratuitousArpsConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::GratuitousArpsConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gratuitous-arps-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::GratuitousArpsConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gratuitous_arps.is_set || is_set(gratuitous_arps.yfilter)) leaf_name_data.push_back(gratuitous_arps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::GratuitousArpsConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::GratuitousArpsConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::GratuitousArpsConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gratuitous-arps")
    {
        gratuitous_arps = value;
        gratuitous_arps.value_namespace = name_space;
        gratuitous_arps.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::GratuitousArpsConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gratuitous-arps")
    {
        gratuitous_arps.yfilter = yfilter;
    }
}

bool Native::Ip::GratuitousArpsConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gratuitous-arps")
        return true;
    return false;
}

Native::Ip::Ftp::Ftp()
    :
    passive{YType::empty, "passive"},
    username{YType::str, "username"}
        ,
    source_interface(std::make_shared<Native::Ip::Ftp::SourceInterface>())
    , password(std::make_shared<Native::Ip::Ftp::Password>())
{
    source_interface->parent = this;
    password->parent = this;

    yang_name = "ftp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ftp::~Ftp()
{
}

bool Native::Ip::Ftp::has_data() const
{
    if (is_presence_container) return true;
    return passive.is_set
	|| username.is_set
	|| (source_interface !=  nullptr && source_interface->has_data())
	|| (password !=  nullptr && password->has_data());
}

bool Native::Ip::Ftp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(username.yfilter)
	|| (source_interface !=  nullptr && source_interface->has_operation())
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Ip::Ftp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ftp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ftp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Ftp::SourceInterface>();
        }
        return source_interface;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Ftp::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Ip::Ftp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface" || name == "password" || name == "passive" || name == "username")
        return true;
    return false;
}

Native::Ip::Ftp::SourceInterface::SourceInterface()
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
    atm_subinterface(std::make_shared<Native::Ip::Ftp::SourceInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Ip::Ftp::SourceInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Ip::Ftp::SourceInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Ip::Ftp::SourceInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "ftp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ftp::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Ftp::SourceInterface::has_data() const
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

bool Native::Ip::Ftp::SourceInterface::has_operation() const
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

std::string Native::Ip::Ftp::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::SourceInterface::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Ip::Ftp::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Ftp::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Ftp::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Ftp::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Ftp::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Ip::Ftp::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::Ftp::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::Ftp::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Ftp::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ftp::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Ftp::SourceInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Ip::Ftp::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Ftp::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ftp::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Ftp::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Ftp::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ftp::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Ftp::SourceInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Ip::Ftp::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Ftp::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ftp::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Ftp::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Ftp::Password::Password()
    :
    password_container(std::make_shared<Native::Ip::Ftp::Password::PasswordContainer>())
{
    password_container->parent = this;

    yang_name = "password"; yang_parent_name = "ftp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ftp::Password::~Password()
{
}

bool Native::Ip::Ftp::Password::has_data() const
{
    if (is_presence_container) return true;
    return (password_container !=  nullptr && password_container->has_data());
}

bool Native::Ip::Ftp::Password::has_operation() const
{
    return is_set(yfilter)
	|| (password_container !=  nullptr && password_container->has_operation());
}

std::string Native::Ip::Ftp::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ftp::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password-container")
    {
        if(password_container == nullptr)
        {
            password_container = std::make_shared<Native::Ip::Ftp::Password::PasswordContainer>();
        }
        return password_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(password_container != nullptr)
    {
        children["password-container"] = password_container;
    }

    return children;
}

void Native::Ip::Ftp::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ftp::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ftp::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password-container")
        return true;
    return false;
}

Native::Ip::Ftp::Password::PasswordContainer::PasswordContainer()
    :
    encryption{YType::uint8, "encryption"},
    password{YType::str, "password"}
{

    yang_name = "password-container"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ftp::Password::PasswordContainer::~PasswordContainer()
{
}

bool Native::Ip::Ftp::Password::PasswordContainer::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| password.is_set;
}

bool Native::Ip::Ftp::Password::PasswordContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Ip::Ftp::Password::PasswordContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::Password::PasswordContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::Password::PasswordContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ftp::Password::PasswordContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::Password::PasswordContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Ftp::Password::PasswordContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::Password::PasswordContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::Password::PasswordContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "password")
        return true;
    return false;
}

Native::Ip::Telnet::Telnet()
    :
    source_interface{YType::str, "source-interface"}
{

    yang_name = "telnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Telnet::~Telnet()
{
}

bool Native::Ip::Telnet::has_data() const
{
    if (is_presence_container) return true;
    return source_interface.is_set;
}

bool Native::Ip::Telnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter);
}

std::string Native::Ip::Telnet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Telnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Telnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Telnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Ip::Telnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface")
        return true;
    return false;
}

Native::Ip::Host::Host()
    :
    host_list(this, {"name"})
    , vrf(this, {"vrf_name"})
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Host::~Host()
{
}

bool Native::Ip::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host_list.len(); index++)
    {
        if(host_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<host_list.len(); index++)
    {
        if(host_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-list")
    {
        auto c = std::make_shared<Native::Ip::Host::HostList>();
        c->parent = this;
        host_list.append(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Ip::Host::Vrf>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : host_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-list" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Host::HostList::HostList()
    :
    name{YType::str, "name"},
    ip_list{YType::str, "ip-list"}
{

    yang_name = "host-list"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Host::HostList::~HostList()
{
}

bool Native::Ip::Host::HostList::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ip_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Host::HostList::has_operation() const
{
    for (auto const & leaf : ip_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ip_list.yfilter);
}

std::string Native::Ip::Host::HostList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Host::HostList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Host::HostList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    auto ip_list_name_datas = ip_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ip_list_name_datas.begin(), ip_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Host::HostList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Host::HostList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Host::HostList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-list")
    {
        ip_list.append(value);
    }
}

void Native::Ip::Host::HostList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ip-list")
    {
        ip_list.yfilter = yfilter;
    }
}

bool Native::Ip::Host::HostList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ip-list")
        return true;
    return false;
}

Native::Ip::Host::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    host_name(this, {"host_name"})
{

    yang_name = "vrf"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Host::Vrf::~Vrf()
{
}

bool Native::Ip::Host::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host_name.len(); index++)
    {
        if(host_name[index]->has_data())
            return true;
    }
    return vrf_name.is_set;
}

bool Native::Ip::Host::Vrf::has_operation() const
{
    for (std::size_t index=0; index<host_name.len(); index++)
    {
        if(host_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Native::Ip::Host::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Host::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Host::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Host::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-name")
    {
        auto c = std::make_shared<Native::Ip::Host::Vrf::HostName>();
        c->parent = this;
        host_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Host::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : host_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Host::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Host::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Ip::Host::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "vrf-name")
        return true;
    return false;
}

Native::Ip::Host::Vrf::HostName::HostName()
    :
    host_name{YType::str, "host-name"},
    ip_list{YType::str, "ip-list"}
{

    yang_name = "host-name"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Host::Vrf::HostName::~HostName()
{
}

bool Native::Ip::Host::Vrf::HostName::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ip_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return host_name.is_set;
}

bool Native::Ip::Host::Vrf::HostName::has_operation() const
{
    for (auto const & leaf : ip_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(ip_list.yfilter);
}

std::string Native::Ip::Host::Vrf::HostName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-name";
    ADD_KEY_TOKEN(host_name, "host-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Host::Vrf::HostName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());

    auto ip_list_name_datas = ip_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ip_list_name_datas.begin(), ip_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Host::Vrf::HostName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Host::Vrf::HostName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Host::Vrf::HostName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-list")
    {
        ip_list.append(value);
    }
}

void Native::Ip::Host::Vrf::HostName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "ip-list")
    {
        ip_list.yfilter = yfilter;
    }
}

bool Native::Ip::Host::Vrf::HostName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "ip-list")
        return true;
    return false;
}

Native::Ip::Multicast::Multicast()
    :
    route_limit{YType::uint32, "Cisco-IOS-XE-multicast:route-limit"}
        ,
    multipath(nullptr) // presence node
    , vrf(this, {"name"})
{

    yang_name = "multicast"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Multicast::~Multicast()
{
}

bool Native::Ip::Multicast::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return route_limit.is_set
	|| (multipath !=  nullptr && multipath->has_data());
}

bool Native::Ip::Multicast::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_limit.yfilter)
	|| (multipath !=  nullptr && multipath->has_operation());
}

std::string Native::Ip::Multicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_limit.is_set || is_set(route_limit.yfilter)) leaf_name_data.push_back(route_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-multicast:multipath")
    {
        if(multipath == nullptr)
        {
            multipath = std::make_shared<Native::Ip::Multicast::Multipath>();
        }
        return multipath;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:vrf")
    {
        auto c = std::make_shared<Native::Ip::Multicast::Vrf>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(multipath != nullptr)
    {
        children["Cisco-IOS-XE-multicast:multipath"] = multipath;
    }

    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-multicast:route-limit")
    {
        route_limit = value;
        route_limit.value_namespace = name_space;
        route_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-limit")
    {
        route_limit.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multipath" || name == "vrf" || name == "route-limit")
        return true;
    return false;
}

Native::Ip::Multicast::Multipath::Multipath()
    :
    s_g_hash{YType::enumeration, "s-g-hash"}
{

    yang_name = "multipath"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Multicast::Multipath::~Multipath()
{
}

bool Native::Ip::Multicast::Multipath::has_data() const
{
    if (is_presence_container) return true;
    return s_g_hash.is_set;
}

bool Native::Ip::Multicast::Multipath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s_g_hash.yfilter);
}

std::string Native::Ip::Multicast::Multipath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Multicast::Multipath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:multipath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Multipath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s_g_hash.is_set || is_set(s_g_hash.yfilter)) leaf_name_data.push_back(s_g_hash.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Multipath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Multipath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Multicast::Multipath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s-g-hash")
    {
        s_g_hash = value;
        s_g_hash.value_namespace = name_space;
        s_g_hash.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Multipath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s-g-hash")
    {
        s_g_hash.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Multipath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s-g-hash")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Vrf()
    :
    name{YType::str, "name"}
        ,
    multipath(nullptr) // presence node
    , route_limit(std::make_shared<Native::Ip::Multicast::Vrf::RouteLimit>())
    , rpf(std::make_shared<Native::Ip::Multicast::Vrf::Rpf>())
{
    route_limit->parent = this;
    rpf->parent = this;

    yang_name = "vrf"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Multicast::Vrf::~Vrf()
{
}

bool Native::Ip::Multicast::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (multipath !=  nullptr && multipath->has_data())
	|| (route_limit !=  nullptr && route_limit->has_data())
	|| (rpf !=  nullptr && rpf->has_data());
}

bool Native::Ip::Multicast::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (multipath !=  nullptr && multipath->has_operation())
	|| (route_limit !=  nullptr && route_limit->has_operation())
	|| (rpf !=  nullptr && rpf->has_operation());
}

std::string Native::Ip::Multicast::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Multicast::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multipath")
    {
        if(multipath == nullptr)
        {
            multipath = std::make_shared<Native::Ip::Multicast::Vrf::Multipath>();
        }
        return multipath;
    }

    if(child_yang_name == "route-limit")
    {
        if(route_limit == nullptr)
        {
            route_limit = std::make_shared<Native::Ip::Multicast::Vrf::RouteLimit>();
        }
        return route_limit;
    }

    if(child_yang_name == "rpf")
    {
        if(rpf == nullptr)
        {
            rpf = std::make_shared<Native::Ip::Multicast::Vrf::Rpf>();
        }
        return rpf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(multipath != nullptr)
    {
        children["multipath"] = multipath;
    }

    if(route_limit != nullptr)
    {
        children["route-limit"] = route_limit;
    }

    if(rpf != nullptr)
    {
        children["rpf"] = rpf;
    }

    return children;
}

void Native::Ip::Multicast::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multipath" || name == "route-limit" || name == "rpf" || name == "name")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Multipath::Multipath()
    :
    s_g_hash{YType::enumeration, "s-g-hash"}
{

    yang_name = "multipath"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ip::Multicast::Vrf::Multipath::~Multipath()
{
}

bool Native::Ip::Multicast::Vrf::Multipath::has_data() const
{
    if (is_presence_container) return true;
    return s_g_hash.is_set;
}

bool Native::Ip::Multicast::Vrf::Multipath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s_g_hash.yfilter);
}

std::string Native::Ip::Multicast::Vrf::Multipath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multipath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Multipath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s_g_hash.is_set || is_set(s_g_hash.yfilter)) leaf_name_data.push_back(s_g_hash.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::Multipath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::Multipath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Multicast::Vrf::Multipath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s-g-hash")
    {
        s_g_hash = value;
        s_g_hash.value_namespace = name_space;
        s_g_hash.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::Multipath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s-g-hash")
    {
        s_g_hash.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::Multipath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s-g-hash")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::RouteLimit::RouteLimit()
    :
    no_routes{YType::uint32, "no-routes"},
    warning_threshold{YType::uint32, "warning-threshold"}
{

    yang_name = "route-limit"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Multicast::Vrf::RouteLimit::~RouteLimit()
{
}

bool Native::Ip::Multicast::Vrf::RouteLimit::has_data() const
{
    if (is_presence_container) return true;
    return no_routes.is_set
	|| warning_threshold.is_set;
}

bool Native::Ip::Multicast::Vrf::RouteLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_routes.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Ip::Multicast::Vrf::RouteLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::RouteLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_routes.is_set || is_set(no_routes.yfilter)) leaf_name_data.push_back(no_routes.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::RouteLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::RouteLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Multicast::Vrf::RouteLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-routes")
    {
        no_routes = value;
        no_routes.value_namespace = name_space;
        no_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::RouteLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-routes")
    {
        no_routes.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::RouteLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-routes" || name == "warning-threshold")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Rpf::Rpf()
    :
    select(std::make_shared<Native::Ip::Multicast::Vrf::Rpf::Select>())
{
    select->parent = this;

    yang_name = "rpf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Multicast::Vrf::Rpf::~Rpf()
{
}

bool Native::Ip::Multicast::Vrf::Rpf::has_data() const
{
    if (is_presence_container) return true;
    return (select !=  nullptr && select->has_data());
}

bool Native::Ip::Multicast::Vrf::Rpf::has_operation() const
{
    return is_set(yfilter)
	|| (select !=  nullptr && select->has_operation());
}

std::string Native::Ip::Multicast::Vrf::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "select")
    {
        if(select == nullptr)
        {
            select = std::make_shared<Native::Ip::Multicast::Vrf::Rpf::Select>();
        }
        return select;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(select != nullptr)
    {
        children["select"] = select;
    }

    return children;
}

void Native::Ip::Multicast::Vrf::Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Multicast::Vrf::Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Multicast::Vrf::Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Rpf::Select::Select()
    :
    vrf(this, {"name"})
{

    yang_name = "select"; yang_parent_name = "rpf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Multicast::Vrf::Rpf::Select::~Select()
{
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Multicast::Vrf::Rpf::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Rpf::Select::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::Rpf::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::Rpf::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Multicast::Vrf::Rpf::Select::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Multicast::Vrf::Rpf::Select::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::Vrf_()
    :
    name{YType::str, "name"}
        ,
    group_list(this, {"group_list_name"})
{

    yang_name = "vrf"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::~Vrf_()
{
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::has_operation() const
{
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-list")
    {
        auto c = std::make_shared<Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList>();
        c->parent = this;
        group_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : group_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-list" || name == "name")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::GroupList()
    :
    group_list_name{YType::str, "group-list-name"}
{

    yang_name = "group-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::~GroupList()
{
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::has_data() const
{
    if (is_presence_container) return true;
    return group_list_name.is_set;
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_list_name.yfilter);
}

std::string Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-list";
    ADD_KEY_TOKEN(group_list_name, "group-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_list_name.is_set || is_set(group_list_name.yfilter)) leaf_name_data.push_back(group_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-list-name")
    {
        group_list_name = value;
        group_list_name.value_namespace = name_space;
        group_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-list-name")
    {
        group_list_name.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-list-name")
        return true;
    return false;
}

Native::Ip::NameServer::NameServer()
    :
    no_vrf{YType::str, "no-vrf"}
        ,
    vrf(this, {"word"})
{

    yang_name = "name-server"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::NameServer::~NameServer()
{
}

bool Native::Ip::NameServer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    for (auto const & leaf : no_vrf.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::NameServer::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    for (auto const & leaf : no_vrf.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(no_vrf.yfilter);
}

std::string Native::Ip::NameServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::NameServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::NameServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto no_vrf_name_datas = no_vrf.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), no_vrf_name_datas.begin(), no_vrf_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::NameServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Ip::NameServer::Vrf>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::NameServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::NameServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-vrf")
    {
        no_vrf.append(value);
    }
}

void Native::Ip::NameServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-vrf")
    {
        no_vrf.yfilter = yfilter;
    }
}

bool Native::Ip::NameServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "no-vrf")
        return true;
    return false;
}

Native::Ip::NameServer::Vrf::Vrf()
    :
    word{YType::str, "word"},
    server_ip{YType::str, "server-ip"}
{

    yang_name = "vrf"; yang_parent_name = "name-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::NameServer::Vrf::~Vrf()
{
}

bool Native::Ip::NameServer::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| server_ip.is_set;
}

bool Native::Ip::NameServer::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(server_ip.yfilter);
}

std::string Native::Ip::NameServer::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/name-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::NameServer::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::NameServer::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (server_ip.is_set || is_set(server_ip.yfilter)) leaf_name_data.push_back(server_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::NameServer::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::NameServer::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::NameServer::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-ip")
    {
        server_ip = value;
        server_ip.value_namespace = name_space;
        server_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::NameServer::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "server-ip")
    {
        server_ip.yfilter = yfilter;
    }
}

bool Native::Ip::NameServer::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "server-ip")
        return true;
    return false;
}

Native::Ip::Pim::Pim()
    :
    register_source{YType::str, "Cisco-IOS-XE-multicast:register-source"}
        ,
    accept_register(std::make_shared<Native::Ip::Pim::AcceptRegister>())
    , autorp(nullptr) // presence node
    , rp_address(this, {"address"})
    , spt_threshold(this, {"how", "group_list"})
    , spt_threshold_container(std::make_shared<Native::Ip::Pim::SptThresholdContainer>())
    , send_rp_announce(std::make_shared<Native::Ip::Pim::SendRpAnnounce>())
    , send_rp_discovery(std::make_shared<Native::Ip::Pim::SendRpDiscovery>())
    , ssm(std::make_shared<Native::Ip::Pim::Ssm>())
    , vrf(this, {"id"})
{
    accept_register->parent = this;
    spt_threshold_container->parent = this;
    send_rp_announce->parent = this;
    send_rp_discovery->parent = this;
    ssm->parent = this;

    yang_name = "pim"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::~Pim()
{
}

bool Native::Ip::Pim::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rp_address.len(); index++)
    {
        if(rp_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<spt_threshold.len(); index++)
    {
        if(spt_threshold[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return register_source.is_set
	|| (accept_register !=  nullptr && accept_register->has_data())
	|| (autorp !=  nullptr && autorp->has_data())
	|| (spt_threshold_container !=  nullptr && spt_threshold_container->has_data())
	|| (send_rp_announce !=  nullptr && send_rp_announce->has_data())
	|| (send_rp_discovery !=  nullptr && send_rp_discovery->has_data())
	|| (ssm !=  nullptr && ssm->has_data());
}

bool Native::Ip::Pim::has_operation() const
{
    for (std::size_t index=0; index<rp_address.len(); index++)
    {
        if(rp_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<spt_threshold.len(); index++)
    {
        if(spt_threshold[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(register_source.yfilter)
	|| (accept_register !=  nullptr && accept_register->has_operation())
	|| (autorp !=  nullptr && autorp->has_operation())
	|| (spt_threshold_container !=  nullptr && spt_threshold_container->has_operation())
	|| (send_rp_announce !=  nullptr && send_rp_announce->has_operation())
	|| (send_rp_discovery !=  nullptr && send_rp_discovery->has_operation())
	|| (ssm !=  nullptr && ssm->has_operation());
}

std::string Native::Ip::Pim::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (register_source.is_set || is_set(register_source.yfilter)) leaf_name_data.push_back(register_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-multicast:accept-register")
    {
        if(accept_register == nullptr)
        {
            accept_register = std::make_shared<Native::Ip::Pim::AcceptRegister>();
        }
        return accept_register;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:autorp")
    {
        if(autorp == nullptr)
        {
            autorp = std::make_shared<Native::Ip::Pim::Autorp>();
        }
        return autorp;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:rp-address")
    {
        auto c = std::make_shared<Native::Ip::Pim::RpAddress>();
        c->parent = this;
        rp_address.append(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:spt-threshold")
    {
        auto c = std::make_shared<Native::Ip::Pim::SptThreshold>();
        c->parent = this;
        spt_threshold.append(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:spt-threshold-container")
    {
        if(spt_threshold_container == nullptr)
        {
            spt_threshold_container = std::make_shared<Native::Ip::Pim::SptThresholdContainer>();
        }
        return spt_threshold_container;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:send-rp-announce")
    {
        if(send_rp_announce == nullptr)
        {
            send_rp_announce = std::make_shared<Native::Ip::Pim::SendRpAnnounce>();
        }
        return send_rp_announce;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:send-rp-discovery")
    {
        if(send_rp_discovery == nullptr)
        {
            send_rp_discovery = std::make_shared<Native::Ip::Pim::SendRpDiscovery>();
        }
        return send_rp_discovery;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:ssm")
    {
        if(ssm == nullptr)
        {
            ssm = std::make_shared<Native::Ip::Pim::Ssm>();
        }
        return ssm;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:vrf")
    {
        auto c = std::make_shared<Native::Ip::Pim::Vrf>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(accept_register != nullptr)
    {
        children["Cisco-IOS-XE-multicast:accept-register"] = accept_register;
    }

    if(autorp != nullptr)
    {
        children["Cisco-IOS-XE-multicast:autorp"] = autorp;
    }

    count = 0;
    for (auto c : rp_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : spt_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(spt_threshold_container != nullptr)
    {
        children["Cisco-IOS-XE-multicast:spt-threshold-container"] = spt_threshold_container;
    }

    if(send_rp_announce != nullptr)
    {
        children["Cisco-IOS-XE-multicast:send-rp-announce"] = send_rp_announce;
    }

    if(send_rp_discovery != nullptr)
    {
        children["Cisco-IOS-XE-multicast:send-rp-discovery"] = send_rp_discovery;
    }

    if(ssm != nullptr)
    {
        children["Cisco-IOS-XE-multicast:ssm"] = ssm;
    }

    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-multicast:register-source")
    {
        register_source = value;
        register_source.value_namespace = name_space;
        register_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "register-source")
    {
        register_source.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-register" || name == "autorp" || name == "rp-address" || name == "spt-threshold" || name == "spt-threshold-container" || name == "send-rp-announce" || name == "send-rp-discovery" || name == "ssm" || name == "vrf" || name == "register-source")
        return true;
    return false;
}

Native::Ip::Pim::AcceptRegister::AcceptRegister()
    :
    list{YType::str, "list"}
{

    yang_name = "accept-register"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::AcceptRegister::~AcceptRegister()
{
}

bool Native::Ip::Pim::AcceptRegister::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set;
}

bool Native::Ip::Pim::AcceptRegister::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Ip::Pim::AcceptRegister::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::AcceptRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:accept-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::AcceptRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::AcceptRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::AcceptRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Pim::AcceptRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::AcceptRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::AcceptRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Ip::Pim::Autorp::Autorp()
    :
    listener{YType::empty, "listener"}
{

    yang_name = "autorp"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Pim::Autorp::~Autorp()
{
}

bool Native::Ip::Pim::Autorp::has_data() const
{
    if (is_presence_container) return true;
    return listener.is_set;
}

bool Native::Ip::Pim::Autorp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(listener.yfilter);
}

std::string Native::Ip::Pim::Autorp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::Autorp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:autorp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Autorp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (listener.is_set || is_set(listener.yfilter)) leaf_name_data.push_back(listener.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Autorp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Autorp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Pim::Autorp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "listener")
    {
        listener = value;
        listener.value_namespace = name_space;
        listener.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Autorp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "listener")
    {
        listener.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Autorp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listener")
        return true;
    return false;
}

Native::Ip::Pim::RpAddress::RpAddress()
    :
    address{YType::str, "address"},
    access_list{YType::str, "access-list"},
    override{YType::empty, "override"}
{

    yang_name = "rp-address"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::RpAddress::~RpAddress()
{
}

bool Native::Ip::Pim::RpAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| access_list.is_set
	|| override.is_set;
}

bool Native::Ip::Pim::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(override.yfilter);
}

std::string Native::Ip::Pim::RpAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:rp-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Pim::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "access-list" || name == "override")
        return true;
    return false;
}

Native::Ip::Pim::SptThreshold::SptThreshold()
    :
    how{YType::enumeration, "how"},
    group_list{YType::str, "group-list"}
{

    yang_name = "spt-threshold"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::SptThreshold::~SptThreshold()
{
}

bool Native::Ip::Pim::SptThreshold::has_data() const
{
    if (is_presence_container) return true;
    return how.is_set
	|| group_list.is_set;
}

bool Native::Ip::Pim::SptThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(how.yfilter)
	|| ydk::is_set(group_list.yfilter);
}

std::string Native::Ip::Pim::SptThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SptThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:spt-threshold";
    ADD_KEY_TOKEN(how, "how");
    ADD_KEY_TOKEN(group_list, "group-list");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SptThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how.is_set || is_set(how.yfilter)) leaf_name_data.push_back(how.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SptThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SptThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Pim::SptThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "how")
    {
        how = value;
        how.value_namespace = name_space;
        how.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-list")
    {
        group_list = value;
        group_list.value_namespace = name_space;
        group_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SptThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "how")
    {
        how.yfilter = yfilter;
    }
    if(value_path == "group-list")
    {
        group_list.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SptThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "how" || name == "group-list")
        return true;
    return false;
}

Native::Ip::Pim::SptThresholdContainer::SptThresholdContainer()
    :
    spt_threshold(std::make_shared<Native::Ip::Pim::SptThresholdContainer::SptThreshold>())
{
    spt_threshold->parent = this;

    yang_name = "spt-threshold-container"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::SptThresholdContainer::~SptThresholdContainer()
{
}

bool Native::Ip::Pim::SptThresholdContainer::has_data() const
{
    if (is_presence_container) return true;
    return (spt_threshold !=  nullptr && spt_threshold->has_data());
}

bool Native::Ip::Pim::SptThresholdContainer::has_operation() const
{
    return is_set(yfilter)
	|| (spt_threshold !=  nullptr && spt_threshold->has_operation());
}

std::string Native::Ip::Pim::SptThresholdContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SptThresholdContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:spt-threshold-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SptThresholdContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SptThresholdContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spt-threshold")
    {
        if(spt_threshold == nullptr)
        {
            spt_threshold = std::make_shared<Native::Ip::Pim::SptThresholdContainer::SptThreshold>();
        }
        return spt_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SptThresholdContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spt_threshold != nullptr)
    {
        children["spt-threshold"] = spt_threshold;
    }

    return children;
}

void Native::Ip::Pim::SptThresholdContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Pim::SptThresholdContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Pim::SptThresholdContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spt-threshold")
        return true;
    return false;
}

Native::Ip::Pim::SptThresholdContainer::SptThreshold::SptThreshold()
    :
    how{YType::enumeration, "how"}
{

    yang_name = "spt-threshold"; yang_parent_name = "spt-threshold-container"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::SptThresholdContainer::SptThreshold::~SptThreshold()
{
}

bool Native::Ip::Pim::SptThresholdContainer::SptThreshold::has_data() const
{
    if (is_presence_container) return true;
    return how.is_set;
}

bool Native::Ip::Pim::SptThresholdContainer::SptThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(how.yfilter);
}

std::string Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/Cisco-IOS-XE-multicast:spt-threshold-container/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how.is_set || is_set(how.yfilter)) leaf_name_data.push_back(how.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Pim::SptThresholdContainer::SptThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "how")
    {
        how = value;
        how.value_namespace = name_space;
        how.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SptThresholdContainer::SptThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "how")
    {
        how.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SptThresholdContainer::SptThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "how")
        return true;
    return false;
}

Native::Ip::Pim::SendRpAnnounce::SendRpAnnounce()
    :
    interface_list(this, {"if_name"})
    , port_channel(this, {"name"})
{

    yang_name = "send-rp-announce"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::SendRpAnnounce::~SendRpAnnounce()
{
}

bool Native::Ip::Pim::SendRpAnnounce::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_list.len(); index++)
    {
        if(interface_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_channel.len(); index++)
    {
        if(port_channel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Pim::SendRpAnnounce::has_operation() const
{
    for (std::size_t index=0; index<interface_list.len(); index++)
    {
        if(interface_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_channel.len(); index++)
    {
        if(port_channel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Pim::SendRpAnnounce::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SendRpAnnounce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:send-rp-announce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpAnnounce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpAnnounce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface_list")
    {
        auto c = std::make_shared<Native::Ip::Pim::SendRpAnnounce::InterfaceList>();
        c->parent = this;
        interface_list.append(c);
        return c;
    }

    if(child_yang_name == "Port-channel")
    {
        auto c = std::make_shared<Native::Ip::Pim::SendRpAnnounce::PortChannel>();
        c->parent = this;
        port_channel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpAnnounce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : port_channel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Pim::SendRpAnnounce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Pim::SendRpAnnounce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Pim::SendRpAnnounce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface_list" || name == "Port-channel")
        return true;
    return false;
}

const Enum::YLeaf Native::Ip::Vrf::Export::Ipv4::Ipv4Type::unicast {0, "unicast"};
const Enum::YLeaf Native::Ip::Vrf::Export::Ipv4::Ipv4Type::multicast {1, "multicast"};

const Enum::YLeaf Native::Ip::Vrf::Import::Ipv4::Ipv4Type::unicast {0, "unicast"};
const Enum::YLeaf Native::Ip::Vrf::Import::Ipv4::Ipv4Type::multicast {1, "multicast"};

const Enum::YLeaf Native::Ip::Vrf::RouteTarget::Direction::both {0, "both"};
const Enum::YLeaf Native::Ip::Vrf::RouteTarget::Direction::export_ {1, "export"};
const Enum::YLeaf Native::Ip::Vrf::RouteTarget::Direction::import {2, "import"};

const Enum::YLeaf Native::Ip::Local::Pool::Id::default_ {0, "default"};

const Enum::YLeaf Native::Ip::ForwardProtocol::Protocol::nd {0, "nd"};
const Enum::YLeaf Native::Ip::ForwardProtocol::Protocol::sdns {1, "sdns"};
const Enum::YLeaf Native::Ip::ForwardProtocol::Protocol::turbo_flood {2, "turbo-flood"};

const Enum::YLeaf Native::Ip::Multicast::Multipath::SGHash::basic {0, "basic"};
const Enum::YLeaf Native::Ip::Multicast::Multipath::SGHash::next_hop_based {1, "next-hop-based"};

const Enum::YLeaf Native::Ip::Multicast::Vrf::Multipath::SGHash::basic {0, "basic"};
const Enum::YLeaf Native::Ip::Multicast::Vrf::Multipath::SGHash::next_hop_based {1, "next-hop-based"};

const Enum::YLeaf Native::Ip::Pim::SptThreshold::How::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Pim::SptThreshold::How::infinity {1, "infinity"};

const Enum::YLeaf Native::Ip::Pim::SptThresholdContainer::SptThreshold::How::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Pim::SptThresholdContainer::SptThreshold::How::infinity {1, "infinity"};


}
}

