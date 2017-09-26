
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_26.hpp"
#include "Cisco_IOS_XE_native_27.hpp"
#include "Cisco_IOS_XE_native_29.hpp"
#include "Cisco_IOS_XE_native_31.hpp"
#include "Cisco_IOS_XE_native_30.hpp"
#include "Cisco_IOS_XE_native_28.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::DhcpPool::DhcpPool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "dhcp-pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::DhcpPool::~DhcpPool()
{
}

bool Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::DhcpPool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::DhcpPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::DhcpPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::DhcpPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::DhcpPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::DhcpPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::DhcpPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::DhcpPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::DhcpPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::Pool::Pool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::Pool::~Pool()
{
}

bool Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::Pool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::PmPath::PmPath()
    :
    interface_id{YType::uint8, "interface-id"},
    name{YType::str, "name"}
{

    yang_name = "pm-path"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::PmPath::~PmPath()
{
}

bool Native::Interface::EmbeddedServiceEngine::PmPath::has_data() const
{
    return interface_id.is_set
	|| name.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::PmPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::PmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::PmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::PmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::PmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::PmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::PmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::PmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "name")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::PriorityQueue::PriorityQueue()
    :
    out{YType::empty, "out"}
    	,
    cos_map(std::make_shared<Native::Interface::EmbeddedServiceEngine::PriorityQueue::CosMap>())
{
    cos_map->parent = this;

    yang_name = "priority-queue"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::PriorityQueue::~PriorityQueue()
{
}

bool Native::Interface::EmbeddedServiceEngine::PriorityQueue::has_data() const
{
    return out.is_set
	|| (cos_map !=  nullptr && cos_map->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::PriorityQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter)
	|| (cos_map !=  nullptr && cos_map->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::PriorityQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::PriorityQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::PriorityQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        if(cos_map == nullptr)
        {
            cos_map = std::make_shared<Native::Interface::EmbeddedServiceEngine::PriorityQueue::CosMap>();
        }
        return cos_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::PriorityQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos_map != nullptr)
    {
        children["cos-map"] = cos_map;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::PriorityQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::PriorityQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::PriorityQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map" || name == "out")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::PriorityQueue::CosMap::CosMap()
    :
    cos_values{YType::uint8, "cos-values"},
    id{YType::uint8, "id"}
{

    yang_name = "cos-map"; yang_parent_name = "priority-queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::PriorityQueue::CosMap::~CosMap()
{
}

bool Native::Interface::EmbeddedServiceEngine::PriorityQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::PriorityQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos_values.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::PriorityQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::PriorityQueue::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::PriorityQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::PriorityQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::PriorityQueue::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::PriorityQueue::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos-values")
    {
        cos_values.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::PriorityQueue::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-values" || name == "id")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::RcvQueue::RcvQueue()
{

    yang_name = "rcv-queue"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::RcvQueue::~RcvQueue()
{
}

bool Native::Interface::EmbeddedServiceEngine::RcvQueue::has_data() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::EmbeddedServiceEngine::RcvQueue::has_operation() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::RcvQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::RcvQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::RcvQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        for(auto const & c : cos_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::EmbeddedServiceEngine::RcvQueue::CosMap>();
        c->parent = this;
        cos_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::RcvQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cos_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::RcvQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::RcvQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::RcvQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::RcvQueue::CosMap::CosMap()
    :
    queue_id{YType::uint8, "queue-id"},
    threshold_id{YType::uint8, "threshold-id"},
    cos_values{YType::uint8, "cos-values"}
{

    yang_name = "cos-map"; yang_parent_name = "rcv-queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::RcvQueue::CosMap::~CosMap()
{
}

bool Native::Interface::EmbeddedServiceEngine::RcvQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return queue_id.is_set
	|| threshold_id.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::RcvQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(threshold_id.yfilter)
	|| ydk::is_set(cos_values.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::RcvQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map" <<"[queue-id='" <<queue_id <<"']" <<"[threshold-id='" <<threshold_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::RcvQueue::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (threshold_id.is_set || is_set(threshold_id.yfilter)) leaf_name_data.push_back(threshold_id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::RcvQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::RcvQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::RcvQueue::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-id")
    {
        threshold_id = value;
        threshold_id.value_namespace = name_space;
        threshold_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
}

void Native::Interface::EmbeddedServiceEngine::RcvQueue::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "threshold-id")
    {
        threshold_id.yfilter = yfilter;
    }
    if(value_path == "cos-values")
    {
        cos_values.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::RcvQueue::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-id" || name == "threshold-id" || name == "cos-values")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::Standby()
    :
    bfd{YType::empty, "bfd"},
    mac_refresh{YType::uint8, "mac-refresh"},
    version{YType::enumeration, "version"}
    	,
    delay(std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::Delay>())
	,use_bia(nullptr) // presence node
{
    delay->parent = this;

    yang_name = "standby"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::~Standby()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::has_data() const
{
    for (std::size_t index=0; index<standby_list.size(); index++)
    {
        if(standby_list[index]->has_data())
            return true;
    }
    return bfd.is_set
	|| mac_refresh.is_set
	|| version.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (use_bia !=  nullptr && use_bia->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Standby::has_operation() const
{
    for (std::size_t index=0; index<standby_list.size(); index++)
    {
        if(standby_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(mac_refresh.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (use_bia !=  nullptr && use_bia->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (mac_refresh.is_set || is_set(mac_refresh.yfilter)) leaf_name_data.push_back(mac_refresh.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "standby-list")
    {
        for(auto const & c : standby_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList>();
        c->parent = this;
        standby_list.push_back(c);
        return c;
    }

    if(child_yang_name == "use-bia")
    {
        if(use_bia == nullptr)
        {
            use_bia = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::UseBia>();
        }
        return use_bia;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    for (auto const & c : standby_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(use_bia != nullptr)
    {
        children["use-bia"] = use_bia;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh = value;
        mac_refresh.value_namespace = name_space;
        mac_refresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "standby-list" || name == "use-bia" || name == "bfd" || name == "mac-refresh" || name == "version")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"}
{

    yang_name = "delay"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::Delay::~Delay()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Standby::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Standby::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Standby::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "reload")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::StandbyList()
    :
    group_number{YType::uint16, "group-number"},
    follow{YType::str, "follow"},
    ipv6{YType::str, "ipv6"},
    mac_address{YType::str, "mac-address"},
    name{YType::str, "name"},
    priority{YType::uint8, "priority"}
    	,
    authentication(std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication>())
	,ip(nullptr) // presence node
	,preempt(nullptr) // presence node
	,redirect(std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect>())
	,timers(std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers>())
{
    authentication->parent = this;
    redirect->parent = this;
    timers->parent = this;

    yang_name = "standby-list"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::~StandbyList()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::has_data() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_data())
            return true;
    }
    return group_number.is_set
	|| follow.is_set
	|| ipv6.is_set
	|| mac_address.is_set
	|| name.is_set
	|| priority.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (preempt !=  nullptr && preempt->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::has_operation() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(follow.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (preempt !=  nullptr && preempt->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-list" <<"[group-number='" <<group_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (follow.is_set || is_set(follow.yfilter)) leaf_name_data.push_back(follow.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "track")
    {
        for(auto const & c : track)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Track>();
        c->parent = this;
        track.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(preempt != nullptr)
    {
        children["preempt"] = preempt;
    }

    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    for (auto const & c : track)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow")
    {
        follow = value;
        follow.value_namespace = name_space;
        follow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "follow")
    {
        follow.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "ip" || name == "preempt" || name == "redirect" || name == "timers" || name == "track" || name == "group-number" || name == "follow" || name == "ipv6" || name == "mac-address" || name == "name" || name == "priority")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Authentication()
    :
    text{YType::str, "text"},
    word{YType::str, "word"}
    	,
    md5(std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::~Authentication()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::has_data() const
{
    return text.is_set
	|| word.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(text.yfilter)
	|| ydk::is_set(word.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());
    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text" || name == "word")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::~Md5()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string" || name == "timeout")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Ip::Ip()
    :
    address{YType::str, "address"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "ip"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Ip::~Ip()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Ip::has_data() const
{
    return address.is_set
	|| secondary.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "secondary")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::~Preempt()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"},
    sync{YType::uint16, "sync"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::Delay::~Delay()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set
	|| sync.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(reload.yfilter)
	|| ydk::is_set(sync.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());
    if (sync.is_set || is_set(sync.yfilter)) leaf_name_data.push_back(sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync")
    {
        sync = value;
        sync.value_namespace = name_space;
        sync.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
    if(value_path == "sync")
    {
        sync.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "reload" || name == "sync")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Redirect()
    :
    unknown{YType::empty, "unknown"}
    	,
    advertisement(std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement>())
	,timers(std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Timers>())
{
    advertisement->parent = this;
    timers->parent = this;

    yang_name = "redirect"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::~Redirect()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::has_data() const
{
    return unknown.is_set
	|| (advertisement !=  nullptr && advertisement->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| (advertisement !=  nullptr && advertisement->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement")
    {
        if(advertisement == nullptr)
        {
            advertisement = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement>();
        }
        return advertisement;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertisement != nullptr)
    {
        children["advertisement"] = advertisement;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement" || name == "timers" || name == "unknown")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Advertisement()
    :
    authentication(std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication>())
{
    authentication->parent = this;

    yang_name = "advertisement"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::~Advertisement()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Authentication()
    :
    md5(std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "advertisement"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::~Authentication()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::has_data() const
{
    return (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::~Md5()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string" || name == "timeout")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Timers::Timers()
    :
    advertisement{YType::uint16, "advertisement"},
    holddown{YType::uint16, "holddown"}
{

    yang_name = "timers"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Timers::~Timers()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Timers::has_data() const
{
    return advertisement.is_set
	|| holddown.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertisement.yfilter)
	|| ydk::is_set(holddown.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement.is_set || is_set(advertisement.yfilter)) leaf_name_data.push_back(advertisement.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertisement")
    {
        advertisement = value;
        advertisement.value_namespace = name_space;
        advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertisement")
    {
        advertisement.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement" || name == "holddown")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::Timers()
    :
    hello_interval(std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HelloInterval>())
	,hold_time(std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HoldTime>())
{
    hello_interval->parent = this;
    hold_time->parent = this;

    yang_name = "timers"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::~Timers()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::has_data() const
{
    return (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval" || name == "hold-time")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HelloInterval::HelloInterval()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "hello-interval"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HelloInterval::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "seconds")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HoldTime::HoldTime()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "hold-time"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HoldTime::~HoldTime()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HoldTime::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "seconds")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Track::Track()
    :
    number{YType::uint16, "number"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "track"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Track::~Track()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Track::has_data() const
{
    return number.is_set
	|| decrement.is_set
	|| shutdown.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Track::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(decrement.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.yfilter)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decrement")
    {
        decrement = value;
        decrement.value_namespace = name_space;
        decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "decrement")
    {
        decrement.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "decrement" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::UseBia::UseBia()
    :
    scope(std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::UseBia::Scope>())
{
    scope->parent = this;

    yang_name = "use-bia"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::UseBia::~UseBia()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::UseBia::has_data() const
{
    return (scope !=  nullptr && scope->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Standby::UseBia::has_operation() const
{
    return is_set(yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::UseBia::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-bia";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::UseBia::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::UseBia::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby::UseBia::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::UseBia::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::UseBia::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Standby::UseBia::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::UseBia::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Standby::UseBia::Scope::Scope()
    :
    interface{YType::empty, "interface"}
{

    yang_name = "scope"; yang_parent_name = "use-bia"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Standby::UseBia::Scope::~Scope()
{
}

bool Native::Interface::EmbeddedServiceEngine::Standby::UseBia::Scope::has_data() const
{
    return interface.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Standby::UseBia::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Standby::UseBia::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Standby::UseBia::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Standby::UseBia::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Standby::UseBia::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::Standby::UseBia::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Standby::UseBia::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Standby::UseBia::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::StormControl::StormControl()
    :
    action(std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Action>())
	,broadcast(std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast>())
	,multicast(std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Multicast>())
	,unicast(std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Unicast>())
{
    action->parent = this;
    broadcast->parent = this;
    multicast->parent = this;
    unicast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::StormControl::~StormControl()
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(unicast != nullptr)
    {
        children["unicast"] = unicast;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Action::Action()
    :
    level{YType::str, "level"},
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Action::~Action()
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Action::has_data() const
{
    return level.is_set
	|| shutdown.is_set
	|| trap.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Broadcast()
    :
    include(std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Include>())
	,level(std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level>())
{
    include->parent = this;
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::has_data() const
{
    return (include !=  nullptr && include->has_data())
	|| (level !=  nullptr && level->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (include !=  nullptr && include->has_operation())
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include")
    {
        if(include == nullptr)
        {
            include = std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Include>();
        }
        return include;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(include != nullptr)
    {
        children["include"] = include;
    }

    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include" || name == "level")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Include::Include()
    :
    multicast{YType::empty, "multicast"}
{

    yang_name = "include"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Include::~Include()
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Include::has_data() const
{
    return multicast.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Include::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Include::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Include::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Include::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Include::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Include::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Include::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Include::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Multicast()
    :
    level(std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level>())
{
    level->parent = this;

    yang_name = "multicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::~Multicast()
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Pps>())
{
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::~Level()
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Bps::~Bps()
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Pps::~Pps()
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Unicast()
    :
    level(std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level>())
{
    level->parent = this;

    yang_name = "unicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::~Unicast()
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Level()
    :
    bps(std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Pps>())
	,threshold(std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Threshold>())
{
    bps->parent = this;
    pps->parent = this;
    threshold->parent = this;

    yang_name = "level"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::~Level()
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::has_data() const
{
    return (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Bps::~Bps()
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Pps::~Pps()
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Threshold::Threshold()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "threshold"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Threshold::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Switchport::Switchport()
{

    yang_name = "switchport"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Switchport::~Switchport()
{
}

bool Native::Interface::EmbeddedServiceEngine::Switchport::has_data() const
{
    return false;
}

bool Native::Interface::EmbeddedServiceEngine::Switchport::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::EmbeddedServiceEngine::SwitchportConf::SwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{

    yang_name = "switchport-conf"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::SwitchportConf::~SwitchportConf()
{
}

bool Native::Interface::EmbeddedServiceEngine::SwitchportConf::has_data() const
{
    return switchport.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::SwitchportConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchport.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::SwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::SwitchportConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.yfilter)) leaf_name_data.push_back(switchport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::SwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::SwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::SwitchportConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchport")
    {
        switchport = value;
        switchport.value_namespace = name_space;
        switchport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::SwitchportConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchport")
    {
        switchport.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::SwitchportConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{

    yang_name = "trust"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Trust::~Trust()
{
}

bool Native::Interface::EmbeddedServiceEngine::Trust::has_data() const
{
    return device.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Utd::Utd()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "utd"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Utd::~Utd()
{
}

bool Native::Interface::EmbeddedServiceEngine::Utd::has_data() const
{
    return enable.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Utd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::EmbeddedServiceEngine::Vrf::~Vrf()
{
}

bool Native::Interface::EmbeddedServiceEngine::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::EmbeddedServiceEngine::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::EmbeddedServiceEngine::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::EmbeddedServiceEngine::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::FastEthernet::FastEthernet()
    :
    name{YType::str, "name"},
    channel_protocol{YType::enumeration, "Cisco-IOS-XE-ethernet:channel-protocol"},
    delay{YType::uint32, "delay"},
    description{YType::str, "description"},
    duplex{YType::enumeration, "Cisco-IOS-XE-ethernet:duplex"},
    if_state{YType::enumeration, "if-state"},
    keepalive{YType::boolean, "keepalive"},
    load_interval{YType::uint16, "load-interval"},
    mac_address{YType::str, "mac-address"},
    max_reserved_bandwidth{YType::uint8, "max-reserved-bandwidth"},
    mtu{YType::uint16, "mtu"},
    nat66{YType::enumeration, "Cisco-IOS-XE-nat:nat66"},
    service_insertion{YType::enumeration, "service-insertion"},
    shutdown{YType::empty, "shutdown"}
    	,
    access_session(std::make_shared<Native::Interface::FastEthernet::AccessSession>())
	,arp(std::make_shared<Native::Interface::FastEthernet::Arp>())
	,authentication(std::make_shared<Native::Interface::FastEthernet::Authentication>())
	,auto_(std::make_shared<Native::Interface::FastEthernet::Auto_>())
	,backup(std::make_shared<Native::Interface::FastEthernet::Backup>())
	,bandwidth(std::make_shared<Native::Interface::FastEthernet::Bandwidth>())
	,bfd(std::make_shared<Native::Interface::FastEthernet::Bfd>())
	,carrier_delay(std::make_shared<Native::Interface::FastEthernet::CarrierDelay>())
	,cdp(std::make_shared<Native::Interface::FastEthernet::Cdp>())
	,cemoudp(std::make_shared<Native::Interface::FastEthernet::Cemoudp>())
	,channel_group(std::make_shared<Native::Interface::FastEthernet::ChannelGroup>())
	,crypto(std::make_shared<Native::Interface::FastEthernet::Crypto>())
	,cts(std::make_shared<Native::Interface::FastEthernet::Cts>())
	,cws_tunnel(std::make_shared<Native::Interface::FastEthernet::CwsTunnel>())
	,dampening(std::make_shared<Native::Interface::FastEthernet::Dampening>())
	,datalink(std::make_shared<Native::Interface::FastEthernet::Datalink>())
	,device_tracking(std::make_shared<Native::Interface::FastEthernet::DeviceTracking>())
	,domain(std::make_shared<Native::Interface::FastEthernet::Domain>())
	,dot1x(std::make_shared<Native::Interface::FastEthernet::Dot1X>())
	,dual_active(std::make_shared<Native::Interface::FastEthernet::DualActive>())
	,encapsulation(std::make_shared<Native::Interface::FastEthernet::Encapsulation>())
	,energywise(nullptr) // presence node
	,ethernet(std::make_shared<Native::Interface::FastEthernet::Ethernet>())
	,fair_queue(std::make_shared<Native::Interface::FastEthernet::FairQueue>())
	,fair_queue_conf(std::make_shared<Native::Interface::FastEthernet::FairQueueConf>())
	,flowcontrol(std::make_shared<Native::Interface::FastEthernet::Flowcontrol>())
	,interface_qos(std::make_shared<Native::Interface::FastEthernet::InterfaceQos>())
	,ip(std::make_shared<Native::Interface::FastEthernet::Ip>())
	,ip_vrf(std::make_shared<Native::Interface::FastEthernet::IpVrf>())
	,ipv6(std::make_shared<Native::Interface::FastEthernet::Ipv6>())
	,isis(std::make_shared<Native::Interface::FastEthernet::Isis>())
	,keepalive_settings(std::make_shared<Native::Interface::FastEthernet::KeepaliveSettings>())
	,l2protocol_tunnel(nullptr) // presence node
	,lisp(std::make_shared<Native::Interface::FastEthernet::Lisp>())
	,lldp(std::make_shared<Native::Interface::FastEthernet::Lldp>())
	,load_balancing(std::make_shared<Native::Interface::FastEthernet::LoadBalancing>())
	,location(std::make_shared<Native::Interface::FastEthernet::Location>())
	,logging(std::make_shared<Native::Interface::FastEthernet::Logging>())
	,mab(nullptr) // presence node
	,mac(std::make_shared<Native::Interface::FastEthernet::Mac>())
	,macro(std::make_shared<Native::Interface::FastEthernet::Macro>())
	,macsec(nullptr) // presence node
	,mdix(std::make_shared<Native::Interface::FastEthernet::Mdix>())
	,mka(std::make_shared<Native::Interface::FastEthernet::Mka>())
	,mop(std::make_shared<Native::Interface::FastEthernet::Mop>())
	,mpls(std::make_shared<Native::Interface::FastEthernet::Mpls>())
	,negotiation(std::make_shared<Native::Interface::FastEthernet::Negotiation>())
	,ospfv3(std::make_shared<Native::Interface::FastEthernet::Ospfv3>())
	,peer(std::make_shared<Native::Interface::FastEthernet::Peer>())
	,performance(std::make_shared<Native::Interface::FastEthernet::Performance>())
	,plim(std::make_shared<Native::Interface::FastEthernet::Plim>())
	,pm_path(std::make_shared<Native::Interface::FastEthernet::PmPath>())
	,power(std::make_shared<Native::Interface::FastEthernet::Power>())
	,pppoe(std::make_shared<Native::Interface::FastEthernet::Pppoe>())
	,priority_queue(std::make_shared<Native::Interface::FastEthernet::PriorityQueue>())
	,rcv_queue(std::make_shared<Native::Interface::FastEthernet::RcvQueue>())
	,service(std::make_shared<Native::Interface::FastEthernet::Service>())
	,service_policy(std::make_shared<Native::Interface::FastEthernet::ServicePolicy>())
	,snmp(std::make_shared<Native::Interface::FastEthernet::Snmp>())
	,spanning_tree(std::make_shared<Native::Interface::FastEthernet::SpanningTree>())
	,speed(std::make_shared<Native::Interface::FastEthernet::Speed>())
	,srr_queue(std::make_shared<Native::Interface::FastEthernet::SrrQueue>())
	,standby(std::make_shared<Native::Interface::FastEthernet::Standby>())
	,storm_control(std::make_shared<Native::Interface::FastEthernet::StormControl>())
	,switch_(std::make_shared<Native::Interface::FastEthernet::Switch_>())
	,switchport(std::make_shared<Native::Interface::FastEthernet::Switchport>())
	,switchport_conf(std::make_shared<Native::Interface::FastEthernet::SwitchportConf>())
	,synchronous(std::make_shared<Native::Interface::FastEthernet::Synchronous>())
	,trust(std::make_shared<Native::Interface::FastEthernet::Trust>())
	,udld(std::make_shared<Native::Interface::FastEthernet::Udld>())
	,utd(std::make_shared<Native::Interface::FastEthernet::Utd>())
	,vrf(std::make_shared<Native::Interface::FastEthernet::Vrf>())
	,xconnect(std::make_shared<Native::Interface::FastEthernet::Xconnect>())
	,zone_member(std::make_shared<Native::Interface::FastEthernet::ZoneMember>())
{
    access_session->parent = this;
    arp->parent = this;
    authentication->parent = this;
    auto_->parent = this;
    backup->parent = this;
    bandwidth->parent = this;
    bfd->parent = this;
    carrier_delay->parent = this;
    cdp->parent = this;
    cemoudp->parent = this;
    channel_group->parent = this;
    crypto->parent = this;
    cts->parent = this;
    cws_tunnel->parent = this;
    dampening->parent = this;
    datalink->parent = this;
    device_tracking->parent = this;
    domain->parent = this;
    dot1x->parent = this;
    dual_active->parent = this;
    encapsulation->parent = this;
    ethernet->parent = this;
    fair_queue->parent = this;
    fair_queue_conf->parent = this;
    flowcontrol->parent = this;
    interface_qos->parent = this;
    ip->parent = this;
    ip_vrf->parent = this;
    ipv6->parent = this;
    isis->parent = this;
    keepalive_settings->parent = this;
    lisp->parent = this;
    lldp->parent = this;
    load_balancing->parent = this;
    location->parent = this;
    logging->parent = this;
    mac->parent = this;
    macro->parent = this;
    mdix->parent = this;
    mka->parent = this;
    mop->parent = this;
    mpls->parent = this;
    negotiation->parent = this;
    ospfv3->parent = this;
    peer->parent = this;
    performance->parent = this;
    plim->parent = this;
    pm_path->parent = this;
    power->parent = this;
    pppoe->parent = this;
    priority_queue->parent = this;
    rcv_queue->parent = this;
    service->parent = this;
    service_policy->parent = this;
    snmp->parent = this;
    spanning_tree->parent = this;
    speed->parent = this;
    srr_queue->parent = this;
    standby->parent = this;
    storm_control->parent = this;
    switch_->parent = this;
    switchport->parent = this;
    switchport_conf->parent = this;
    synchronous->parent = this;
    trust->parent = this;
    udld->parent = this;
    utd->parent = this;
    vrf->parent = this;
    xconnect->parent = this;
    zone_member->parent = this;

    yang_name = "FastEthernet"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Interface::FastEthernet::~FastEthernet()
{
}

bool Native::Interface::FastEthernet::has_data() const
{
    for (std::size_t index=0; index<hold_queue.size(); index++)
    {
        if(hold_queue[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return name.is_set
	|| channel_protocol.is_set
	|| delay.is_set
	|| description.is_set
	|| duplex.is_set
	|| if_state.is_set
	|| keepalive.is_set
	|| load_interval.is_set
	|| mac_address.is_set
	|| max_reserved_bandwidth.is_set
	|| mtu.is_set
	|| nat66.is_set
	|| service_insertion.is_set
	|| shutdown.is_set
	|| (access_session !=  nullptr && access_session->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (carrier_delay !=  nullptr && carrier_delay->has_data())
	|| (cdp !=  nullptr && cdp->has_data())
	|| (cemoudp !=  nullptr && cemoudp->has_data())
	|| (channel_group !=  nullptr && channel_group->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (cts !=  nullptr && cts->has_data())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (datalink !=  nullptr && datalink->has_data())
	|| (device_tracking !=  nullptr && device_tracking->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (dot1x !=  nullptr && dot1x->has_data())
	|| (dual_active !=  nullptr && dual_active->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (energywise !=  nullptr && energywise->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (fair_queue !=  nullptr && fair_queue->has_data())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (interface_qos !=  nullptr && interface_qos->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ip_vrf !=  nullptr && ip_vrf->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_data())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (lldp !=  nullptr && lldp->has_data())
	|| (load_balancing !=  nullptr && load_balancing->has_data())
	|| (location !=  nullptr && location->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (macro !=  nullptr && macro->has_data())
	|| (macsec !=  nullptr && macsec->has_data())
	|| (mdix !=  nullptr && mdix->has_data())
	|| (mka !=  nullptr && mka->has_data())
	|| (mop !=  nullptr && mop->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (negotiation !=  nullptr && negotiation->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (performance !=  nullptr && performance->has_data())
	|| (plim !=  nullptr && plim->has_data())
	|| (pm_path !=  nullptr && pm_path->has_data())
	|| (power !=  nullptr && power->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data())
	|| (priority_queue !=  nullptr && priority_queue->has_data())
	|| (rcv_queue !=  nullptr && rcv_queue->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (speed !=  nullptr && speed->has_data())
	|| (srr_queue !=  nullptr && srr_queue->has_data())
	|| (standby !=  nullptr && standby->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switch_ !=  nullptr && switch_->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (switchport_conf !=  nullptr && switchport_conf->has_data())
	|| (synchronous !=  nullptr && synchronous->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (udld !=  nullptr && udld->has_data())
	|| (utd !=  nullptr && utd->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (zone_member !=  nullptr && zone_member->has_data());
}

bool Native::Interface::FastEthernet::has_operation() const
{
    for (std::size_t index=0; index<hold_queue.size(); index++)
    {
        if(hold_queue[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(channel_protocol.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(if_state.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(max_reserved_bandwidth.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(nat66.yfilter)
	|| ydk::is_set(service_insertion.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (cdp !=  nullptr && cdp->has_operation())
	|| (cemoudp !=  nullptr && cemoudp->has_operation())
	|| (channel_group !=  nullptr && channel_group->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (cts !=  nullptr && cts->has_operation())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (datalink !=  nullptr && datalink->has_operation())
	|| (device_tracking !=  nullptr && device_tracking->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (dual_active !=  nullptr && dual_active->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (energywise !=  nullptr && energywise->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (fair_queue !=  nullptr && fair_queue->has_operation())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (interface_qos !=  nullptr && interface_qos->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ip_vrf !=  nullptr && ip_vrf->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_operation())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (lldp !=  nullptr && lldp->has_operation())
	|| (load_balancing !=  nullptr && load_balancing->has_operation())
	|| (location !=  nullptr && location->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (macro !=  nullptr && macro->has_operation())
	|| (macsec !=  nullptr && macsec->has_operation())
	|| (mdix !=  nullptr && mdix->has_operation())
	|| (mka !=  nullptr && mka->has_operation())
	|| (mop !=  nullptr && mop->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (negotiation !=  nullptr && negotiation->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (performance !=  nullptr && performance->has_operation())
	|| (plim !=  nullptr && plim->has_operation())
	|| (pm_path !=  nullptr && pm_path->has_operation())
	|| (power !=  nullptr && power->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (priority_queue !=  nullptr && priority_queue->has_operation())
	|| (rcv_queue !=  nullptr && rcv_queue->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (speed !=  nullptr && speed->has_operation())
	|| (srr_queue !=  nullptr && srr_queue->has_operation())
	|| (standby !=  nullptr && standby->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switch_ !=  nullptr && switch_->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (switchport_conf !=  nullptr && switchport_conf->has_operation())
	|| (synchronous !=  nullptr && synchronous->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (udld !=  nullptr && udld->has_operation())
	|| (utd !=  nullptr && utd->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (zone_member !=  nullptr && zone_member->has_operation());
}

std::string Native::Interface::FastEthernet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::FastEthernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FastEthernet" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (channel_protocol.is_set || is_set(channel_protocol.yfilter)) leaf_name_data.push_back(channel_protocol.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (if_state.is_set || is_set(if_state.yfilter)) leaf_name_data.push_back(if_state.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (max_reserved_bandwidth.is_set || is_set(max_reserved_bandwidth.yfilter)) leaf_name_data.push_back(max_reserved_bandwidth.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (nat66.is_set || is_set(nat66.yfilter)) leaf_name_data.push_back(nat66.get_name_leafdata());
    if (service_insertion.is_set || is_set(service_insertion.yfilter)) leaf_name_data.push_back(service_insertion.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::Interface::FastEthernet::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::FastEthernet::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::FastEthernet::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::FastEthernet::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::FastEthernet::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::FastEthernet::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::FastEthernet::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "carrier-delay")
    {
        if(carrier_delay == nullptr)
        {
            carrier_delay = std::make_shared<Native::Interface::FastEthernet::CarrierDelay>();
        }
        return carrier_delay;
    }

    if(child_yang_name == "cdp")
    {
        if(cdp == nullptr)
        {
            cdp = std::make_shared<Native::Interface::FastEthernet::Cdp>();
        }
        return cdp;
    }

    if(child_yang_name == "cemoudp")
    {
        if(cemoudp == nullptr)
        {
            cemoudp = std::make_shared<Native::Interface::FastEthernet::Cemoudp>();
        }
        return cemoudp;
    }

    if(child_yang_name == "channel-group")
    {
        if(channel_group == nullptr)
        {
            channel_group = std::make_shared<Native::Interface::FastEthernet::ChannelGroup>();
        }
        return channel_group;
    }

    if(child_yang_name == "crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Interface::FastEthernet::Crypto>();
        }
        return crypto;
    }

    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Interface::FastEthernet::Cts>();
        }
        return cts;
    }

    if(child_yang_name == "cws-tunnel")
    {
        if(cws_tunnel == nullptr)
        {
            cws_tunnel = std::make_shared<Native::Interface::FastEthernet::CwsTunnel>();
        }
        return cws_tunnel;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Interface::FastEthernet::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "datalink")
    {
        if(datalink == nullptr)
        {
            datalink = std::make_shared<Native::Interface::FastEthernet::Datalink>();
        }
        return datalink;
    }

    if(child_yang_name == "device-tracking")
    {
        if(device_tracking == nullptr)
        {
            device_tracking = std::make_shared<Native::Interface::FastEthernet::DeviceTracking>();
        }
        return device_tracking;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Interface::FastEthernet::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Interface::FastEthernet::Dot1X>();
        }
        return dot1x;
    }

    if(child_yang_name == "dual-active")
    {
        if(dual_active == nullptr)
        {
            dual_active = std::make_shared<Native::Interface::FastEthernet::DualActive>();
        }
        return dual_active;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::FastEthernet::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "energywise")
    {
        if(energywise == nullptr)
        {
            energywise = std::make_shared<Native::Interface::FastEthernet::Energywise>();
        }
        return energywise;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::FastEthernet::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Interface::FastEthernet::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "fair-queue-conf")
    {
        if(fair_queue_conf == nullptr)
        {
            fair_queue_conf = std::make_shared<Native::Interface::FastEthernet::FairQueueConf>();
        }
        return fair_queue_conf;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Interface::FastEthernet::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "hold-queue")
    {
        for(auto const & c : hold_queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::FastEthernet::HoldQueue>();
        c->parent = this;
        hold_queue.push_back(c);
        return c;
    }

    if(child_yang_name == "interface_qos")
    {
        if(interface_qos == nullptr)
        {
            interface_qos = std::make_shared<Native::Interface::FastEthernet::InterfaceQos>();
        }
        return interface_qos;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::FastEthernet::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::FastEthernet::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::FastEthernet::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::FastEthernet::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::FastEthernet::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::Interface::FastEthernet::L2ProtocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Interface::FastEthernet::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "lldp")
    {
        if(lldp == nullptr)
        {
            lldp = std::make_shared<Native::Interface::FastEthernet::Lldp>();
        }
        return lldp;
    }

    if(child_yang_name == "load-balancing")
    {
        if(load_balancing == nullptr)
        {
            load_balancing = std::make_shared<Native::Interface::FastEthernet::LoadBalancing>();
        }
        return load_balancing;
    }

    if(child_yang_name == "location")
    {
        if(location == nullptr)
        {
            location = std::make_shared<Native::Interface::FastEthernet::Location>();
        }
        return location;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Interface::FastEthernet::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Interface::FastEthernet::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Interface::FastEthernet::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "macro")
    {
        if(macro == nullptr)
        {
            macro = std::make_shared<Native::Interface::FastEthernet::Macro>();
        }
        return macro;
    }

    if(child_yang_name == "macsec")
    {
        if(macsec == nullptr)
        {
            macsec = std::make_shared<Native::Interface::FastEthernet::Macsec>();
        }
        return macsec;
    }

    if(child_yang_name == "mdix")
    {
        if(mdix == nullptr)
        {
            mdix = std::make_shared<Native::Interface::FastEthernet::Mdix>();
        }
        return mdix;
    }

    if(child_yang_name == "mka")
    {
        if(mka == nullptr)
        {
            mka = std::make_shared<Native::Interface::FastEthernet::Mka>();
        }
        return mka;
    }

    if(child_yang_name == "mop")
    {
        if(mop == nullptr)
        {
            mop = std::make_shared<Native::Interface::FastEthernet::Mop>();
        }
        return mop;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::FastEthernet::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "negotiation")
    {
        if(negotiation == nullptr)
        {
            negotiation = std::make_shared<Native::Interface::FastEthernet::Negotiation>();
        }
        return negotiation;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::Interface::FastEthernet::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::FastEthernet::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "performance")
    {
        if(performance == nullptr)
        {
            performance = std::make_shared<Native::Interface::FastEthernet::Performance>();
        }
        return performance;
    }

    if(child_yang_name == "plim")
    {
        if(plim == nullptr)
        {
            plim = std::make_shared<Native::Interface::FastEthernet::Plim>();
        }
        return plim;
    }

    if(child_yang_name == "pm-path")
    {
        if(pm_path == nullptr)
        {
            pm_path = std::make_shared<Native::Interface::FastEthernet::PmPath>();
        }
        return pm_path;
    }

    if(child_yang_name == "power")
    {
        if(power == nullptr)
        {
            power = std::make_shared<Native::Interface::FastEthernet::Power>();
        }
        return power;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Native::Interface::FastEthernet::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "priority-queue")
    {
        if(priority_queue == nullptr)
        {
            priority_queue = std::make_shared<Native::Interface::FastEthernet::PriorityQueue>();
        }
        return priority_queue;
    }

    if(child_yang_name == "rcv-queue")
    {
        if(rcv_queue == nullptr)
        {
            rcv_queue = std::make_shared<Native::Interface::FastEthernet::RcvQueue>();
        }
        return rcv_queue;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Interface::FastEthernet::Service>();
        }
        return service;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::FastEthernet::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Interface::FastEthernet::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Interface::FastEthernet::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "speed")
    {
        if(speed == nullptr)
        {
            speed = std::make_shared<Native::Interface::FastEthernet::Speed>();
        }
        return speed;
    }

    if(child_yang_name == "srr-queue")
    {
        if(srr_queue == nullptr)
        {
            srr_queue = std::make_shared<Native::Interface::FastEthernet::SrrQueue>();
        }
        return srr_queue;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Interface::FastEthernet::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Interface::FastEthernet::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::Interface::FastEthernet::Switch_>();
        }
        return switch_;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Interface::FastEthernet::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "switchport-conf")
    {
        if(switchport_conf == nullptr)
        {
            switchport_conf = std::make_shared<Native::Interface::FastEthernet::SwitchportConf>();
        }
        return switchport_conf;
    }

    if(child_yang_name == "synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Interface::FastEthernet::Synchronous>();
        }
        return synchronous;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::FastEthernet::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "udld")
    {
        if(udld == nullptr)
        {
            udld = std::make_shared<Native::Interface::FastEthernet::Udld>();
        }
        return udld;
    }

    if(child_yang_name == "utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::Interface::FastEthernet::Utd>();
        }
        return utd;
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::FastEthernet::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::FastEthernet::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::FastEthernet::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "zone-member")
    {
        if(zone_member == nullptr)
        {
            zone_member = std::make_shared<Native::Interface::FastEthernet::ZoneMember>();
        }
        return zone_member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_session != nullptr)
    {
        children["access-session"] = access_session;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(carrier_delay != nullptr)
    {
        children["carrier-delay"] = carrier_delay;
    }

    if(cdp != nullptr)
    {
        children["cdp"] = cdp;
    }

    if(cemoudp != nullptr)
    {
        children["cemoudp"] = cemoudp;
    }

    if(channel_group != nullptr)
    {
        children["channel-group"] = channel_group;
    }

    if(crypto != nullptr)
    {
        children["crypto"] = crypto;
    }

    if(cts != nullptr)
    {
        children["cts"] = cts;
    }

    if(cws_tunnel != nullptr)
    {
        children["cws-tunnel"] = cws_tunnel;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(datalink != nullptr)
    {
        children["datalink"] = datalink;
    }

    if(device_tracking != nullptr)
    {
        children["device-tracking"] = device_tracking;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(dot1x != nullptr)
    {
        children["dot1x"] = dot1x;
    }

    if(dual_active != nullptr)
    {
        children["dual-active"] = dual_active;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(energywise != nullptr)
    {
        children["energywise"] = energywise;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(fair_queue != nullptr)
    {
        children["fair-queue"] = fair_queue;
    }

    if(fair_queue_conf != nullptr)
    {
        children["fair-queue-conf"] = fair_queue_conf;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    for (auto const & c : hold_queue)
    {
        children[c->get_segment_path()] = c;
    }

    if(interface_qos != nullptr)
    {
        children["interface_qos"] = interface_qos;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ip_vrf != nullptr)
    {
        children["ip-vrf"] = ip_vrf;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(keepalive_settings != nullptr)
    {
        children["keepalive-settings"] = keepalive_settings;
    }

    if(l2protocol_tunnel != nullptr)
    {
        children["l2protocol-tunnel"] = l2protocol_tunnel;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(lldp != nullptr)
    {
        children["lldp"] = lldp;
    }

    if(load_balancing != nullptr)
    {
        children["load-balancing"] = load_balancing;
    }

    if(location != nullptr)
    {
        children["location"] = location;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(mab != nullptr)
    {
        children["mab"] = mab;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(macro != nullptr)
    {
        children["macro"] = macro;
    }

    if(macsec != nullptr)
    {
        children["macsec"] = macsec;
    }

    if(mdix != nullptr)
    {
        children["mdix"] = mdix;
    }

    if(mka != nullptr)
    {
        children["mka"] = mka;
    }

    if(mop != nullptr)
    {
        children["mop"] = mop;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(negotiation != nullptr)
    {
        children["negotiation"] = negotiation;
    }

    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(performance != nullptr)
    {
        children["performance"] = performance;
    }

    if(plim != nullptr)
    {
        children["plim"] = plim;
    }

    if(pm_path != nullptr)
    {
        children["pm-path"] = pm_path;
    }

    if(power != nullptr)
    {
        children["power"] = power;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    if(priority_queue != nullptr)
    {
        children["priority-queue"] = priority_queue;
    }

    if(rcv_queue != nullptr)
    {
        children["rcv-queue"] = rcv_queue;
    }

    if(service != nullptr)
    {
        children["service"] = service;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(speed != nullptr)
    {
        children["speed"] = speed;
    }

    if(srr_queue != nullptr)
    {
        children["srr-queue"] = srr_queue;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    if(switchport_conf != nullptr)
    {
        children["switchport-conf"] = switchport_conf;
    }

    if(synchronous != nullptr)
    {
        children["synchronous"] = synchronous;
    }

    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    if(udld != nullptr)
    {
        children["udld"] = udld;
    }

    if(utd != nullptr)
    {
        children["utd"] = utd;
    }

    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(zone_member != nullptr)
    {
        children["zone-member"] = zone_member;
    }

    return children;
}

void Native::Interface::FastEthernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-protocol")
    {
        channel_protocol = value;
        channel_protocol.value_namespace = name_space;
        channel_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-state")
    {
        if_state = value;
        if_state.value_namespace = name_space;
        if_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth = value;
        max_reserved_bandwidth.value_namespace = name_space;
        max_reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nat66")
    {
        nat66 = value;
        nat66.value_namespace = name_space;
        nat66.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-insertion")
    {
        service_insertion = value;
        service_insertion.value_namespace = name_space;
        service_insertion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "channel-protocol")
    {
        channel_protocol.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "if-state")
    {
        if_state.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "nat66")
    {
        nat66.yfilter = yfilter;
    }
    if(value_path == "service-insertion")
    {
        service_insertion.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-session" || name == "arp" || name == "authentication" || name == "auto" || name == "backup" || name == "bandwidth" || name == "bfd" || name == "carrier-delay" || name == "cdp" || name == "cemoudp" || name == "channel-group" || name == "crypto" || name == "cts" || name == "cws-tunnel" || name == "dampening" || name == "datalink" || name == "device-tracking" || name == "domain" || name == "dot1x" || name == "dual-active" || name == "encapsulation" || name == "energywise" || name == "ethernet" || name == "fair-queue" || name == "fair-queue-conf" || name == "flowcontrol" || name == "hold-queue" || name == "interface_qos" || name == "ip" || name == "ip-vrf" || name == "ipv6" || name == "isis" || name == "keepalive-settings" || name == "l2protocol-tunnel" || name == "lisp" || name == "lldp" || name == "load-balancing" || name == "location" || name == "logging" || name == "mab" || name == "mac" || name == "macro" || name == "macsec" || name == "mdix" || name == "mka" || name == "mop" || name == "mpls" || name == "negotiation" || name == "ospfv3" || name == "peer" || name == "performance" || name == "plim" || name == "pm-path" || name == "power" || name == "pppoe" || name == "priority-queue" || name == "rcv-queue" || name == "service" || name == "service-policy" || name == "snmp" || name == "spanning-tree" || name == "speed" || name == "srr-queue" || name == "standby" || name == "storm-control" || name == "switch" || name == "switchport" || name == "switchport-conf" || name == "synchronous" || name == "trust" || name == "udld" || name == "utd" || name == "vlan-range" || name == "vrf" || name == "xconnect" || name == "zone-member" || name == "name" || name == "channel-protocol" || name == "delay" || name == "description" || name == "duplex" || name == "if-state" || name == "keepalive" || name == "load-interval" || name == "mac-address" || name == "max-reserved-bandwidth" || name == "mtu" || name == "nat66" || name == "service-insertion" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::FastEthernet::AccessSession::AccessSession()
    :
    closed{YType::empty, "closed"},
    host_mode{YType::enumeration, "host-mode"}
    	,
    port_control(std::make_shared<Native::Interface::FastEthernet::AccessSession::PortControl>())
{
    port_control->parent = this;

    yang_name = "access-session"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::AccessSession::~AccessSession()
{
}

bool Native::Interface::FastEthernet::AccessSession::has_data() const
{
    return closed.is_set
	|| host_mode.is_set
	|| (port_control !=  nullptr && port_control->has_data());
}

bool Native::Interface::FastEthernet::AccessSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(closed.yfilter)
	|| ydk::is_set(host_mode.yfilter)
	|| (port_control !=  nullptr && port_control->has_operation());
}

std::string Native::Interface::FastEthernet::AccessSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::AccessSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (closed.is_set || is_set(closed.yfilter)) leaf_name_data.push_back(closed.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.yfilter)) leaf_name_data.push_back(host_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::AccessSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-control")
    {
        if(port_control == nullptr)
        {
            port_control = std::make_shared<Native::Interface::FastEthernet::AccessSession::PortControl>();
        }
        return port_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::AccessSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_control != nullptr)
    {
        children["port-control"] = port_control;
    }

    return children;
}

void Native::Interface::FastEthernet::AccessSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "closed")
    {
        closed = value;
        closed.value_namespace = name_space;
        closed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
        host_mode.value_namespace = name_space;
        host_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::AccessSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "closed")
    {
        closed.yfilter = yfilter;
    }
    if(value_path == "host-mode")
    {
        host_mode.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::AccessSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-control" || name == "closed" || name == "host-mode")
        return true;
    return false;
}

Native::Interface::FastEthernet::AccessSession::PortControl::PortControl()
    :
    auto_{YType::empty, "auto"}
{

    yang_name = "port-control"; yang_parent_name = "access-session"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::AccessSession::PortControl::~PortControl()
{
}

bool Native::Interface::FastEthernet::AccessSession::PortControl::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::FastEthernet::AccessSession::PortControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::FastEthernet::AccessSession::PortControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::AccessSession::PortControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::AccessSession::PortControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::AccessSession::PortControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::AccessSession::PortControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::AccessSession::PortControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::AccessSession::PortControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::FastEthernet::Arp::Arp()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "arp"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Arp::~Arp()
{
}

bool Native::Interface::FastEthernet::Arp::has_data() const
{
    return timeout.is_set;
}

bool Native::Interface::FastEthernet::Arp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::FastEthernet::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Authentication()
    :
    control_direction{YType::enumeration, "control-direction"},
    fallback{YType::str, "fallback"},
    host_mode{YType::enumeration, "host-mode"},
    open{YType::empty, "open"},
    periodic{YType::empty, "periodic"},
    port_control{YType::enumeration, "port-control"},
    violation{YType::enumeration, "violation"}
    	,
    event(std::make_shared<Native::Interface::FastEthernet::Authentication::Event>())
	,order(std::make_shared<Native::Interface::FastEthernet::Authentication::Order>())
	,priority(std::make_shared<Native::Interface::FastEthernet::Authentication::Priority>())
	,timer(std::make_shared<Native::Interface::FastEthernet::Authentication::Timer>())
{
    event->parent = this;
    order->parent = this;
    priority->parent = this;
    timer->parent = this;

    yang_name = "authentication"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::~Authentication()
{
}

bool Native::Interface::FastEthernet::Authentication::has_data() const
{
    return control_direction.is_set
	|| fallback.is_set
	|| host_mode.is_set
	|| open.is_set
	|| periodic.is_set
	|| port_control.is_set
	|| violation.is_set
	|| (event !=  nullptr && event->has_data())
	|| (order !=  nullptr && order->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Interface::FastEthernet::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control_direction.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(host_mode.yfilter)
	|| ydk::is_set(open.yfilter)
	|| ydk::is_set(periodic.yfilter)
	|| ydk::is_set(port_control.yfilter)
	|| ydk::is_set(violation.yfilter)
	|| (event !=  nullptr && event->has_operation())
	|| (order !=  nullptr && order->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Interface::FastEthernet::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_direction.is_set || is_set(control_direction.yfilter)) leaf_name_data.push_back(control_direction.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.yfilter)) leaf_name_data.push_back(host_mode.get_name_leafdata());
    if (open.is_set || is_set(open.yfilter)) leaf_name_data.push_back(open.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());
    if (port_control.is_set || is_set(port_control.yfilter)) leaf_name_data.push_back(port_control.get_name_leafdata());
    if (violation.is_set || is_set(violation.yfilter)) leaf_name_data.push_back(violation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Interface::FastEthernet::Authentication::Event>();
        }
        return event;
    }

    if(child_yang_name == "order")
    {
        if(order == nullptr)
        {
            order = std::make_shared<Native::Interface::FastEthernet::Authentication::Order>();
        }
        return order;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::FastEthernet::Authentication::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Interface::FastEthernet::Authentication::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event != nullptr)
    {
        children["event"] = event;
    }

    if(order != nullptr)
    {
        children["order"] = order;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    return children;
}

void Native::Interface::FastEthernet::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-control")
    {
        port_control = value;
        port_control.value_namespace = name_space;
        port_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violation")
    {
        violation = value;
        violation.value_namespace = name_space;
        violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
    if(value_path == "port-control")
    {
        port_control.yfilter = yfilter;
    }
    if(value_path == "violation")
    {
        violation.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "order" || name == "priority" || name == "timer" || name == "control-direction" || name == "fallback" || name == "host-mode" || name == "open" || name == "periodic" || name == "port-control" || name == "violation")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Event::Event()
    :
    fail(std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Fail>())
	,no_response(std::make_shared<Native::Interface::FastEthernet::Authentication::Event::NoResponse>())
	,server(std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Server>())
{
    fail->parent = this;
    no_response->parent = this;
    server->parent = this;

    yang_name = "event"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Event::~Event()
{
}

bool Native::Interface::FastEthernet::Authentication::Event::has_data() const
{
    return (fail !=  nullptr && fail->has_data())
	|| (no_response !=  nullptr && no_response->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Interface::FastEthernet::Authentication::Event::has_operation() const
{
    return is_set(yfilter)
	|| (fail !=  nullptr && fail->has_operation())
	|| (no_response !=  nullptr && no_response->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Interface::FastEthernet::Authentication::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fail")
    {
        if(fail == nullptr)
        {
            fail = std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Fail>();
        }
        return fail;
    }

    if(child_yang_name == "no-response")
    {
        if(no_response == nullptr)
        {
            no_response = std::make_shared<Native::Interface::FastEthernet::Authentication::Event::NoResponse>();
        }
        return no_response;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fail != nullptr)
    {
        children["fail"] = fail;
    }

    if(no_response != nullptr)
    {
        children["no-response"] = no_response;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Interface::FastEthernet::Authentication::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Authentication::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Authentication::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fail" || name == "no-response" || name == "server")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Event::Fail::Fail()
    :
    action(std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Fail::Action>())
{
    action->parent = this;

    yang_name = "fail"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Event::Fail::~Fail()
{
}

bool Native::Interface::FastEthernet::Authentication::Event::Fail::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::FastEthernet::Authentication::Event::Fail::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::FastEthernet::Authentication::Event::Fail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Event::Fail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Event::Fail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Fail::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Event::Fail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::FastEthernet::Authentication::Event::Fail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Authentication::Event::Fail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Authentication::Event::Fail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Event::Fail::Action::Action()
    :
    authorize(std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Fail::Action::Authorize>())
{
    authorize->parent = this;

    yang_name = "action"; yang_parent_name = "fail"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Event::Fail::Action::~Action()
{
}

bool Native::Interface::FastEthernet::Authentication::Event::Fail::Action::has_data() const
{
    return (authorize !=  nullptr && authorize->has_data());
}

bool Native::Interface::FastEthernet::Authentication::Event::Fail::Action::has_operation() const
{
    return is_set(yfilter)
	|| (authorize !=  nullptr && authorize->has_operation());
}

std::string Native::Interface::FastEthernet::Authentication::Event::Fail::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Event::Fail::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Event::Fail::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Fail::Action::Authorize>();
        }
        return authorize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Event::Fail::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorize != nullptr)
    {
        children["authorize"] = authorize;
    }

    return children;
}

void Native::Interface::FastEthernet::Authentication::Event::Fail::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Authentication::Event::Fail::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Authentication::Event::Fail::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorize")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Event::Fail::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "authorize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Event::Fail::Action::Authorize::~Authorize()
{
}

bool Native::Interface::FastEthernet::Authentication::Event::Fail::Action::Authorize::has_data() const
{
    return vlan.is_set;
}

bool Native::Interface::FastEthernet::Authentication::Event::Fail::Action::Authorize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::FastEthernet::Authentication::Event::Fail::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Event::Fail::Action::Authorize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Event::Fail::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Event::Fail::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Authentication::Event::Fail::Action::Authorize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Authentication::Event::Fail::Action::Authorize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Authentication::Event::Fail::Action::Authorize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Event::NoResponse::NoResponse()
    :
    action(std::make_shared<Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action>())
{
    action->parent = this;

    yang_name = "no-response"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Event::NoResponse::~NoResponse()
{
}

bool Native::Interface::FastEthernet::Authentication::Event::NoResponse::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::FastEthernet::Authentication::Event::NoResponse::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::FastEthernet::Authentication::Event::NoResponse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Event::NoResponse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Event::NoResponse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Event::NoResponse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::FastEthernet::Authentication::Event::NoResponse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Authentication::Event::NoResponse::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Authentication::Event::NoResponse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::Action()
    :
    authorize(std::make_shared<Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::Authorize>())
{
    authorize->parent = this;

    yang_name = "action"; yang_parent_name = "no-response"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::~Action()
{
}

bool Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::has_data() const
{
    return (authorize !=  nullptr && authorize->has_data());
}

bool Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::has_operation() const
{
    return is_set(yfilter)
	|| (authorize !=  nullptr && authorize->has_operation());
}

std::string Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::Authorize>();
        }
        return authorize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorize != nullptr)
    {
        children["authorize"] = authorize;
    }

    return children;
}

void Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorize")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "authorize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::Authorize::~Authorize()
{
}

bool Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::Authorize::has_data() const
{
    return vlan.is_set;
}

bool Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::Authorize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::Authorize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::Authorize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::Authorize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::Authorize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Event::Server::Server()
    :
    alive(std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Server::Alive>())
	,dead(std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Server::Dead>())
{
    alive->parent = this;
    dead->parent = this;

    yang_name = "server"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Event::Server::~Server()
{
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::has_data() const
{
    return (alive !=  nullptr && alive->has_data())
	|| (dead !=  nullptr && dead->has_data());
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::has_operation() const
{
    return is_set(yfilter)
	|| (alive !=  nullptr && alive->has_operation())
	|| (dead !=  nullptr && dead->has_operation());
}

std::string Native::Interface::FastEthernet::Authentication::Event::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Event::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Event::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alive")
    {
        if(alive == nullptr)
        {
            alive = std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Server::Alive>();
        }
        return alive;
    }

    if(child_yang_name == "dead")
    {
        if(dead == nullptr)
        {
            dead = std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Server::Dead>();
        }
        return dead;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Event::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alive != nullptr)
    {
        children["alive"] = alive;
    }

    if(dead != nullptr)
    {
        children["dead"] = dead;
    }

    return children;
}

void Native::Interface::FastEthernet::Authentication::Event::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Authentication::Event::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alive" || name == "dead")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Event::Server::Alive::Alive()
    :
    action(std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Server::Alive::Action>())
{
    action->parent = this;

    yang_name = "alive"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Event::Server::Alive::~Alive()
{
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::Alive::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::Alive::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::FastEthernet::Authentication::Event::Server::Alive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Event::Server::Alive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Event::Server::Alive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Server::Alive::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Event::Server::Alive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::FastEthernet::Authentication::Event::Server::Alive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Authentication::Event::Server::Alive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::Alive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Event::Server::Alive::Action::Action()
    :
    reinitialize{YType::empty, "reinitialize"}
{

    yang_name = "action"; yang_parent_name = "alive"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Event::Server::Alive::Action::~Action()
{
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::Alive::Action::has_data() const
{
    return reinitialize.is_set;
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::Alive::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reinitialize.yfilter);
}

std::string Native::Interface::FastEthernet::Authentication::Event::Server::Alive::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Event::Server::Alive::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reinitialize.is_set || is_set(reinitialize.yfilter)) leaf_name_data.push_back(reinitialize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Event::Server::Alive::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Event::Server::Alive::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Authentication::Event::Server::Alive::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reinitialize")
    {
        reinitialize = value;
        reinitialize.value_namespace = name_space;
        reinitialize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Authentication::Event::Server::Alive::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reinitialize")
    {
        reinitialize.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::Alive::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reinitialize")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Dead()
    :
    action(std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action>())
{
    action->parent = this;

    yang_name = "dead"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Event::Server::Dead::~Dead()
{
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::Dead::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::Dead::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::FastEthernet::Authentication::Event::Server::Dead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Event::Server::Dead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Event::Server::Dead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Event::Server::Dead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::FastEthernet::Authentication::Event::Server::Dead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Authentication::Event::Server::Dead::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::Dead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Action()
    :
    authorize(nullptr) // presence node
	,reinitialize(std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Reinitialize>())
{
    reinitialize->parent = this;

    yang_name = "action"; yang_parent_name = "dead"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::~Action()
{
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::has_data() const
{
    return (authorize !=  nullptr && authorize->has_data())
	|| (reinitialize !=  nullptr && reinitialize->has_data());
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::has_operation() const
{
    return is_set(yfilter)
	|| (authorize !=  nullptr && authorize->has_operation())
	|| (reinitialize !=  nullptr && reinitialize->has_operation());
}

std::string Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Authorize>();
        }
        return authorize;
    }

    if(child_yang_name == "reinitialize")
    {
        if(reinitialize == nullptr)
        {
            reinitialize = std::make_shared<Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Reinitialize>();
        }
        return reinitialize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorize != nullptr)
    {
        children["authorize"] = authorize;
    }

    if(reinitialize != nullptr)
    {
        children["reinitialize"] = reinitialize;
    }

    return children;
}

void Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorize" || name == "reinitialize")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"},
    voice{YType::empty, "voice"}
{

    yang_name = "authorize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Authorize::~Authorize()
{
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Authorize::has_data() const
{
    return vlan.is_set
	|| voice.is_set;
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Authorize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(voice.yfilter);
}

std::string Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Authorize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (voice.is_set || is_set(voice.yfilter)) leaf_name_data.push_back(voice.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Authorize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Authorize::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Authorize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "voice")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::Reinitialize()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "reinitialize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::~Reinitialize()
{
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::has_data() const
{
    return vlan.is_set;
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reinitialize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Order::Order()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "order"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Order::~Order()
{
}

bool Native::Interface::FastEthernet::Authentication::Order::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Interface::FastEthernet::Authentication::Order::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Interface::FastEthernet::Authentication::Order::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "order";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Order::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Order::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Order::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Authentication::Order::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Authentication::Order::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Authentication::Order::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Priority::Priority()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "priority"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Priority::~Priority()
{
}

bool Native::Interface::FastEthernet::Authentication::Priority::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Interface::FastEthernet::Authentication::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Interface::FastEthernet::Authentication::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Authentication::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Authentication::Priority::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Authentication::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Timer::Timer()
    :
    restart{YType::uint16, "restart"}
    	,
    inactivity(std::make_shared<Native::Interface::FastEthernet::Authentication::Timer::Inactivity>())
	,reauthenticate(std::make_shared<Native::Interface::FastEthernet::Authentication::Timer::Reauthenticate>())
{
    inactivity->parent = this;
    reauthenticate->parent = this;

    yang_name = "timer"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Timer::~Timer()
{
}

bool Native::Interface::FastEthernet::Authentication::Timer::has_data() const
{
    return restart.is_set
	|| (inactivity !=  nullptr && inactivity->has_data())
	|| (reauthenticate !=  nullptr && reauthenticate->has_data());
}

bool Native::Interface::FastEthernet::Authentication::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart.yfilter)
	|| (inactivity !=  nullptr && inactivity->has_operation())
	|| (reauthenticate !=  nullptr && reauthenticate->has_operation());
}

std::string Native::Interface::FastEthernet::Authentication::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inactivity")
    {
        if(inactivity == nullptr)
        {
            inactivity = std::make_shared<Native::Interface::FastEthernet::Authentication::Timer::Inactivity>();
        }
        return inactivity;
    }

    if(child_yang_name == "reauthenticate")
    {
        if(reauthenticate == nullptr)
        {
            reauthenticate = std::make_shared<Native::Interface::FastEthernet::Authentication::Timer::Reauthenticate>();
        }
        return reauthenticate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inactivity != nullptr)
    {
        children["inactivity"] = inactivity;
    }

    if(reauthenticate != nullptr)
    {
        children["reauthenticate"] = reauthenticate;
    }

    return children;
}

void Native::Interface::FastEthernet::Authentication::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Authentication::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Authentication::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity" || name == "reauthenticate" || name == "restart")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Inactivity()
    :
    server(nullptr) // presence node
	,value_(std::make_shared<Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Value_>())
{
    value_->parent = this;

    yang_name = "inactivity"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Timer::Inactivity::~Inactivity()
{
}

bool Native::Interface::FastEthernet::Authentication::Timer::Inactivity::has_data() const
{
    return (server !=  nullptr && server->has_data())
	|| (value_ !=  nullptr && value_->has_data());
}

bool Native::Interface::FastEthernet::Authentication::Timer::Inactivity::has_operation() const
{
    return is_set(yfilter)
	|| (server !=  nullptr && server->has_operation())
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string Native::Interface::FastEthernet::Authentication::Timer::Inactivity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactivity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Timer::Inactivity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Timer::Inactivity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Server>();
        }
        return server;
    }

    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Value_>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Timer::Inactivity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void Native::Interface::FastEthernet::Authentication::Timer::Inactivity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Authentication::Timer::Inactivity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Authentication::Timer::Inactivity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server" || name == "value")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Server::Server()
    :
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "server"; yang_parent_name = "inactivity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Server::~Server()
{
}

bool Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Server::has_data() const
{
    return dynamic.is_set;
}

bool Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Value_::Value_()
    :
    dynamic{YType::empty, "dynamic"},
    value_{YType::uint16, "value"}
{

    yang_name = "value"; yang_parent_name = "inactivity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Value_::~Value_()
{
}

bool Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Value_::has_data() const
{
    return dynamic.is_set
	|| value_.is_set;
}

bool Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Value_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Value_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Value_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Value_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Value_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "value")
        return true;
    return false;
}

Native::Interface::FastEthernet::Authentication::Timer::Reauthenticate::Reauthenticate()
    :
    server{YType::empty, "server"},
    value_{YType::uint16, "value"}
{

    yang_name = "reauthenticate"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Authentication::Timer::Reauthenticate::~Reauthenticate()
{
}

bool Native::Interface::FastEthernet::Authentication::Timer::Reauthenticate::has_data() const
{
    return server.is_set
	|| value_.is_set;
}

bool Native::Interface::FastEthernet::Authentication::Timer::Reauthenticate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::FastEthernet::Authentication::Timer::Reauthenticate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reauthenticate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Authentication::Timer::Reauthenticate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Authentication::Timer::Reauthenticate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Authentication::Timer::Reauthenticate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Authentication::Timer::Reauthenticate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Authentication::Timer::Reauthenticate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Authentication::Timer::Reauthenticate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server" || name == "value")
        return true;
    return false;
}

Native::Interface::FastEthernet::Auto_::Auto_()
    :
    qos(std::make_shared<Native::Interface::FastEthernet::Auto_::Qos>())
{
    qos->parent = this;

    yang_name = "auto"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Auto_::~Auto_()
{
}

bool Native::Interface::FastEthernet::Auto_::has_data() const
{
    return (qos !=  nullptr && qos->has_data());
}

bool Native::Interface::FastEthernet::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Interface::FastEthernet::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Interface::FastEthernet::Auto_::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void Native::Interface::FastEthernet::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos")
        return true;
    return false;
}

Native::Interface::FastEthernet::Auto_::Qos::Qos()
    :
    classify(nullptr) // presence node
	,trust(nullptr) // presence node
	,video(std::make_shared<Native::Interface::FastEthernet::Auto_::Qos::Video>())
	,voip(nullptr) // presence node
{
    video->parent = this;

    yang_name = "qos"; yang_parent_name = "auto"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Auto_::Qos::~Qos()
{
}

bool Native::Interface::FastEthernet::Auto_::Qos::has_data() const
{
    return (classify !=  nullptr && classify->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (video !=  nullptr && video->has_data())
	|| (voip !=  nullptr && voip->has_data());
}

bool Native::Interface::FastEthernet::Auto_::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (classify !=  nullptr && classify->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (video !=  nullptr && video->has_operation())
	|| (voip !=  nullptr && voip->has_operation());
}

std::string Native::Interface::FastEthernet::Auto_::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Auto_::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Auto_::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classify")
    {
        if(classify == nullptr)
        {
            classify = std::make_shared<Native::Interface::FastEthernet::Auto_::Qos::Classify>();
        }
        return classify;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::FastEthernet::Auto_::Qos::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "video")
    {
        if(video == nullptr)
        {
            video = std::make_shared<Native::Interface::FastEthernet::Auto_::Qos::Video>();
        }
        return video;
    }

    if(child_yang_name == "voip")
    {
        if(voip == nullptr)
        {
            voip = std::make_shared<Native::Interface::FastEthernet::Auto_::Qos::Voip>();
        }
        return voip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Auto_::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(classify != nullptr)
    {
        children["classify"] = classify;
    }

    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    if(video != nullptr)
    {
        children["video"] = video;
    }

    if(voip != nullptr)
    {
        children["voip"] = voip;
    }

    return children;
}

void Native::Interface::FastEthernet::Auto_::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Auto_::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Auto_::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classify" || name == "trust" || name == "video" || name == "voip")
        return true;
    return false;
}

Native::Interface::FastEthernet::Auto_::Qos::Classify::Classify()
    :
    police{YType::empty, "police"}
{

    yang_name = "classify"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Auto_::Qos::Classify::~Classify()
{
}

bool Native::Interface::FastEthernet::Auto_::Qos::Classify::has_data() const
{
    return police.is_set;
}

bool Native::Interface::FastEthernet::Auto_::Qos::Classify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(police.yfilter);
}

std::string Native::Interface::FastEthernet::Auto_::Qos::Classify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Auto_::Qos::Classify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (police.is_set || is_set(police.yfilter)) leaf_name_data.push_back(police.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Auto_::Qos::Classify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Auto_::Qos::Classify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Auto_::Qos::Classify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "police")
    {
        police = value;
        police.value_namespace = name_space;
        police.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Auto_::Qos::Classify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "police")
    {
        police.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Auto_::Qos::Classify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police")
        return true;
    return false;
}

Native::Interface::FastEthernet::Auto_::Qos::Trust::Trust()
    :
    cos{YType::empty, "cos"},
    dscp{YType::empty, "dscp"}
{

    yang_name = "trust"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Auto_::Qos::Trust::~Trust()
{
}

bool Native::Interface::FastEthernet::Auto_::Qos::Trust::has_data() const
{
    return cos.is_set
	|| dscp.is_set;
}

bool Native::Interface::FastEthernet::Auto_::Qos::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Native::Interface::FastEthernet::Auto_::Qos::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Auto_::Qos::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Auto_::Qos::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Auto_::Qos::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Auto_::Qos::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Auto_::Qos::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Auto_::Qos::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos" || name == "dscp")
        return true;
    return false;
}

Native::Interface::FastEthernet::Auto_::Qos::Video::Video()
    :
    cts{YType::empty, "cts"},
    ip_camera{YType::empty, "ip-camera"},
    media_player{YType::empty, "media-player"}
{

    yang_name = "video"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Auto_::Qos::Video::~Video()
{
}

bool Native::Interface::FastEthernet::Auto_::Qos::Video::has_data() const
{
    return cts.is_set
	|| ip_camera.is_set
	|| media_player.is_set;
}

bool Native::Interface::FastEthernet::Auto_::Qos::Video::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cts.yfilter)
	|| ydk::is_set(ip_camera.yfilter)
	|| ydk::is_set(media_player.yfilter);
}

std::string Native::Interface::FastEthernet::Auto_::Qos::Video::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "video";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Auto_::Qos::Video::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cts.is_set || is_set(cts.yfilter)) leaf_name_data.push_back(cts.get_name_leafdata());
    if (ip_camera.is_set || is_set(ip_camera.yfilter)) leaf_name_data.push_back(ip_camera.get_name_leafdata());
    if (media_player.is_set || is_set(media_player.yfilter)) leaf_name_data.push_back(media_player.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Auto_::Qos::Video::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Auto_::Qos::Video::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Auto_::Qos::Video::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cts")
    {
        cts = value;
        cts.value_namespace = name_space;
        cts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-camera")
    {
        ip_camera = value;
        ip_camera.value_namespace = name_space;
        ip_camera.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-player")
    {
        media_player = value;
        media_player.value_namespace = name_space;
        media_player.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Auto_::Qos::Video::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cts")
    {
        cts.yfilter = yfilter;
    }
    if(value_path == "ip-camera")
    {
        ip_camera.yfilter = yfilter;
    }
    if(value_path == "media-player")
    {
        media_player.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Auto_::Qos::Video::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cts" || name == "ip-camera" || name == "media-player")
        return true;
    return false;
}

Native::Interface::FastEthernet::Auto_::Qos::Voip::Voip()
    :
    cisco_phone{YType::empty, "cisco-phone"},
    cisco_softphone{YType::empty, "cisco-softphone"},
    trust{YType::empty, "trust"}
{

    yang_name = "voip"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Auto_::Qos::Voip::~Voip()
{
}

bool Native::Interface::FastEthernet::Auto_::Qos::Voip::has_data() const
{
    return cisco_phone.is_set
	|| cisco_softphone.is_set
	|| trust.is_set;
}

bool Native::Interface::FastEthernet::Auto_::Qos::Voip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco_phone.yfilter)
	|| ydk::is_set(cisco_softphone.yfilter)
	|| ydk::is_set(trust.yfilter);
}

std::string Native::Interface::FastEthernet::Auto_::Qos::Voip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Auto_::Qos::Voip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco_phone.is_set || is_set(cisco_phone.yfilter)) leaf_name_data.push_back(cisco_phone.get_name_leafdata());
    if (cisco_softphone.is_set || is_set(cisco_softphone.yfilter)) leaf_name_data.push_back(cisco_softphone.get_name_leafdata());
    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Auto_::Qos::Voip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Auto_::Qos::Voip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Auto_::Qos::Voip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco-phone")
    {
        cisco_phone = value;
        cisco_phone.value_namespace = name_space;
        cisco_phone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-softphone")
    {
        cisco_softphone = value;
        cisco_softphone.value_namespace = name_space;
        cisco_softphone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Auto_::Qos::Voip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco-phone")
    {
        cisco_phone.yfilter = yfilter;
    }
    if(value_path == "cisco-softphone")
    {
        cisco_softphone.yfilter = yfilter;
    }
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Auto_::Qos::Voip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-phone" || name == "cisco-softphone" || name == "trust")
        return true;
    return false;
}

Native::Interface::FastEthernet::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::FastEthernet::Backup::Delay>())
	,interface(std::make_shared<Native::Interface::FastEthernet::Backup::Interface_>())
	,load(std::make_shared<Native::Interface::FastEthernet::Backup::Load>())
{
    delay->parent = this;
    interface->parent = this;
    load->parent = this;

    yang_name = "backup"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Backup::~Backup()
{
}

bool Native::Interface::FastEthernet::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::FastEthernet::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::FastEthernet::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::FastEthernet::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::FastEthernet::Backup::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::FastEthernet::Backup::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(load != nullptr)
    {
        children["load"] = load;
    }

    return children;
}

void Native::Interface::FastEthernet::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "interface" || name == "load")
        return true;
    return false;
}

Native::Interface::FastEthernet::Backup::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Backup::Delay::~Delay()
{
}

bool Native::Interface::FastEthernet::Backup::Delay::has_data() const
{
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::FastEthernet::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter)
	|| ydk::is_set(secondary_disable.yfilter);
}

std::string Native::Interface::FastEthernet::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (secondary_disable.is_set || is_set(secondary_disable.yfilter)) leaf_name_data.push_back(secondary_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable = value;
        secondary_disable.value_namespace = name_space;
        secondary_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "secondary-disable")
        return true;
    return false;
}

Native::Interface::FastEthernet::Backup::Interface_::Interface_()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Interface::FastEthernet::Backup::Interface_::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Interface::FastEthernet::Backup::Interface_::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::FastEthernet::Backup::Interface_::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::FastEthernet::Backup::Interface_::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Backup::Interface_::~Interface_()
{
}

bool Native::Interface::FastEthernet::Backup::Interface_::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Interface::FastEthernet::Backup::Interface_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Interface::FastEthernet::Backup::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Backup::Interface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Backup::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::FastEthernet::Backup::Interface_::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::FastEthernet::Backup::Interface_::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::FastEthernet::Backup::Interface_::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::FastEthernet::Backup::Interface_::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Backup::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
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

void Native::Interface::FastEthernet::Backup::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Backup::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
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
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Backup::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Interface::FastEthernet::Backup::Interface_::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Backup::Interface_::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Interface::FastEthernet::Backup::Interface_::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Interface::FastEthernet::Backup::Interface_::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Interface::FastEthernet::Backup::Interface_::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Backup::Interface_::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Backup::Interface_::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Backup::Interface_::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Backup::Interface_::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Backup::Interface_::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Backup::Interface_::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Interface::FastEthernet::Backup::Interface_::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Backup::Interface_::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Interface::FastEthernet::Backup::Interface_::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Interface::FastEthernet::Backup::Interface_::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Interface::FastEthernet::Backup::Interface_::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Backup::Interface_::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Backup::Interface_::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Backup::Interface_::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Backup::Interface_::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Backup::Interface_::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Backup::Interface_::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Interface::FastEthernet::Backup::Interface_::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Backup::Interface_::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Interface::FastEthernet::Backup::Interface_::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Interface::FastEthernet::Backup::Interface_::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Interface::FastEthernet::Backup::Interface_::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Backup::Interface_::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Backup::Interface_::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Backup::Interface_::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Backup::Interface_::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Backup::Interface_::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Backup::Interface_::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Interface::FastEthernet::Backup::Interface_::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Backup::Interface_::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::FastEthernet::Backup::Interface_::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Interface::FastEthernet::Backup::Interface_::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Interface::FastEthernet::Backup::Interface_::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Backup::Interface_::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Backup::Interface_::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Backup::Interface_::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Backup::Interface_::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Backup::Interface_::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Backup::Interface_::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Interface::FastEthernet::Backup::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{

    yang_name = "load"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Backup::Load::~Load()
{
}

bool Native::Interface::FastEthernet::Backup::Load::has_data() const
{
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::FastEthernet::Backup::Load::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kickin.yfilter)
	|| ydk::is_set(kickout.yfilter);
}

std::string Native::Interface::FastEthernet::Backup::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Backup::Load::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kickin.is_set || is_set(kickin.yfilter)) leaf_name_data.push_back(kickin.get_name_leafdata());
    if (kickout.is_set || is_set(kickout.yfilter)) leaf_name_data.push_back(kickout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Backup::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Backup::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Backup::Load::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kickin")
    {
        kickin = value;
        kickin.value_namespace = name_space;
        kickin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kickout")
    {
        kickout = value;
        kickout.value_namespace = name_space;
        kickout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Backup::Load::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kickin")
    {
        kickin.yfilter = yfilter;
    }
    if(value_path == "kickout")
    {
        kickout.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Backup::Load::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kickin" || name == "kickout")
        return true;
    return false;
}

Native::Interface::FastEthernet::Bandwidth::Bandwidth()
    :
    kilobits{YType::uint32, "kilobits"},
    qos_reference{YType::uint32, "qos-reference"}
    	,
    inherit(nullptr) // presence node
	,receive(std::make_shared<Native::Interface::FastEthernet::Bandwidth::Receive>())
{
    receive->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::FastEthernet::Bandwidth::has_data() const
{
    return kilobits.is_set
	|| qos_reference.is_set
	|| (inherit !=  nullptr && inherit->has_data())
	|| (receive !=  nullptr && receive->has_data());
}

bool Native::Interface::FastEthernet::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kilobits.yfilter)
	|| ydk::is_set(qos_reference.yfilter)
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (receive !=  nullptr && receive->has_operation());
}

std::string Native::Interface::FastEthernet::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());
    if (qos_reference.is_set || is_set(qos_reference.yfilter)) leaf_name_data.push_back(qos_reference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Interface::FastEthernet::Bandwidth::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Interface::FastEthernet::Bandwidth::Receive>();
        }
        return receive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inherit != nullptr)
    {
        children["inherit"] = inherit;
    }

    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    return children;
}

void Native::Interface::FastEthernet::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-reference")
    {
        qos_reference = value;
        qos_reference.value_namespace = name_space;
        qos_reference.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
    if(value_path == "qos-reference")
    {
        qos_reference.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit" || name == "receive" || name == "kilobits" || name == "qos-reference")
        return true;
    return false;
}

Native::Interface::FastEthernet::Bandwidth::Inherit::Inherit()
    :
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "inherit"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Bandwidth::Inherit::~Inherit()
{
}

bool Native::Interface::FastEthernet::Bandwidth::Inherit::has_data() const
{
    return kilobits.is_set;
}

bool Native::Interface::FastEthernet::Bandwidth::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::FastEthernet::Bandwidth::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Bandwidth::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Bandwidth::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Bandwidth::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Bandwidth::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Bandwidth::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Bandwidth::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kilobits")
        return true;
    return false;
}

Native::Interface::FastEthernet::Bandwidth::Receive::Receive()
    :
    inherit{YType::empty, "inherit"},
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "receive"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Bandwidth::Receive::~Receive()
{
}

bool Native::Interface::FastEthernet::Bandwidth::Receive::has_data() const
{
    return inherit.is_set
	|| kilobits.is_set;
}

bool Native::Interface::FastEthernet::Bandwidth::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inherit.yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::FastEthernet::Bandwidth::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Bandwidth::Receive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit.is_set || is_set(inherit.yfilter)) leaf_name_data.push_back(inherit.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Bandwidth::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Bandwidth::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Bandwidth::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inherit")
    {
        inherit = value;
        inherit.value_namespace = name_space;
        inherit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Bandwidth::Receive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inherit")
    {
        inherit.yfilter = yfilter;
    }
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Bandwidth::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::FastEthernet::Bfd::Bfd()
    :
    echo{YType::boolean, "Cisco-IOS-XE-bfd:echo"},
    template_{YType::str, "Cisco-IOS-XE-bfd:template"}
    	,
    interval(std::make_shared<Native::Interface::FastEthernet::Bfd::Interval>())
{
    interval->parent = this;

    yang_name = "bfd"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Bfd::~Bfd()
{
}

bool Native::Interface::FastEthernet::Bfd::has_data() const
{
    return echo.is_set
	|| template_.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::Interface::FastEthernet::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(echo.yfilter)
	|| ydk::is_set(template_.yfilter)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::Interface::FastEthernet::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (echo.is_set || is_set(echo.yfilter)) leaf_name_data.push_back(echo.get_name_leafdata());
    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Interface::FastEthernet::Bfd::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    return children;
}

void Native::Interface::FastEthernet::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "echo")
    {
        echo = value;
        echo.value_namespace = name_space;
        echo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "echo")
    {
        echo.yfilter = yfilter;
    }
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "echo" || name == "template")
        return true;
    return false;
}

Native::Interface::FastEthernet::Bfd::Interval::Interval()
    :
    min_rx{YType::uint16, "min_rx"},
    msecs{YType::uint16, "msecs"},
    multiplier{YType::uint8, "multiplier"}
{

    yang_name = "interval"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Bfd::Interval::~Interval()
{
}

bool Native::Interface::FastEthernet::Bfd::Interval::has_data() const
{
    return min_rx.is_set
	|| msecs.is_set
	|| multiplier.is_set;
}

bool Native::Interface::FastEthernet::Bfd::Interval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_rx.yfilter)
	|| ydk::is_set(msecs.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Native::Interface::FastEthernet::Bfd::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bfd:interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Bfd::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_rx.is_set || is_set(min_rx.yfilter)) leaf_name_data.push_back(min_rx.get_name_leafdata());
    if (msecs.is_set || is_set(msecs.yfilter)) leaf_name_data.push_back(msecs.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Bfd::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Bfd::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Bfd::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min_rx")
    {
        min_rx = value;
        min_rx.value_namespace = name_space;
        min_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msecs")
    {
        msecs = value;
        msecs.value_namespace = name_space;
        msecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Bfd::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min_rx")
    {
        min_rx.yfilter = yfilter;
    }
    if(value_path == "msecs")
    {
        msecs.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Bfd::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min_rx" || name == "msecs" || name == "multiplier")
        return true;
    return false;
}

Native::Interface::FastEthernet::CarrierDelay::CarrierDelay()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
    	,
    down(std::make_shared<Native::Interface::FastEthernet::CarrierDelay::Down>())
	,up(std::make_shared<Native::Interface::FastEthernet::CarrierDelay::Up>())
{
    down->parent = this;
    up->parent = this;

    yang_name = "carrier-delay"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::CarrierDelay::~CarrierDelay()
{
}

bool Native::Interface::FastEthernet::CarrierDelay::has_data() const
{
    return msec.is_set
	|| seconds.is_set
	|| (down !=  nullptr && down->has_data())
	|| (up !=  nullptr && up->has_data());
}

bool Native::Interface::FastEthernet::CarrierDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| (down !=  nullptr && down->has_operation())
	|| (up !=  nullptr && up->has_operation());
}

std::string Native::Interface::FastEthernet::CarrierDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:carrier-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::CarrierDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::CarrierDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "down")
    {
        if(down == nullptr)
        {
            down = std::make_shared<Native::Interface::FastEthernet::CarrierDelay::Down>();
        }
        return down;
    }

    if(child_yang_name == "up")
    {
        if(up == nullptr)
        {
            up = std::make_shared<Native::Interface::FastEthernet::CarrierDelay::Up>();
        }
        return up;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::CarrierDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(down != nullptr)
    {
        children["down"] = down;
    }

    if(up != nullptr)
    {
        children["up"] = up;
    }

    return children;
}

void Native::Interface::FastEthernet::CarrierDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::CarrierDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::CarrierDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "up" || name == "msec" || name == "seconds")
        return true;
    return false;
}

Native::Interface::FastEthernet::CarrierDelay::Down::Down()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "down"; yang_parent_name = "carrier-delay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::CarrierDelay::Down::~Down()
{
}

bool Native::Interface::FastEthernet::CarrierDelay::Down::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::FastEthernet::CarrierDelay::Down::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::FastEthernet::CarrierDelay::Down::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::CarrierDelay::Down::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::CarrierDelay::Down::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::CarrierDelay::Down::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::CarrierDelay::Down::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::CarrierDelay::Down::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::CarrierDelay::Down::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "seconds")
        return true;
    return false;
}

Native::Interface::FastEthernet::CarrierDelay::Up::Up()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "up"; yang_parent_name = "carrier-delay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::CarrierDelay::Up::~Up()
{
}

bool Native::Interface::FastEthernet::CarrierDelay::Up::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::FastEthernet::CarrierDelay::Up::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::FastEthernet::CarrierDelay::Up::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::CarrierDelay::Up::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::CarrierDelay::Up::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::CarrierDelay::Up::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::CarrierDelay::Up::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::CarrierDelay::Up::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::CarrierDelay::Up::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "seconds")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cdp::Cdp()
    :
    enable{YType::boolean, "enable"}
    	,
    tlv(std::make_shared<Native::Interface::FastEthernet::Cdp::Tlv>())
{
    tlv->parent = this;

    yang_name = "cdp"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cdp::~Cdp()
{
}

bool Native::Interface::FastEthernet::Cdp::has_data() const
{
    return enable.is_set
	|| (tlv !=  nullptr && tlv->has_data());
}

bool Native::Interface::FastEthernet::Cdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (tlv !=  nullptr && tlv->has_operation());
}

std::string Native::Interface::FastEthernet::Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cdp:cdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<Native::Interface::FastEthernet::Cdp::Tlv>();
        }
        return tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tlv != nullptr)
    {
        children["tlv"] = tlv;
    }

    return children;
}

void Native::Interface::FastEthernet::Cdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Cdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Cdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv" || name == "enable")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cdp::Tlv::Tlv()
    :
    location{YType::empty, "location"},
    server_location{YType::empty, "server-location"}
    	,
    app(nullptr) // presence node
{

    yang_name = "tlv"; yang_parent_name = "cdp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cdp::Tlv::~Tlv()
{
}

bool Native::Interface::FastEthernet::Cdp::Tlv::has_data() const
{
    return location.is_set
	|| server_location.is_set
	|| (app !=  nullptr && app->has_data());
}

bool Native::Interface::FastEthernet::Cdp::Tlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(server_location.yfilter)
	|| (app !=  nullptr && app->has_operation());
}

std::string Native::Interface::FastEthernet::Cdp::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cdp::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (server_location.is_set || is_set(server_location.yfilter)) leaf_name_data.push_back(server_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cdp::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "app")
    {
        if(app == nullptr)
        {
            app = std::make_shared<Native::Interface::FastEthernet::Cdp::Tlv::App>();
        }
        return app;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cdp::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(app != nullptr)
    {
        children["app"] = app;
    }

    return children;
}

void Native::Interface::FastEthernet::Cdp::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-location")
    {
        server_location = value;
        server_location.value_namespace = name_space;
        server_location.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Cdp::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "server-location")
    {
        server_location.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Cdp::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app" || name == "location" || name == "server-location")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cdp::Tlv::App::App()
    :
    tlvtype{YType::uint16, "tlvtype"},
    value_{YType::str, "value"}
{

    yang_name = "app"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cdp::Tlv::App::~App()
{
}

bool Native::Interface::FastEthernet::Cdp::Tlv::App::has_data() const
{
    return tlvtype.is_set
	|| value_.is_set;
}

bool Native::Interface::FastEthernet::Cdp::Tlv::App::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tlvtype.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::FastEthernet::Cdp::Tlv::App::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cdp::Tlv::App::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlvtype.is_set || is_set(tlvtype.yfilter)) leaf_name_data.push_back(tlvtype.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cdp::Tlv::App::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cdp::Tlv::App::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Cdp::Tlv::App::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Cdp::Tlv::App::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Cdp::Tlv::App::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlvtype" || name == "value")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cemoudp::Cemoudp()
    :
    reserve(std::make_shared<Native::Interface::FastEthernet::Cemoudp::Reserve>())
{
    reserve->parent = this;

    yang_name = "cemoudp"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cemoudp::~Cemoudp()
{
}

bool Native::Interface::FastEthernet::Cemoudp::has_data() const
{
    return (reserve !=  nullptr && reserve->has_data());
}

bool Native::Interface::FastEthernet::Cemoudp::has_operation() const
{
    return is_set(yfilter)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string Native::Interface::FastEthernet::Cemoudp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cemoudp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cemoudp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cemoudp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Interface::FastEthernet::Cemoudp::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cemoudp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reserve != nullptr)
    {
        children["reserve"] = reserve;
    }

    return children;
}

void Native::Interface::FastEthernet::Cemoudp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Cemoudp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Cemoudp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reserve")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cemoudp::Reserve::Reserve()
    :
    acr{YType::uint8, "acr"}
{

    yang_name = "reserve"; yang_parent_name = "cemoudp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cemoudp::Reserve::~Reserve()
{
}

bool Native::Interface::FastEthernet::Cemoudp::Reserve::has_data() const
{
    return acr.is_set;
}

bool Native::Interface::FastEthernet::Cemoudp::Reserve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr.yfilter);
}

std::string Native::Interface::FastEthernet::Cemoudp::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cemoudp::Reserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cemoudp::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cemoudp::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Cemoudp::Reserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Cemoudp::Reserve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Cemoudp::Reserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acr")
        return true;
    return false;
}

Native::Interface::FastEthernet::ChannelGroup::ChannelGroup()
    :
    auto_{YType::empty, "auto"},
    link{YType::uint8, "link"},
    mode{YType::enumeration, "mode"},
    non_silent{YType::empty, "non-silent"},
    number{YType::uint16, "number"}
{

    yang_name = "channel-group"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::ChannelGroup::~ChannelGroup()
{
}

bool Native::Interface::FastEthernet::ChannelGroup::has_data() const
{
    return auto_.is_set
	|| link.is_set
	|| mode.is_set
	|| non_silent.is_set
	|| number.is_set;
}

bool Native::Interface::FastEthernet::ChannelGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| ydk::is_set(link.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(non_silent.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Interface::FastEthernet::ChannelGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:channel-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::ChannelGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());
    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (non_silent.is_set || is_set(non_silent.yfilter)) leaf_name_data.push_back(non_silent.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::ChannelGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::ChannelGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::ChannelGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-silent")
    {
        non_silent = value;
        non_silent.value_namespace = name_space;
        non_silent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::ChannelGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "non-silent")
    {
        non_silent.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::ChannelGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "link" || name == "mode" || name == "non-silent" || name == "number")
        return true;
    return false;
}

Native::Interface::FastEthernet::Crypto::Crypto()
    :
    ipsec(std::make_shared<Native::Interface::FastEthernet::Crypto::Ipsec>())
	,map(std::make_shared<Native::Interface::FastEthernet::Crypto::Map>())
{
    ipsec->parent = this;
    map->parent = this;

    yang_name = "crypto"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Crypto::~Crypto()
{
}

bool Native::Interface::FastEthernet::Crypto::has_data() const
{
    return (ipsec !=  nullptr && ipsec->has_data())
	|| (map !=  nullptr && map->has_data());
}

bool Native::Interface::FastEthernet::Crypto::has_operation() const
{
    return is_set(yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Interface::FastEthernet::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Crypto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::FastEthernet::Crypto::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::FastEthernet::Crypto::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Interface::FastEthernet::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec" || name == "map")
        return true;
    return false;
}

Native::Interface::FastEthernet::Crypto::Ipsec::Ipsec()
    :
    df_bit{YType::enumeration, "df-bit"},
    fragmentation{YType::enumeration, "fragmentation"}
{

    yang_name = "ipsec"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Crypto::Ipsec::~Ipsec()
{
}

bool Native::Interface::FastEthernet::Crypto::Ipsec::has_data() const
{
    return df_bit.is_set
	|| fragmentation.is_set;
}

bool Native::Interface::FastEthernet::Crypto::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(df_bit.yfilter)
	|| ydk::is_set(fragmentation.yfilter);
}

std::string Native::Interface::FastEthernet::Crypto::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Crypto::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.yfilter)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Crypto::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Crypto::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Crypto::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Crypto::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Crypto::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "df-bit" || name == "fragmentation")
        return true;
    return false;
}

Native::Interface::FastEthernet::Crypto::Map::Map()
    :
    redundancy{YType::str, "redundancy"},
    stateful{YType::empty, "stateful"},
    tag{YType::str, "tag"}
{

    yang_name = "map"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Crypto::Map::~Map()
{
}

bool Native::Interface::FastEthernet::Crypto::Map::has_data() const
{
    return redundancy.is_set
	|| stateful.is_set
	|| tag.is_set;
}

bool Native::Interface::FastEthernet::Crypto::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(stateful.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Interface::FastEthernet::Crypto::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Crypto::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Crypto::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Crypto::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Crypto::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Crypto::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Crypto::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancy" || name == "stateful" || name == "tag")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cts::Cts()
    :
    manual(nullptr) // presence node
	,role_based(std::make_shared<Native::Interface::FastEthernet::Cts::RoleBased>())
{
    role_based->parent = this;

    yang_name = "cts"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cts::~Cts()
{
}

bool Native::Interface::FastEthernet::Cts::has_data() const
{
    return (manual !=  nullptr && manual->has_data())
	|| (role_based !=  nullptr && role_based->has_data());
}

bool Native::Interface::FastEthernet::Cts::has_operation() const
{
    return is_set(yfilter)
	|| (manual !=  nullptr && manual->has_operation())
	|| (role_based !=  nullptr && role_based->has_operation());
}

std::string Native::Interface::FastEthernet::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:cts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manual")
    {
        if(manual == nullptr)
        {
            manual = std::make_shared<Native::Interface::FastEthernet::Cts::Manual>();
        }
        return manual;
    }

    if(child_yang_name == "role-based")
    {
        if(role_based == nullptr)
        {
            role_based = std::make_shared<Native::Interface::FastEthernet::Cts::RoleBased>();
        }
        return role_based;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(manual != nullptr)
    {
        children["manual"] = manual;
    }

    if(role_based != nullptr)
    {
        children["role-based"] = role_based;
    }

    return children;
}

void Native::Interface::FastEthernet::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual" || name == "role-based")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cts::Manual::Manual()
    :
    policy(std::make_shared<Native::Interface::FastEthernet::Cts::Manual::Policy>())
	,propagate(std::make_shared<Native::Interface::FastEthernet::Cts::Manual::Propagate>())
	,sap(std::make_shared<Native::Interface::FastEthernet::Cts::Manual::Sap>())
{
    policy->parent = this;
    propagate->parent = this;
    sap->parent = this;

    yang_name = "manual"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cts::Manual::~Manual()
{
}

bool Native::Interface::FastEthernet::Cts::Manual::has_data() const
{
    return (policy !=  nullptr && policy->has_data())
	|| (propagate !=  nullptr && propagate->has_data())
	|| (sap !=  nullptr && sap->has_data());
}

bool Native::Interface::FastEthernet::Cts::Manual::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation())
	|| (propagate !=  nullptr && propagate->has_operation())
	|| (sap !=  nullptr && sap->has_operation());
}

std::string Native::Interface::FastEthernet::Cts::Manual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cts::Manual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cts::Manual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::FastEthernet::Cts::Manual::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "propagate")
    {
        if(propagate == nullptr)
        {
            propagate = std::make_shared<Native::Interface::FastEthernet::Cts::Manual::Propagate>();
        }
        return propagate;
    }

    if(child_yang_name == "sap")
    {
        if(sap == nullptr)
        {
            sap = std::make_shared<Native::Interface::FastEthernet::Cts::Manual::Sap>();
        }
        return sap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cts::Manual::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(propagate != nullptr)
    {
        children["propagate"] = propagate;
    }

    if(sap != nullptr)
    {
        children["sap"] = sap;
    }

    return children;
}

void Native::Interface::FastEthernet::Cts::Manual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Cts::Manual::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Cts::Manual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "propagate" || name == "sap")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cts::Manual::Policy::Policy()
    :
    static_(std::make_shared<Native::Interface::FastEthernet::Cts::Manual::Policy::Static_>())
{
    static_->parent = this;

    yang_name = "policy"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cts::Manual::Policy::~Policy()
{
}

bool Native::Interface::FastEthernet::Cts::Manual::Policy::has_data() const
{
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Interface::FastEthernet::Cts::Manual::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Interface::FastEthernet::Cts::Manual::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cts::Manual::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cts::Manual::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Interface::FastEthernet::Cts::Manual::Policy::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cts::Manual::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Interface::FastEthernet::Cts::Manual::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Cts::Manual::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Cts::Manual::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cts::Manual::Policy::Static_::Static_()
    :
    sgt{YType::uint16, "sgt"},
    trusted{YType::empty, "trusted"}
{

    yang_name = "static"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cts::Manual::Policy::Static_::~Static_()
{
}

bool Native::Interface::FastEthernet::Cts::Manual::Policy::Static_::has_data() const
{
    return sgt.is_set
	|| trusted.is_set;
}

bool Native::Interface::FastEthernet::Cts::Manual::Policy::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(trusted.yfilter);
}

std::string Native::Interface::FastEthernet::Cts::Manual::Policy::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cts::Manual::Policy::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cts::Manual::Policy::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cts::Manual::Policy::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Cts::Manual::Policy::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trusted")
    {
        trusted = value;
        trusted.value_namespace = name_space;
        trusted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Cts::Manual::Policy::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "trusted")
    {
        trusted.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Cts::Manual::Policy::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt" || name == "trusted")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cts::Manual::Propagate::Propagate()
    :
    sgt{YType::boolean, "sgt"}
{

    yang_name = "propagate"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cts::Manual::Propagate::~Propagate()
{
}

bool Native::Interface::FastEthernet::Cts::Manual::Propagate::has_data() const
{
    return sgt.is_set;
}

bool Native::Interface::FastEthernet::Cts::Manual::Propagate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Interface::FastEthernet::Cts::Manual::Propagate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cts::Manual::Propagate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cts::Manual::Propagate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cts::Manual::Propagate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Cts::Manual::Propagate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Cts::Manual::Propagate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Cts::Manual::Propagate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cts::Manual::Sap::Sap()
{

    yang_name = "sap"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cts::Manual::Sap::~Sap()
{
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::has_data() const
{
    for (std::size_t index=0; index<pmk.size(); index++)
    {
        if(pmk[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::has_operation() const
{
    for (std::size_t index=0; index<pmk.size(); index++)
    {
        if(pmk[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::FastEthernet::Cts::Manual::Sap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cts::Manual::Sap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cts::Manual::Sap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmk")
    {
        for(auto const & c : pmk)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk>();
        c->parent = this;
        pmk.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cts::Manual::Sap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pmk)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::FastEthernet::Cts::Manual::Sap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Cts::Manual::Sap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmk")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::Pmk()
    :
    word{YType::str, "word"}
    	,
    mode_list(std::make_shared<Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList>())
{
    mode_list->parent = this;

    yang_name = "pmk"; yang_parent_name = "sap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::~Pmk()
{
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::has_data() const
{
    return word.is_set
	|| (mode_list !=  nullptr && mode_list->has_data());
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (mode_list !=  nullptr && mode_list->has_operation());
}

std::string Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmk" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode-list")
    {
        if(mode_list == nullptr)
        {
            mode_list = std::make_shared<Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList>();
        }
        return mode_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode_list != nullptr)
    {
        children["mode-list"] = mode_list;
    }

    return children;
}

void Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-list" || name == "word")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::ModeList()
    :
    gcm_encrypt(nullptr) // presence node
	,no_encap(nullptr) // presence node
{

    yang_name = "mode-list"; yang_parent_name = "pmk"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::~ModeList()
{
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::has_data() const
{
    return (gcm_encrypt !=  nullptr && gcm_encrypt->has_data())
	|| (no_encap !=  nullptr && no_encap->has_data());
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::has_operation() const
{
    return is_set(yfilter)
	|| (gcm_encrypt !=  nullptr && gcm_encrypt->has_operation())
	|| (no_encap !=  nullptr && no_encap->has_operation());
}

std::string Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gcm-encrypt")
    {
        if(gcm_encrypt == nullptr)
        {
            gcm_encrypt = std::make_shared<Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt>();
        }
        return gcm_encrypt;
    }

    if(child_yang_name == "no-encap")
    {
        if(no_encap == nullptr)
        {
            no_encap = std::make_shared<Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap>();
        }
        return no_encap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gcm_encrypt != nullptr)
    {
        children["gcm-encrypt"] = gcm_encrypt;
    }

    if(no_encap != nullptr)
    {
        children["no-encap"] = no_encap;
    }

    return children;
}

void Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gcm-encrypt" || name == "no-encap")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::GcmEncrypt()
    :
    gmac(nullptr) // presence node
{

    yang_name = "gcm-encrypt"; yang_parent_name = "mode-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::~GcmEncrypt()
{
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_data() const
{
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_operation() const
{
    return is_set(yfilter)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gcm-encrypt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gmac != nullptr)
    {
        children["gmac"] = gmac;
    }

    return children;
}

void Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gmac")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::Gmac()
    :
    null{YType::empty, "null"}
{

    yang_name = "gmac"; yang_parent_name = "gcm-encrypt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::~Gmac()
{
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_data() const
{
    return null.is_set;
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "null")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::NoEncap()
    :
    gmac(nullptr) // presence node
{

    yang_name = "no-encap"; yang_parent_name = "mode-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::~NoEncap()
{
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_data() const
{
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_operation() const
{
    return is_set(yfilter)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gmac != nullptr)
    {
        children["gmac"] = gmac;
    }

    return children;
}

void Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gmac")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::Gmac()
    :
    gcm_encrypt{YType::empty, "gcm-encrypt"}
{

    yang_name = "gmac"; yang_parent_name = "no-encap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::~Gmac()
{
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_data() const
{
    return gcm_encrypt.is_set;
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gcm_encrypt.yfilter);
}

std::string Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gcm_encrypt.is_set || is_set(gcm_encrypt.yfilter)) leaf_name_data.push_back(gcm_encrypt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gcm-encrypt")
    {
        gcm_encrypt = value;
        gcm_encrypt.value_namespace = name_space;
        gcm_encrypt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gcm-encrypt")
    {
        gcm_encrypt.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gcm-encrypt")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cts::RoleBased::RoleBased()
    :
    enforcement{YType::empty, "enforcement"},
    sgt_cache{YType::enumeration, "sgt-cache"}
    	,
    sgt_map(std::make_shared<Native::Interface::FastEthernet::Cts::RoleBased::SgtMap>())
{
    sgt_map->parent = this;

    yang_name = "role-based"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cts::RoleBased::~RoleBased()
{
}

bool Native::Interface::FastEthernet::Cts::RoleBased::has_data() const
{
    for (auto const & leaf : sgt_cache.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enforcement.is_set
	|| (sgt_map !=  nullptr && sgt_map->has_data());
}

bool Native::Interface::FastEthernet::Cts::RoleBased::has_operation() const
{
    for (auto const & leaf : sgt_cache.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enforcement.yfilter)
	|| ydk::is_set(sgt_cache.yfilter)
	|| (sgt_map !=  nullptr && sgt_map->has_operation());
}

std::string Native::Interface::FastEthernet::Cts::RoleBased::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "role-based";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cts::RoleBased::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enforcement.is_set || is_set(enforcement.yfilter)) leaf_name_data.push_back(enforcement.get_name_leafdata());

    auto sgt_cache_name_datas = sgt_cache.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sgt_cache_name_datas.begin(), sgt_cache_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cts::RoleBased::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sgt-map")
    {
        if(sgt_map == nullptr)
        {
            sgt_map = std::make_shared<Native::Interface::FastEthernet::Cts::RoleBased::SgtMap>();
        }
        return sgt_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cts::RoleBased::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sgt_map != nullptr)
    {
        children["sgt-map"] = sgt_map;
    }

    return children;
}

void Native::Interface::FastEthernet::Cts::RoleBased::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enforcement")
    {
        enforcement = value;
        enforcement.value_namespace = name_space;
        enforcement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt-cache")
    {
        sgt_cache.append(value);
    }
}

void Native::Interface::FastEthernet::Cts::RoleBased::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enforcement")
    {
        enforcement.yfilter = yfilter;
    }
    if(value_path == "sgt-cache")
    {
        sgt_cache.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Cts::RoleBased::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt-map" || name == "enforcement" || name == "sgt-cache")
        return true;
    return false;
}

Native::Interface::FastEthernet::Cts::RoleBased::SgtMap::SgtMap()
    :
    security_group{YType::str, "security-group"},
    sgt{YType::uint16, "sgt"}
{

    yang_name = "sgt-map"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Cts::RoleBased::SgtMap::~SgtMap()
{
}

bool Native::Interface::FastEthernet::Cts::RoleBased::SgtMap::has_data() const
{
    return security_group.is_set
	|| sgt.is_set;
}

bool Native::Interface::FastEthernet::Cts::RoleBased::SgtMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security_group.yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Interface::FastEthernet::Cts::RoleBased::SgtMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sgt-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Cts::RoleBased::SgtMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security_group.is_set || is_set(security_group.yfilter)) leaf_name_data.push_back(security_group.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Cts::RoleBased::SgtMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Cts::RoleBased::SgtMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Cts::RoleBased::SgtMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "security-group")
    {
        security_group = value;
        security_group.value_namespace = name_space;
        security_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Cts::RoleBased::SgtMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security-group")
    {
        security_group.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Cts::RoleBased::SgtMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-group" || name == "sgt")
        return true;
    return false;
}

Native::Interface::FastEthernet::CwsTunnel::CwsTunnel()
    :
    in{YType::empty, "in"}
    	,
    out(std::make_shared<Native::Interface::FastEthernet::CwsTunnel::Out>())
{
    out->parent = this;

    yang_name = "cws-tunnel"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::CwsTunnel::~CwsTunnel()
{
}

bool Native::Interface::FastEthernet::CwsTunnel::has_data() const
{
    return in.is_set
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::FastEthernet::CwsTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::FastEthernet::CwsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cws-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::CwsTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::CwsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::FastEthernet::CwsTunnel::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::CwsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::FastEthernet::CwsTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::CwsTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::CwsTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::FastEthernet::CwsTunnel::Out::Out()
    :
    tunnel_number{YType::uint16, "tunnel-number"}
{

    yang_name = "out"; yang_parent_name = "cws-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::CwsTunnel::Out::~Out()
{
}

bool Native::Interface::FastEthernet::CwsTunnel::Out::has_data() const
{
    return tunnel_number.is_set;
}

bool Native::Interface::FastEthernet::CwsTunnel::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_number.yfilter);
}

std::string Native::Interface::FastEthernet::CwsTunnel::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::CwsTunnel::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.yfilter)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::CwsTunnel::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::CwsTunnel::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::CwsTunnel::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
        tunnel_number.value_namespace = name_space;
        tunnel_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::CwsTunnel::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::CwsTunnel::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-number")
        return true;
    return false;
}

Native::Interface::FastEthernet::Dampening::Dampening()
    :
    dampening_time{YType::uint16, "dampening-time"},
    maximum_supressing_time{YType::uint16, "maximum-supressing-time"},
    start_reusing_time{YType::uint16, "start-reusing-time"},
    start_supressing_time{YType::uint16, "start-supressing-time"}
    	,
    restart(std::make_shared<Native::Interface::FastEthernet::Dampening::Restart>())
{
    restart->parent = this;

    yang_name = "dampening"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Dampening::~Dampening()
{
}

bool Native::Interface::FastEthernet::Dampening::has_data() const
{
    return dampening_time.is_set
	|| maximum_supressing_time.is_set
	|| start_reusing_time.is_set
	|| start_supressing_time.is_set
	|| (restart !=  nullptr && restart->has_data());
}

bool Native::Interface::FastEthernet::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening_time.yfilter)
	|| ydk::is_set(maximum_supressing_time.yfilter)
	|| ydk::is_set(start_reusing_time.yfilter)
	|| ydk::is_set(start_supressing_time.yfilter)
	|| (restart !=  nullptr && restart->has_operation());
}

std::string Native::Interface::FastEthernet::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_time.is_set || is_set(dampening_time.yfilter)) leaf_name_data.push_back(dampening_time.get_name_leafdata());
    if (maximum_supressing_time.is_set || is_set(maximum_supressing_time.yfilter)) leaf_name_data.push_back(maximum_supressing_time.get_name_leafdata());
    if (start_reusing_time.is_set || is_set(start_reusing_time.yfilter)) leaf_name_data.push_back(start_reusing_time.get_name_leafdata());
    if (start_supressing_time.is_set || is_set(start_supressing_time.yfilter)) leaf_name_data.push_back(start_supressing_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "restart")
    {
        if(restart == nullptr)
        {
            restart = std::make_shared<Native::Interface::FastEthernet::Dampening::Restart>();
        }
        return restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(restart != nullptr)
    {
        children["restart"] = restart;
    }

    return children;
}

void Native::Interface::FastEthernet::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dampening-time")
    {
        dampening_time = value;
        dampening_time.value_namespace = name_space;
        dampening_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time = value;
        maximum_supressing_time.value_namespace = name_space;
        maximum_supressing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time = value;
        start_reusing_time.value_namespace = name_space;
        start_reusing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time = value;
        start_supressing_time.value_namespace = name_space;
        start_supressing_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dampening-time")
    {
        dampening_time.yfilter = yfilter;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time.yfilter = yfilter;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time.yfilter = yfilter;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "dampening-time" || name == "maximum-supressing-time" || name == "start-reusing-time" || name == "start-supressing-time")
        return true;
    return false;
}

Native::Interface::FastEthernet::Dampening::Restart::Restart()
    :
    restart{YType::empty, "restart"},
    restart_penalty{YType::uint16, "restart-penalty"}
{

    yang_name = "restart"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Dampening::Restart::~Restart()
{
}

bool Native::Interface::FastEthernet::Dampening::Restart::has_data() const
{
    return restart.is_set
	|| restart_penalty.is_set;
}

bool Native::Interface::FastEthernet::Dampening::Restart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(restart_penalty.yfilter);
}

std::string Native::Interface::FastEthernet::Dampening::Restart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Dampening::Restart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Dampening::Restart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Dampening::Restart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Dampening::Restart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
        restart_penalty.value_namespace = name_space;
        restart_penalty.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Dampening::Restart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Dampening::Restart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "restart-penalty")
        return true;
    return false;
}

Native::Interface::FastEthernet::Datalink::Datalink()
    :
    flow(std::make_shared<Native::Interface::FastEthernet::Datalink::Flow>())
{
    flow->parent = this;

    yang_name = "datalink"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Datalink::~Datalink()
{
}

bool Native::Interface::FastEthernet::Datalink::has_data() const
{
    return (flow !=  nullptr && flow->has_data());
}

bool Native::Interface::FastEthernet::Datalink::has_operation() const
{
    return is_set(yfilter)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::Interface::FastEthernet::Datalink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:datalink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Datalink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Datalink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::FastEthernet::Datalink::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Datalink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    return children;
}

void Native::Interface::FastEthernet::Datalink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Datalink::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Datalink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

Native::Interface::FastEthernet::Datalink::Flow::Flow()
    :
    monitor(nullptr) // presence node
{

    yang_name = "flow"; yang_parent_name = "datalink"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Datalink::Flow::~Flow()
{
}

bool Native::Interface::FastEthernet::Datalink::Flow::has_data() const
{
    return (monitor !=  nullptr && monitor->has_data());
}

bool Native::Interface::FastEthernet::Datalink::Flow::has_operation() const
{
    return is_set(yfilter)
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Interface::FastEthernet::Datalink::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Datalink::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Datalink::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Interface::FastEthernet::Datalink::Flow::Monitor>();
        }
        return monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Datalink::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    return children;
}

void Native::Interface::FastEthernet::Datalink::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Datalink::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Datalink::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Interface::FastEthernet::Datalink::Flow::Monitor::Monitor()
    :
    input_output{YType::enumeration, "input-output"},
    user_defined_flow{YType::str, "User-defined-flow"}
{

    yang_name = "monitor"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Datalink::Flow::Monitor::~Monitor()
{
}

bool Native::Interface::FastEthernet::Datalink::Flow::Monitor::has_data() const
{
    return input_output.is_set
	|| user_defined_flow.is_set;
}

bool Native::Interface::FastEthernet::Datalink::Flow::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input_output.yfilter)
	|| ydk::is_set(user_defined_flow.yfilter);
}

std::string Native::Interface::FastEthernet::Datalink::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Datalink::Flow::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input_output.is_set || is_set(input_output.yfilter)) leaf_name_data.push_back(input_output.get_name_leafdata());
    if (user_defined_flow.is_set || is_set(user_defined_flow.yfilter)) leaf_name_data.push_back(user_defined_flow.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Datalink::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Datalink::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Datalink::Flow::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input-output")
    {
        input_output = value;
        input_output.value_namespace = name_space;
        input_output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "User-defined-flow")
    {
        user_defined_flow = value;
        user_defined_flow.value_namespace = name_space;
        user_defined_flow.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Datalink::Flow::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input-output")
    {
        input_output.yfilter = yfilter;
    }
    if(value_path == "User-defined-flow")
    {
        user_defined_flow.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Datalink::Flow::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-output" || name == "User-defined-flow")
        return true;
    return false;
}

Native::Interface::FastEthernet::DeviceTracking::DeviceTracking()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "device-tracking"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::DeviceTracking::~DeviceTracking()
{
}

bool Native::Interface::FastEthernet::DeviceTracking::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Interface::FastEthernet::DeviceTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::FastEthernet::DeviceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:device-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::DeviceTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::DeviceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::DeviceTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::DeviceTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::DeviceTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::DeviceTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::FastEthernet::Domain::Domain()
    :
    internet_bound{YType::empty, "internet-bound"},
    name{YType::str, "name"},
    path{YType::str, "path"},
    path_id{YType::uint8, "path-id"},
    path_last_resort{YType::empty, "path-last-resort"},
    zero_sla{YType::empty, "zero-sla"}
{

    yang_name = "domain"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Domain::~Domain()
{
}

bool Native::Interface::FastEthernet::Domain::has_data() const
{
    return internet_bound.is_set
	|| name.is_set
	|| path.is_set
	|| path_id.is_set
	|| path_last_resort.is_set
	|| zero_sla.is_set;
}

bool Native::Interface::FastEthernet::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internet_bound.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_last_resort.yfilter)
	|| ydk::is_set(zero_sla.yfilter);
}

std::string Native::Interface::FastEthernet::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internet_bound.is_set || is_set(internet_bound.yfilter)) leaf_name_data.push_back(internet_bound.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_last_resort.is_set || is_set(path_last_resort.yfilter)) leaf_name_data.push_back(path_last_resort.get_name_leafdata());
    if (zero_sla.is_set || is_set(zero_sla.yfilter)) leaf_name_data.push_back(zero_sla.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internet-bound")
    {
        internet_bound = value;
        internet_bound.value_namespace = name_space;
        internet_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-last-resort")
    {
        path_last_resort = value;
        path_last_resort.value_namespace = name_space;
        path_last_resort.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-sla")
    {
        zero_sla = value;
        zero_sla.value_namespace = name_space;
        zero_sla.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internet-bound")
    {
        internet_bound.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-last-resort")
    {
        path_last_resort.yfilter = yfilter;
    }
    if(value_path == "zero-sla")
    {
        zero_sla.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internet-bound" || name == "name" || name == "path" || name == "path-id" || name == "path-last-resort" || name == "zero-sla")
        return true;
    return false;
}

Native::Interface::FastEthernet::Dot1X::Dot1X()
    :
    credentials{YType::str, "credentials"},
    max_reauth_req{YType::uint8, "max-reauth-req"},
    max_req{YType::uint8, "max-req"},
    max_start{YType::uint8, "max-start"},
    pae{YType::enumeration, "pae"}
    	,
    authenticator(std::make_shared<Native::Interface::FastEthernet::Dot1X::Authenticator>())
	,supplicant(std::make_shared<Native::Interface::FastEthernet::Dot1X::Supplicant>())
	,timeout(std::make_shared<Native::Interface::FastEthernet::Dot1X::Timeout>())
{
    authenticator->parent = this;
    supplicant->parent = this;
    timeout->parent = this;

    yang_name = "dot1x"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Dot1X::~Dot1X()
{
}

bool Native::Interface::FastEthernet::Dot1X::has_data() const
{
    return credentials.is_set
	|| max_reauth_req.is_set
	|| max_req.is_set
	|| max_start.is_set
	|| pae.is_set
	|| (authenticator !=  nullptr && authenticator->has_data())
	|| (supplicant !=  nullptr && supplicant->has_data())
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::Interface::FastEthernet::Dot1X::has_operation() const
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

std::string Native::Interface::FastEthernet::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Dot1X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (credentials.is_set || is_set(credentials.yfilter)) leaf_name_data.push_back(credentials.get_name_leafdata());
    if (max_reauth_req.is_set || is_set(max_reauth_req.yfilter)) leaf_name_data.push_back(max_reauth_req.get_name_leafdata());
    if (max_req.is_set || is_set(max_req.yfilter)) leaf_name_data.push_back(max_req.get_name_leafdata());
    if (max_start.is_set || is_set(max_start.yfilter)) leaf_name_data.push_back(max_start.get_name_leafdata());
    if (pae.is_set || is_set(pae.yfilter)) leaf_name_data.push_back(pae.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authenticator")
    {
        if(authenticator == nullptr)
        {
            authenticator = std::make_shared<Native::Interface::FastEthernet::Dot1X::Authenticator>();
        }
        return authenticator;
    }

    if(child_yang_name == "supplicant")
    {
        if(supplicant == nullptr)
        {
            supplicant = std::make_shared<Native::Interface::FastEthernet::Dot1X::Supplicant>();
        }
        return supplicant;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Interface::FastEthernet::Dot1X::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authenticator != nullptr)
    {
        children["authenticator"] = authenticator;
    }

    if(supplicant != nullptr)
    {
        children["supplicant"] = supplicant;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void Native::Interface::FastEthernet::Dot1X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Dot1X::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Dot1X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authenticator" || name == "supplicant" || name == "timeout" || name == "credentials" || name == "max-reauth-req" || name == "max-req" || name == "max-start" || name == "pae")
        return true;
    return false;
}

Native::Interface::FastEthernet::Dot1X::Authenticator::Authenticator()
    :
    eap(std::make_shared<Native::Interface::FastEthernet::Dot1X::Authenticator::Eap>())
{
    eap->parent = this;

    yang_name = "authenticator"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Dot1X::Authenticator::~Authenticator()
{
}

bool Native::Interface::FastEthernet::Dot1X::Authenticator::has_data() const
{
    return (eap !=  nullptr && eap->has_data());
}

bool Native::Interface::FastEthernet::Dot1X::Authenticator::has_operation() const
{
    return is_set(yfilter)
	|| (eap !=  nullptr && eap->has_operation());
}

std::string Native::Interface::FastEthernet::Dot1X::Authenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Dot1X::Authenticator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Dot1X::Authenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Interface::FastEthernet::Dot1X::Authenticator::Eap>();
        }
        return eap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Dot1X::Authenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    return children;
}

void Native::Interface::FastEthernet::Dot1X::Authenticator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Dot1X::Authenticator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Dot1X::Authenticator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap")
        return true;
    return false;
}

Native::Interface::FastEthernet::Dot1X::Authenticator::Eap::Eap()
    :
    profile{YType::str, "profile"}
{

    yang_name = "eap"; yang_parent_name = "authenticator"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Dot1X::Authenticator::Eap::~Eap()
{
}

bool Native::Interface::FastEthernet::Dot1X::Authenticator::Eap::has_data() const
{
    return profile.is_set;
}

bool Native::Interface::FastEthernet::Dot1X::Authenticator::Eap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Interface::FastEthernet::Dot1X::Authenticator::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Dot1X::Authenticator::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Dot1X::Authenticator::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Dot1X::Authenticator::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Dot1X::Authenticator::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Dot1X::Authenticator::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Dot1X::Authenticator::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Interface::FastEthernet::Dot1X::Supplicant::Supplicant()
    :
    eap(std::make_shared<Native::Interface::FastEthernet::Dot1X::Supplicant::Eap>())
{
    eap->parent = this;

    yang_name = "supplicant"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Dot1X::Supplicant::~Supplicant()
{
}

bool Native::Interface::FastEthernet::Dot1X::Supplicant::has_data() const
{
    return (eap !=  nullptr && eap->has_data());
}

bool Native::Interface::FastEthernet::Dot1X::Supplicant::has_operation() const
{
    return is_set(yfilter)
	|| (eap !=  nullptr && eap->has_operation());
}

std::string Native::Interface::FastEthernet::Dot1X::Supplicant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supplicant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Dot1X::Supplicant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Dot1X::Supplicant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Interface::FastEthernet::Dot1X::Supplicant::Eap>();
        }
        return eap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Dot1X::Supplicant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    return children;
}

void Native::Interface::FastEthernet::Dot1X::Supplicant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Dot1X::Supplicant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Dot1X::Supplicant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap")
        return true;
    return false;
}

Native::Interface::FastEthernet::Dot1X::Supplicant::Eap::Eap()
    :
    profile{YType::str, "profile"}
{

    yang_name = "eap"; yang_parent_name = "supplicant"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Dot1X::Supplicant::Eap::~Eap()
{
}

bool Native::Interface::FastEthernet::Dot1X::Supplicant::Eap::has_data() const
{
    return profile.is_set;
}

bool Native::Interface::FastEthernet::Dot1X::Supplicant::Eap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Interface::FastEthernet::Dot1X::Supplicant::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Dot1X::Supplicant::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Dot1X::Supplicant::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Dot1X::Supplicant::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Dot1X::Supplicant::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Dot1X::Supplicant::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Dot1X::Supplicant::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Interface::FastEthernet::Dot1X::Timeout::Timeout()
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

Native::Interface::FastEthernet::Dot1X::Timeout::~Timeout()
{
}

bool Native::Interface::FastEthernet::Dot1X::Timeout::has_data() const
{
    return auth_period.is_set
	|| held_period.is_set
	|| quiet_period.is_set
	|| ratelimit_period.is_set
	|| server_timeout.is_set
	|| start_period.is_set
	|| supp_timeout.is_set
	|| tx_period.is_set;
}

bool Native::Interface::FastEthernet::Dot1X::Timeout::has_operation() const
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

std::string Native::Interface::FastEthernet::Dot1X::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Dot1X::Timeout::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::FastEthernet::Dot1X::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Dot1X::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Dot1X::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Dot1X::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Dot1X::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-period" || name == "held-period" || name == "quiet-period" || name == "ratelimit-period" || name == "server-timeout" || name == "start-period" || name == "supp-timeout" || name == "tx-period")
        return true;
    return false;
}

Native::Interface::FastEthernet::DualActive::DualActive()
    :
    fast_hello{YType::empty, "fast-hello"}
{

    yang_name = "dual-active"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::DualActive::~DualActive()
{
}

bool Native::Interface::FastEthernet::DualActive::has_data() const
{
    return fast_hello.is_set;
}

bool Native::Interface::FastEthernet::DualActive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_hello.yfilter);
}

std::string Native::Interface::FastEthernet::DualActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:dual-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::DualActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_hello.is_set || is_set(fast_hello.yfilter)) leaf_name_data.push_back(fast_hello.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::DualActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::DualActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::DualActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-hello")
    {
        fast_hello = value;
        fast_hello.value_namespace = name_space;
        fast_hello.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::DualActive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-hello")
    {
        fast_hello.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::DualActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-hello")
        return true;
    return false;
}

Native::Interface::FastEthernet::Encapsulation::Encapsulation()
    :
    dot1q(std::make_shared<Native::Interface::FastEthernet::Encapsulation::Dot1Q>())
	,frame_relay(nullptr) // presence node
	,isl(std::make_shared<Native::Interface::FastEthernet::Encapsulation::Isl>())
	,ppp(nullptr) // presence node
	,slip(nullptr) // presence node
{
    dot1q->parent = this;
    isl->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::FastEthernet::Encapsulation::has_data() const
{
    return (dot1q !=  nullptr && dot1q->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data())
	|| (isl !=  nullptr && isl->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (slip !=  nullptr && slip->has_data());
}

bool Native::Interface::FastEthernet::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation())
	|| (isl !=  nullptr && isl->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (slip !=  nullptr && slip->has_operation());
}

std::string Native::Interface::FastEthernet::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1Q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::FastEthernet::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::Interface::FastEthernet::Encapsulation::FrameRelay>();
        }
        return frame_relay;
    }

    if(child_yang_name == "isl")
    {
        if(isl == nullptr)
        {
            isl = std::make_shared<Native::Interface::FastEthernet::Encapsulation::Isl>();
        }
        return isl;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::FastEthernet::Encapsulation::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "slip")
    {
        if(slip == nullptr)
        {
            slip = std::make_shared<Native::Interface::FastEthernet::Encapsulation::Slip>();
        }
        return slip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1q != nullptr)
    {
        children["dot1Q"] = dot1q;
    }

    if(frame_relay != nullptr)
    {
        children["frame-relay"] = frame_relay;
    }

    if(isl != nullptr)
    {
        children["isl"] = isl;
    }

    if(ppp != nullptr)
    {
        children["ppp"] = ppp;
    }

    if(slip != nullptr)
    {
        children["slip"] = slip;
    }

    return children;
}

void Native::Interface::FastEthernet::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1Q" || name == "frame-relay" || name == "isl" || name == "ppp" || name == "slip")
        return true;
    return false;
}

Native::Interface::FastEthernet::Encapsulation::Dot1Q::Dot1Q()
    :
    native{YType::empty, "native"},
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "dot1Q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::FastEthernet::Encapsulation::Dot1Q::has_data() const
{
    return native.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::FastEthernet::Encapsulation::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(native.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::FastEthernet::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1Q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Encapsulation::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (native.is_set || is_set(native.yfilter)) leaf_name_data.push_back(native.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Encapsulation::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "native")
    {
        native = value;
        native.value_namespace = name_space;
        native.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Encapsulation::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "native")
    {
        native.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Encapsulation::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "native" || name == "vlan-id")
        return true;
    return false;
}

Native::Interface::FastEthernet::Encapsulation::FrameRelay::FrameRelay()
    :
    ietf{YType::empty, "ietf"}
{

    yang_name = "frame-relay"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Encapsulation::FrameRelay::~FrameRelay()
{
}

bool Native::Interface::FastEthernet::Encapsulation::FrameRelay::has_data() const
{
    return ietf.is_set;
}

bool Native::Interface::FastEthernet::Encapsulation::FrameRelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ietf.yfilter);
}

std::string Native::Interface::FastEthernet::Encapsulation::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Encapsulation::FrameRelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Encapsulation::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Encapsulation::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Encapsulation::FrameRelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Encapsulation::FrameRelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Encapsulation::FrameRelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ietf")
        return true;
    return false;
}

Native::Interface::FastEthernet::Encapsulation::Isl::Isl()
    :
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "isl"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Encapsulation::Isl::~Isl()
{
}

bool Native::Interface::FastEthernet::Encapsulation::Isl::has_data() const
{
    return vlan_id.is_set;
}

bool Native::Interface::FastEthernet::Encapsulation::Isl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::FastEthernet::Encapsulation::Isl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Encapsulation::Isl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Encapsulation::Isl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Encapsulation::Isl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Encapsulation::Isl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Encapsulation::Isl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Encapsulation::Isl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

Native::Interface::FastEthernet::Encapsulation::Ppp::Ppp()
{

    yang_name = "ppp"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Encapsulation::Ppp::~Ppp()
{
}

bool Native::Interface::FastEthernet::Encapsulation::Ppp::has_data() const
{
    return false;
}

bool Native::Interface::FastEthernet::Encapsulation::Ppp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::FastEthernet::Encapsulation::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Encapsulation::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Encapsulation::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Encapsulation::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Encapsulation::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Encapsulation::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Encapsulation::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::FastEthernet::Encapsulation::Slip::Slip()
{

    yang_name = "slip"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Encapsulation::Slip::~Slip()
{
}

bool Native::Interface::FastEthernet::Encapsulation::Slip::has_data() const
{
    return false;
}

bool Native::Interface::FastEthernet::Encapsulation::Slip::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::FastEthernet::Encapsulation::Slip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Encapsulation::Slip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Encapsulation::Slip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Encapsulation::Slip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Encapsulation::Slip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Encapsulation::Slip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Encapsulation::Slip::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::FastEthernet::Energywise::Energywise()
    :
    activitycheck{YType::empty, "activitycheck"}
{

    yang_name = "energywise"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Energywise::~Energywise()
{
}

bool Native::Interface::FastEthernet::Energywise::has_data() const
{
    return activitycheck.is_set;
}

bool Native::Interface::FastEthernet::Energywise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activitycheck.yfilter);
}

std::string Native::Interface::FastEthernet::Energywise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:energywise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Energywise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activitycheck.is_set || is_set(activitycheck.yfilter)) leaf_name_data.push_back(activitycheck.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Energywise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Energywise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Energywise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activitycheck")
    {
        activitycheck = value;
        activitycheck.value_namespace = name_space;
        activitycheck.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Energywise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activitycheck")
    {
        activitycheck.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Energywise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activitycheck")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Ethernet()
    :
    oam(nullptr) // presence node
{

    yang_name = "ethernet"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::~Ethernet()
{
}

bool Native::Interface::FastEthernet::Ethernet::has_data() const
{
    return (oam !=  nullptr && oam->has_data());
}

bool Native::Interface::FastEthernet::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (oam !=  nullptr && oam->has_operation());
}

std::string Native::Interface::FastEthernet::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam")
    {
        if(oam == nullptr)
        {
            oam = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam>();
        }
        return oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oam != nullptr)
    {
        children["oam"] = oam;
    }

    return children;
}

void Native::Interface::FastEthernet::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oam")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::Oam()
    :
    max_rate{YType::uint8, "max-rate"},
    min_rate{YType::uint8, "min-rate"},
    mode{YType::enumeration, "mode"},
    timeout{YType::uint8, "timeout"}
    	,
    link_monitor(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor>())
	,remote_failure(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure>())
	,remote_loopback(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::RemoteLoopback>())
{
    link_monitor->parent = this;
    remote_failure->parent = this;
    remote_loopback->parent = this;

    yang_name = "oam"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::~Oam()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::has_data() const
{
    return max_rate.is_set
	|| min_rate.is_set
	|| mode.is_set
	|| timeout.is_set
	|| (link_monitor !=  nullptr && link_monitor->has_data())
	|| (remote_failure !=  nullptr && remote_failure->has_data())
	|| (remote_loopback !=  nullptr && remote_loopback->has_data());
}

bool Native::Interface::FastEthernet::Ethernet::Oam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_rate.yfilter)
	|| ydk::is_set(min_rate.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (link_monitor !=  nullptr && link_monitor->has_operation())
	|| (remote_failure !=  nullptr && remote_failure->has_operation())
	|| (remote_loopback !=  nullptr && remote_loopback->has_operation());
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_rate.is_set || is_set(max_rate.yfilter)) leaf_name_data.push_back(max_rate.get_name_leafdata());
    if (min_rate.is_set || is_set(min_rate.yfilter)) leaf_name_data.push_back(min_rate.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-monitor")
    {
        if(link_monitor == nullptr)
        {
            link_monitor = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor>();
        }
        return link_monitor;
    }

    if(child_yang_name == "remote-failure")
    {
        if(remote_failure == nullptr)
        {
            remote_failure = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure>();
        }
        return remote_failure;
    }

    if(child_yang_name == "remote-loopback")
    {
        if(remote_loopback == nullptr)
        {
            remote_loopback = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::RemoteLoopback>();
        }
        return remote_loopback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_monitor != nullptr)
    {
        children["link-monitor"] = link_monitor;
    }

    if(remote_failure != nullptr)
    {
        children["remote-failure"] = remote_failure;
    }

    if(remote_loopback != nullptr)
    {
        children["remote-loopback"] = remote_loopback;
    }

    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-rate")
    {
        max_rate = value;
        max_rate.value_namespace = name_space;
        max_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-rate")
    {
        min_rate = value;
        min_rate.value_namespace = name_space;
        min_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ethernet::Oam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-rate")
    {
        max_rate.yfilter = yfilter;
    }
    if(value_path == "min-rate")
    {
        min_rate.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ethernet::Oam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-monitor" || name == "remote-failure" || name == "remote-loopback" || name == "max-rate" || name == "min-rate" || name == "mode" || name == "timeout")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::LinkMonitor()
    :
    on{YType::empty, "on"},
    supported{YType::empty, "supported"}
    	,
    frame(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame>())
	,frame_period(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod>())
	,frame_seconds(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds>())
	,high_threshold(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold>())
	,receive_crc(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc>())
	,symbol_period(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod>())
{
    frame->parent = this;
    frame_period->parent = this;
    frame_seconds->parent = this;
    high_threshold->parent = this;
    receive_crc->parent = this;
    symbol_period->parent = this;

    yang_name = "link-monitor"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::~LinkMonitor()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::has_data() const
{
    return on.is_set
	|| supported.is_set
	|| (frame !=  nullptr && frame->has_data())
	|| (frame_period !=  nullptr && frame_period->has_data())
	|| (frame_seconds !=  nullptr && frame_seconds->has_data())
	|| (high_threshold !=  nullptr && high_threshold->has_data())
	|| (receive_crc !=  nullptr && receive_crc->has_data())
	|| (symbol_period !=  nullptr && symbol_period->has_data());
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on.yfilter)
	|| ydk::is_set(supported.yfilter)
	|| (frame !=  nullptr && frame->has_operation())
	|| (frame_period !=  nullptr && frame_period->has_operation())
	|| (frame_seconds !=  nullptr && frame_seconds->has_operation())
	|| (high_threshold !=  nullptr && high_threshold->has_operation())
	|| (receive_crc !=  nullptr && receive_crc->has_operation())
	|| (symbol_period !=  nullptr && symbol_period->has_operation());
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());
    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frame")
    {
        if(frame == nullptr)
        {
            frame = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame>();
        }
        return frame;
    }

    if(child_yang_name == "frame-period")
    {
        if(frame_period == nullptr)
        {
            frame_period = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod>();
        }
        return frame_period;
    }

    if(child_yang_name == "frame-seconds")
    {
        if(frame_seconds == nullptr)
        {
            frame_seconds = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds>();
        }
        return frame_seconds;
    }

    if(child_yang_name == "high-threshold")
    {
        if(high_threshold == nullptr)
        {
            high_threshold = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold>();
        }
        return high_threshold;
    }

    if(child_yang_name == "receive-crc")
    {
        if(receive_crc == nullptr)
        {
            receive_crc = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc>();
        }
        return receive_crc;
    }

    if(child_yang_name == "symbol-period")
    {
        if(symbol_period == nullptr)
        {
            symbol_period = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod>();
        }
        return symbol_period;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frame != nullptr)
    {
        children["frame"] = frame;
    }

    if(frame_period != nullptr)
    {
        children["frame-period"] = frame_period;
    }

    if(frame_seconds != nullptr)
    {
        children["frame-seconds"] = frame_seconds;
    }

    if(high_threshold != nullptr)
    {
        children["high-threshold"] = high_threshold;
    }

    if(receive_crc != nullptr)
    {
        children["receive-crc"] = receive_crc;
    }

    if(symbol_period != nullptr)
    {
        children["symbol-period"] = symbol_period;
    }

    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frame" || name == "frame-period" || name == "frame-seconds" || name == "high-threshold" || name == "receive-crc" || name == "symbol-period" || name == "on" || name == "supported")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Frame()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::~Frame()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::~Threshold()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::High()
    :
    none{YType::empty, "none"},
    thresh{YType::uint16, "thresh"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::~High()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_data() const
{
    return none.is_set
	|| thresh.is_set;
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(thresh.yfilter);
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (thresh.is_set || is_set(thresh.yfilter)) leaf_name_data.push_back(thresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh")
    {
        thresh = value;
        thresh.value_namespace = name_space;
        thresh.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "thresh")
    {
        thresh.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none" || name == "thresh")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::FramePeriod()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-period"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::~FramePeriod()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Standby::Version::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Standby::Version::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Ipv6::autoconfig {0, "autoconfig"};

const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Trust::Device::cisco_phone {0, "cisco-phone"};
const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Trust::Device::cts {1, "cts"};
const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Trust::Device::ip_camera {2, "ip-camera"};
const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Trust::Device::media_player {3, "media-player"};

const Enum::YLeaf Native::Interface::FastEthernet::IfState::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::FastEthernet::ServiceInsertion::waas {0, "waas"};

const Enum::YLeaf Native::Interface::FastEthernet::ChannelProtocol::lacp {0, "lacp"};
const Enum::YLeaf Native::Interface::FastEthernet::ChannelProtocol::pagp {1, "pagp"};

const Enum::YLeaf Native::Interface::FastEthernet::Duplex::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::FastEthernet::Duplex::full {1, "full"};
const Enum::YLeaf Native::Interface::FastEthernet::Duplex::half {2, "half"};

const Enum::YLeaf Native::Interface::FastEthernet::Nat66::inside {0, "inside"};
const Enum::YLeaf Native::Interface::FastEthernet::Nat66::outside {1, "outside"};

const Enum::YLeaf Native::Interface::FastEthernet::AccessSession::HostMode::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::FastEthernet::AccessSession::HostMode::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::FastEthernet::AccessSession::HostMode::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::FastEthernet::AccessSession::HostMode::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::FastEthernet::Authentication::ControlDirection::both {0, "both"};
const Enum::YLeaf Native::Interface::FastEthernet::Authentication::ControlDirection::in {1, "in"};

const Enum::YLeaf Native::Interface::FastEthernet::Authentication::HostMode::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::FastEthernet::Authentication::HostMode::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::FastEthernet::Authentication::HostMode::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::FastEthernet::Authentication::HostMode::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::FastEthernet::Authentication::PortControl::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::FastEthernet::Authentication::PortControl::force_authorized {1, "force-authorized"};
const Enum::YLeaf Native::Interface::FastEthernet::Authentication::PortControl::force_unauthorized {2, "force-unauthorized"};

const Enum::YLeaf Native::Interface::FastEthernet::Authentication::Violation::protect {0, "protect"};
const Enum::YLeaf Native::Interface::FastEthernet::Authentication::Violation::replace {1, "replace"};
const Enum::YLeaf Native::Interface::FastEthernet::Authentication::Violation::restrict {2, "restrict"};
const Enum::YLeaf Native::Interface::FastEthernet::Authentication::Violation::shutdown {3, "shutdown"};

const Enum::YLeaf Native::Interface::FastEthernet::Backup::Delay::Failure::never {0, "never"};

const Enum::YLeaf Native::Interface::FastEthernet::Backup::Delay::SecondaryDisable::never {0, "never"};

const Enum::YLeaf Native::Interface::FastEthernet::Backup::Load::Kickin::never {0, "never"};

const Enum::YLeaf Native::Interface::FastEthernet::Backup::Load::Kickout::never {0, "never"};

const Enum::YLeaf Native::Interface::FastEthernet::ChannelGroup::Mode::active {0, "active"};
const Enum::YLeaf Native::Interface::FastEthernet::ChannelGroup::Mode::auto_ {1, "auto"};
const Enum::YLeaf Native::Interface::FastEthernet::ChannelGroup::Mode::desirable {2, "desirable"};
const Enum::YLeaf Native::Interface::FastEthernet::ChannelGroup::Mode::on {3, "on"};
const Enum::YLeaf Native::Interface::FastEthernet::ChannelGroup::Mode::passive {4, "passive"};

const Enum::YLeaf Native::Interface::FastEthernet::Crypto::Ipsec::DfBit::clear {0, "clear"};
const Enum::YLeaf Native::Interface::FastEthernet::Crypto::Ipsec::DfBit::copy {1, "copy"};
const Enum::YLeaf Native::Interface::FastEthernet::Crypto::Ipsec::DfBit::set {2, "set"};

const Enum::YLeaf Native::Interface::FastEthernet::Crypto::Ipsec::Fragmentation::after_encryption {0, "after-encryption"};
const Enum::YLeaf Native::Interface::FastEthernet::Crypto::Ipsec::Fragmentation::before_encryption {1, "before-encryption"};

const Enum::YLeaf Native::Interface::FastEthernet::Cts::RoleBased::SgtCache::egress {0, "egress"};
const Enum::YLeaf Native::Interface::FastEthernet::Cts::RoleBased::SgtCache::ingress {1, "ingress"};

const Enum::YLeaf Native::Interface::FastEthernet::Datalink::Flow::Monitor::InputOutput::input {0, "input"};
const Enum::YLeaf Native::Interface::FastEthernet::Datalink::Flow::Monitor::InputOutput::output {1, "output"};

const Enum::YLeaf Native::Interface::FastEthernet::Dot1X::Pae::authenticator {0, "authenticator"};
const Enum::YLeaf Native::Interface::FastEthernet::Dot1X::Pae::supplicant {1, "supplicant"};
const Enum::YLeaf Native::Interface::FastEthernet::Dot1X::Pae::both {2, "both"};

const Enum::YLeaf Native::Interface::FastEthernet::Ethernet::Oam::Mode::active {0, "active"};
const Enum::YLeaf Native::Interface::FastEthernet::Ethernet::Oam::Mode::passive {1, "passive"};


}
}

