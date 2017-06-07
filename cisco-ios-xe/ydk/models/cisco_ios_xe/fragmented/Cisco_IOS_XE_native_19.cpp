
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_19.hpp"
#include "Cisco_IOS_XE_native_20.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Interface::AppnavUncompress::PriorityQueue::PriorityQueue()
    :
    out{YType::empty, "out"}
    	,
    cos_map(std::make_shared<Native::Interface::AppnavUncompress::PriorityQueue::CosMap>())
{
    cos_map->parent = this;

    yang_name = "priority-queue"; yang_parent_name = "AppNav-UnCompress";
}

Native::Interface::AppnavUncompress::PriorityQueue::~PriorityQueue()
{
}

bool Native::Interface::AppnavUncompress::PriorityQueue::has_data() const
{
    return out.is_set
	|| (cos_map !=  nullptr && cos_map->has_data());
}

bool Native::Interface::AppnavUncompress::PriorityQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(out.operation)
	|| (cos_map !=  nullptr && cos_map->has_operation());
}

std::string Native::Interface::AppnavUncompress::PriorityQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::AppnavUncompress::PriorityQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PriorityQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AppnavUncompress::PriorityQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        if(cos_map == nullptr)
        {
            cos_map = std::make_shared<Native::Interface::AppnavUncompress::PriorityQueue::CosMap>();
        }
        return cos_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppnavUncompress::PriorityQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos_map != nullptr)
    {
        children["cos-map"] = cos_map;
    }

    return children;
}

void Native::Interface::AppnavUncompress::PriorityQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::AppnavUncompress::PriorityQueue::CosMap::CosMap()
    :
    cos_values{YType::uint8, "cos-values"},
    id{YType::uint8, "id"}
{
    yang_name = "cos-map"; yang_parent_name = "priority-queue";
}

Native::Interface::AppnavUncompress::PriorityQueue::CosMap::~CosMap()
{
}

bool Native::Interface::AppnavUncompress::PriorityQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::Interface::AppnavUncompress::PriorityQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(cos_values.operation)
	|| is_set(id.operation);
}

std::string Native::Interface::AppnavUncompress::PriorityQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map";

    return path_buffer.str();

}

const EntityPath Native::Interface::AppnavUncompress::PriorityQueue::CosMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AppnavUncompress::PriorityQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppnavUncompress::PriorityQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppnavUncompress::PriorityQueue::CosMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::AppnavUncompress::RcvQueue::RcvQueue()
{
    yang_name = "rcv-queue"; yang_parent_name = "AppNav-UnCompress";
}

Native::Interface::AppnavUncompress::RcvQueue::~RcvQueue()
{
}

bool Native::Interface::AppnavUncompress::RcvQueue::has_data() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::AppnavUncompress::RcvQueue::has_operation() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::AppnavUncompress::RcvQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::AppnavUncompress::RcvQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RcvQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AppnavUncompress::RcvQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Interface::AppnavUncompress::RcvQueue::CosMap>();
        c->parent = this;
        cos_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppnavUncompress::RcvQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cos_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::AppnavUncompress::RcvQueue::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AppnavUncompress::RcvQueue::CosMap::CosMap()
    :
    queue_id{YType::uint8, "queue-id"},
    threshold_id{YType::uint8, "threshold-id"},
    cos_values{YType::uint8, "cos-values"}
{
    yang_name = "cos-map"; yang_parent_name = "rcv-queue";
}

Native::Interface::AppnavUncompress::RcvQueue::CosMap::~CosMap()
{
}

bool Native::Interface::AppnavUncompress::RcvQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return queue_id.is_set
	|| threshold_id.is_set;
}

bool Native::Interface::AppnavUncompress::RcvQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(queue_id.operation)
	|| is_set(threshold_id.operation)
	|| is_set(cos_values.operation);
}

std::string Native::Interface::AppnavUncompress::RcvQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map" <<"[queue-id='" <<queue_id <<"']" <<"[threshold-id='" <<threshold_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::AppnavUncompress::RcvQueue::CosMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (threshold_id.is_set || is_set(threshold_id.operation)) leaf_name_data.push_back(threshold_id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AppnavUncompress::RcvQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppnavUncompress::RcvQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppnavUncompress::RcvQueue::CosMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "threshold-id")
    {
        threshold_id = value;
    }
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
}

Native::Interface::AppnavUncompress::Peer::Peer()
    :
    default_(std::make_shared<Native::Interface::AppnavUncompress::Peer::Default_>())
{
    default_->parent = this;

    yang_name = "peer"; yang_parent_name = "AppNav-UnCompress";
}

Native::Interface::AppnavUncompress::Peer::~Peer()
{
}

bool Native::Interface::AppnavUncompress::Peer::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Interface::AppnavUncompress::Peer::has_operation() const
{
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Interface::AppnavUncompress::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::AppnavUncompress::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AppnavUncompress::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Interface::AppnavUncompress::Peer::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppnavUncompress::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Interface::AppnavUncompress::Peer::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AppnavUncompress::Peer::Default_::Default_()
    :
    ip(std::make_shared<Native::Interface::AppnavUncompress::Peer::Default_::Ip>())
{
    ip->parent = this;

    yang_name = "default"; yang_parent_name = "peer";
}

Native::Interface::AppnavUncompress::Peer::Default_::~Default_()
{
}

bool Native::Interface::AppnavUncompress::Peer::Default_::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::AppnavUncompress::Peer::Default_::has_operation() const
{
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::AppnavUncompress::Peer::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Interface::AppnavUncompress::Peer::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AppnavUncompress::Peer::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::AppnavUncompress::Peer::Default_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppnavUncompress::Peer::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::AppnavUncompress::Peer::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AppnavUncompress::Peer::Default_::Ip::Ip()
    :
    address(std::make_shared<Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address>())
{
    address->parent = this;

    yang_name = "ip"; yang_parent_name = "default";
}

Native::Interface::AppnavUncompress::Peer::Default_::Ip::~Ip()
{
}

bool Native::Interface::AppnavUncompress::Peer::Default_::Ip::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Interface::AppnavUncompress::Peer::Default_::Ip::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Interface::AppnavUncompress::Peer::Default_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::AppnavUncompress::Peer::Default_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AppnavUncompress::Peer::Default_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppnavUncompress::Peer::Default_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Interface::AppnavUncompress::Peer::Default_::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::Address()
    :
    dhcp{YType::empty, "dhcp"}
    	,
    dhcp_pool(nullptr) // presence node
	,pool(nullptr) // presence node
{
    yang_name = "address"; yang_parent_name = "ip";
}

Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::~Address()
{
}

bool Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::has_data() const
{
    return dhcp.is_set
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_data())
	|| (pool !=  nullptr && pool->has_data());
}

bool Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(dhcp.operation)
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_operation())
	|| (pool !=  nullptr && pool->has_operation());
}

std::string Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.operation)) leaf_name_data.push_back(dhcp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-pool")
    {
        if(dhcp_pool == nullptr)
        {
            dhcp_pool = std::make_shared<Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::DhcpPool>();
        }
        return dhcp_pool;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::Pool>();
        }
        return pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp_pool != nullptr)
    {
        children["dhcp-pool"] = dhcp_pool;
    }

    if(pool != nullptr)
    {
        children["pool"] = pool;
    }

    return children;
}

void Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
    }
}

Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::DhcpPool::DhcpPool()
    :
    pools{YType::str, "pools"}
{
    yang_name = "dhcp-pool"; yang_parent_name = "address";
}

Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::DhcpPool::~DhcpPool()
{
}

bool Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::DhcpPool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::DhcpPool::has_operation() const
{
    return is_set(operation)
	|| is_set(pools.operation);
}

std::string Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::DhcpPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-pool";

    return path_buffer.str();

}

const EntityPath Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::DhcpPool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcpPool' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.operation)) leaf_name_data.push_back(pools.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::DhcpPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::DhcpPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::DhcpPool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pools")
    {
        pools = value;
    }
}

Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::Pool::Pool()
    :
    pools{YType::str, "pools"}
{
    yang_name = "pool"; yang_parent_name = "address";
}

Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::Pool::~Pool()
{
}

bool Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::Pool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::Pool::has_operation() const
{
    return is_set(operation)
	|| is_set(pools.operation);
}

std::string Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";

    return path_buffer.str();

}

const EntityPath Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pool' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.operation)) leaf_name_data.push_back(pools.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::Pool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pools")
    {
        pools = value;
    }
}

Native::Interface::AppnavUncompress::PmPath::PmPath()
    :
    interface_id{YType::uint8, "interface-id"},
    name{YType::str, "name"}
{
    yang_name = "pm-path"; yang_parent_name = "AppNav-UnCompress";
}

Native::Interface::AppnavUncompress::PmPath::~PmPath()
{
}

bool Native::Interface::AppnavUncompress::PmPath::has_data() const
{
    return interface_id.is_set
	|| name.is_set;
}

bool Native::Interface::AppnavUncompress::PmPath::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_id.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::AppnavUncompress::PmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm-path";

    return path_buffer.str();

}

const EntityPath Native::Interface::AppnavUncompress::PmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PmPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AppnavUncompress::PmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppnavUncompress::PmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppnavUncompress::PmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Atm::Atm()
    :
    name{YType::str, "name"},
    load_interval{YType::uint32, "Cisco-IOS-XE-atm:load-interval"}
    	,
    atm(std::make_shared<Native::Interface::Atm::Atm_>())
	,ip(std::make_shared<Native::Interface::Atm::Ip>())
{
    atm->parent = this;

    ip->parent = this;

    yang_name = "ATM"; yang_parent_name = "interface";
}

Native::Interface::Atm::~Atm()
{
}

bool Native::Interface::Atm::has_data() const
{
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_data())
            return true;
    }
    return name.is_set
	|| load_interval.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::Atm::has_operation() const
{
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(load_interval.operation)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Interface::Atm::Atm_>();
        }
        return atm;
    }

    if(child_yang_name == "cem")
    {
        for(auto const & c : cem)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Atm::Cem>();
        c->parent = this;
        cem.push_back(c);
        return c;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Atm::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "pvc")
    {
        for(auto const & c : pvc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Atm::Pvc>();
        c->parent = this;
        pvc.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    for (auto const & c : cem)
    {
        children[c->get_segment_path()] = c;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    for (auto const & c : pvc)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Atm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
}

Native::Interface::Atm::Ip::Ip()
    :
    address{YType::str, "address"}
{
    yang_name = "ip"; yang_parent_name = "ATM";
}

Native::Interface::Atm::Ip::~Ip()
{
}

bool Native::Interface::Atm::Ip::has_data() const
{
    return address.is_set;
}

bool Native::Interface::Atm::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Interface::Atm::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Atm::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Interface::Atm::Atm_::Atm_()
    :
    bandwidth{YType::enumeration, "bandwidth"},
    enable_ilmi_trap{YType::boolean, "enable-ilmi-trap"}
{
    yang_name = "atm"; yang_parent_name = "ATM";
}

Native::Interface::Atm::Atm_::~Atm_()
{
}

bool Native::Interface::Atm::Atm_::has_data() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_data())
            return true;
    }
    return bandwidth.is_set
	|| enable_ilmi_trap.is_set;
}

bool Native::Interface::Atm::Atm_::has_operation() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(enable_ilmi_trap.operation);
}

std::string Native::Interface::Atm::Atm_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:atm";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Atm_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atm_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (enable_ilmi_trap.is_set || is_set(enable_ilmi_trap.operation)) leaf_name_data.push_back(enable_ilmi_trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Atm_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvp")
    {
        for(auto const & c : pvp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Atm::Atm_::Pvp>();
        c->parent = this;
        pvp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Atm_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pvp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Atm::Atm_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "enable-ilmi-trap")
    {
        enable_ilmi_trap = value;
    }
}

Native::Interface::Atm::Atm_::Pvp::Pvp()
    :
    pvp_number{YType::uint16, "pvp-number"},
    l2transport{YType::empty, "l2transport"}
    	,
    xconnect(std::make_shared<Native::Interface::Atm::Atm_::Pvp::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::Atm::Atm_::Pvp::XconnectPwClass>())
{
    xconnect->parent = this;

    xconnect_pw_class->parent = this;

    yang_name = "pvp"; yang_parent_name = "atm";
}

Native::Interface::Atm::Atm_::Pvp::~Pvp()
{
}

bool Native::Interface::Atm::Atm_::Pvp::has_data() const
{
    return pvp_number.is_set
	|| l2transport.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::Atm::Atm_::Pvp::has_operation() const
{
    return is_set(operation)
	|| is_set(pvp_number.operation)
	|| is_set(l2transport.operation)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::Atm::Atm_::Pvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvp" <<"[pvp-number='" <<pvp_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Atm_::Pvp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pvp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pvp_number.is_set || is_set(pvp_number.operation)) leaf_name_data.push_back(pvp_number.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.operation)) leaf_name_data.push_back(l2transport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Atm_::Pvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::Atm::Atm_::Pvp::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::Atm::Atm_::Pvp::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Atm_::Pvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::Atm::Atm_::Pvp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pvp-number")
    {
        pvp_number = value;
    }
    if(value_path == "l2transport")
    {
        l2transport = value;
    }
}

Native::Interface::Atm::Atm_::Pvp::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    mtu{YType::uint32, "mtu"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    vcid{YType::uint32, "vcid"}
    	,
    backup(std::make_shared<Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvp";
}

Native::Interface::Atm::Atm_::Pvp::Xconnect::~Xconnect()
{
}

bool Native::Interface::Atm::Atm_::Pvp::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| mtu.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| vcid.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::Atm::Atm_::Pvp::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(encapsulation.operation)
	|| is_set(manual.operation)
	|| is_set(mtu.operation)
	|| is_set(pw_class.operation)
	|| is_set(sequencing.operation)
	|| is_set(vcid.operation)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::Atm::Atm_::Pvp::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Atm_::Pvp::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.operation)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.operation)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Atm_::Pvp::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Atm_::Pvp::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::Atm::Atm_::Pvp::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "manual")
    {
        manual = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Delay>())
	,peer(std::make_shared<Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Peer>())
{
    delay->parent = this;

    peer->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect";
}

Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    priority{YType::uint8, "priority"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
{
    yang_name = "peer"; yang_parent_name = "backup";
}

Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| priority.is_set
	|| pw_class.is_set
	|| vcid.is_set;
}

bool Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_router_ip_addr.operation)
	|| is_set(priority.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation);
}

std::string Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.operation)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Delay::Delay()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "delay"; yang_parent_name = "backup";
}

Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Delay::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvp";
}

Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::has_operation() const
{
    return is_set(operation)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectPwClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
    	,
    udp(std::make_shared<Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class";
}

Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| pw_class.is_set
	|| vcid.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect";
}

Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(operation)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{
    yang_name = "port"; yang_parent_name = "udp";
}

Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(local.operation)
	|| is_set(remote.operation);
}

std::string Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.operation)) leaf_name_data.push_back(remote.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "remote")
    {
        remote = value;
    }
}

Native::Interface::Atm::Cem::Cem()
    :
    number{YType::uint32, "number"}
    	,
    xconnect(std::make_shared<Native::Interface::Atm::Cem::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::Atm::Cem::XconnectPwClass>())
{
    xconnect->parent = this;

    xconnect_pw_class->parent = this;

    yang_name = "cem"; yang_parent_name = "ATM";
}

Native::Interface::Atm::Cem::~Cem()
{
}

bool Native::Interface::Atm::Cem::has_data() const
{
    return number.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::Atm::Cem::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::Atm::Cem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:cem" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Cem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cem' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Cem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::Atm::Cem::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::Atm::Cem::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Cem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::Atm::Cem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Interface::Atm::Cem::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    mtu{YType::uint32, "mtu"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    vcid{YType::uint32, "vcid"}
    	,
    backup(std::make_shared<Native::Interface::Atm::Cem::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "cem";
}

Native::Interface::Atm::Cem::Xconnect::~Xconnect()
{
}

bool Native::Interface::Atm::Cem::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| mtu.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| vcid.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::Atm::Cem::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(encapsulation.operation)
	|| is_set(manual.operation)
	|| is_set(mtu.operation)
	|| is_set(pw_class.operation)
	|| is_set(sequencing.operation)
	|| is_set(vcid.operation)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::Atm::Cem::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Cem::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.operation)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.operation)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Cem::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::Atm::Cem::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Cem::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::Atm::Cem::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "manual")
    {
        manual = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::Atm::Cem::Xconnect::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::Atm::Cem::Xconnect::Backup::Delay>())
	,peer(std::make_shared<Native::Interface::Atm::Cem::Xconnect::Backup::Peer>())
{
    delay->parent = this;

    peer->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect";
}

Native::Interface::Atm::Cem::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::Atm::Cem::Xconnect::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::Atm::Cem::Xconnect::Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::Atm::Cem::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Cem::Xconnect::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Cem::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Atm::Cem::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::Atm::Cem::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Cem::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::Atm::Cem::Xconnect::Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Atm::Cem::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    priority{YType::uint8, "priority"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
{
    yang_name = "peer"; yang_parent_name = "backup";
}

Native::Interface::Atm::Cem::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::Atm::Cem::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| priority.is_set
	|| pw_class.is_set
	|| vcid.is_set;
}

bool Native::Interface::Atm::Cem::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_router_ip_addr.operation)
	|| is_set(priority.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation);
}

std::string Native::Interface::Atm::Cem::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Cem::Xconnect::Backup::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.operation)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Cem::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Cem::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Atm::Cem::Xconnect::Backup::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::Atm::Cem::Xconnect::Backup::Delay::Delay()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "delay"; yang_parent_name = "backup";
}

Native::Interface::Atm::Cem::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::Atm::Cem::Xconnect::Backup::Delay::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Interface::Atm::Cem::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Native::Interface::Atm::Cem::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Cem::Xconnect::Backup::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Cem::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Cem::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Atm::Cem::Xconnect::Backup::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Interface::Atm::Cem::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::Atm::Cem::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "cem";
}

Native::Interface::Atm::Cem::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::Atm::Cem::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::Atm::Cem::XconnectPwClass::has_operation() const
{
    return is_set(operation)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::Atm::Cem::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Cem::XconnectPwClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectPwClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Cem::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::Atm::Cem::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Cem::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::Atm::Cem::XconnectPwClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
    	,
    udp(std::make_shared<Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class";
}

Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| pw_class.is_set
	|| vcid.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect";
}

Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(operation)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{
    yang_name = "port"; yang_parent_name = "udp";
}

Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(local.operation)
	|| is_set(remote.operation);
}

std::string Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.operation)) leaf_name_data.push_back(remote.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "remote")
    {
        remote = value;
    }
}

Native::Interface::Atm::Pvc::Pvc()
    :
    local_vpi_vci{YType::str, "local-vpi-vci"},
    l2transport{YType::empty, "l2transport"},
    remote_vpi_vci{YType::str, "remote-vpi-vci"},
    ubr{YType::uint32, "ubr"}
    	,
    xconnect(std::make_shared<Native::Interface::Atm::Pvc::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::Atm::Pvc::XconnectPwClass>())
{
    xconnect->parent = this;

    xconnect_pw_class->parent = this;

    yang_name = "pvc"; yang_parent_name = "ATM";
}

Native::Interface::Atm::Pvc::~Pvc()
{
}

bool Native::Interface::Atm::Pvc::has_data() const
{
    return local_vpi_vci.is_set
	|| l2transport.is_set
	|| remote_vpi_vci.is_set
	|| ubr.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::Atm::Pvc::has_operation() const
{
    return is_set(operation)
	|| is_set(local_vpi_vci.operation)
	|| is_set(l2transport.operation)
	|| is_set(remote_vpi_vci.operation)
	|| is_set(ubr.operation)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::Atm::Pvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:pvc" <<"[local-vpi-vci='" <<local_vpi_vci <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Pvc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pvc' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_vpi_vci.is_set || is_set(local_vpi_vci.operation)) leaf_name_data.push_back(local_vpi_vci.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.operation)) leaf_name_data.push_back(l2transport.get_name_leafdata());
    if (remote_vpi_vci.is_set || is_set(remote_vpi_vci.operation)) leaf_name_data.push_back(remote_vpi_vci.get_name_leafdata());
    if (ubr.is_set || is_set(ubr.operation)) leaf_name_data.push_back(ubr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Pvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::Atm::Pvc::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::Atm::Pvc::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Pvc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::Atm::Pvc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-vpi-vci")
    {
        local_vpi_vci = value;
    }
    if(value_path == "l2transport")
    {
        l2transport = value;
    }
    if(value_path == "remote-vpi-vci")
    {
        remote_vpi_vci = value;
    }
    if(value_path == "ubr")
    {
        ubr = value;
    }
}

Native::Interface::Atm::Pvc::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    mtu{YType::uint32, "mtu"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    vcid{YType::uint32, "vcid"}
    	,
    backup(std::make_shared<Native::Interface::Atm::Pvc::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvc";
}

Native::Interface::Atm::Pvc::Xconnect::~Xconnect()
{
}

bool Native::Interface::Atm::Pvc::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| mtu.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| vcid.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::Atm::Pvc::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(encapsulation.operation)
	|| is_set(manual.operation)
	|| is_set(mtu.operation)
	|| is_set(pw_class.operation)
	|| is_set(sequencing.operation)
	|| is_set(vcid.operation)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::Atm::Pvc::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Pvc::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.operation)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.operation)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Pvc::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::Atm::Pvc::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Pvc::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::Atm::Pvc::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "manual")
    {
        manual = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::Atm::Pvc::Xconnect::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::Atm::Pvc::Xconnect::Backup::Delay>())
	,peer(std::make_shared<Native::Interface::Atm::Pvc::Xconnect::Backup::Peer>())
{
    delay->parent = this;

    peer->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect";
}

Native::Interface::Atm::Pvc::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::Atm::Pvc::Xconnect::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::Atm::Pvc::Xconnect::Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::Atm::Pvc::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Pvc::Xconnect::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Pvc::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Atm::Pvc::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::Atm::Pvc::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Pvc::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::Atm::Pvc::Xconnect::Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Atm::Pvc::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    priority{YType::uint8, "priority"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
{
    yang_name = "peer"; yang_parent_name = "backup";
}

Native::Interface::Atm::Pvc::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::Atm::Pvc::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| priority.is_set
	|| pw_class.is_set
	|| vcid.is_set;
}

bool Native::Interface::Atm::Pvc::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_router_ip_addr.operation)
	|| is_set(priority.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation);
}

std::string Native::Interface::Atm::Pvc::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Pvc::Xconnect::Backup::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.operation)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Pvc::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Pvc::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Atm::Pvc::Xconnect::Backup::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::Atm::Pvc::Xconnect::Backup::Delay::Delay()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "delay"; yang_parent_name = "backup";
}

Native::Interface::Atm::Pvc::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::Atm::Pvc::Xconnect::Backup::Delay::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Interface::Atm::Pvc::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Native::Interface::Atm::Pvc::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Pvc::Xconnect::Backup::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Pvc::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Pvc::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Atm::Pvc::Xconnect::Backup::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Interface::Atm::Pvc::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvc";
}

Native::Interface::Atm::Pvc::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::Atm::Pvc::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::Atm::Pvc::XconnectPwClass::has_operation() const
{
    return is_set(operation)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::Atm::Pvc::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Pvc::XconnectPwClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectPwClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Pvc::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Pvc::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::Atm::Pvc::XconnectPwClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
    	,
    udp(std::make_shared<Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class";
}

Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| pw_class.is_set
	|| vcid.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect";
}

Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(operation)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{
    yang_name = "port"; yang_parent_name = "udp";
}

Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(local.operation)
	|| is_set(remote.operation);
}

std::string Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.operation)) leaf_name_data.push_back(remote.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "remote")
    {
        remote = value;
    }
}

Native::Interface::AtmSubinterface::AtmSubinterface()
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Interface::AtmSubinterface::has_data() const
{
    for (std::size_t index=0; index<atm.size(); index++)
    {
        if(atm[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::AtmSubinterface::has_operation() const
{
    for (std::size_t index=0; index<atm.size(); index++)
    {
        if(atm[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM")
    {
        for(auto const & c : atm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::AtmSubinterface::Atm>();
        c->parent = this;
        atm.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atm)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmSubinterface::Atm::Atm()
    :
    name{YType::str, "name"},
    load_interval{YType::uint32, "Cisco-IOS-XE-atm:load-interval"}
    	,
    atm(std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_>())
	,ip(std::make_shared<Native::Interface::AtmSubinterface::Atm::Ip>())
{
    atm->parent = this;

    ip->parent = this;

    yang_name = "ATM"; yang_parent_name = "ATM-subinterface";
}

Native::Interface::AtmSubinterface::Atm::~Atm()
{
}

bool Native::Interface::AtmSubinterface::Atm::has_data() const
{
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_data())
            return true;
    }
    return name.is_set
	|| load_interval.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::has_operation() const
{
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(load_interval.operation)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/interface/ATM-subinterface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_>();
        }
        return atm;
    }

    if(child_yang_name == "cem")
    {
        for(auto const & c : cem)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::AtmSubinterface::Atm::Cem>();
        c->parent = this;
        cem.push_back(c);
        return c;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::AtmSubinterface::Atm::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "pvc")
    {
        for(auto const & c : pvc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::AtmSubinterface::Atm::Pvc>();
        c->parent = this;
        pvc.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    for (auto const & c : cem)
    {
        children[c->get_segment_path()] = c;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    for (auto const & c : pvc)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Ip::Ip()
    :
    address{YType::str, "address"}
{
    yang_name = "ip"; yang_parent_name = "ATM";
}

Native::Interface::AtmSubinterface::Atm::Ip::~Ip()
{
}

bool Native::Interface::AtmSubinterface::Atm::Ip::has_data() const
{
    return address.is_set;
}

bool Native::Interface::AtmSubinterface::Atm::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Interface::AtmSubinterface::Atm::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmSubinterface::Atm::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Atm_::Atm_()
    :
    bandwidth{YType::enumeration, "bandwidth"},
    enable_ilmi_trap{YType::boolean, "enable-ilmi-trap"}
{
    yang_name = "atm"; yang_parent_name = "ATM";
}

Native::Interface::AtmSubinterface::Atm::Atm_::~Atm_()
{
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::has_data() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_data())
            return true;
    }
    return bandwidth.is_set
	|| enable_ilmi_trap.is_set;
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::has_operation() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(enable_ilmi_trap.operation);
}

std::string Native::Interface::AtmSubinterface::Atm::Atm_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:atm";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Atm_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atm_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (enable_ilmi_trap.is_set || is_set(enable_ilmi_trap.operation)) leaf_name_data.push_back(enable_ilmi_trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Atm_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvp")
    {
        for(auto const & c : pvp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_::Pvp>();
        c->parent = this;
        pvp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Atm_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pvp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Atm_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "enable-ilmi-trap")
    {
        enable_ilmi_trap = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Pvp()
    :
    pvp_number{YType::uint16, "pvp-number"},
    l2transport{YType::empty, "l2transport"}
    	,
    xconnect(std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass>())
{
    xconnect->parent = this;

    xconnect_pw_class->parent = this;

    yang_name = "pvp"; yang_parent_name = "atm";
}

Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::~Pvp()
{
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::has_data() const
{
    return pvp_number.is_set
	|| l2transport.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::has_operation() const
{
    return is_set(operation)
	|| is_set(pvp_number.operation)
	|| is_set(l2transport.operation)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvp" <<"[pvp-number='" <<pvp_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pvp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pvp_number.is_set || is_set(pvp_number.operation)) leaf_name_data.push_back(pvp_number.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.operation)) leaf_name_data.push_back(l2transport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pvp-number")
    {
        pvp_number = value;
    }
    if(value_path == "l2transport")
    {
        l2transport = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    mtu{YType::uint32, "mtu"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    vcid{YType::uint32, "vcid"}
    	,
    backup(std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvp";
}

Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::~Xconnect()
{
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| mtu.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| vcid.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(encapsulation.operation)
	|| is_set(manual.operation)
	|| is_set(mtu.operation)
	|| is_set(pw_class.operation)
	|| is_set(sequencing.operation)
	|| is_set(vcid.operation)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.operation)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.operation)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "manual")
    {
        manual = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Delay>())
	,peer(std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Peer>())
{
    delay->parent = this;

    peer->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect";
}

Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    priority{YType::uint8, "priority"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
{
    yang_name = "peer"; yang_parent_name = "backup";
}

Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| priority.is_set
	|| pw_class.is_set
	|| vcid.is_set;
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_router_ip_addr.operation)
	|| is_set(priority.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation);
}

std::string Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.operation)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Delay::Delay()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "delay"; yang_parent_name = "backup";
}

Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Delay::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvp";
}

Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::has_operation() const
{
    return is_set(operation)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectPwClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
    	,
    udp(std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class";
}

Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| pw_class.is_set
	|| vcid.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect";
}

Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(operation)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{
    yang_name = "port"; yang_parent_name = "udp";
}

Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(local.operation)
	|| is_set(remote.operation);
}

std::string Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.operation)) leaf_name_data.push_back(remote.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "remote")
    {
        remote = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Cem::Cem()
    :
    number{YType::uint32, "number"}
    	,
    xconnect(std::make_shared<Native::Interface::AtmSubinterface::Atm::Cem::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass>())
{
    xconnect->parent = this;

    xconnect_pw_class->parent = this;

    yang_name = "cem"; yang_parent_name = "ATM";
}

Native::Interface::AtmSubinterface::Atm::Cem::~Cem()
{
}

bool Native::Interface::AtmSubinterface::Atm::Cem::has_data() const
{
    return number.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::Cem::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::Cem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:cem" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Cem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cem' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Cem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::AtmSubinterface::Atm::Cem::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Cem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Cem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    mtu{YType::uint32, "mtu"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    vcid{YType::uint32, "vcid"}
    	,
    backup(std::make_shared<Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "cem";
}

Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::~Xconnect()
{
}

bool Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| mtu.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| vcid.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(encapsulation.operation)
	|| is_set(manual.operation)
	|| is_set(mtu.operation)
	|| is_set(pw_class.operation)
	|| is_set(sequencing.operation)
	|| is_set(vcid.operation)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.operation)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.operation)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "manual")
    {
        manual = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Delay>())
	,peer(std::make_shared<Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Peer>())
{
    delay->parent = this;

    peer->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect";
}

Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    priority{YType::uint8, "priority"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
{
    yang_name = "peer"; yang_parent_name = "backup";
}

Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| priority.is_set
	|| pw_class.is_set
	|| vcid.is_set;
}

bool Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_router_ip_addr.operation)
	|| is_set(priority.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation);
}

std::string Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.operation)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Delay::Delay()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "delay"; yang_parent_name = "backup";
}

Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Delay::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "cem";
}

Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::has_operation() const
{
    return is_set(operation)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectPwClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
    	,
    udp(std::make_shared<Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class";
}

Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| pw_class.is_set
	|| vcid.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect";
}

Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(operation)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{
    yang_name = "port"; yang_parent_name = "udp";
}

Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(local.operation)
	|| is_set(remote.operation);
}

std::string Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.operation)) leaf_name_data.push_back(remote.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "remote")
    {
        remote = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Pvc::Pvc()
    :
    local_vpi_vci{YType::str, "local-vpi-vci"},
    l2transport{YType::empty, "l2transport"},
    remote_vpi_vci{YType::str, "remote-vpi-vci"},
    ubr{YType::uint32, "ubr"}
    	,
    xconnect(std::make_shared<Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass>())
{
    xconnect->parent = this;

    xconnect_pw_class->parent = this;

    yang_name = "pvc"; yang_parent_name = "ATM";
}

Native::Interface::AtmSubinterface::Atm::Pvc::~Pvc()
{
}

bool Native::Interface::AtmSubinterface::Atm::Pvc::has_data() const
{
    return local_vpi_vci.is_set
	|| l2transport.is_set
	|| remote_vpi_vci.is_set
	|| ubr.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::Pvc::has_operation() const
{
    return is_set(operation)
	|| is_set(local_vpi_vci.operation)
	|| is_set(l2transport.operation)
	|| is_set(remote_vpi_vci.operation)
	|| is_set(ubr.operation)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::Pvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:pvc" <<"[local-vpi-vci='" <<local_vpi_vci <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Pvc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pvc' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_vpi_vci.is_set || is_set(local_vpi_vci.operation)) leaf_name_data.push_back(local_vpi_vci.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.operation)) leaf_name_data.push_back(l2transport.get_name_leafdata());
    if (remote_vpi_vci.is_set || is_set(remote_vpi_vci.operation)) leaf_name_data.push_back(remote_vpi_vci.get_name_leafdata());
    if (ubr.is_set || is_set(ubr.operation)) leaf_name_data.push_back(ubr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Pvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Pvc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Pvc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-vpi-vci")
    {
        local_vpi_vci = value;
    }
    if(value_path == "l2transport")
    {
        l2transport = value;
    }
    if(value_path == "remote-vpi-vci")
    {
        remote_vpi_vci = value;
    }
    if(value_path == "ubr")
    {
        ubr = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    mtu{YType::uint32, "mtu"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    vcid{YType::uint32, "vcid"}
    	,
    backup(std::make_shared<Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvc";
}

Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::~Xconnect()
{
}

bool Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| mtu.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| vcid.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(encapsulation.operation)
	|| is_set(manual.operation)
	|| is_set(mtu.operation)
	|| is_set(pw_class.operation)
	|| is_set(sequencing.operation)
	|| is_set(vcid.operation)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.operation)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.operation)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "manual")
    {
        manual = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Delay>())
	,peer(std::make_shared<Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Peer>())
{
    delay->parent = this;

    peer->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect";
}

Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    priority{YType::uint8, "priority"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
{
    yang_name = "peer"; yang_parent_name = "backup";
}

Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| priority.is_set
	|| pw_class.is_set
	|| vcid.is_set;
}

bool Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_router_ip_addr.operation)
	|| is_set(priority.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation);
}

std::string Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.operation)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Delay::Delay()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "delay"; yang_parent_name = "backup";
}

Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Delay::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvc";
}

Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::has_operation() const
{
    return is_set(operation)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectPwClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
    	,
    udp(std::make_shared<Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class";
}

Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| pw_class.is_set
	|| vcid.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect";
}

Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(operation)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{
    yang_name = "port"; yang_parent_name = "udp";
}

Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(local.operation)
	|| is_set(remote.operation);
}

std::string Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.operation)) leaf_name_data.push_back(remote.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "remote")
    {
        remote = value;
    }
}

Native::Interface::AtmAcr::AtmAcr()
    :
    name{YType::str, "name"},
    load_interval{YType::uint32, "Cisco-IOS-XE-atm:load-interval"}
    	,
    atm(std::make_shared<Native::Interface::AtmAcr::Atm>())
	,ip(std::make_shared<Native::Interface::AtmAcr::Ip>())
{
    atm->parent = this;

    ip->parent = this;

    yang_name = "ATM-ACR"; yang_parent_name = "interface";
}

Native::Interface::AtmAcr::~AtmAcr()
{
}

bool Native::Interface::AtmAcr::has_data() const
{
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_data())
            return true;
    }
    return name.is_set
	|| load_interval.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::AtmAcr::has_operation() const
{
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(load_interval.operation)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::AtmAcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACR" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Interface::AtmAcr::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "cem")
    {
        for(auto const & c : cem)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::AtmAcr::Cem>();
        c->parent = this;
        cem.push_back(c);
        return c;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::AtmAcr::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "pvc")
    {
        for(auto const & c : pvc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::AtmAcr::Pvc>();
        c->parent = this;
        pvc.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    for (auto const & c : cem)
    {
        children[c->get_segment_path()] = c;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    for (auto const & c : pvc)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::AtmAcr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
}

Native::Interface::AtmAcr::Ip::Ip()
    :
    address{YType::str, "address"}
{
    yang_name = "ip"; yang_parent_name = "ATM-ACR";
}

Native::Interface::AtmAcr::Ip::~Ip()
{
}

bool Native::Interface::AtmAcr::Ip::has_data() const
{
    return address.is_set;
}

bool Native::Interface::AtmAcr::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Interface::AtmAcr::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcr::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Interface::AtmAcr::Atm::Atm()
    :
    bandwidth{YType::enumeration, "bandwidth"},
    enable_ilmi_trap{YType::boolean, "enable-ilmi-trap"}
{
    yang_name = "atm"; yang_parent_name = "ATM-ACR";
}

Native::Interface::AtmAcr::Atm::~Atm()
{
}

bool Native::Interface::AtmAcr::Atm::has_data() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_data())
            return true;
    }
    return bandwidth.is_set
	|| enable_ilmi_trap.is_set;
}

bool Native::Interface::AtmAcr::Atm::has_operation() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(enable_ilmi_trap.operation);
}

std::string Native::Interface::AtmAcr::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:atm";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (enable_ilmi_trap.is_set || is_set(enable_ilmi_trap.operation)) leaf_name_data.push_back(enable_ilmi_trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvp")
    {
        for(auto const & c : pvp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::AtmAcr::Atm::Pvp>();
        c->parent = this;
        pvp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pvp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::AtmAcr::Atm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "enable-ilmi-trap")
    {
        enable_ilmi_trap = value;
    }
}

Native::Interface::AtmAcr::Atm::Pvp::Pvp()
    :
    pvp_number{YType::uint16, "pvp-number"},
    l2transport{YType::empty, "l2transport"}
    	,
    xconnect(std::make_shared<Native::Interface::AtmAcr::Atm::Pvp::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass>())
{
    xconnect->parent = this;

    xconnect_pw_class->parent = this;

    yang_name = "pvp"; yang_parent_name = "atm";
}

Native::Interface::AtmAcr::Atm::Pvp::~Pvp()
{
}

bool Native::Interface::AtmAcr::Atm::Pvp::has_data() const
{
    return pvp_number.is_set
	|| l2transport.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::AtmAcr::Atm::Pvp::has_operation() const
{
    return is_set(operation)
	|| is_set(pvp_number.operation)
	|| is_set(l2transport.operation)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::AtmAcr::Atm::Pvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvp" <<"[pvp-number='" <<pvp_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Atm::Pvp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pvp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pvp_number.is_set || is_set(pvp_number.operation)) leaf_name_data.push_back(pvp_number.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.operation)) leaf_name_data.push_back(l2transport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Atm::Pvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::AtmAcr::Atm::Pvp::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Atm::Pvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::AtmAcr::Atm::Pvp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pvp-number")
    {
        pvp_number = value;
    }
    if(value_path == "l2transport")
    {
        l2transport = value;
    }
}

Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    mtu{YType::uint32, "mtu"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    vcid{YType::uint32, "vcid"}
    	,
    backup(std::make_shared<Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvp";
}

Native::Interface::AtmAcr::Atm::Pvp::Xconnect::~Xconnect()
{
}

bool Native::Interface::AtmAcr::Atm::Pvp::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| mtu.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| vcid.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::AtmAcr::Atm::Pvp::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(encapsulation.operation)
	|| is_set(manual.operation)
	|| is_set(mtu.operation)
	|| is_set(pw_class.operation)
	|| is_set(sequencing.operation)
	|| is_set(vcid.operation)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::AtmAcr::Atm::Pvp::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Atm::Pvp::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.operation)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.operation)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Atm::Pvp::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Atm::Pvp::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::AtmAcr::Atm::Pvp::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "manual")
    {
        manual = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay>())
	,peer(std::make_shared<Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer>())
{
    delay->parent = this;

    peer->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect";
}

Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    priority{YType::uint8, "priority"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
{
    yang_name = "peer"; yang_parent_name = "backup";
}

Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| priority.is_set
	|| pw_class.is_set
	|| vcid.is_set;
}

bool Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_router_ip_addr.operation)
	|| is_set(priority.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation);
}

std::string Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.operation)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay::Delay()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "delay"; yang_parent_name = "backup";
}

Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvp";
}

Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::has_operation() const
{
    return is_set(operation)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectPwClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
    	,
    udp(std::make_shared<Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class";
}

Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| pw_class.is_set
	|| vcid.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect";
}

Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(operation)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{
    yang_name = "port"; yang_parent_name = "udp";
}

Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(local.operation)
	|| is_set(remote.operation);
}

std::string Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.operation)) leaf_name_data.push_back(remote.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "remote")
    {
        remote = value;
    }
}

Native::Interface::AtmAcr::Cem::Cem()
    :
    number{YType::uint32, "number"}
    	,
    xconnect(std::make_shared<Native::Interface::AtmAcr::Cem::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::AtmAcr::Cem::XconnectPwClass>())
{
    xconnect->parent = this;

    xconnect_pw_class->parent = this;

    yang_name = "cem"; yang_parent_name = "ATM-ACR";
}

Native::Interface::AtmAcr::Cem::~Cem()
{
}

bool Native::Interface::AtmAcr::Cem::has_data() const
{
    return number.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::AtmAcr::Cem::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::AtmAcr::Cem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:cem" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Cem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cem' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Cem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::AtmAcr::Cem::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::AtmAcr::Cem::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Cem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::AtmAcr::Cem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Interface::AtmAcr::Cem::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    mtu{YType::uint32, "mtu"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    vcid{YType::uint32, "vcid"}
    	,
    backup(std::make_shared<Native::Interface::AtmAcr::Cem::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "cem";
}

Native::Interface::AtmAcr::Cem::Xconnect::~Xconnect()
{
}

bool Native::Interface::AtmAcr::Cem::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| mtu.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| vcid.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::AtmAcr::Cem::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(encapsulation.operation)
	|| is_set(manual.operation)
	|| is_set(mtu.operation)
	|| is_set(pw_class.operation)
	|| is_set(sequencing.operation)
	|| is_set(vcid.operation)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::AtmAcr::Cem::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Cem::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.operation)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.operation)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Cem::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::AtmAcr::Cem::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Cem::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::AtmAcr::Cem::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "manual")
    {
        manual = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmAcr::Cem::Xconnect::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::AtmAcr::Cem::Xconnect::Backup::Delay>())
	,peer(std::make_shared<Native::Interface::AtmAcr::Cem::Xconnect::Backup::Peer>())
{
    delay->parent = this;

    peer->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect";
}

Native::Interface::AtmAcr::Cem::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::AtmAcr::Cem::Xconnect::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::AtmAcr::Cem::Xconnect::Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::AtmAcr::Cem::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Cem::Xconnect::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Cem::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::AtmAcr::Cem::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::AtmAcr::Cem::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Cem::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::AtmAcr::Cem::Xconnect::Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcr::Cem::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    priority{YType::uint8, "priority"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
{
    yang_name = "peer"; yang_parent_name = "backup";
}

Native::Interface::AtmAcr::Cem::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::AtmAcr::Cem::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| priority.is_set
	|| pw_class.is_set
	|| vcid.is_set;
}

bool Native::Interface::AtmAcr::Cem::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_router_ip_addr.operation)
	|| is_set(priority.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation);
}

std::string Native::Interface::AtmAcr::Cem::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Cem::Xconnect::Backup::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.operation)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Cem::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Cem::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcr::Cem::Xconnect::Backup::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmAcr::Cem::Xconnect::Backup::Delay::Delay()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "delay"; yang_parent_name = "backup";
}

Native::Interface::AtmAcr::Cem::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::AtmAcr::Cem::Xconnect::Backup::Delay::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Interface::AtmAcr::Cem::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Native::Interface::AtmAcr::Cem::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Cem::Xconnect::Backup::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Cem::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Cem::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcr::Cem::Xconnect::Backup::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Interface::AtmAcr::Cem::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "cem";
}

Native::Interface::AtmAcr::Cem::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::AtmAcr::Cem::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::AtmAcr::Cem::XconnectPwClass::has_operation() const
{
    return is_set(operation)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::AtmAcr::Cem::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Cem::XconnectPwClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectPwClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Cem::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Cem::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::AtmAcr::Cem::XconnectPwClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
    	,
    udp(std::make_shared<Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class";
}

Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| pw_class.is_set
	|| vcid.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect";
}

Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(operation)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{
    yang_name = "port"; yang_parent_name = "udp";
}

Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(local.operation)
	|| is_set(remote.operation);
}

std::string Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.operation)) leaf_name_data.push_back(remote.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "remote")
    {
        remote = value;
    }
}

Native::Interface::AtmAcr::Pvc::Pvc()
    :
    local_vpi_vci{YType::str, "local-vpi-vci"},
    l2transport{YType::empty, "l2transport"},
    remote_vpi_vci{YType::str, "remote-vpi-vci"},
    ubr{YType::uint32, "ubr"}
    	,
    xconnect(std::make_shared<Native::Interface::AtmAcr::Pvc::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::AtmAcr::Pvc::XconnectPwClass>())
{
    xconnect->parent = this;

    xconnect_pw_class->parent = this;

    yang_name = "pvc"; yang_parent_name = "ATM-ACR";
}

Native::Interface::AtmAcr::Pvc::~Pvc()
{
}

bool Native::Interface::AtmAcr::Pvc::has_data() const
{
    return local_vpi_vci.is_set
	|| l2transport.is_set
	|| remote_vpi_vci.is_set
	|| ubr.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::AtmAcr::Pvc::has_operation() const
{
    return is_set(operation)
	|| is_set(local_vpi_vci.operation)
	|| is_set(l2transport.operation)
	|| is_set(remote_vpi_vci.operation)
	|| is_set(ubr.operation)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::AtmAcr::Pvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:pvc" <<"[local-vpi-vci='" <<local_vpi_vci <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Pvc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pvc' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_vpi_vci.is_set || is_set(local_vpi_vci.operation)) leaf_name_data.push_back(local_vpi_vci.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.operation)) leaf_name_data.push_back(l2transport.get_name_leafdata());
    if (remote_vpi_vci.is_set || is_set(remote_vpi_vci.operation)) leaf_name_data.push_back(remote_vpi_vci.get_name_leafdata());
    if (ubr.is_set || is_set(ubr.operation)) leaf_name_data.push_back(ubr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Pvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::AtmAcr::Pvc::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::AtmAcr::Pvc::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Pvc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::AtmAcr::Pvc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-vpi-vci")
    {
        local_vpi_vci = value;
    }
    if(value_path == "l2transport")
    {
        l2transport = value;
    }
    if(value_path == "remote-vpi-vci")
    {
        remote_vpi_vci = value;
    }
    if(value_path == "ubr")
    {
        ubr = value;
    }
}

Native::Interface::AtmAcr::Pvc::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    mtu{YType::uint32, "mtu"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    vcid{YType::uint32, "vcid"}
    	,
    backup(std::make_shared<Native::Interface::AtmAcr::Pvc::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvc";
}

Native::Interface::AtmAcr::Pvc::Xconnect::~Xconnect()
{
}

bool Native::Interface::AtmAcr::Pvc::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| mtu.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| vcid.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::AtmAcr::Pvc::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(encapsulation.operation)
	|| is_set(manual.operation)
	|| is_set(mtu.operation)
	|| is_set(pw_class.operation)
	|| is_set(sequencing.operation)
	|| is_set(vcid.operation)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::AtmAcr::Pvc::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Pvc::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.operation)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.operation)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Pvc::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::AtmAcr::Pvc::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Pvc::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::AtmAcr::Pvc::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "manual")
    {
        manual = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Delay>())
	,peer(std::make_shared<Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Peer>())
{
    delay->parent = this;

    peer->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect";
}

Native::Interface::AtmAcr::Pvc::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::AtmAcr::Pvc::Xconnect::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::AtmAcr::Pvc::Xconnect::Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::AtmAcr::Pvc::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Pvc::Xconnect::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Pvc::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Pvc::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::AtmAcr::Pvc::Xconnect::Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    priority{YType::uint8, "priority"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
{
    yang_name = "peer"; yang_parent_name = "backup";
}

Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| priority.is_set
	|| pw_class.is_set
	|| vcid.is_set;
}

bool Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_router_ip_addr.operation)
	|| is_set(priority.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation);
}

std::string Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.operation)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Delay::Delay()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "delay"; yang_parent_name = "backup";
}

Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Delay::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Interface::AtmAcr::Pvc::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvc";
}

Native::Interface::AtmAcr::Pvc::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::AtmAcr::Pvc::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::AtmAcr::Pvc::XconnectPwClass::has_operation() const
{
    return is_set(operation)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::AtmAcr::Pvc::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Pvc::XconnectPwClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectPwClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Pvc::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Pvc::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::AtmAcr::Pvc::XconnectPwClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
    	,
    udp(std::make_shared<Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class";
}

Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| pw_class.is_set
	|| vcid.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect";
}

Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(operation)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{
    yang_name = "port"; yang_parent_name = "udp";
}

Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(local.operation)
	|| is_set(remote.operation);
}

std::string Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.operation)) leaf_name_data.push_back(remote.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "remote")
    {
        remote = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Interface::AtmAcrsubinterface::has_data() const
{
    for (std::size_t index=0; index<atm_acr.size(); index++)
    {
        if(atm_acr[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::AtmAcrsubinterface::has_operation() const
{
    for (std::size_t index=0; index<atm_acr.size(); index++)
    {
        if(atm_acr[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACR")
    {
        for(auto const & c : atm_acr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr>();
        c->parent = this;
        atm_acr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atm_acr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcrsubinterface::AtmAcr::AtmAcr()
    :
    name{YType::str, "name"},
    load_interval{YType::uint32, "Cisco-IOS-XE-atm:load-interval"}
    	,
    atm(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm>())
	,ip(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Ip>())
{
    atm->parent = this;

    ip->parent = this;

    yang_name = "ATM-ACR"; yang_parent_name = "ATM-ACRsubinterface";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::~AtmAcr()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::has_data() const
{
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_data())
            return true;
    }
    return name.is_set
	|| load_interval.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::has_operation() const
{
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(load_interval.operation)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACR" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/interface/ATM-ACRsubinterface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "cem")
    {
        for(auto const & c : cem)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Cem>();
        c->parent = this;
        cem.push_back(c);
        return c;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "pvc")
    {
        for(auto const & c : pvc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc>();
        c->parent = this;
        pvc.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    for (auto const & c : cem)
    {
        children[c->get_segment_path()] = c;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    for (auto const & c : pvc)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Ip::Ip()
    :
    address{YType::str, "address"}
{
    yang_name = "ip"; yang_parent_name = "ATM-ACR";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Ip::~Ip()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Ip::has_data() const
{
    return address.is_set;
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Atm()
    :
    bandwidth{YType::enumeration, "bandwidth"},
    enable_ilmi_trap{YType::boolean, "enable-ilmi-trap"}
{
    yang_name = "atm"; yang_parent_name = "ATM-ACR";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::~Atm()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::has_data() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_data())
            return true;
    }
    return bandwidth.is_set
	|| enable_ilmi_trap.is_set;
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::has_operation() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(enable_ilmi_trap.operation);
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:atm";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (enable_ilmi_trap.is_set || is_set(enable_ilmi_trap.operation)) leaf_name_data.push_back(enable_ilmi_trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvp")
    {
        for(auto const & c : pvp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp>();
        c->parent = this;
        pvp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pvp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "enable-ilmi-trap")
    {
        enable_ilmi_trap = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Pvp()
    :
    pvp_number{YType::uint16, "pvp-number"},
    l2transport{YType::empty, "l2transport"}
    	,
    xconnect(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass>())
{
    xconnect->parent = this;

    xconnect_pw_class->parent = this;

    yang_name = "pvp"; yang_parent_name = "atm";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::~Pvp()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::has_data() const
{
    return pvp_number.is_set
	|| l2transport.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::has_operation() const
{
    return is_set(operation)
	|| is_set(pvp_number.operation)
	|| is_set(l2transport.operation)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvp" <<"[pvp-number='" <<pvp_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pvp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pvp_number.is_set || is_set(pvp_number.operation)) leaf_name_data.push_back(pvp_number.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.operation)) leaf_name_data.push_back(l2transport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pvp-number")
    {
        pvp_number = value;
    }
    if(value_path == "l2transport")
    {
        l2transport = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    mtu{YType::uint32, "mtu"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    vcid{YType::uint32, "vcid"}
    	,
    backup(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvp";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::~Xconnect()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| mtu.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| vcid.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(encapsulation.operation)
	|| is_set(manual.operation)
	|| is_set(mtu.operation)
	|| is_set(pw_class.operation)
	|| is_set(sequencing.operation)
	|| is_set(vcid.operation)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.operation)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.operation)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "manual")
    {
        manual = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay>())
	,peer(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer>())
{
    delay->parent = this;

    peer->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    priority{YType::uint8, "priority"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
{
    yang_name = "peer"; yang_parent_name = "backup";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| priority.is_set
	|| pw_class.is_set
	|| vcid.is_set;
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_router_ip_addr.operation)
	|| is_set(priority.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation);
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.operation)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay::Delay()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "delay"; yang_parent_name = "backup";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvp";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::has_operation() const
{
    return is_set(operation)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectPwClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
    	,
    udp(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| pw_class.is_set
	|| vcid.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(operation)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{
    yang_name = "port"; yang_parent_name = "udp";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(local.operation)
	|| is_set(remote.operation);
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.operation)) leaf_name_data.push_back(remote.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "remote")
    {
        remote = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Cem()
    :
    number{YType::uint32, "number"}
    	,
    xconnect(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass>())
{
    xconnect->parent = this;

    xconnect_pw_class->parent = this;

    yang_name = "cem"; yang_parent_name = "ATM-ACR";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::~Cem()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::has_data() const
{
    return number.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:cem" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cem' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    mtu{YType::uint32, "mtu"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    vcid{YType::uint32, "vcid"}
    	,
    backup(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "cem";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::~Xconnect()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| mtu.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| vcid.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(encapsulation.operation)
	|| is_set(manual.operation)
	|| is_set(mtu.operation)
	|| is_set(pw_class.operation)
	|| is_set(sequencing.operation)
	|| is_set(vcid.operation)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.operation)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.operation)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "manual")
    {
        manual = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Delay>())
	,peer(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Peer>())
{
    delay->parent = this;

    peer->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    priority{YType::uint8, "priority"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
{
    yang_name = "peer"; yang_parent_name = "backup";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| priority.is_set
	|| pw_class.is_set
	|| vcid.is_set;
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_router_ip_addr.operation)
	|| is_set(priority.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation);
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.operation)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Delay::Delay()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "delay"; yang_parent_name = "backup";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Delay::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "cem";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::has_operation() const
{
    return is_set(operation)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectPwClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
    	,
    udp(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| pw_class.is_set
	|| vcid.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(operation)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{
    yang_name = "port"; yang_parent_name = "udp";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(local.operation)
	|| is_set(remote.operation);
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.operation)) leaf_name_data.push_back(remote.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "remote")
    {
        remote = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Pvc()
    :
    local_vpi_vci{YType::str, "local-vpi-vci"},
    l2transport{YType::empty, "l2transport"},
    remote_vpi_vci{YType::str, "remote-vpi-vci"},
    ubr{YType::uint32, "ubr"}
    	,
    xconnect(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass>())
{
    xconnect->parent = this;

    xconnect_pw_class->parent = this;

    yang_name = "pvc"; yang_parent_name = "ATM-ACR";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::~Pvc()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::has_data() const
{
    return local_vpi_vci.is_set
	|| l2transport.is_set
	|| remote_vpi_vci.is_set
	|| ubr.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::has_operation() const
{
    return is_set(operation)
	|| is_set(local_vpi_vci.operation)
	|| is_set(l2transport.operation)
	|| is_set(remote_vpi_vci.operation)
	|| is_set(ubr.operation)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:pvc" <<"[local-vpi-vci='" <<local_vpi_vci <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pvc' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_vpi_vci.is_set || is_set(local_vpi_vci.operation)) leaf_name_data.push_back(local_vpi_vci.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.operation)) leaf_name_data.push_back(l2transport.get_name_leafdata());
    if (remote_vpi_vci.is_set || is_set(remote_vpi_vci.operation)) leaf_name_data.push_back(remote_vpi_vci.get_name_leafdata());
    if (ubr.is_set || is_set(ubr.operation)) leaf_name_data.push_back(ubr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-vpi-vci")
    {
        local_vpi_vci = value;
    }
    if(value_path == "l2transport")
    {
        l2transport = value;
    }
    if(value_path == "remote-vpi-vci")
    {
        remote_vpi_vci = value;
    }
    if(value_path == "ubr")
    {
        ubr = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    mtu{YType::uint32, "mtu"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    vcid{YType::uint32, "vcid"}
    	,
    backup(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvc";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::~Xconnect()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| mtu.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| vcid.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(encapsulation.operation)
	|| is_set(manual.operation)
	|| is_set(mtu.operation)
	|| is_set(pw_class.operation)
	|| is_set(sequencing.operation)
	|| is_set(vcid.operation)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.operation)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.operation)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "manual")
    {
        manual = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Delay>())
	,peer(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Peer>())
{
    delay->parent = this;

    peer->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    priority{YType::uint8, "priority"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
{
    yang_name = "peer"; yang_parent_name = "backup";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| priority.is_set
	|| pw_class.is_set
	|| vcid.is_set;
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_router_ip_addr.operation)
	|| is_set(priority.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation);
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.operation)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Delay::Delay()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "delay"; yang_parent_name = "backup";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Delay::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvc";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::has_operation() const
{
    return is_set(operation)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectPwClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
    	,
    udp(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| pw_class.is_set
	|| vcid.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(pw_class.operation)
	|| is_set(vcid.operation)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.operation)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(operation)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{
    yang_name = "port"; yang_parent_name = "udp";
}

Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(local.operation)
	|| is_set(remote.operation);
}

std::string Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.operation)) leaf_name_data.push_back(remote.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "remote")
    {
        remote = value;
    }
}

Native::Interface::Bdi::Bdi()
    :
    name{YType::str, "name"},
    delay{YType::uint32, "delay"},
    description{YType::str, "description"},
    if_state{YType::enumeration, "if-state"},
    keepalive{YType::boolean, "keepalive"},
    load_interval{YType::uint16, "load-interval"},
    max_reserved_bandwidth{YType::uint8, "max-reserved-bandwidth"},
    mtu{YType::uint16, "mtu"},
    service_insertion{YType::enumeration, "service-insertion"},
    shutdown{YType::empty, "shutdown"}
    	,
    access_session(std::make_shared<Native::Interface::Bdi::AccessSession>())
	,arp(std::make_shared<Native::Interface::Bdi::Arp>())
	,backup(std::make_shared<Native::Interface::Bdi::Backup>())
	,bandwidth(std::make_shared<Native::Interface::Bdi::Bandwidth>())
	,bfd(std::make_shared<Native::Interface::Bdi::Bfd>())
	,cemoudp(std::make_shared<Native::Interface::Bdi::Cemoudp>())
	,cws_tunnel(std::make_shared<Native::Interface::Bdi::CwsTunnel>())
	,dampening(nullptr) // presence node
	,domain(std::make_shared<Native::Interface::Bdi::Domain>())
	,encapsulation(std::make_shared<Native::Interface::Bdi::Encapsulation>())
	,fair_queue(std::make_shared<Native::Interface::Bdi::FairQueue>())
	,fair_queue_conf(std::make_shared<Native::Interface::Bdi::FairQueueConf>())
	,flowcontrol(std::make_shared<Native::Interface::Bdi::Flowcontrol>())
	,hold_queue(std::make_shared<Native::Interface::Bdi::HoldQueue>())
	,interface_qos(std::make_shared<Native::Interface::Bdi::Interface_Qos>())
	,ip(std::make_shared<Native::Interface::Bdi::Ip>())
	,ip_vrf(std::make_shared<Native::Interface::Bdi::IpVrf>())
	,ipv6(std::make_shared<Native::Interface::Bdi::Ipv6>())
	,isis(std::make_shared<Native::Interface::Bdi::Isis>())
	,keepalive_settings(std::make_shared<Native::Interface::Bdi::KeepaliveSettings>())
	,l2protocol_tunnel(nullptr) // presence node
	,logging(std::make_shared<Native::Interface::Bdi::Logging>())
	,mdix(std::make_shared<Native::Interface::Bdi::Mdix>())
	,mop(std::make_shared<Native::Interface::Bdi::Mop>())
	,mpls(std::make_shared<Native::Interface::Bdi::Mpls>())
	,peer(std::make_shared<Native::Interface::Bdi::Peer>())
	,pm_path(std::make_shared<Native::Interface::Bdi::PmPath>())
	,priority_queue(std::make_shared<Native::Interface::Bdi::PriorityQueue>())
	,rcv_queue(std::make_shared<Native::Interface::Bdi::RcvQueue>())
	,service_policy(std::make_shared<Native::Interface::Bdi::ServicePolicy>())
	,standby(std::make_shared<Native::Interface::Bdi::Standby>())
	,storm_control(std::make_shared<Native::Interface::Bdi::StormControl>())
	,switchport(std::make_shared<Native::Interface::Bdi::Switchport>())
	,switchport_conf(std::make_shared<Native::Interface::Bdi::SwitchportConf>())
	,trust(std::make_shared<Native::Interface::Bdi::Trust>())
	,utd(std::make_shared<Native::Interface::Bdi::Utd>())
	,vrf(std::make_shared<Native::Interface::Bdi::Vrf>())
{
    access_session->parent = this;

    arp->parent = this;

    backup->parent = this;

    bandwidth->parent = this;

    bfd->parent = this;

    cemoudp->parent = this;

    cws_tunnel->parent = this;

    domain->parent = this;

    encapsulation->parent = this;

    fair_queue->parent = this;

    fair_queue_conf->parent = this;

    flowcontrol->parent = this;

    hold_queue->parent = this;

    interface_qos->parent = this;

    ip->parent = this;

    ip_vrf->parent = this;

    ipv6->parent = this;

    isis->parent = this;

    keepalive_settings->parent = this;

    logging->parent = this;

    mdix->parent = this;

    mop->parent = this;

    mpls->parent = this;

    peer->parent = this;

    pm_path->parent = this;

    priority_queue->parent = this;

    rcv_queue->parent = this;

    service_policy->parent = this;

    standby->parent = this;

    storm_control->parent = this;

    switchport->parent = this;

    switchport_conf->parent = this;

    trust->parent = this;

    utd->parent = this;

    vrf->parent = this;

    yang_name = "BDI"; yang_parent_name = "interface";
}

Native::Interface::Bdi::~Bdi()
{
}

bool Native::Interface::Bdi::has_data() const
{
    return name.is_set
	|| delay.is_set
	|| description.is_set
	|| if_state.is_set
	|| keepalive.is_set
	|| load_interval.is_set
	|| max_reserved_bandwidth.is_set
	|| mtu.is_set
	|| service_insertion.is_set
	|| shutdown.is_set
	|| (access_session !=  nullptr && access_session->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cemoudp !=  nullptr && cemoudp->has_data())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (fair_queue !=  nullptr && fair_queue->has_data())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (hold_queue !=  nullptr && hold_queue->has_data())
	|| (interface_qos !=  nullptr && interface_qos->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ip_vrf !=  nullptr && ip_vrf->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_data())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (mdix !=  nullptr && mdix->has_data())
	|| (mop !=  nullptr && mop->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (pm_path !=  nullptr && pm_path->has_data())
	|| (priority_queue !=  nullptr && priority_queue->has_data())
	|| (rcv_queue !=  nullptr && rcv_queue->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (standby !=  nullptr && standby->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (switchport_conf !=  nullptr && switchport_conf->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (utd !=  nullptr && utd->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::Bdi::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(delay.operation)
	|| is_set(description.operation)
	|| is_set(if_state.operation)
	|| is_set(keepalive.operation)
	|| is_set(load_interval.operation)
	|| is_set(max_reserved_bandwidth.operation)
	|| is_set(mtu.operation)
	|| is_set(service_insertion.operation)
	|| is_set(shutdown.operation)
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cemoudp !=  nullptr && cemoudp->has_operation())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (fair_queue !=  nullptr && fair_queue->has_operation())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (hold_queue !=  nullptr && hold_queue->has_operation())
	|| (interface_qos !=  nullptr && interface_qos->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ip_vrf !=  nullptr && ip_vrf->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_operation())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (mdix !=  nullptr && mdix->has_operation())
	|| (mop !=  nullptr && mop->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (pm_path !=  nullptr && pm_path->has_operation())
	|| (priority_queue !=  nullptr && priority_queue->has_operation())
	|| (rcv_queue !=  nullptr && rcv_queue->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (standby !=  nullptr && standby->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (switchport_conf !=  nullptr && switchport_conf->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (utd !=  nullptr && utd->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::Bdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BDI" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Bdi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (if_state.is_set || is_set(if_state.operation)) leaf_name_data.push_back(if_state.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.operation)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (max_reserved_bandwidth.is_set || is_set(max_reserved_bandwidth.operation)) leaf_name_data.push_back(max_reserved_bandwidth.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (service_insertion.is_set || is_set(service_insertion.operation)) leaf_name_data.push_back(service_insertion.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Bdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::Interface::Bdi::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::Bdi::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::Bdi::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::Bdi::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Bdi::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cemoudp")
    {
        if(cemoudp == nullptr)
        {
            cemoudp = std::make_shared<Native::Interface::Bdi::Cemoudp>();
        }
        return cemoudp;
    }

    if(child_yang_name == "cws-tunnel")
    {
        if(cws_tunnel == nullptr)
        {
            cws_tunnel = std::make_shared<Native::Interface::Bdi::CwsTunnel>();
        }
        return cws_tunnel;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Interface::Bdi::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Interface::Bdi::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::Bdi::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Interface::Bdi::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "fair-queue-conf")
    {
        if(fair_queue_conf == nullptr)
        {
            fair_queue_conf = std::make_shared<Native::Interface::Bdi::FairQueueConf>();
        }
        return fair_queue_conf;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Interface::Bdi::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "hold-queue")
    {
        if(hold_queue == nullptr)
        {
            hold_queue = std::make_shared<Native::Interface::Bdi::HoldQueue>();
        }
        return hold_queue;
    }

    if(child_yang_name == "interface_qos")
    {
        if(interface_qos == nullptr)
        {
            interface_qos = std::make_shared<Native::Interface::Bdi::Interface_Qos>();
        }
        return interface_qos;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Bdi::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::Bdi::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Bdi::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::Bdi::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::Bdi::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::Interface::Bdi::L2ProtocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Interface::Bdi::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mdix")
    {
        if(mdix == nullptr)
        {
            mdix = std::make_shared<Native::Interface::Bdi::Mdix>();
        }
        return mdix;
    }

    if(child_yang_name == "mop")
    {
        if(mop == nullptr)
        {
            mop = std::make_shared<Native::Interface::Bdi::Mop>();
        }
        return mop;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::Bdi::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::Bdi::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pm-path")
    {
        if(pm_path == nullptr)
        {
            pm_path = std::make_shared<Native::Interface::Bdi::PmPath>();
        }
        return pm_path;
    }

    if(child_yang_name == "priority-queue")
    {
        if(priority_queue == nullptr)
        {
            priority_queue = std::make_shared<Native::Interface::Bdi::PriorityQueue>();
        }
        return priority_queue;
    }

    if(child_yang_name == "rcv-queue")
    {
        if(rcv_queue == nullptr)
        {
            rcv_queue = std::make_shared<Native::Interface::Bdi::RcvQueue>();
        }
        return rcv_queue;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::Bdi::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Interface::Bdi::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Interface::Bdi::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Interface::Bdi::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "switchport-conf")
    {
        if(switchport_conf == nullptr)
        {
            switchport_conf = std::make_shared<Native::Interface::Bdi::SwitchportConf>();
        }
        return switchport_conf;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::Bdi::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::Interface::Bdi::Utd>();
        }
        return utd;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Bdi::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Bdi::get_children() const
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

    if(cemoudp != nullptr)
    {
        children["cemoudp"] = cemoudp;
    }

    if(cws_tunnel != nullptr)
    {
        children["cws-tunnel"] = cws_tunnel;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
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

    if(hold_queue != nullptr)
    {
        children["hold-queue"] = hold_queue;
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

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(mdix != nullptr)
    {
        children["mdix"] = mdix;
    }

    if(mop != nullptr)
    {
        children["mop"] = mop;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(pm_path != nullptr)
    {
        children["pm-path"] = pm_path;
    }

    if(priority_queue != nullptr)
    {
        children["priority-queue"] = priority_queue;
    }

    if(rcv_queue != nullptr)
    {
        children["rcv-queue"] = rcv_queue;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    if(switchport_conf != nullptr)
    {
        children["switchport-conf"] = switchport_conf;
    }

    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    if(utd != nullptr)
    {
        children["utd"] = utd;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Interface::Bdi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "if-state")
    {
        if_state = value;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "service-insertion")
    {
        service_insertion = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Interface::Bdi::SwitchportConf::SwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{
    yang_name = "switchport-conf"; yang_parent_name = "BDI";
}

Native::Interface::Bdi::SwitchportConf::~SwitchportConf()
{
}

bool Native::Interface::Bdi::SwitchportConf::has_data() const
{
    return switchport.is_set;
}

bool Native::Interface::Bdi::SwitchportConf::has_operation() const
{
    return is_set(operation)
	|| is_set(switchport.operation);
}

std::string Native::Interface::Bdi::SwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport-conf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Bdi::SwitchportConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SwitchportConf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.operation)) leaf_name_data.push_back(switchport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Bdi::SwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Bdi::SwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Bdi::SwitchportConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switchport")
    {
        switchport = value;
    }
}

Native::Interface::Bdi::Switchport::Switchport()
{
    yang_name = "switchport"; yang_parent_name = "BDI";
}

Native::Interface::Bdi::Switchport::~Switchport()
{
}

bool Native::Interface::Bdi::Switchport::has_data() const
{
    return false;
}

bool Native::Interface::Bdi::Switchport::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Bdi::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::Interface::Bdi::Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Switchport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Bdi::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Bdi::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Bdi::Switchport::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Bdi::Arp::Arp()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "arp"; yang_parent_name = "BDI";
}

Native::Interface::Bdi::Arp::~Arp()
{
}

bool Native::Interface::Bdi::Arp::has_data() const
{
    return timeout.is_set;
}

bool Native::Interface::Bdi::Arp::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::Bdi::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Bdi::Arp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Arp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Bdi::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Bdi::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Bdi::Arp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::Bdi::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::Bdi::Backup::Delay>())
	,interface(std::make_shared<Native::Interface::Bdi::Backup::Interface_>())
	,load(std::make_shared<Native::Interface::Bdi::Backup::Load>())
{
    delay->parent = this;

    interface->parent = this;

    load->parent = this;

    yang_name = "backup"; yang_parent_name = "BDI";
}

Native::Interface::Bdi::Backup::~Backup()
{
}

bool Native::Interface::Bdi::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::Bdi::Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::Bdi::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::Bdi::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Bdi::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Bdi::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::Bdi::Backup::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::Bdi::Backup::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Bdi::Backup::get_children() const
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

void Native::Interface::Bdi::Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Bdi::Backup::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{
    yang_name = "delay"; yang_parent_name = "backup";
}

Native::Interface::Bdi::Backup::Delay::~Delay()
{
}

bool Native::Interface::Bdi::Backup::Delay::has_data() const
{
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::Bdi::Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(failure.operation)
	|| is_set(secondary_disable.operation);
}

std::string Native::Interface::Bdi::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Bdi::Backup::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.operation)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (secondary_disable.is_set || is_set(secondary_disable.operation)) leaf_name_data.push_back(secondary_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Bdi::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Bdi::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Bdi::Backup::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "failure")
    {
        failure = value;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable = value;
    }
}

Native::Interface::Bdi::Backup::Interface_::Interface_()
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
    lisp{YType::uint16, "LISP"},
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
    atm_acrsubinterface(std::make_shared<Native::Interface::Bdi::Backup::Interface_::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Interface::Bdi::Backup::Interface_::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::Bdi::Backup::Interface_::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::Bdi::Backup::Interface_::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backup";
}

Native::Interface::Bdi::Backup::Interface_::~Interface_()
{
}

bool Native::Interface::Bdi::Backup::Interface_::has_data() const
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

bool Native::Interface::Bdi::Backup::Interface_::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Interface::Bdi::Backup::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Bdi::Backup::Interface_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Bdi::Backup::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::Bdi::Backup::Interface_::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::Bdi::Backup::Interface_::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::Bdi::Backup::Interface_::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::Bdi::Backup::Interface_::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Bdi::Backup::Interface_::get_children() const
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

void Native::Interface::Bdi::Backup::Interface_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Interface::Bdi::Backup::Interface_::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Bdi::Backup::Interface_::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Interface::Bdi::Backup::Interface_::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Interface::Bdi::Backup::Interface_::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Interface::Bdi::Backup::Interface_::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Bdi::Backup::Interface_::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Bdi::Backup::Interface_::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Bdi::Backup::Interface_::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Bdi::Backup::Interface_::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Interface::Bdi::Backup::Interface_::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Interface::Bdi::Backup::Interface_::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Interface::Bdi::Backup::Interface_::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Interface::Bdi::Backup::Interface_::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Interface::Bdi::Backup::Interface_::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Bdi::Backup::Interface_::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Bdi::Backup::Interface_::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Bdi::Backup::Interface_::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Bdi::Backup::Interface_::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Interface::Bdi::Backup::Interface_::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Bdi::Backup::Interface_::LispSubinterface::~LispSubinterface()
{
}

bool Native::Interface::Bdi::Backup::Interface_::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Interface::Bdi::Backup::Interface_::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Interface::Bdi::Backup::Interface_::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Bdi::Backup::Interface_::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Bdi::Backup::Interface_::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Bdi::Backup::Interface_::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Bdi::Backup::Interface_::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Interface::Bdi::Backup::Interface_::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Bdi::Backup::Interface_::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::Bdi::Backup::Interface_::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Interface::Bdi::Backup::Interface_::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Interface::Bdi::Backup::Interface_::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Bdi::Backup::Interface_::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Bdi::Backup::Interface_::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Bdi::Backup::Interface_::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Bdi::Backup::Interface_::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Interface::Bdi::Backup::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{
    yang_name = "load"; yang_parent_name = "backup";
}

Native::Interface::Bdi::Backup::Load::~Load()
{
}

bool Native::Interface::Bdi::Backup::Load::has_data() const
{
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::Bdi::Backup::Load::has_operation() const
{
    return is_set(operation)
	|| is_set(kickin.operation)
	|| is_set(kickout.operation);
}

std::string Native::Interface::Bdi::Backup::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";

    return path_buffer.str();

}

const EntityPath Native::Interface::Bdi::Backup::Load::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Load' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kickin.is_set || is_set(kickin.operation)) leaf_name_data.push_back(kickin.get_name_leafdata());
    if (kickout.is_set || is_set(kickout.operation)) leaf_name_data.push_back(kickout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Bdi::Backup::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Bdi::Backup::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Bdi::Backup::Load::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "kickin")
    {
        kickin = value;
    }
    if(value_path == "kickout")
    {
        kickout = value;
    }
}

Native::Interface::Bdi::Cemoudp::Cemoudp()
    :
    reserve(std::make_shared<Native::Interface::Bdi::Cemoudp::Reserve>())
{
    reserve->parent = this;

    yang_name = "cemoudp"; yang_parent_name = "BDI";
}

Native::Interface::Bdi::Cemoudp::~Cemoudp()
{
}

bool Native::Interface::Bdi::Cemoudp::has_data() const
{
    return (reserve !=  nullptr && reserve->has_data());
}

bool Native::Interface::Bdi::Cemoudp::has_operation() const
{
    return is_set(operation)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string Native::Interface::Bdi::Cemoudp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cemoudp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Bdi::Cemoudp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cemoudp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Bdi::Cemoudp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Interface::Bdi::Cemoudp::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Bdi::Cemoudp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reserve != nullptr)
    {
        children["reserve"] = reserve;
    }

    return children;
}

void Native::Interface::Bdi::Cemoudp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Bdi::Cemoudp::Reserve::Reserve()
    :
    acr{YType::uint8, "acr"}
{
    yang_name = "reserve"; yang_parent_name = "cemoudp";
}

Native::Interface::Bdi::Cemoudp::Reserve::~Reserve()
{
}

bool Native::Interface::Bdi::Cemoudp::Reserve::has_data() const
{
    return acr.is_set;
}

bool Native::Interface::Bdi::Cemoudp::Reserve::has_operation() const
{
    return is_set(operation)
	|| is_set(acr.operation);
}

std::string Native::Interface::Bdi::Cemoudp::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";

    return path_buffer.str();

}

const EntityPath Native::Interface::Bdi::Cemoudp::Reserve::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reserve' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.operation)) leaf_name_data.push_back(acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Bdi::Cemoudp::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Bdi::Cemoudp::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Bdi::Cemoudp::Reserve::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acr")
    {
        acr = value;
    }
}

Native::Interface::Bdi::CwsTunnel::CwsTunnel()
    :
    in{YType::empty, "in"}
    	,
    out(std::make_shared<Native::Interface::Bdi::CwsTunnel::Out>())
{
    out->parent = this;

    yang_name = "cws-tunnel"; yang_parent_name = "BDI";
}

Native::Interface::Bdi::CwsTunnel::~CwsTunnel()
{
}

bool Native::Interface::Bdi::CwsTunnel::has_data() const
{
    return in.is_set
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Bdi::CwsTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Bdi::CwsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cws-tunnel";

    return path_buffer.str();

}

const EntityPath Native::Interface::Bdi::CwsTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CwsTunnel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Bdi::CwsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Bdi::CwsTunnel::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Bdi::CwsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::Bdi::CwsTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
}

Native::Interface::Bdi::CwsTunnel::Out::Out()
    :
    tunnel_number{YType::uint16, "tunnel-number"}
{
    yang_name = "out"; yang_parent_name = "cws-tunnel";
}

Native::Interface::Bdi::CwsTunnel::Out::~Out()
{
}

bool Native::Interface::Bdi::CwsTunnel::Out::has_data() const
{
    return tunnel_number.is_set;
}

bool Native::Interface::Bdi::CwsTunnel::Out::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_number.operation);
}

std::string Native::Interface::Bdi::CwsTunnel::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Interface::Bdi::CwsTunnel::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.operation)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Bdi::CwsTunnel::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Bdi::CwsTunnel::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Bdi::CwsTunnel::Out::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
    }
}

Native::Interface::Bdi::L2ProtocolTunnel::L2ProtocolTunnel()
    :
    cdp{YType::empty, "cdp"},
    stp{YType::empty, "stp"},
    vtp{YType::empty, "vtp"}
    	,
    drop_threshold(std::make_shared<Native::Interface::Bdi::L2ProtocolTunnel::DropThreshold>())
	,shutdown_threshold(std::make_shared<Native::Interface::Bdi::L2ProtocolTunnel::ShutdownThreshold>())
{
    drop_threshold->parent = this;

    shutdown_threshold->parent = this;

    yang_name = "l2protocol-tunnel"; yang_parent_name = "BDI";
}

Native::Interface::Bdi::L2ProtocolTunnel::~L2ProtocolTunnel()
{
}

bool Native::Interface::Bdi::L2ProtocolTunnel::has_data() const
{
    return cdp.is_set
	|| stp.is_set
	|| vtp.is_set
	|| (drop_threshold !=  nullptr && drop_threshold->has_data())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_data());
}

bool Native::Interface::Bdi::L2ProtocolTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(cdp.operation)
	|| is_set(stp.operation)
	|| is_set(vtp.operation)
	|| (drop_threshold !=  nullptr && drop_threshold->has_operation())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_operation());
}

std::string Native::Interface::Bdi::L2ProtocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol-tunnel";

    return path_buffer.str();

}

const EntityPath Native::Interface::Bdi::L2ProtocolTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2ProtocolTunnel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.operation)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.operation)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.operation)) leaf_name_data.push_back(vtp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Bdi::L2ProtocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-threshold")
    {
        if(drop_threshold == nullptr)
        {
            drop_threshold = std::make_shared<Native::Interface::Bdi::L2ProtocolTunnel::DropThreshold>();
        }
        return drop_threshold;
    }

    if(child_yang_name == "shutdown-threshold")
    {
        if(shutdown_threshold == nullptr)
        {
            shutdown_threshold = std::make_shared<Native::Interface::Bdi::L2ProtocolTunnel::ShutdownThreshold>();
        }
        return shutdown_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Bdi::L2ProtocolTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(drop_threshold != nullptr)
    {
        children["drop-threshold"] = drop_threshold;
    }

    if(shutdown_threshold != nullptr)
    {
        children["shutdown-threshold"] = shutdown_threshold;
    }

    return children;
}

void Native::Interface::Bdi::L2ProtocolTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdp")
    {
        cdp = value;
    }
    if(value_path == "stp")
    {
        stp = value;
    }
    if(value_path == "vtp")
    {
        vtp = value;
    }
}

const Enum::YLeaf Native::Interface::Atm::Atm_::BandwidthEnum::dynamic {0, "dynamic"};

const Enum::YLeaf Native::Interface::Atm::Atm_::Pvp::Xconnect::EncapsulationEnum::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::Atm::Atm_::Pvp::Xconnect::EncapsulationEnum::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::Atm::Atm_::Pvp::Xconnect::SequencingEnum::both {0, "both"};
const Enum::YLeaf Native::Interface::Atm::Atm_::Pvp::Xconnect::SequencingEnum::receive {1, "receive"};
const Enum::YLeaf Native::Interface::Atm::Atm_::Pvp::Xconnect::SequencingEnum::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::Atm::Cem::Xconnect::EncapsulationEnum::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::Atm::Cem::Xconnect::EncapsulationEnum::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::Atm::Cem::Xconnect::SequencingEnum::both {0, "both"};
const Enum::YLeaf Native::Interface::Atm::Cem::Xconnect::SequencingEnum::receive {1, "receive"};
const Enum::YLeaf Native::Interface::Atm::Cem::Xconnect::SequencingEnum::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::Atm::Pvc::Xconnect::EncapsulationEnum::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::Atm::Pvc::Xconnect::EncapsulationEnum::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::Atm::Pvc::Xconnect::SequencingEnum::both {0, "both"};
const Enum::YLeaf Native::Interface::Atm::Pvc::Xconnect::SequencingEnum::receive {1, "receive"};
const Enum::YLeaf Native::Interface::Atm::Pvc::Xconnect::SequencingEnum::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::AtmSubinterface::Atm::Atm_::BandwidthEnum::dynamic {0, "dynamic"};

const Enum::YLeaf Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::EncapsulationEnum::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::EncapsulationEnum::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::SequencingEnum::both {0, "both"};
const Enum::YLeaf Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::SequencingEnum::receive {1, "receive"};
const Enum::YLeaf Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::SequencingEnum::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::EncapsulationEnum::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::EncapsulationEnum::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::SequencingEnum::both {0, "both"};
const Enum::YLeaf Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::SequencingEnum::receive {1, "receive"};
const Enum::YLeaf Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::SequencingEnum::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::EncapsulationEnum::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::EncapsulationEnum::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::SequencingEnum::both {0, "both"};
const Enum::YLeaf Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::SequencingEnum::receive {1, "receive"};
const Enum::YLeaf Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::SequencingEnum::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::AtmAcr::Atm::BandwidthEnum::dynamic {0, "dynamic"};

const Enum::YLeaf Native::Interface::AtmAcr::Atm::Pvp::Xconnect::EncapsulationEnum::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::AtmAcr::Atm::Pvp::Xconnect::EncapsulationEnum::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::AtmAcr::Atm::Pvp::Xconnect::SequencingEnum::both {0, "both"};
const Enum::YLeaf Native::Interface::AtmAcr::Atm::Pvp::Xconnect::SequencingEnum::receive {1, "receive"};
const Enum::YLeaf Native::Interface::AtmAcr::Atm::Pvp::Xconnect::SequencingEnum::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::AtmAcr::Cem::Xconnect::EncapsulationEnum::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::AtmAcr::Cem::Xconnect::EncapsulationEnum::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::AtmAcr::Cem::Xconnect::SequencingEnum::both {0, "both"};
const Enum::YLeaf Native::Interface::AtmAcr::Cem::Xconnect::SequencingEnum::receive {1, "receive"};
const Enum::YLeaf Native::Interface::AtmAcr::Cem::Xconnect::SequencingEnum::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::AtmAcr::Pvc::Xconnect::EncapsulationEnum::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::AtmAcr::Pvc::Xconnect::EncapsulationEnum::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::AtmAcr::Pvc::Xconnect::SequencingEnum::both {0, "both"};
const Enum::YLeaf Native::Interface::AtmAcr::Pvc::Xconnect::SequencingEnum::receive {1, "receive"};
const Enum::YLeaf Native::Interface::AtmAcr::Pvc::Xconnect::SequencingEnum::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::BandwidthEnum::dynamic {0, "dynamic"};

const Enum::YLeaf Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::EncapsulationEnum::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::EncapsulationEnum::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::SequencingEnum::both {0, "both"};
const Enum::YLeaf Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::SequencingEnum::receive {1, "receive"};
const Enum::YLeaf Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::SequencingEnum::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::EncapsulationEnum::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::EncapsulationEnum::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::SequencingEnum::both {0, "both"};
const Enum::YLeaf Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::SequencingEnum::receive {1, "receive"};
const Enum::YLeaf Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::SequencingEnum::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::EncapsulationEnum::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::EncapsulationEnum::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::SequencingEnum::both {0, "both"};
const Enum::YLeaf Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::SequencingEnum::receive {1, "receive"};
const Enum::YLeaf Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::SequencingEnum::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::Bdi::IfStateEnum::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::Bdi::ServiceInsertionEnum::waas {0, "waas"};

const Enum::YLeaf Native::Interface::Bdi::Backup::Delay::FailureEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Bdi::Backup::Delay::SecondaryDisableEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Bdi::Backup::Load::KickinEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Bdi::Backup::Load::KickoutEnum::never {0, "never"};


}
}

