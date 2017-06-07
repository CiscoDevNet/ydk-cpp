
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_49.hpp"
#include "Cisco_IOS_XE_native_50.hpp"
#include "Cisco_IOS_XE_native_51.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "cost"; yang_parent_name = "peering";
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::has_operation() const
{
    return is_set(operation)
	|| is_set(percent.operation)
	|| is_set(threshold.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "mtu-ignore"; yang_parent_name = "ipv6";
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MtuIgnore' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::MultiArea()
    :
    cost{YType::uint32, "cost"},
    disable{YType::empty, "disable"},
    id{YType::str, "id"}
{
    yang_name = "multi-area"; yang_parent_name = "ipv6";
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::~MultiArea()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::has_data() const
{
    return cost.is_set
	|| disable.is_set
	|| id.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(disable.operation)
	|| is_set(id.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiArea' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
    	,
    database_filter(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ipv6";
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::~Neighbor()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(cost.operation)
	|| is_set(poll_interval.operation)
	|| is_set(priority.operation)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{
    yang_name = "database-filter"; yang_parent_name = "neighbor";
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
    	,
    point_to_multipoint(nullptr) // presence node
{
    yang_name = "network"; yang_parent_name = "ipv6";
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::~Network()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::has_data() const
{
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast.operation)
	|| is_set(manet.operation)
	|| is_set(non_broadcast.operation)
	|| is_set(point_to_point.operation)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.operation)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.operation)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.operation)) leaf_name_data.push_back(point_to_point.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(point_to_multipoint != nullptr)
    {
        children["point-to-multipoint"] = point_to_multipoint;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "manet")
    {
        manet = value;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
    }
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{
    yang_name = "point-to-multipoint"; yang_parent_name = "network";
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::has_data() const
{
    return non_broadcast.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::has_operation() const
{
    return is_set(operation)
	|| is_set(non_broadcast.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PointToMultipoint' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.operation)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
    }
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "prefix-suppression"; yang_parent_name = "ipv6";
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSuppression' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::Shutdown()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "shutdown"; yang_parent_name = "ipv6";
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::~Shutdown()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shutdown' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
    	,
    ipsec(std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "authentication"; yang_parent_name = "ospfv3";
}

Native::Interface::PortChannel::Ospfv3::Authentication::~Authentication()
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::has_data() const
{
    return key_chain.is_set
	|| null.is_set
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key_chain.operation)
	|| is_set(null.operation)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.operation)) leaf_name_data.push_back(null.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
    if(value_path == "null")
    {
        null = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Ipsec()
    :
    spi{YType::uint64, "spi"}
    	,
    md5(std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5>())
	,sha1(std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1>())
{
    md5->parent = this;

    sha1->parent = this;

    yang_name = "ipsec"; yang_parent_name = "authentication";
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::~Ipsec()
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::has_data() const
{
    return spi.is_set
	|| (md5 !=  nullptr && md5->has_data())
	|| (sha1 !=  nullptr && sha1->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::has_operation() const
{
    return is_set(operation)
	|| is_set(spi.operation)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (sha1 !=  nullptr && sha1->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipsec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "sha1")
    {
        if(sha1 == nullptr)
        {
            sha1 = std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1>();
        }
        return sha1;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    if(sha1 != nullptr)
    {
        children["sha1"] = sha1;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "spi")
    {
        spi = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::Md5()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "ipsec";
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::~Md5()
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::has_operation() const
{
    return is_set(operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Md5' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{
    yang_name = "key-string"; yang_parent_name = "md5";
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::Sha1()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString>())
{
    key_string->parent = this;

    yang_name = "sha1"; yang_parent_name = "ipsec";
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::~Sha1()
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::has_operation() const
{
    return is_set(operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sha1";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sha1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{
    yang_name = "key-string"; yang_parent_name = "sha1";
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "bfd"; yang_parent_name = "ospfv3";
}

Native::Interface::PortChannel::Ospfv3::Bfd::~Bfd()
{
}

bool Native::Interface::PortChannel::Ospfv3::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Cost::Cost()
    :
    value_{YType::uint32, "value"}
    	,
    dynamic(nullptr) // presence node
{
    yang_name = "cost"; yang_parent_name = "ospfv3";
}

Native::Interface::PortChannel::Ospfv3::Cost::~Cost()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::has_data() const
{
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Cost::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Cost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
    	,
    hysteresis(nullptr) // presence node
	,weight(std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost";
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::has_data() const
{
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dynamic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hysteresis != nullptr)
    {
        children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        children["weight"] = weight;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "hysteresis"; yang_parent_name = "dynamic";
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(operation)
	|| is_set(percent.operation)
	|| is_set(threshold.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hysteresis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
	,latency(nullptr) // presence node
	,resources(nullptr) // presence node
	,throughput(nullptr) // presence node
{
    yang_name = "weight"; yang_parent_name = "dynamic";
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::has_data() const
{
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(operation)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weight' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2_factor != nullptr)
    {
        children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        children["throughput"] = throughput;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "L2-factor"; yang_parent_name = "weight";
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Factor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "latency"; yang_parent_name = "weight";
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Latency' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "resources"; yang_parent_name = "weight";
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Resources' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "throughput"; yang_parent_name = "weight";
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Throughput' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::PortChannel::Ospfv3::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{
    yang_name = "database-filter"; yang_parent_name = "ospfv3";
}

Native::Interface::PortChannel::Ospfv3::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Interface::PortChannel::Ospfv3::DemandCircuit::DemandCircuit()
    :
    ignore{YType::empty, "ignore"}
{
    yang_name = "demand-circuit"; yang_parent_name = "ospfv3";
}

Native::Interface::PortChannel::Ospfv3::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::PortChannel::Ospfv3::DemandCircuit::has_data() const
{
    return ignore.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::DemandCircuit::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::DemandCircuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DemandCircuit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::DemandCircuit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Encryption::Encryption()
    :
    null{YType::empty, "null"}
    	,
    ipsec(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "encryption"; yang_parent_name = "ospfv3";
}

Native::Interface::PortChannel::Ospfv3::Encryption::~Encryption()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::has_data() const
{
    return null.is_set
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::has_operation() const
{
    return is_set(operation)
	|| is_set(null.operation)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Encryption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encryption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.operation)) leaf_name_data.push_back(null.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "null")
    {
        null = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec()
    :
    esp{YType::empty, "esp"},
    spi{YType::uint64, "spi"}
    	,
    aes_cbc(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc>())
	,ipsec_3des(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des>())
{
    aes_cbc->parent = this;

    ipsec_3des->parent = this;

    yang_name = "ipsec"; yang_parent_name = "encryption";
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::~Ipsec()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::has_data() const
{
    return esp.is_set
	|| spi.is_set
	|| (aes_cbc !=  nullptr && aes_cbc->has_data())
	|| (ipsec_3des !=  nullptr && ipsec_3des->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::has_operation() const
{
    return is_set(operation)
	|| is_set(esp.operation)
	|| is_set(spi.operation)
	|| (aes_cbc !=  nullptr && aes_cbc->has_operation())
	|| (ipsec_3des !=  nullptr && ipsec_3des->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipsec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esp.is_set || is_set(esp.operation)) leaf_name_data.push_back(esp.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes-cbc")
    {
        if(aes_cbc == nullptr)
        {
            aes_cbc = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc>();
        }
        return aes_cbc;
    }

    if(child_yang_name == "ipsec_3des")
    {
        if(ipsec_3des == nullptr)
        {
            ipsec_3des = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des>();
        }
        return ipsec_3des;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aes_cbc != nullptr)
    {
        children["aes-cbc"] = aes_cbc;
    }

    if(ipsec_3des != nullptr)
    {
        children["ipsec_3des"] = ipsec_3des;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "esp")
    {
        esp = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::Ipsec_3Des()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString>())
{
    key_string->parent = this;

    yang_name = "ipsec_3des"; yang_parent_name = "ipsec";
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::~Ipsec_3Des()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::has_operation() const
{
    return is_set(operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec_3des";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipsec_3Des' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{
    yang_name = "key-string"; yang_parent_name = "ipsec_3des";
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc()
    :
    aes_192(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192>())
	,aes_256(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256>())
	,aes_cbc_128(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128>())
{
    aes_192->parent = this;

    aes_256->parent = this;

    aes_cbc_128->parent = this;

    yang_name = "aes-cbc"; yang_parent_name = "ipsec";
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::~AesCbc()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::has_data() const
{
    return (aes_192 !=  nullptr && aes_192->has_data())
	|| (aes_256 !=  nullptr && aes_256->has_data())
	|| (aes_cbc_128 !=  nullptr && aes_cbc_128->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::has_operation() const
{
    return is_set(operation)
	|| (aes_192 !=  nullptr && aes_192->has_operation())
	|| (aes_256 !=  nullptr && aes_256->has_operation())
	|| (aes_cbc_128 !=  nullptr && aes_cbc_128->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-cbc";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AesCbc' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes-192")
    {
        if(aes_192 == nullptr)
        {
            aes_192 = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192>();
        }
        return aes_192;
    }

    if(child_yang_name == "aes-256")
    {
        if(aes_256 == nullptr)
        {
            aes_256 = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256>();
        }
        return aes_256;
    }

    if(child_yang_name == "aes-cbc-128")
    {
        if(aes_cbc_128 == nullptr)
        {
            aes_cbc_128 = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128>();
        }
        return aes_cbc_128;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aes_192 != nullptr)
    {
        children["aes-192"] = aes_192;
    }

    if(aes_256 != nullptr)
    {
        children["aes-256"] = aes_256;
    }

    if(aes_cbc_128 != nullptr)
    {
        children["aes-cbc-128"] = aes_cbc_128;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::AesCbc128()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-cbc-128"; yang_parent_name = "aes-cbc";
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::~AesCbc128()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::has_operation() const
{
    return is_set(operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-cbc-128";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AesCbc128' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{
    yang_name = "key-string"; yang_parent_name = "aes-cbc-128";
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::Aes192()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-192"; yang_parent_name = "aes-cbc";
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::~Aes192()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::has_operation() const
{
    return is_set(operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-192";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aes192' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{
    yang_name = "key-string"; yang_parent_name = "aes-192";
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::Aes256()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-256"; yang_parent_name = "aes-cbc";
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::~Aes256()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::has_operation() const
{
    return is_set(operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-256";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aes256' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{
    yang_name = "key-string"; yang_parent_name = "aes-256";
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::PortChannel::Ospfv3::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "ospfv3";
}

Native::Interface::PortChannel::Ospfv3::Manet::~Manet()
{
}

bool Native::Interface::PortChannel::Ospfv3::Manet::has_data() const
{
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Manet::has_operation() const
{
    return is_set(operation)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Manet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Manet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::PortChannel::Ospfv3::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peering != nullptr)
    {
        children["peering"] = peering;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Manet::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Ospfv3::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
    	,
    cost(std::make_shared<Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet";
}

Native::Interface::PortChannel::Ospfv3::Manet::Peering::~Peering()
{
}

bool Native::Interface::PortChannel::Ospfv3::Manet::Peering::has_data() const
{
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Manet::Peering::has_operation() const
{
    return is_set(operation)
	|| is_set(link_metrics.operation)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Manet::Peering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peering' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.operation)) leaf_name_data.push_back(link_metrics.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Manet::Peering::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "cost"; yang_parent_name = "peering";
}

Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::has_operation() const
{
    return is_set(operation)
	|| is_set(percent.operation)
	|| is_set(threshold.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::PortChannel::Ospfv3::MultiArea::MultiArea()
    :
    cost{YType::uint32, "cost"},
    id{YType::str, "id"}
{
    yang_name = "multi-area"; yang_parent_name = "ospfv3";
}

Native::Interface::PortChannel::Ospfv3::MultiArea::~MultiArea()
{
}

bool Native::Interface::PortChannel::Ospfv3::MultiArea::has_data() const
{
    return cost.is_set
	|| id.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::MultiArea::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(id.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::MultiArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiArea' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::MultiArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
    	,
    database_filter(std::make_shared<Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ospfv3";
}

Native::Interface::PortChannel::Ospfv3::Neighbor::~Neighbor()
{
}

bool Native::Interface::PortChannel::Ospfv3::Neighbor::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(cost.operation)
	|| is_set(poll_interval.operation)
	|| is_set(priority.operation)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{
    yang_name = "database-filter"; yang_parent_name = "neighbor";
}

Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
    	,
    point_to_multipoint(nullptr) // presence node
{
    yang_name = "network"; yang_parent_name = "ospfv3";
}

Native::Interface::PortChannel::Ospfv3::Network::~Network()
{
}

bool Native::Interface::PortChannel::Ospfv3::Network::has_data() const
{
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast.operation)
	|| is_set(manet.operation)
	|| is_set(non_broadcast.operation)
	|| is_set(point_to_point.operation)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.operation)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.operation)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.operation)) leaf_name_data.push_back(point_to_point.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(point_to_multipoint != nullptr)
    {
        children["point-to-multipoint"] = point_to_multipoint;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "manet")
    {
        manet = value;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
    }
}

Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{
    yang_name = "point-to-multipoint"; yang_parent_name = "network";
}

Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::has_data() const
{
    return non_broadcast.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::has_operation() const
{
    return is_set(operation)
	|| is_set(non_broadcast.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PointToMultipoint' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.operation)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
    }
}

Native::Interface::PortChannel::Ospfv3::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "prefix-suppression"; yang_parent_name = "ospfv3";
}

Native::Interface::PortChannel::Ospfv3::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::PortChannel::Ospfv3::PrefixSuppression::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::PrefixSuppression::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::PortChannel::Ospfv3::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ospfv3::PrefixSuppression::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSuppression' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::PrefixSuppression::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::PortChannel::Authentication::Authentication()
    :
    control_direction{YType::enumeration, "control-direction"},
    fallback{YType::str, "fallback"},
    host_mode{YType::enumeration, "host-mode"},
    open{YType::empty, "open"},
    periodic{YType::empty, "periodic"},
    port_control{YType::enumeration, "port-control"},
    violation{YType::enumeration, "violation"}
    	,
    event(std::make_shared<Native::Interface::PortChannel::Authentication::Event>())
	,order(std::make_shared<Native::Interface::PortChannel::Authentication::Order>())
	,priority(std::make_shared<Native::Interface::PortChannel::Authentication::Priority>())
	,timer(std::make_shared<Native::Interface::PortChannel::Authentication::Timer>())
{
    event->parent = this;

    order->parent = this;

    priority->parent = this;

    timer->parent = this;

    yang_name = "authentication"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Authentication::~Authentication()
{
}

bool Native::Interface::PortChannel::Authentication::has_data() const
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

bool Native::Interface::PortChannel::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(control_direction.operation)
	|| is_set(fallback.operation)
	|| is_set(host_mode.operation)
	|| is_set(open.operation)
	|| is_set(periodic.operation)
	|| is_set(port_control.operation)
	|| is_set(violation.operation)
	|| (event !=  nullptr && event->has_operation())
	|| (order !=  nullptr && order->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_direction.is_set || is_set(control_direction.operation)) leaf_name_data.push_back(control_direction.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.operation)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.operation)) leaf_name_data.push_back(host_mode.get_name_leafdata());
    if (open.is_set || is_set(open.operation)) leaf_name_data.push_back(open.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.operation)) leaf_name_data.push_back(periodic.get_name_leafdata());
    if (port_control.is_set || is_set(port_control.operation)) leaf_name_data.push_back(port_control.get_name_leafdata());
    if (violation.is_set || is_set(violation.operation)) leaf_name_data.push_back(violation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Interface::PortChannel::Authentication::Event>();
        }
        return event;
    }

    if(child_yang_name == "order")
    {
        if(order == nullptr)
        {
            order = std::make_shared<Native::Interface::PortChannel::Authentication::Order>();
        }
        return order;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::PortChannel::Authentication::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Interface::PortChannel::Authentication::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::get_children() const
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

void Native::Interface::PortChannel::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "control-direction")
    {
        control_direction = value;
    }
    if(value_path == "fallback")
    {
        fallback = value;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
    }
    if(value_path == "open")
    {
        open = value;
    }
    if(value_path == "periodic")
    {
        periodic = value;
    }
    if(value_path == "port-control")
    {
        port_control = value;
    }
    if(value_path == "violation")
    {
        violation = value;
    }
}

Native::Interface::PortChannel::Authentication::Event::Event()
    :
    fail(std::make_shared<Native::Interface::PortChannel::Authentication::Event::Fail>())
	,no_response(std::make_shared<Native::Interface::PortChannel::Authentication::Event::NoResponse>())
	,server(std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server>())
{
    fail->parent = this;

    no_response->parent = this;

    server->parent = this;

    yang_name = "event"; yang_parent_name = "authentication";
}

Native::Interface::PortChannel::Authentication::Event::~Event()
{
}

bool Native::Interface::PortChannel::Authentication::Event::has_data() const
{
    return (fail !=  nullptr && fail->has_data())
	|| (no_response !=  nullptr && no_response->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Interface::PortChannel::Authentication::Event::has_operation() const
{
    return is_set(operation)
	|| (fail !=  nullptr && fail->has_operation())
	|| (no_response !=  nullptr && no_response->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Event::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Event' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fail")
    {
        if(fail == nullptr)
        {
            fail = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Fail>();
        }
        return fail;
    }

    if(child_yang_name == "no-response")
    {
        if(no_response == nullptr)
        {
            no_response = std::make_shared<Native::Interface::PortChannel::Authentication::Event::NoResponse>();
        }
        return no_response;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::get_children() const
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

void Native::Interface::PortChannel::Authentication::Event::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Authentication::Event::Server::Server()
    :
    alive(std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Alive>())
	,dead(std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Dead>())
{
    alive->parent = this;

    dead->parent = this;

    yang_name = "server"; yang_parent_name = "event";
}

Native::Interface::PortChannel::Authentication::Event::Server::~Server()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Server::has_data() const
{
    return (alive !=  nullptr && alive->has_data())
	|| (dead !=  nullptr && dead->has_data());
}

bool Native::Interface::PortChannel::Authentication::Event::Server::has_operation() const
{
    return is_set(operation)
	|| (alive !=  nullptr && alive->has_operation())
	|| (dead !=  nullptr && dead->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Event::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Event::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alive")
    {
        if(alive == nullptr)
        {
            alive = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Alive>();
        }
        return alive;
    }

    if(child_yang_name == "dead")
    {
        if(dead == nullptr)
        {
            dead = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Dead>();
        }
        return dead;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Server::get_children() const
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

void Native::Interface::PortChannel::Authentication::Event::Server::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Authentication::Event::Server::Alive::Alive()
    :
    action(std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action>())
{
    action->parent = this;

    yang_name = "alive"; yang_parent_name = "server";
}

Native::Interface::PortChannel::Authentication::Event::Server::Alive::~Alive()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Alive::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Alive::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Event::Server::Alive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alive";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Event::Server::Alive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Alive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Server::Alive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Server::Alive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::PortChannel::Authentication::Event::Server::Alive::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::Action()
    :
    reinitialize{YType::empty, "reinitialize"}
{
    yang_name = "action"; yang_parent_name = "alive";
}

Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::~Action()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::has_data() const
{
    return reinitialize.is_set;
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(reinitialize.operation);
}

std::string Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reinitialize.is_set || is_set(reinitialize.operation)) leaf_name_data.push_back(reinitialize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reinitialize")
    {
        reinitialize = value;
    }
}

Native::Interface::PortChannel::Authentication::Event::Server::Dead::Dead()
    :
    action(std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action>())
{
    action->parent = this;

    yang_name = "dead"; yang_parent_name = "server";
}

Native::Interface::PortChannel::Authentication::Event::Server::Dead::~Dead()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Event::Server::Dead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Event::Server::Dead::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dead' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Server::Dead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Server::Dead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::PortChannel::Authentication::Event::Server::Dead::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Action()
    :
    authorize(nullptr) // presence node
	,reinitialize(std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize>())
{
    reinitialize->parent = this;

    yang_name = "action"; yang_parent_name = "dead";
}

Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::~Action()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::has_data() const
{
    return (authorize !=  nullptr && authorize->has_data())
	|| (reinitialize !=  nullptr && reinitialize->has_data());
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::has_operation() const
{
    return is_set(operation)
	|| (authorize !=  nullptr && authorize->has_operation())
	|| (reinitialize !=  nullptr && reinitialize->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize>();
        }
        return authorize;
    }

    if(child_yang_name == "reinitialize")
    {
        if(reinitialize == nullptr)
        {
            reinitialize = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize>();
        }
        return reinitialize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::get_children() const
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

void Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"},
    voice{YType::empty, "voice"}
{
    yang_name = "authorize"; yang_parent_name = "action";
}

Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::~Authorize()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::has_data() const
{
    return vlan.is_set
	|| voice.is_set;
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation)
	|| is_set(voice.operation);
}

std::string Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorize' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (voice.is_set || is_set(voice.operation)) leaf_name_data.push_back(voice.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
    if(value_path == "voice")
    {
        voice = value;
    }
}

Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::Reinitialize()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "reinitialize"; yang_parent_name = "action";
}

Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::~Reinitialize()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::has_data() const
{
    return vlan.is_set;
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reinitialize";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reinitialize' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::PortChannel::Authentication::Event::Fail::Fail()
    :
    action(std::make_shared<Native::Interface::PortChannel::Authentication::Event::Fail::Action>())
{
    action->parent = this;

    yang_name = "fail"; yang_parent_name = "event";
}

Native::Interface::PortChannel::Authentication::Event::Fail::~Fail()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Fail::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::PortChannel::Authentication::Event::Fail::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Event::Fail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fail";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Event::Fail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fail' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Fail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Fail::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Fail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::PortChannel::Authentication::Event::Fail::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Authentication::Event::Fail::Action::Action()
    :
    authorize(std::make_shared<Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize>())
{
    authorize->parent = this;

    yang_name = "action"; yang_parent_name = "fail";
}

Native::Interface::PortChannel::Authentication::Event::Fail::Action::~Action()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Fail::Action::has_data() const
{
    return (authorize !=  nullptr && authorize->has_data());
}

bool Native::Interface::PortChannel::Authentication::Event::Fail::Action::has_operation() const
{
    return is_set(operation)
	|| (authorize !=  nullptr && authorize->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Event::Fail::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Event::Fail::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Fail::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize>();
        }
        return authorize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Fail::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorize != nullptr)
    {
        children["authorize"] = authorize;
    }

    return children;
}

void Native::Interface::PortChannel::Authentication::Event::Fail::Action::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "authorize"; yang_parent_name = "action";
}

Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::~Authorize()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::has_data() const
{
    return vlan.is_set;
}

bool Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorize' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::PortChannel::Authentication::Event::NoResponse::NoResponse()
    :
    action(std::make_shared<Native::Interface::PortChannel::Authentication::Event::NoResponse::Action>())
{
    action->parent = this;

    yang_name = "no-response"; yang_parent_name = "event";
}

Native::Interface::PortChannel::Authentication::Event::NoResponse::~NoResponse()
{
}

bool Native::Interface::PortChannel::Authentication::Event::NoResponse::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::PortChannel::Authentication::Event::NoResponse::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Event::NoResponse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-response";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Event::NoResponse::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoResponse' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::NoResponse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::PortChannel::Authentication::Event::NoResponse::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::NoResponse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::PortChannel::Authentication::Event::NoResponse::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Action()
    :
    authorize(std::make_shared<Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize>())
{
    authorize->parent = this;

    yang_name = "action"; yang_parent_name = "no-response";
}

Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::~Action()
{
}

bool Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::has_data() const
{
    return (authorize !=  nullptr && authorize->has_data());
}

bool Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::has_operation() const
{
    return is_set(operation)
	|| (authorize !=  nullptr && authorize->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize>();
        }
        return authorize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorize != nullptr)
    {
        children["authorize"] = authorize;
    }

    return children;
}

void Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "authorize"; yang_parent_name = "action";
}

Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::~Authorize()
{
}

bool Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::has_data() const
{
    return vlan.is_set;
}

bool Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorize' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::PortChannel::Authentication::Order::Order()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{
    yang_name = "order"; yang_parent_name = "authentication";
}

Native::Interface::PortChannel::Authentication::Order::~Order()
{
}

bool Native::Interface::PortChannel::Authentication::Order::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Interface::PortChannel::Authentication::Order::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1x.operation)
	|| is_set(mab.operation)
	|| is_set(webauth.operation);
}

std::string Native::Interface::PortChannel::Authentication::Order::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "order";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Order::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Order' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.operation)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.operation)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.operation)) leaf_name_data.push_back(webauth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Order::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Order::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Authentication::Order::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
    }
    if(value_path == "mab")
    {
        mab = value;
    }
    if(value_path == "webauth")
    {
        webauth = value;
    }
}

Native::Interface::PortChannel::Authentication::Priority::Priority()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{
    yang_name = "priority"; yang_parent_name = "authentication";
}

Native::Interface::PortChannel::Authentication::Priority::~Priority()
{
}

bool Native::Interface::PortChannel::Authentication::Priority::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Interface::PortChannel::Authentication::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1x.operation)
	|| is_set(mab.operation)
	|| is_set(webauth.operation);
}

std::string Native::Interface::PortChannel::Authentication::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.operation)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.operation)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.operation)) leaf_name_data.push_back(webauth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Authentication::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
    }
    if(value_path == "mab")
    {
        mab = value;
    }
    if(value_path == "webauth")
    {
        webauth = value;
    }
}

Native::Interface::PortChannel::Authentication::Timer::Timer()
    :
    restart{YType::uint16, "restart"}
    	,
    inactivity(std::make_shared<Native::Interface::PortChannel::Authentication::Timer::Inactivity>())
	,reauthenticate(std::make_shared<Native::Interface::PortChannel::Authentication::Timer::Reauthenticate>())
{
    inactivity->parent = this;

    reauthenticate->parent = this;

    yang_name = "timer"; yang_parent_name = "authentication";
}

Native::Interface::PortChannel::Authentication::Timer::~Timer()
{
}

bool Native::Interface::PortChannel::Authentication::Timer::has_data() const
{
    return restart.is_set
	|| (inactivity !=  nullptr && inactivity->has_data())
	|| (reauthenticate !=  nullptr && reauthenticate->has_data());
}

bool Native::Interface::PortChannel::Authentication::Timer::has_operation() const
{
    return is_set(operation)
	|| is_set(restart.operation)
	|| (inactivity !=  nullptr && inactivity->has_operation())
	|| (reauthenticate !=  nullptr && reauthenticate->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Timer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.operation)) leaf_name_data.push_back(restart.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inactivity")
    {
        if(inactivity == nullptr)
        {
            inactivity = std::make_shared<Native::Interface::PortChannel::Authentication::Timer::Inactivity>();
        }
        return inactivity;
    }

    if(child_yang_name == "reauthenticate")
    {
        if(reauthenticate == nullptr)
        {
            reauthenticate = std::make_shared<Native::Interface::PortChannel::Authentication::Timer::Reauthenticate>();
        }
        return reauthenticate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Timer::get_children() const
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

void Native::Interface::PortChannel::Authentication::Timer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "restart")
    {
        restart = value;
    }
}

Native::Interface::PortChannel::Authentication::Timer::Reauthenticate::Reauthenticate()
    :
    server{YType::empty, "server"},
    value_{YType::uint16, "value"}
{
    yang_name = "reauthenticate"; yang_parent_name = "timer";
}

Native::Interface::PortChannel::Authentication::Timer::Reauthenticate::~Reauthenticate()
{
}

bool Native::Interface::PortChannel::Authentication::Timer::Reauthenticate::has_data() const
{
    return server.is_set
	|| value_.is_set;
}

bool Native::Interface::PortChannel::Authentication::Timer::Reauthenticate::has_operation() const
{
    return is_set(operation)
	|| is_set(server.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::PortChannel::Authentication::Timer::Reauthenticate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reauthenticate";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Timer::Reauthenticate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reauthenticate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server.is_set || is_set(server.operation)) leaf_name_data.push_back(server.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Timer::Reauthenticate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Timer::Reauthenticate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Authentication::Timer::Reauthenticate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server")
    {
        server = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::PortChannel::Authentication::Timer::Inactivity::Inactivity()
    :
    server(nullptr) // presence node
	,value_(std::make_shared<Native::Interface::PortChannel::Authentication::Timer::Inactivity::Value_>())
{
    value_->parent = this;

    yang_name = "inactivity"; yang_parent_name = "timer";
}

Native::Interface::PortChannel::Authentication::Timer::Inactivity::~Inactivity()
{
}

bool Native::Interface::PortChannel::Authentication::Timer::Inactivity::has_data() const
{
    return (server !=  nullptr && server->has_data())
	|| (value_ !=  nullptr && value_->has_data());
}

bool Native::Interface::PortChannel::Authentication::Timer::Inactivity::has_operation() const
{
    return is_set(operation)
	|| (server !=  nullptr && server->has_operation())
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Timer::Inactivity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactivity";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Timer::Inactivity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inactivity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Timer::Inactivity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server>();
        }
        return server;
    }

    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<Native::Interface::PortChannel::Authentication::Timer::Inactivity::Value_>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Timer::Inactivity::get_children() const
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

void Native::Interface::PortChannel::Authentication::Timer::Inactivity::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Authentication::Timer::Inactivity::Value_::Value_()
    :
    dynamic{YType::empty, "dynamic"},
    value_{YType::uint16, "value"}
{
    yang_name = "value"; yang_parent_name = "inactivity";
}

Native::Interface::PortChannel::Authentication::Timer::Inactivity::Value_::~Value_()
{
}

bool Native::Interface::PortChannel::Authentication::Timer::Inactivity::Value_::has_data() const
{
    return dynamic.is_set
	|| value_.is_set;
}

bool Native::Interface::PortChannel::Authentication::Timer::Inactivity::Value_::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::PortChannel::Authentication::Timer::Inactivity::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Timer::Inactivity::Value_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Value_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Timer::Inactivity::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Timer::Inactivity::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Authentication::Timer::Inactivity::Value_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::Server()
    :
    dynamic{YType::empty, "dynamic"}
{
    yang_name = "server"; yang_parent_name = "inactivity";
}

Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::~Server()
{
}

bool Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::has_data() const
{
    return dynamic.is_set;
}

bool Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation);
}

std::string Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
}

Native::Interface::PortChannel::Mab::Mab()
    :
    eap{YType::empty, "eap"}
{
    yang_name = "mab"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Mab::~Mab()
{
}

bool Native::Interface::PortChannel::Mab::has_data() const
{
    return eap.is_set;
}

bool Native::Interface::PortChannel::Mab::has_operation() const
{
    return is_set(operation)
	|| is_set(eap.operation);
}

std::string Native::Interface::PortChannel::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:mab";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Mab::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mab' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eap.is_set || is_set(eap.operation)) leaf_name_data.push_back(eap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Mab::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eap")
    {
        eap = value;
    }
}

Native::Interface::PortChannel::SpanningTree::SpanningTree()
    :
    bpdufilter{YType::enumeration, "bpdufilter"},
    cost{YType::uint32, "cost"},
    guard{YType::enumeration, "guard"},
    link_type{YType::enumeration, "link-type"},
    port_priority{YType::uint8, "port-priority"}
    	,
    bpduguard(std::make_shared<Native::Interface::PortChannel::SpanningTree::Bpduguard>())
	,loopguard(std::make_shared<Native::Interface::PortChannel::SpanningTree::Loopguard>())
	,mst(std::make_shared<Native::Interface::PortChannel::SpanningTree::Mst>())
	,portfast(nullptr) // presence node
	,vlan(std::make_shared<Native::Interface::PortChannel::SpanningTree::Vlan>())
{
    bpduguard->parent = this;

    loopguard->parent = this;

    mst->parent = this;

    vlan->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::SpanningTree::~SpanningTree()
{
}

bool Native::Interface::PortChannel::SpanningTree::has_data() const
{
    return bpdufilter.is_set
	|| cost.is_set
	|| guard.is_set
	|| link_type.is_set
	|| port_priority.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (loopguard !=  nullptr && loopguard->has_data())
	|| (mst !=  nullptr && mst->has_data())
	|| (portfast !=  nullptr && portfast->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::PortChannel::SpanningTree::has_operation() const
{
    return is_set(operation)
	|| is_set(bpdufilter.operation)
	|| is_set(cost.operation)
	|| is_set(guard.operation)
	|| is_set(link_type.operation)
	|| is_set(port_priority.operation)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (loopguard !=  nullptr && loopguard->has_operation())
	|| (mst !=  nullptr && mst->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::PortChannel::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpanningTree' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bpdufilter.is_set || is_set(bpdufilter.operation)) leaf_name_data.push_back(bpdufilter.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (guard.is_set || is_set(guard.operation)) leaf_name_data.push_back(guard.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::Interface::PortChannel::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "loopguard")
    {
        if(loopguard == nullptr)
        {
            loopguard = std::make_shared<Native::Interface::PortChannel::SpanningTree::Loopguard>();
        }
        return loopguard;
    }

    if(child_yang_name == "mst")
    {
        if(mst == nullptr)
        {
            mst = std::make_shared<Native::Interface::PortChannel::SpanningTree::Mst>();
        }
        return mst;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::Interface::PortChannel::SpanningTree::Portfast>();
        }
        return portfast;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::PortChannel::SpanningTree::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpduguard != nullptr)
    {
        children["bpduguard"] = bpduguard;
    }

    if(loopguard != nullptr)
    {
        children["loopguard"] = loopguard;
    }

    if(mst != nullptr)
    {
        children["mst"] = mst;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::PortChannel::SpanningTree::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bpdufilter")
    {
        bpdufilter = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "guard")
    {
        guard = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
}

Native::Interface::PortChannel::SpanningTree::Bpduguard::Bpduguard()
    :
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"}
{
    yang_name = "bpduguard"; yang_parent_name = "spanning-tree";
}

Native::Interface::PortChannel::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::Interface::PortChannel::SpanningTree::Bpduguard::has_data() const
{
    return disable.is_set
	|| enable.is_set;
}

bool Native::Interface::PortChannel::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(enable.operation);
}

std::string Native::Interface::PortChannel::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::SpanningTree::Bpduguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bpduguard' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::SpanningTree::Bpduguard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Interface::PortChannel::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    trunk{YType::empty, "trunk"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::Interface::PortChannel::SpanningTree::Portfast::~Portfast()
{
}

bool Native::Interface::PortChannel::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| trunk.is_set;
}

bool Native::Interface::PortChannel::SpanningTree::Portfast::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(edge.operation)
	|| is_set(trunk.operation);
}

std::string Native::Interface::PortChannel::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Portfast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.operation)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.operation)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::SpanningTree::Portfast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "edge")
    {
        edge = value;
    }
    if(value_path == "trunk")
    {
        trunk = value;
    }
}

Native::Interface::PortChannel::SpanningTree::Vlan::Vlan()
    :
    cost{YType::uint32, "cost"},
    port_priority{YType::uint16, "port-priority"},
    vlan_ids{YType::str, "vlan-ids"}
{
    yang_name = "vlan"; yang_parent_name = "spanning-tree";
}

Native::Interface::PortChannel::SpanningTree::Vlan::~Vlan()
{
}

bool Native::Interface::PortChannel::SpanningTree::Vlan::has_data() const
{
    for (auto const & leaf : vlan_ids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return cost.is_set
	|| port_priority.is_set;
}

bool Native::Interface::PortChannel::SpanningTree::Vlan::has_operation() const
{
    for (auto const & leaf : vlan_ids.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(port_priority.operation)
	|| is_set(vlan_ids.operation);
}

std::string Native::Interface::PortChannel::SpanningTree::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::SpanningTree::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    auto vlan_ids_name_datas = vlan_ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlan_ids_name_datas.begin(), vlan_ids_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::SpanningTree::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::SpanningTree::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::SpanningTree::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
    if(value_path == "vlan-ids")
    {
        vlan_ids.append(value);
    }
}

Native::Interface::PortChannel::SpanningTree::Loopguard::Loopguard()
    :
    default_{YType::empty, "default"}
{
    yang_name = "loopguard"; yang_parent_name = "spanning-tree";
}

Native::Interface::PortChannel::SpanningTree::Loopguard::~Loopguard()
{
}

bool Native::Interface::PortChannel::SpanningTree::Loopguard::has_data() const
{
    return default_.is_set;
}

bool Native::Interface::PortChannel::SpanningTree::Loopguard::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation);
}

std::string Native::Interface::PortChannel::SpanningTree::Loopguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopguard";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::SpanningTree::Loopguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Loopguard' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::SpanningTree::Loopguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::SpanningTree::Loopguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::SpanningTree::Loopguard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
}

Native::Interface::PortChannel::SpanningTree::Mst::Mst()
    :
    cost{YType::uint32, "cost"},
    instance{YType::str, "instance"},
    port_priority{YType::uint16, "port-priority"},
    pre_standard{YType::empty, "pre-standard"}
{
    yang_name = "mst"; yang_parent_name = "spanning-tree";
}

Native::Interface::PortChannel::SpanningTree::Mst::~Mst()
{
}

bool Native::Interface::PortChannel::SpanningTree::Mst::has_data() const
{
    return cost.is_set
	|| instance.is_set
	|| port_priority.is_set
	|| pre_standard.is_set;
}

bool Native::Interface::PortChannel::SpanningTree::Mst::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(instance.operation)
	|| is_set(port_priority.operation)
	|| is_set(pre_standard.operation);
}

std::string Native::Interface::PortChannel::SpanningTree::Mst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mst";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::SpanningTree::Mst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mst' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (pre_standard.is_set || is_set(pre_standard.operation)) leaf_name_data.push_back(pre_standard.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::SpanningTree::Mst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::SpanningTree::Mst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::SpanningTree::Mst::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
    if(value_path == "pre-standard")
    {
        pre_standard = value;
    }
}

Native::Interface::PortChannel::Auto_::Auto_()
    :
    qos(std::make_shared<Native::Interface::PortChannel::Auto_::Qos>())
{
    qos->parent = this;

    yang_name = "auto"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Auto_::~Auto_()
{
}

bool Native::Interface::PortChannel::Auto_::has_data() const
{
    return (qos !=  nullptr && qos->has_data());
}

bool Native::Interface::PortChannel::Auto_::has_operation() const
{
    return is_set(operation)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Interface::PortChannel::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:auto";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Interface::PortChannel::Auto_::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void Native::Interface::PortChannel::Auto_::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Auto_::Qos::Qos()
    :
    classify(nullptr) // presence node
	,trust(nullptr) // presence node
	,video(std::make_shared<Native::Interface::PortChannel::Auto_::Qos::Video>())
	,voip(nullptr) // presence node
{
    video->parent = this;

    yang_name = "qos"; yang_parent_name = "auto";
}

Native::Interface::PortChannel::Auto_::Qos::~Qos()
{
}

bool Native::Interface::PortChannel::Auto_::Qos::has_data() const
{
    return (classify !=  nullptr && classify->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (video !=  nullptr && video->has_data())
	|| (voip !=  nullptr && voip->has_data());
}

bool Native::Interface::PortChannel::Auto_::Qos::has_operation() const
{
    return is_set(operation)
	|| (classify !=  nullptr && classify->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (video !=  nullptr && video->has_operation())
	|| (voip !=  nullptr && voip->has_operation());
}

std::string Native::Interface::PortChannel::Auto_::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Auto_::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Auto_::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classify")
    {
        if(classify == nullptr)
        {
            classify = std::make_shared<Native::Interface::PortChannel::Auto_::Qos::Classify>();
        }
        return classify;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::PortChannel::Auto_::Qos::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "video")
    {
        if(video == nullptr)
        {
            video = std::make_shared<Native::Interface::PortChannel::Auto_::Qos::Video>();
        }
        return video;
    }

    if(child_yang_name == "voip")
    {
        if(voip == nullptr)
        {
            voip = std::make_shared<Native::Interface::PortChannel::Auto_::Qos::Voip>();
        }
        return voip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Auto_::Qos::get_children() const
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

void Native::Interface::PortChannel::Auto_::Qos::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Auto_::Qos::Classify::Classify()
    :
    police{YType::empty, "police"}
{
    yang_name = "classify"; yang_parent_name = "qos";
}

Native::Interface::PortChannel::Auto_::Qos::Classify::~Classify()
{
}

bool Native::Interface::PortChannel::Auto_::Qos::Classify::has_data() const
{
    return police.is_set;
}

bool Native::Interface::PortChannel::Auto_::Qos::Classify::has_operation() const
{
    return is_set(operation)
	|| is_set(police.operation);
}

std::string Native::Interface::PortChannel::Auto_::Qos::Classify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classify";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Auto_::Qos::Classify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Classify' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (police.is_set || is_set(police.operation)) leaf_name_data.push_back(police.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Auto_::Qos::Classify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Auto_::Qos::Classify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Auto_::Qos::Classify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "police")
    {
        police = value;
    }
}

Native::Interface::PortChannel::Auto_::Qos::Trust::Trust()
    :
    cos{YType::empty, "cos"},
    dscp{YType::empty, "dscp"}
{
    yang_name = "trust"; yang_parent_name = "qos";
}

Native::Interface::PortChannel::Auto_::Qos::Trust::~Trust()
{
}

bool Native::Interface::PortChannel::Auto_::Qos::Trust::has_data() const
{
    return cos.is_set
	|| dscp.is_set;
}

bool Native::Interface::PortChannel::Auto_::Qos::Trust::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(dscp.operation);
}

std::string Native::Interface::PortChannel::Auto_::Qos::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Auto_::Qos::Trust::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trust' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Auto_::Qos::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Auto_::Qos::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Auto_::Qos::Trust::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
}

Native::Interface::PortChannel::Auto_::Qos::Video::Video()
    :
    cts{YType::empty, "cts"},
    ip_camera{YType::empty, "ip-camera"},
    media_player{YType::empty, "media-player"}
{
    yang_name = "video"; yang_parent_name = "qos";
}

Native::Interface::PortChannel::Auto_::Qos::Video::~Video()
{
}

bool Native::Interface::PortChannel::Auto_::Qos::Video::has_data() const
{
    return cts.is_set
	|| ip_camera.is_set
	|| media_player.is_set;
}

bool Native::Interface::PortChannel::Auto_::Qos::Video::has_operation() const
{
    return is_set(operation)
	|| is_set(cts.operation)
	|| is_set(ip_camera.operation)
	|| is_set(media_player.operation);
}

std::string Native::Interface::PortChannel::Auto_::Qos::Video::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "video";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Auto_::Qos::Video::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Video' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cts.is_set || is_set(cts.operation)) leaf_name_data.push_back(cts.get_name_leafdata());
    if (ip_camera.is_set || is_set(ip_camera.operation)) leaf_name_data.push_back(ip_camera.get_name_leafdata());
    if (media_player.is_set || is_set(media_player.operation)) leaf_name_data.push_back(media_player.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Auto_::Qos::Video::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Auto_::Qos::Video::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Auto_::Qos::Video::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cts")
    {
        cts = value;
    }
    if(value_path == "ip-camera")
    {
        ip_camera = value;
    }
    if(value_path == "media-player")
    {
        media_player = value;
    }
}

Native::Interface::PortChannel::Auto_::Qos::Voip::Voip()
    :
    cisco_phone{YType::empty, "cisco-phone"},
    cisco_softphone{YType::empty, "cisco-softphone"},
    trust{YType::empty, "trust"}
{
    yang_name = "voip"; yang_parent_name = "qos";
}

Native::Interface::PortChannel::Auto_::Qos::Voip::~Voip()
{
}

bool Native::Interface::PortChannel::Auto_::Qos::Voip::has_data() const
{
    return cisco_phone.is_set
	|| cisco_softphone.is_set
	|| trust.is_set;
}

bool Native::Interface::PortChannel::Auto_::Qos::Voip::has_operation() const
{
    return is_set(operation)
	|| is_set(cisco_phone.operation)
	|| is_set(cisco_softphone.operation)
	|| is_set(trust.operation);
}

std::string Native::Interface::PortChannel::Auto_::Qos::Voip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voip";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Auto_::Qos::Voip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Voip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco_phone.is_set || is_set(cisco_phone.operation)) leaf_name_data.push_back(cisco_phone.get_name_leafdata());
    if (cisco_softphone.is_set || is_set(cisco_softphone.operation)) leaf_name_data.push_back(cisco_softphone.get_name_leafdata());
    if (trust.is_set || is_set(trust.operation)) leaf_name_data.push_back(trust.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Auto_::Qos::Voip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Auto_::Qos::Voip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Auto_::Qos::Voip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cisco-phone")
    {
        cisco_phone = value;
    }
    if(value_path == "cisco-softphone")
    {
        cisco_softphone = value;
    }
    if(value_path == "trust")
    {
        trust = value;
    }
}

Native::Interface::PortChannel::Datalink::Datalink()
    :
    flow(std::make_shared<Native::Interface::PortChannel::Datalink::Flow>())
{
    flow->parent = this;

    yang_name = "datalink"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Datalink::~Datalink()
{
}

bool Native::Interface::PortChannel::Datalink::has_data() const
{
    return (flow !=  nullptr && flow->has_data());
}

bool Native::Interface::PortChannel::Datalink::has_operation() const
{
    return is_set(operation)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::Interface::PortChannel::Datalink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:datalink";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Datalink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Datalink' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Datalink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::PortChannel::Datalink::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Datalink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    return children;
}

void Native::Interface::PortChannel::Datalink::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Datalink::Flow::Flow()
    :
    monitor(nullptr) // presence node
{
    yang_name = "flow"; yang_parent_name = "datalink";
}

Native::Interface::PortChannel::Datalink::Flow::~Flow()
{
}

bool Native::Interface::PortChannel::Datalink::Flow::has_data() const
{
    return (monitor !=  nullptr && monitor->has_data());
}

bool Native::Interface::PortChannel::Datalink::Flow::has_operation() const
{
    return is_set(operation)
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Interface::PortChannel::Datalink::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Datalink::Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flow' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Datalink::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Interface::PortChannel::Datalink::Flow::Monitor>();
        }
        return monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Datalink::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    return children;
}

void Native::Interface::PortChannel::Datalink::Flow::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Datalink::Flow::Monitor::Monitor()
    :
    input_output{YType::enumeration, "input-output"},
    user_defined_flow{YType::str, "User-defined-flow"}
{
    yang_name = "monitor"; yang_parent_name = "flow";
}

Native::Interface::PortChannel::Datalink::Flow::Monitor::~Monitor()
{
}

bool Native::Interface::PortChannel::Datalink::Flow::Monitor::has_data() const
{
    return input_output.is_set
	|| user_defined_flow.is_set;
}

bool Native::Interface::PortChannel::Datalink::Flow::Monitor::has_operation() const
{
    return is_set(operation)
	|| is_set(input_output.operation)
	|| is_set(user_defined_flow.operation);
}

std::string Native::Interface::PortChannel::Datalink::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Datalink::Flow::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Monitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input_output.is_set || is_set(input_output.operation)) leaf_name_data.push_back(input_output.get_name_leafdata());
    if (user_defined_flow.is_set || is_set(user_defined_flow.operation)) leaf_name_data.push_back(user_defined_flow.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Datalink::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Datalink::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Datalink::Flow::Monitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input-output")
    {
        input_output = value;
    }
    if(value_path == "User-defined-flow")
    {
        user_defined_flow = value;
    }
}

Native::Interface::PortChannel::Energywise::Energywise()
    :
    activitycheck{YType::empty, "activitycheck"}
{
    yang_name = "energywise"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Energywise::~Energywise()
{
}

bool Native::Interface::PortChannel::Energywise::has_data() const
{
    return activitycheck.is_set;
}

bool Native::Interface::PortChannel::Energywise::has_operation() const
{
    return is_set(operation)
	|| is_set(activitycheck.operation);
}

std::string Native::Interface::PortChannel::Energywise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:energywise";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Energywise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Energywise' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activitycheck.is_set || is_set(activitycheck.operation)) leaf_name_data.push_back(activitycheck.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Energywise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Energywise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Energywise::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activitycheck")
    {
        activitycheck = value;
    }
}

Native::Interface::PortChannel::Location::Location()
    :
    civic_location_id(std::make_shared<Native::Interface::PortChannel::Location::CivicLocationId>())
{
    civic_location_id->parent = this;

    yang_name = "location"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Location::~Location()
{
}

bool Native::Interface::PortChannel::Location::has_data() const
{
    return (civic_location_id !=  nullptr && civic_location_id->has_data());
}

bool Native::Interface::PortChannel::Location::has_operation() const
{
    return is_set(operation)
	|| (civic_location_id !=  nullptr && civic_location_id->has_operation());
}

std::string Native::Interface::PortChannel::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:location";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Location::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Location' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "civic-location-id")
    {
        if(civic_location_id == nullptr)
        {
            civic_location_id = std::make_shared<Native::Interface::PortChannel::Location::CivicLocationId>();
        }
        return civic_location_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(civic_location_id != nullptr)
    {
        children["civic-location-id"] = civic_location_id;
    }

    return children;
}

void Native::Interface::PortChannel::Location::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Location::CivicLocationId::CivicLocationId()
    :
    location_identifier{YType::str, "location-identifier"}
    	,
    host(nullptr) // presence node
	,none(nullptr) // presence node
{
    yang_name = "civic-location-id"; yang_parent_name = "location";
}

Native::Interface::PortChannel::Location::CivicLocationId::~CivicLocationId()
{
}

bool Native::Interface::PortChannel::Location::CivicLocationId::has_data() const
{
    return location_identifier.is_set
	|| (host !=  nullptr && host->has_data())
	|| (none !=  nullptr && none->has_data());
}

bool Native::Interface::PortChannel::Location::CivicLocationId::has_operation() const
{
    return is_set(operation)
	|| is_set(location_identifier.operation)
	|| (host !=  nullptr && host->has_operation())
	|| (none !=  nullptr && none->has_operation());
}

std::string Native::Interface::PortChannel::Location::CivicLocationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "civic-location-id";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Location::CivicLocationId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CivicLocationId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_identifier.is_set || is_set(location_identifier.operation)) leaf_name_data.push_back(location_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Location::CivicLocationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Interface::PortChannel::Location::CivicLocationId::Host>();
        }
        return host;
    }

    if(child_yang_name == "none")
    {
        if(none == nullptr)
        {
            none = std::make_shared<Native::Interface::PortChannel::Location::CivicLocationId::None>();
        }
        return none;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Location::CivicLocationId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host != nullptr)
    {
        children["host"] = host;
    }

    if(none != nullptr)
    {
        children["none"] = none;
    }

    return children;
}

void Native::Interface::PortChannel::Location::CivicLocationId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location-identifier")
    {
        location_identifier = value;
    }
}

Native::Interface::PortChannel::Location::CivicLocationId::Host::Host()
    :
    port_location{YType::str, "port-location"}
{
    yang_name = "host"; yang_parent_name = "civic-location-id";
}

Native::Interface::PortChannel::Location::CivicLocationId::Host::~Host()
{
}

bool Native::Interface::PortChannel::Location::CivicLocationId::Host::has_data() const
{
    return port_location.is_set;
}

bool Native::Interface::PortChannel::Location::CivicLocationId::Host::has_operation() const
{
    return is_set(operation)
	|| is_set(port_location.operation);
}

std::string Native::Interface::PortChannel::Location::CivicLocationId::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Location::CivicLocationId::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_location.is_set || is_set(port_location.operation)) leaf_name_data.push_back(port_location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Location::CivicLocationId::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Location::CivicLocationId::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Location::CivicLocationId::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-location")
    {
        port_location = value;
    }
}

Native::Interface::PortChannel::Location::CivicLocationId::None::None()
    :
    port_location{YType::str, "port-location"}
{
    yang_name = "none"; yang_parent_name = "civic-location-id";
}

Native::Interface::PortChannel::Location::CivicLocationId::None::~None()
{
}

bool Native::Interface::PortChannel::Location::CivicLocationId::None::has_data() const
{
    return port_location.is_set;
}

bool Native::Interface::PortChannel::Location::CivicLocationId::None::has_operation() const
{
    return is_set(operation)
	|| is_set(port_location.operation);
}

std::string Native::Interface::PortChannel::Location::CivicLocationId::None::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "none";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Location::CivicLocationId::None::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'None' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_location.is_set || is_set(port_location.operation)) leaf_name_data.push_back(port_location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Location::CivicLocationId::None::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Location::CivicLocationId::None::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Location::CivicLocationId::None::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-location")
    {
        port_location = value;
    }
}

Native::Interface::PortChannel::Mac::Mac()
    :
    access_group(std::make_shared<Native::Interface::PortChannel::Mac::AccessGroup>())
{
    access_group->parent = this;

    yang_name = "mac"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Mac::~Mac()
{
}

bool Native::Interface::PortChannel::Mac::has_data() const
{
    return (access_group !=  nullptr && access_group->has_data());
}

bool Native::Interface::PortChannel::Mac::has_operation() const
{
    return is_set(operation)
	|| (access_group !=  nullptr && access_group->has_operation());
}

std::string Native::Interface::PortChannel::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mac";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::PortChannel::Mac::AccessGroup>();
        }
        return access_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    return children;
}

void Native::Interface::PortChannel::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Mac::AccessGroup::AccessGroup()
    :
    acl_name(std::make_shared<Native::Interface::PortChannel::Mac::AccessGroup::AclName>())
{
    acl_name->parent = this;

    yang_name = "access-group"; yang_parent_name = "mac";
}

Native::Interface::PortChannel::Mac::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::PortChannel::Mac::AccessGroup::has_data() const
{
    return (acl_name !=  nullptr && acl_name->has_data());
}

bool Native::Interface::PortChannel::Mac::AccessGroup::has_operation() const
{
    return is_set(operation)
	|| (acl_name !=  nullptr && acl_name->has_operation());
}

std::string Native::Interface::PortChannel::Mac::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Mac::AccessGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mac::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACL-name")
    {
        if(acl_name == nullptr)
        {
            acl_name = std::make_shared<Native::Interface::PortChannel::Mac::AccessGroup::AclName>();
        }
        return acl_name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mac::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl_name != nullptr)
    {
        children["ACL-name"] = acl_name;
    }

    return children;
}

void Native::Interface::PortChannel::Mac::AccessGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Mac::AccessGroup::AclName::AclName()
    :
    acl_name{YType::str, "acl-name"},
    apply_to{YType::enumeration, "apply-to"}
{
    yang_name = "ACL-name"; yang_parent_name = "access-group";
}

Native::Interface::PortChannel::Mac::AccessGroup::AclName::~AclName()
{
}

bool Native::Interface::PortChannel::Mac::AccessGroup::AclName::has_data() const
{
    return acl_name.is_set
	|| apply_to.is_set;
}

bool Native::Interface::PortChannel::Mac::AccessGroup::AclName::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(apply_to.operation);
}

std::string Native::Interface::PortChannel::Mac::AccessGroup::AclName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ACL-name";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Mac::AccessGroup::AclName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AclName' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (apply_to.is_set || is_set(apply_to.operation)) leaf_name_data.push_back(apply_to.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mac::AccessGroup::AclName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mac::AccessGroup::AclName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Mac::AccessGroup::AclName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "apply-to")
    {
        apply_to = value;
    }
}

Native::Interface::PortChannel::Macro::Macro()
    :
    description{YType::str, "description"}
    	,
    auto_(std::make_shared<Native::Interface::PortChannel::Macro::Auto_>())
{
    auto_->parent = this;

    yang_name = "macro"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Macro::~Macro()
{
}

bool Native::Interface::PortChannel::Macro::has_data() const
{
    return description.is_set
	|| (auto_ !=  nullptr && auto_->has_data());
}

bool Native::Interface::PortChannel::Macro::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| (auto_ !=  nullptr && auto_->has_operation());
}

std::string Native::Interface::PortChannel::Macro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:macro";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Macro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Macro' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Macro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::PortChannel::Macro::Auto_>();
        }
        return auto_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Macro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    return children;
}

void Native::Interface::PortChannel::Macro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
}

Native::Interface::PortChannel::Macro::Auto_::Auto_()
    :
    processing{YType::boolean, "processing"}
{
    yang_name = "auto"; yang_parent_name = "macro";
}

Native::Interface::PortChannel::Macro::Auto_::~Auto_()
{
}

bool Native::Interface::PortChannel::Macro::Auto_::has_data() const
{
    return processing.is_set;
}

bool Native::Interface::PortChannel::Macro::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(processing.operation);
}

std::string Native::Interface::PortChannel::Macro::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Macro::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processing.is_set || is_set(processing.operation)) leaf_name_data.push_back(processing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Macro::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Macro::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Macro::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processing")
    {
        processing = value;
    }
}

Native::Interface::PortChannel::DualActive::DualActive()
    :
    fast_hello{YType::empty, "fast-hello"}
{
    yang_name = "dual-active"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::DualActive::~DualActive()
{
}

bool Native::Interface::PortChannel::DualActive::has_data() const
{
    return fast_hello.is_set;
}

bool Native::Interface::PortChannel::DualActive::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_hello.operation);
}

std::string Native::Interface::PortChannel::DualActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:dual-active";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::DualActive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DualActive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_hello.is_set || is_set(fast_hello.operation)) leaf_name_data.push_back(fast_hello.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::DualActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::DualActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::DualActive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-hello")
    {
        fast_hello = value;
    }
}

Native::Interface::PortChannel::Lldp::Lldp()
    :
    receive{YType::boolean, "receive"},
    transmit{YType::boolean, "transmit"}
{
    yang_name = "lldp"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Lldp::~Lldp()
{
}

bool Native::Interface::PortChannel::Lldp::has_data() const
{
    return receive.is_set
	|| transmit.is_set;
}

bool Native::Interface::PortChannel::Lldp::has_operation() const
{
    return is_set(operation)
	|| is_set(receive.operation)
	|| is_set(transmit.operation);
}

std::string Native::Interface::PortChannel::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:lldp";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Lldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lldp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (transmit.is_set || is_set(transmit.operation)) leaf_name_data.push_back(transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Lldp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive")
    {
        receive = value;
    }
    if(value_path == "transmit")
    {
        transmit = value;
    }
}

Native::Interface::PortChannel::LoadBalancing::LoadBalancing()
    :
    flow{YType::empty, "flow"},
    vlan{YType::empty, "vlan"}
{
    yang_name = "load-balancing"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::LoadBalancing::~LoadBalancing()
{
}

bool Native::Interface::PortChannel::LoadBalancing::has_data() const
{
    return flow.is_set
	|| vlan.is_set;
}

bool Native::Interface::PortChannel::LoadBalancing::has_operation() const
{
    return is_set(operation)
	|| is_set(flow.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::PortChannel::LoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:load-balancing";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::LoadBalancing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadBalancing' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow.is_set || is_set(flow.operation)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::LoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::LoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::LoadBalancing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow")
    {
        flow = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::PortChannel::VlanRange::VlanRange()
    :
    id{YType::str, "id"}
    	,
    service_policy(std::make_shared<Native::Interface::PortChannel::VlanRange::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "vlan-range"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::VlanRange::~VlanRange()
{
}

bool Native::Interface::PortChannel::VlanRange::has_data() const
{
    return id.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::Interface::PortChannel::VlanRange::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::Interface::PortChannel::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:vlan-range" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::VlanRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanRange' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::PortChannel::VlanRange::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void Native::Interface::PortChannel::VlanRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::PortChannel::VlanRange::ServicePolicy::ServicePolicy()
    :
    input{YType::str, "input"},
    output{YType::str, "output"}
{
    yang_name = "service-policy"; yang_parent_name = "vlan-range";
}

Native::Interface::PortChannel::VlanRange::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::PortChannel::VlanRange::ServicePolicy::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Interface::PortChannel::VlanRange::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(input.operation)
	|| is_set(output.operation);
}

std::string Native::Interface::PortChannel::VlanRange::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::VlanRange::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::VlanRange::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::VlanRange::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::VlanRange::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input")
    {
        input = value;
    }
    if(value_path == "output")
    {
        output = value;
    }
}

Native::Interface::PortChannel::Switch::Switch()
    :
    virtual_(std::make_shared<Native::Interface::PortChannel::Switch::Virtual_>())
{
    virtual_->parent = this;

    yang_name = "switch"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Switch::~Switch()
{
}

bool Native::Interface::PortChannel::Switch::has_data() const
{
    return (virtual_ !=  nullptr && virtual_->has_data());
}

bool Native::Interface::PortChannel::Switch::has_operation() const
{
    return is_set(operation)
	|| (virtual_ !=  nullptr && virtual_->has_operation());
}

std::string Native::Interface::PortChannel::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:switch";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Switch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Switch' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual")
    {
        if(virtual_ == nullptr)
        {
            virtual_ = std::make_shared<Native::Interface::PortChannel::Switch::Virtual_>();
        }
        return virtual_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(virtual_ != nullptr)
    {
        children["virtual"] = virtual_;
    }

    return children;
}

void Native::Interface::PortChannel::Switch::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Switch::Virtual_::Virtual_()
    :
    link{YType::uint8, "link"}
{
    yang_name = "virtual"; yang_parent_name = "switch";
}

Native::Interface::PortChannel::Switch::Virtual_::~Virtual_()
{
}

bool Native::Interface::PortChannel::Switch::Virtual_::has_data() const
{
    return link.is_set;
}

bool Native::Interface::PortChannel::Switch::Virtual_::has_operation() const
{
    return is_set(operation)
	|| is_set(link.operation);
}

std::string Native::Interface::PortChannel::Switch::Virtual_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Switch::Virtual_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Virtual_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link.is_set || is_set(link.operation)) leaf_name_data.push_back(link.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Switch::Virtual_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Switch::Virtual_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Switch::Virtual_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link")
    {
        link = value;
    }
}

Native::Interface::PortChannel::SrrQueue::SrrQueue()
    :
    bandwidth(std::make_shared<Native::Interface::PortChannel::SrrQueue::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "srr-queue"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::SrrQueue::~SrrQueue()
{
}

bool Native::Interface::PortChannel::SrrQueue::has_data() const
{
    return (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::PortChannel::SrrQueue::has_operation() const
{
    return is_set(operation)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::PortChannel::SrrQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:srr-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::SrrQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrrQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::SrrQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::PortChannel::SrrQueue::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::SrrQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    return children;
}

void Native::Interface::PortChannel::SrrQueue::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::SrrQueue::Bandwidth::Bandwidth()
    :
    shape(std::make_shared<Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape>())
	,share(std::make_shared<Native::Interface::PortChannel::SrrQueue::Bandwidth::Share>())
{
    shape->parent = this;

    share->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "srr-queue";
}

Native::Interface::PortChannel::SrrQueue::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::PortChannel::SrrQueue::Bandwidth::has_data() const
{
    return (shape !=  nullptr && shape->has_data())
	|| (share !=  nullptr && share->has_data());
}

bool Native::Interface::PortChannel::SrrQueue::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| (shape !=  nullptr && shape->has_operation())
	|| (share !=  nullptr && share->has_operation());
}

std::string Native::Interface::PortChannel::SrrQueue::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::SrrQueue::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::SrrQueue::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "share")
    {
        if(share == nullptr)
        {
            share = std::make_shared<Native::Interface::PortChannel::SrrQueue::Bandwidth::Share>();
        }
        return share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::SrrQueue::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    if(share != nullptr)
    {
        children["share"] = share;
    }

    return children;
}

void Native::Interface::PortChannel::SrrQueue::Bandwidth::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape::Shape()
    :
    weight1{YType::uint16, "weight1"},
    weight2{YType::uint16, "weight2"},
    weight3{YType::uint16, "weight3"},
    weight4{YType::uint16, "weight4"}
{
    yang_name = "shape"; yang_parent_name = "bandwidth";
}

Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape::~Shape()
{
}

bool Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape::has_data() const
{
    return weight1.is_set
	|| weight2.is_set
	|| weight3.is_set
	|| weight4.is_set;
}

bool Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape::has_operation() const
{
    return is_set(operation)
	|| is_set(weight1.operation)
	|| is_set(weight2.operation)
	|| is_set(weight3.operation)
	|| is_set(weight4.operation);
}

std::string Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shape' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight1.is_set || is_set(weight1.operation)) leaf_name_data.push_back(weight1.get_name_leafdata());
    if (weight2.is_set || is_set(weight2.operation)) leaf_name_data.push_back(weight2.get_name_leafdata());
    if (weight3.is_set || is_set(weight3.operation)) leaf_name_data.push_back(weight3.get_name_leafdata());
    if (weight4.is_set || is_set(weight4.operation)) leaf_name_data.push_back(weight4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "weight1")
    {
        weight1 = value;
    }
    if(value_path == "weight2")
    {
        weight2 = value;
    }
    if(value_path == "weight3")
    {
        weight3 = value;
    }
    if(value_path == "weight4")
    {
        weight4 = value;
    }
}

Native::Interface::PortChannel::SrrQueue::Bandwidth::Share::Share()
    :
    weight1{YType::uint8, "weight1"},
    weight2{YType::uint8, "weight2"},
    weight3{YType::uint8, "weight3"},
    weight4{YType::uint8, "weight4"}
{
    yang_name = "share"; yang_parent_name = "bandwidth";
}

Native::Interface::PortChannel::SrrQueue::Bandwidth::Share::~Share()
{
}

bool Native::Interface::PortChannel::SrrQueue::Bandwidth::Share::has_data() const
{
    return weight1.is_set
	|| weight2.is_set
	|| weight3.is_set
	|| weight4.is_set;
}

bool Native::Interface::PortChannel::SrrQueue::Bandwidth::Share::has_operation() const
{
    return is_set(operation)
	|| is_set(weight1.operation)
	|| is_set(weight2.operation)
	|| is_set(weight3.operation)
	|| is_set(weight4.operation);
}

std::string Native::Interface::PortChannel::SrrQueue::Bandwidth::Share::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "share";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::SrrQueue::Bandwidth::Share::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Share' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight1.is_set || is_set(weight1.operation)) leaf_name_data.push_back(weight1.get_name_leafdata());
    if (weight2.is_set || is_set(weight2.operation)) leaf_name_data.push_back(weight2.get_name_leafdata());
    if (weight3.is_set || is_set(weight3.operation)) leaf_name_data.push_back(weight3.get_name_leafdata());
    if (weight4.is_set || is_set(weight4.operation)) leaf_name_data.push_back(weight4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::SrrQueue::Bandwidth::Share::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::SrrQueue::Bandwidth::Share::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::SrrQueue::Bandwidth::Share::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "weight1")
    {
        weight1 = value;
    }
    if(value_path == "weight2")
    {
        weight2 = value;
    }
    if(value_path == "weight3")
    {
        weight3 = value;
    }
    if(value_path == "weight4")
    {
        weight4 = value;
    }
}

Native::Interface::PortChannel::Macsec::Macsec()
    :
    network_link{YType::empty, "network-link"}
{
    yang_name = "macsec"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Macsec::~Macsec()
{
}

bool Native::Interface::PortChannel::Macsec::has_data() const
{
    return network_link.is_set;
}

bool Native::Interface::PortChannel::Macsec::has_operation() const
{
    return is_set(operation)
	|| is_set(network_link.operation);
}

std::string Native::Interface::PortChannel::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:macsec";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Macsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Macsec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_link.is_set || is_set(network_link.operation)) leaf_name_data.push_back(network_link.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Macsec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "network-link")
    {
        network_link = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannelSubinterface()
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::PortChannelSubinterface::has_data() const
{
    for (std::size_t index=0; index<port_channel.size(); index++)
    {
        if(port_channel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::PortChannelSubinterface::has_operation() const
{
    for (std::size_t index=0; index<port_channel.size(); index++)
    {
        if(port_channel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Port-channel")
    {
        for(auto const & c : port_channel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel>();
        c->parent = this;
        port_channel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : port_channel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::PortChannel()
    :
    name{YType::str, "name"},
    channel_protocol{YType::enumeration, "Cisco-IOS-XE-ethernet:channel-protocol"},
    delay{YType::uint32, "delay"},
    description{YType::str, "description"},
    duplex{YType::enumeration, "Cisco-IOS-XE-ethernet:duplex"},
    if_state{YType::enumeration, "if-state"},
    keepalive{YType::boolean, "keepalive"},
    load_interval{YType::uint16, "load-interval"},
    max_reserved_bandwidth{YType::uint8, "max-reserved-bandwidth"},
    mtu{YType::uint16, "mtu"},
    service_insertion{YType::enumeration, "service-insertion"},
    shutdown{YType::empty, "shutdown"}
    	,
    access_session(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::AccessSession>())
	,arp(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Arp>())
	,auto_(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Auto_>())
	,backup(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup>())
	,bandwidth(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth>())
	,bfd(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Bfd>())
	,carrier_delay(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::CarrierDelay>())
	,cemoudp(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp>())
	,channel_group(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup>())
	,cws_tunnel(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel>())
	,dampening(nullptr) // presence node
	,datalink(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Datalink>())
	,domain(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Domain>())
	,dual_active(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::DualActive>())
	,encapsulation(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation>())
	,energywise(nullptr) // presence node
	,ethernet(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet>())
	,fair_queue(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::FairQueue>())
	,fair_queue_conf(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf>())
	,flowcontrol(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol>())
	,hold_queue(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue>())
	,interface_qos(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Interface_Qos>())
	,ip(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip>())
	,ip_vrf(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::IpVrf>())
	,ipv6(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6>())
	,isis(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Isis>())
	,keepalive_settings(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings>())
	,l2protocol_tunnel(nullptr) // presence node
	,lldp(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Lldp>())
	,load_balancing(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::LoadBalancing>())
	,location(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Location>())
	,logging(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Logging>())
	,mac(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mac>())
	,macro(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Macro>())
	,macsec(nullptr) // presence node
	,mdix(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mdix>())
	,mop(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mop>())
	,mpls(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mpls>())
	,negotiation(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Negotiation>())
	,peer(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Peer>())
	,plim(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim>())
	,pm_path(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::PmPath>())
	,pppoe(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Pppoe>())
	,priority_queue(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::PriorityQueue>())
	,rcv_queue(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::RcvQueue>())
	,service(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service>())
	,speed(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Speed>())
	,srr_queue(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue>())
	,standby(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Standby>())
	,storm_control(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::StormControl>())
	,switch(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switch>())
	,switchport(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport>())
	,switchport_conf(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf>())
	,synchronous(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Synchronous>())
	,trust(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Trust>())
	,utd(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Utd>())
	,vrf(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Vrf>())
{
    access_session->parent = this;

    arp->parent = this;

    auto_->parent = this;

    backup->parent = this;

    bandwidth->parent = this;

    bfd->parent = this;

    carrier_delay->parent = this;

    cemoudp->parent = this;

    channel_group->parent = this;

    cws_tunnel->parent = this;

    datalink->parent = this;

    domain->parent = this;

    dual_active->parent = this;

    encapsulation->parent = this;

    ethernet->parent = this;

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

    lldp->parent = this;

    load_balancing->parent = this;

    location->parent = this;

    logging->parent = this;

    mac->parent = this;

    macro->parent = this;

    mdix->parent = this;

    mop->parent = this;

    mpls->parent = this;

    negotiation->parent = this;

    peer->parent = this;

    plim->parent = this;

    pm_path->parent = this;

    pppoe->parent = this;

    priority_queue->parent = this;

    rcv_queue->parent = this;

    service->parent = this;

    speed->parent = this;

    srr_queue->parent = this;

    standby->parent = this;

    storm_control->parent = this;

    switch->parent = this;

    switchport->parent = this;

    switchport_conf->parent = this;

    synchronous->parent = this;

    trust->parent = this;

    utd->parent = this;

    vrf->parent = this;

    yang_name = "Port-channel"; yang_parent_name = "Port-channel-subinterface";
}

Native::Interface::PortChannelSubinterface::PortChannel::~PortChannel()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::has_data() const
{
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
	|| max_reserved_bandwidth.is_set
	|| mtu.is_set
	|| service_insertion.is_set
	|| shutdown.is_set
	|| (access_session !=  nullptr && access_session->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (carrier_delay !=  nullptr && carrier_delay->has_data())
	|| (cemoudp !=  nullptr && cemoudp->has_data())
	|| (channel_group !=  nullptr && channel_group->has_data())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (datalink !=  nullptr && datalink->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (dual_active !=  nullptr && dual_active->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (energywise !=  nullptr && energywise->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
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
	|| (lldp !=  nullptr && lldp->has_data())
	|| (load_balancing !=  nullptr && load_balancing->has_data())
	|| (location !=  nullptr && location->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (macro !=  nullptr && macro->has_data())
	|| (macsec !=  nullptr && macsec->has_data())
	|| (mdix !=  nullptr && mdix->has_data())
	|| (mop !=  nullptr && mop->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (negotiation !=  nullptr && negotiation->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (plim !=  nullptr && plim->has_data())
	|| (pm_path !=  nullptr && pm_path->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data())
	|| (priority_queue !=  nullptr && priority_queue->has_data())
	|| (rcv_queue !=  nullptr && rcv_queue->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (speed !=  nullptr && speed->has_data())
	|| (srr_queue !=  nullptr && srr_queue->has_data())
	|| (standby !=  nullptr && standby->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switch !=  nullptr && switch->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (switchport_conf !=  nullptr && switchport_conf->has_data())
	|| (synchronous !=  nullptr && synchronous->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (utd !=  nullptr && utd->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(channel_protocol.operation)
	|| is_set(delay.operation)
	|| is_set(description.operation)
	|| is_set(duplex.operation)
	|| is_set(if_state.operation)
	|| is_set(keepalive.operation)
	|| is_set(load_interval.operation)
	|| is_set(max_reserved_bandwidth.operation)
	|| is_set(mtu.operation)
	|| is_set(service_insertion.operation)
	|| is_set(shutdown.operation)
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (cemoudp !=  nullptr && cemoudp->has_operation())
	|| (channel_group !=  nullptr && channel_group->has_operation())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (datalink !=  nullptr && datalink->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (dual_active !=  nullptr && dual_active->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (energywise !=  nullptr && energywise->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
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
	|| (lldp !=  nullptr && lldp->has_operation())
	|| (load_balancing !=  nullptr && load_balancing->has_operation())
	|| (location !=  nullptr && location->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (macro !=  nullptr && macro->has_operation())
	|| (macsec !=  nullptr && macsec->has_operation())
	|| (mdix !=  nullptr && mdix->has_operation())
	|| (mop !=  nullptr && mop->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (negotiation !=  nullptr && negotiation->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (plim !=  nullptr && plim->has_operation())
	|| (pm_path !=  nullptr && pm_path->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (priority_queue !=  nullptr && priority_queue->has_operation())
	|| (rcv_queue !=  nullptr && rcv_queue->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (speed !=  nullptr && speed->has_operation())
	|| (srr_queue !=  nullptr && srr_queue->has_operation())
	|| (standby !=  nullptr && standby->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switch !=  nullptr && switch->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (switchport_conf !=  nullptr && switchport_conf->has_operation())
	|| (synchronous !=  nullptr && synchronous->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (utd !=  nullptr && utd->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/interface/Port-channel-subinterface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (channel_protocol.is_set || is_set(channel_protocol.operation)) leaf_name_data.push_back(channel_protocol.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.operation)) leaf_name_data.push_back(duplex.get_name_leafdata());
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "carrier-delay")
    {
        if(carrier_delay == nullptr)
        {
            carrier_delay = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::CarrierDelay>();
        }
        return carrier_delay;
    }

    if(child_yang_name == "cemoudp")
    {
        if(cemoudp == nullptr)
        {
            cemoudp = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp>();
        }
        return cemoudp;
    }

    if(child_yang_name == "channel-group")
    {
        if(channel_group == nullptr)
        {
            channel_group = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup>();
        }
        return channel_group;
    }

    if(child_yang_name == "cws-tunnel")
    {
        if(cws_tunnel == nullptr)
        {
            cws_tunnel = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel>();
        }
        return cws_tunnel;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "datalink")
    {
        if(datalink == nullptr)
        {
            datalink = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Datalink>();
        }
        return datalink;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "dual-active")
    {
        if(dual_active == nullptr)
        {
            dual_active = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::DualActive>();
        }
        return dual_active;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "energywise")
    {
        if(energywise == nullptr)
        {
            energywise = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Energywise>();
        }
        return energywise;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "fair-queue-conf")
    {
        if(fair_queue_conf == nullptr)
        {
            fair_queue_conf = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf>();
        }
        return fair_queue_conf;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "hold-queue")
    {
        if(hold_queue == nullptr)
        {
            hold_queue = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue>();
        }
        return hold_queue;
    }

    if(child_yang_name == "interface_qos")
    {
        if(interface_qos == nullptr)
        {
            interface_qos = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Interface_Qos>();
        }
        return interface_qos;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::L2ProtocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "lldp")
    {
        if(lldp == nullptr)
        {
            lldp = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Lldp>();
        }
        return lldp;
    }

    if(child_yang_name == "load-balancing")
    {
        if(load_balancing == nullptr)
        {
            load_balancing = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::LoadBalancing>();
        }
        return load_balancing;
    }

    if(child_yang_name == "location")
    {
        if(location == nullptr)
        {
            location = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Location>();
        }
        return location;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "macro")
    {
        if(macro == nullptr)
        {
            macro = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Macro>();
        }
        return macro;
    }

    if(child_yang_name == "macsec")
    {
        if(macsec == nullptr)
        {
            macsec = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Macsec>();
        }
        return macsec;
    }

    if(child_yang_name == "mdix")
    {
        if(mdix == nullptr)
        {
            mdix = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mdix>();
        }
        return mdix;
    }

    if(child_yang_name == "mop")
    {
        if(mop == nullptr)
        {
            mop = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mop>();
        }
        return mop;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "negotiation")
    {
        if(negotiation == nullptr)
        {
            negotiation = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Negotiation>();
        }
        return negotiation;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "plim")
    {
        if(plim == nullptr)
        {
            plim = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim>();
        }
        return plim;
    }

    if(child_yang_name == "pm-path")
    {
        if(pm_path == nullptr)
        {
            pm_path = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::PmPath>();
        }
        return pm_path;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "priority-queue")
    {
        if(priority_queue == nullptr)
        {
            priority_queue = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::PriorityQueue>();
        }
        return priority_queue;
    }

    if(child_yang_name == "rcv-queue")
    {
        if(rcv_queue == nullptr)
        {
            rcv_queue = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::RcvQueue>();
        }
        return rcv_queue;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service>();
        }
        return service;
    }

    if(child_yang_name == "speed")
    {
        if(speed == nullptr)
        {
            speed = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Speed>();
        }
        return speed;
    }

    if(child_yang_name == "srr-queue")
    {
        if(srr_queue == nullptr)
        {
            srr_queue = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue>();
        }
        return srr_queue;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switch")
    {
        if(switch == nullptr)
        {
            switch = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switch>();
        }
        return switch;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "switchport-conf")
    {
        if(switchport_conf == nullptr)
        {
            switchport_conf = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf>();
        }
        return switchport_conf;
    }

    if(child_yang_name == "synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Synchronous>();
        }
        return synchronous;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Utd>();
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
        auto c = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::get_children() const
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

    if(cemoudp != nullptr)
    {
        children["cemoudp"] = cemoudp;
    }

    if(channel_group != nullptr)
    {
        children["channel-group"] = channel_group;
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

    if(domain != nullptr)
    {
        children["domain"] = domain;
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

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(plim != nullptr)
    {
        children["plim"] = plim;
    }

    if(pm_path != nullptr)
    {
        children["pm-path"] = pm_path;
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

    if(switch != nullptr)
    {
        children["switch"] = switch;
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

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "channel-protocol")
    {
        channel_protocol = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "duplex")
    {
        duplex = value;
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

Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::SwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{
    yang_name = "switchport-conf"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::~SwitchportConf()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::has_data() const
{
    return switchport.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::has_operation() const
{
    return is_set(operation)
	|| is_set(switchport.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport-conf";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switchport")
    {
        switchport = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Switchport()
    :
    host{YType::empty, "Cisco-IOS-XE-switch:host"},
    nonegotiate{YType::empty, "Cisco-IOS-XE-switch:nonegotiate"},
    protected_{YType::empty, "Cisco-IOS-XE-switch:protected"}
    	,
    access(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access>())
	,autostate(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate>())
	,block(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block>())
	,mode(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,priority(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority>())
	,private_vlan(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan>())
	,trunk(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk>())
	,voice(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice>())
{
    access->parent = this;

    autostate->parent = this;

    block->parent = this;

    mode->parent = this;

    priority->parent = this;

    private_vlan->parent = this;

    trunk->parent = this;

    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::~Switchport()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::has_data() const
{
    return host.is_set
	|| nonegotiate.is_set
	|| protected_.is_set
	|| (access !=  nullptr && access->has_data())
	|| (autostate !=  nullptr && autostate->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (private_vlan !=  nullptr && private_vlan->has_data())
	|| (trunk !=  nullptr && trunk->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::has_operation() const
{
    return is_set(operation)
	|| is_set(host.operation)
	|| is_set(nonegotiate.operation)
	|| is_set(protected_.operation)
	|| (access !=  nullptr && access->has_operation())
	|| (autostate !=  nullptr && autostate->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (private_vlan !=  nullptr && private_vlan->has_operation())
	|| (trunk !=  nullptr && trunk->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::get_entity_path(Entity* ancestor) const
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

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (nonegotiate.is_set || is_set(nonegotiate.operation)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.operation)) leaf_name_data.push_back(protected_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "autostate")
    {
        if(autostate == nullptr)
        {
            autostate = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate>();
        }
        return autostate;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan>();
        }
        return private_vlan;
    }

    if(child_yang_name == "trunk")
    {
        if(trunk == nullptr)
        {
            trunk = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk>();
        }
        return trunk;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(autostate != nullptr)
    {
        children["autostate"] = autostate;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(private_vlan != nullptr)
    {
        children["private-vlan"] = private_vlan;
    }

    if(trunk != nullptr)
    {
        children["trunk"] = trunk;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
    }
    if(value_path == "protected")
    {
        protected_ = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Access()
    :
    vlan(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan>())
{
    vlan->parent = this;

    yang_name = "access"; yang_parent_name = "switchport";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::~Access()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::has_operation() const
{
    return is_set(operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:access";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Access' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::Vlan()
    :
    name{YType::str, "name"},
    vlan{YType::str, "vlan"}
{
    yang_name = "vlan"; yang_parent_name = "access";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::~Vlan()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::has_data() const
{
    return name.is_set
	|| vlan.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::Block()
    :
    multicast{YType::empty, "multicast"},
    unicast{YType::empty, "unicast"}
{
    yang_name = "block"; yang_parent_name = "switchport";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::~Block()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::has_data() const
{
    return multicast.is_set
	|| unicast.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::has_operation() const
{
    return is_set(operation)
	|| is_set(multicast.operation)
	|| is_set(unicast.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:block";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Block' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Mode()
    :
    dynamic{YType::enumeration, "dynamic"}
    	,
    access(nullptr) // presence node
	,dot1q_tunnel(nullptr) // presence node
	,private_vlan(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan>())
	,trunk(nullptr) // presence node
{
    private_vlan->parent = this;

    yang_name = "mode"; yang_parent_name = "switchport";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::~Mode()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::has_data() const
{
    return dynamic.is_set
	|| (access !=  nullptr && access->has_data())
	|| (dot1q_tunnel !=  nullptr && dot1q_tunnel->has_data())
	|| (private_vlan !=  nullptr && private_vlan->has_data())
	|| (trunk !=  nullptr && trunk->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| (access !=  nullptr && access->has_operation())
	|| (dot1q_tunnel !=  nullptr && dot1q_tunnel->has_operation())
	|| (private_vlan !=  nullptr && private_vlan->has_operation())
	|| (trunk !=  nullptr && trunk->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mode";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access>();
        }
        return access;
    }

    if(child_yang_name == "dot1q-tunnel")
    {
        if(dot1q_tunnel == nullptr)
        {
            dot1q_tunnel = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1QTunnel>();
        }
        return dot1q_tunnel;
    }

    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan>();
        }
        return private_vlan;
    }

    if(child_yang_name == "trunk")
    {
        if(trunk == nullptr)
        {
            trunk = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk>();
        }
        return trunk;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(dot1q_tunnel != nullptr)
    {
        children["dot1q-tunnel"] = dot1q_tunnel;
    }

    if(private_vlan != nullptr)
    {
        children["private-vlan"] = private_vlan;
    }

    if(trunk != nullptr)
    {
        children["trunk"] = trunk;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::Access()
{
    yang_name = "access"; yang_parent_name = "mode";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::~Access()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::has_data() const
{
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Access' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1QTunnel::Dot1QTunnel()
{
    yang_name = "dot1q-tunnel"; yang_parent_name = "mode";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1QTunnel::~Dot1QTunnel()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1QTunnel::has_data() const
{
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1QTunnel::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1QTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q-tunnel";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1QTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1QTunnel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1QTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1QTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1QTunnel::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::PrivateVlan()
    :
    host{YType::empty, "host"},
    promiscuous{YType::empty, "promiscuous"}
{
    yang_name = "private-vlan"; yang_parent_name = "mode";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::~PrivateVlan()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::has_data() const
{
    return host.is_set
	|| promiscuous.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::has_operation() const
{
    return is_set(operation)
	|| is_set(host.operation)
	|| is_set(promiscuous.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrivateVlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (promiscuous.is_set || is_set(promiscuous.operation)) leaf_name_data.push_back(promiscuous.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "promiscuous")
    {
        promiscuous = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::Trunk()
{
    yang_name = "trunk"; yang_parent_name = "mode";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::~Trunk()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::has_data() const
{
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trunk' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::PortSecurity()
    :
    violation{YType::enumeration, "violation"}
    	,
    aging(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging>())
	,mac_address(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress>())
	,maximum(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum>())
{
    aging->parent = this;

    mac_address->parent = this;

    maximum->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::has_data() const
{
    return violation.is_set
	|| (aging !=  nullptr && aging->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::has_operation() const
{
    return is_set(operation)
	|| is_set(violation.operation)
	|| (aging !=  nullptr && aging->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:port-security";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortSecurity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (violation.is_set || is_set(violation.operation)) leaf_name_data.push_back(violation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "violation")
    {
        violation = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"},
    type{YType::enumeration, "type"}
{
    yang_name = "aging"; yang_parent_name = "port-security";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| type.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(operation)
	|| is_set(static_.operation)
	|| is_set(time.operation)
	|| is_set(type.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aging' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "static")
    {
        static_ = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::MacAddress()
    :
    hw_address{YType::str, "hw-address"},
    sticky{YType::empty, "sticky"},
    vlan{YType::uint16, "vlan"}
{
    yang_name = "mac-address"; yang_parent_name = "port-security";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::~MacAddress()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::has_data() const
{
    return hw_address.is_set
	|| sticky.is_set
	|| vlan.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(hw_address.operation)
	|| is_set(sticky.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_address.is_set || is_set(hw_address.operation)) leaf_name_data.push_back(hw_address.get_name_leafdata());
    if (sticky.is_set || is_set(sticky.operation)) leaf_name_data.push_back(sticky.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hw-address")
    {
        hw_address = value;
    }
    if(value_path == "sticky")
    {
        sticky = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::Maximum()
    :
    max_addresses{YType::uint16, "max-addresses"},
    vlan{YType::str, "vlan"}
{
    yang_name = "maximum"; yang_parent_name = "port-security";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::has_data() const
{
    return max_addresses.is_set
	|| vlan.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::has_operation() const
{
    return is_set(operation)
	|| is_set(max_addresses.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Maximum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_addresses.is_set || is_set(max_addresses.operation)) leaf_name_data.push_back(max_addresses.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-addresses")
    {
        max_addresses = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Trunk()
    :
    encapsulation{YType::enumeration, "encapsulation"}
    	,
    allowed(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed>())
	,native(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_>())
	,pruning(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning>())
{
    allowed->parent = this;

    native->parent = this;

    pruning->parent = this;

    yang_name = "trunk"; yang_parent_name = "switchport";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::~Trunk()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::has_data() const
{
    return encapsulation.is_set
	|| (allowed !=  nullptr && allowed->has_data())
	|| (native !=  nullptr && native->has_data())
	|| (pruning !=  nullptr && pruning->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::has_operation() const
{
    return is_set(operation)
	|| is_set(encapsulation.operation)
	|| (allowed !=  nullptr && allowed->has_operation())
	|| (native !=  nullptr && native->has_operation())
	|| (pruning !=  nullptr && pruning->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:trunk";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trunk' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allowed")
    {
        if(allowed == nullptr)
        {
            allowed = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed>();
        }
        return allowed;
    }

    if(child_yang_name == "native")
    {
        if(native == nullptr)
        {
            native = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_>();
        }
        return native;
    }

    if(child_yang_name == "pruning")
    {
        if(pruning == nullptr)
        {
            pruning = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning>();
        }
        return pruning;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allowed != nullptr)
    {
        children["allowed"] = allowed;
    }

    if(native != nullptr)
    {
        children["native"] = native;
    }

    if(pruning != nullptr)
    {
        children["pruning"] = pruning;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Allowed()
    :
    vlan(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan>())
{
    vlan->parent = this;

    yang_name = "allowed"; yang_parent_name = "trunk";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::~Allowed()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::has_operation() const
{
    return is_set(operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowed";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Allowed' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::Vlan()
    :
    add{YType::str, "add"},
    all{YType::empty, "all"},
    except{YType::str, "except"},
    none{YType::empty, "none"},
    remove{YType::str, "remove"},
    vlans{YType::str, "vlans"}
{
    yang_name = "vlan"; yang_parent_name = "allowed";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::~Vlan()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::has_data() const
{
    for (auto const & leaf : except.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return add.is_set
	|| all.is_set
	|| none.is_set
	|| remove.is_set
	|| vlans.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::has_operation() const
{
    for (auto const & leaf : except.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(add.operation)
	|| is_set(all.operation)
	|| is_set(except.operation)
	|| is_set(none.operation)
	|| is_set(remove.operation)
	|| is_set(vlans.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.operation)) leaf_name_data.push_back(add.get_name_leafdata());
    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (remove.is_set || is_set(remove.operation)) leaf_name_data.push_back(remove.get_name_leafdata());
    if (vlans.is_set || is_set(vlans.operation)) leaf_name_data.push_back(vlans.get_name_leafdata());

    auto except_name_datas = except.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), except_name_datas.begin(), except_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "add")
    {
        add = value;
    }
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "except")
    {
        except.append(value);
    }
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "remove")
    {
        remove = value;
    }
    if(value_path == "vlans")
    {
        vlans = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::Native_()
    :
    vlan{YType::str, "vlan"}
{
    yang_name = "native"; yang_parent_name = "trunk";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::~Native_()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::has_data() const
{
    return vlan.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Native_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Pruning()
    :
    vlan(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan>())
{
    vlan->parent = this;

    yang_name = "pruning"; yang_parent_name = "trunk";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::~Pruning()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::has_operation() const
{
    return is_set(operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pruning";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pruning' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::Vlan()
    :
    add{YType::str, "add"},
    except{YType::str, "except"},
    none{YType::empty, "none"},
    remove{YType::str, "remove"},
    vlans{YType::str, "vlans"}
{
    yang_name = "vlan"; yang_parent_name = "pruning";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::~Vlan()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::has_data() const
{
    for (auto const & leaf : except.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : vlans.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return add.is_set
	|| none.is_set
	|| remove.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::has_operation() const
{
    for (auto const & leaf : except.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : vlans.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(add.operation)
	|| is_set(except.operation)
	|| is_set(none.operation)
	|| is_set(remove.operation)
	|| is_set(vlans.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.operation)) leaf_name_data.push_back(add.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (remove.is_set || is_set(remove.operation)) leaf_name_data.push_back(remove.get_name_leafdata());

    auto except_name_datas = except.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), except_name_datas.begin(), except_name_datas.end());
    auto vlans_name_datas = vlans.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlans_name_datas.begin(), vlans_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "add")
    {
        add = value;
    }
    if(value_path == "except")
    {
        except.append(value);
    }
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "remove")
    {
        remove = value;
    }
    if(value_path == "vlans")
    {
        vlans.append(value);
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Voice()
    :
    detect(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect>())
	,vlan(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan>())
{
    detect->parent = this;

    vlan->parent = this;

    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::~Voice()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::has_data() const
{
    return (detect !=  nullptr && detect->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::has_operation() const
{
    return is_set(operation)
	|| (detect !=  nullptr && detect->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:voice";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Voice' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detect")
    {
        if(detect == nullptr)
        {
            detect = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect>();
        }
        return detect;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detect != nullptr)
    {
        children["detect"] = detect;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::Vlan()
    :
    name{YType::str, "name"},
    vlan{YType::str, "vlan"}
{
    yang_name = "vlan"; yang_parent_name = "voice";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::~Vlan()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::has_data() const
{
    return name.is_set
	|| vlan.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::Detect()
    :
    cisco_phone(nullptr) // presence node
{
    yang_name = "detect"; yang_parent_name = "voice";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::~Detect()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::has_data() const
{
    return (cisco_phone !=  nullptr && cisco_phone->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::has_operation() const
{
    return is_set(operation)
	|| (cisco_phone !=  nullptr && cisco_phone->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detect";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Detect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco-phone")
    {
        if(cisco_phone == nullptr)
        {
            cisco_phone = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone>();
        }
        return cisco_phone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco_phone != nullptr)
    {
        children["cisco-phone"] = cisco_phone;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::CiscoPhone()
    :
    full_duplex{YType::empty, "full-duplex"}
{
    yang_name = "cisco-phone"; yang_parent_name = "detect";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::~CiscoPhone()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::has_data() const
{
    return full_duplex.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::has_operation() const
{
    return is_set(operation)
	|| is_set(full_duplex.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-phone";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoPhone' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_duplex.is_set || is_set(full_duplex.operation)) leaf_name_data.push_back(full_duplex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "full-duplex")
    {
        full_duplex = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Priority()
    :
    extend(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend>())
{
    extend->parent = this;

    yang_name = "priority"; yang_parent_name = "switchport";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::~Priority()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::has_data() const
{
    return (extend !=  nullptr && extend->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::has_operation() const
{
    return is_set(operation)
	|| (extend !=  nullptr && extend->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extend")
    {
        if(extend == nullptr)
        {
            extend = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend>();
        }
        return extend;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(extend != nullptr)
    {
        children["extend"] = extend;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::Extend()
    :
    cos{YType::uint8, "cos"},
    trust{YType::empty, "trust"}
{
    yang_name = "extend"; yang_parent_name = "priority";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::~Extend()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::has_data() const
{
    return cos.is_set
	|| trust.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(trust.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extend";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Extend' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (trust.is_set || is_set(trust.operation)) leaf_name_data.push_back(trust.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos = value;
    }
    if(value_path == "trust")
    {
        trust = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::Autostate()
    :
    exclude{YType::empty, "exclude"}
{
    yang_name = "autostate"; yang_parent_name = "switchport";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::~Autostate()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::has_data() const
{
    return exclude.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::has_operation() const
{
    return is_set(operation)
	|| is_set(exclude.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:autostate";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autostate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude.is_set || is_set(exclude.operation)) leaf_name_data.push_back(exclude.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclude")
    {
        exclude = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::PrivateVlan()
    :
    association(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association>())
	,host_association(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation>())
	,mapping(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping>())
{
    association->parent = this;

    host_association->parent = this;

    mapping->parent = this;

    yang_name = "private-vlan"; yang_parent_name = "switchport";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::~PrivateVlan()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::has_data() const
{
    return (association !=  nullptr && association->has_data())
	|| (host_association !=  nullptr && host_association->has_data())
	|| (mapping !=  nullptr && mapping->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::has_operation() const
{
    return is_set(operation)
	|| (association !=  nullptr && association->has_operation())
	|| (host_association !=  nullptr && host_association->has_operation())
	|| (mapping !=  nullptr && mapping->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:private-vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrivateVlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association>();
        }
        return association;
    }

    if(child_yang_name == "host-association")
    {
        if(host_association == nullptr)
        {
            host_association = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation>();
        }
        return host_association;
    }

    if(child_yang_name == "mapping")
    {
        if(mapping == nullptr)
        {
            mapping = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping>();
        }
        return mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(association != nullptr)
    {
        children["association"] = association;
    }

    if(host_association != nullptr)
    {
        children["host-association"] = host_association;
    }

    if(mapping != nullptr)
    {
        children["mapping"] = mapping;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Association()
    :
    host(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host>())
	,mapping(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping>())
{
    host->parent = this;

    mapping->parent = this;

    yang_name = "association"; yang_parent_name = "private-vlan";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::~Association()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::has_data() const
{
    return (host !=  nullptr && host->has_data())
	|| (mapping !=  nullptr && mapping->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::has_operation() const
{
    return is_set(operation)
	|| (host !=  nullptr && host->has_operation())
	|| (mapping !=  nullptr && mapping->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Association' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host>();
        }
        return host;
    }

    if(child_yang_name == "mapping")
    {
        if(mapping == nullptr)
        {
            mapping = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping>();
        }
        return mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host != nullptr)
    {
        children["host"] = host;
    }

    if(mapping != nullptr)
    {
        children["mapping"] = mapping;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::Host()
    :
    primary_range{YType::uint16, "primary-range"},
    secondary_range{YType::uint16, "secondary-range"}
{
    yang_name = "host"; yang_parent_name = "association";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::~Host()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::has_data() const
{
    return primary_range.is_set
	|| secondary_range.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::has_operation() const
{
    return is_set(operation)
	|| is_set(primary_range.operation)
	|| is_set(secondary_range.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary_range.is_set || is_set(primary_range.operation)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.operation)) leaf_name_data.push_back(secondary_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "primary-range")
    {
        primary_range = value;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::Mapping()
    :
    add{YType::str, "add"},
    primary_range{YType::uint16, "primary-range"},
    remove{YType::str, "remove"},
    secondary_range{YType::str, "secondary-range"}
{
    yang_name = "mapping"; yang_parent_name = "association";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::~Mapping()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::has_data() const
{
    return add.is_set
	|| primary_range.is_set
	|| remove.is_set
	|| secondary_range.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::has_operation() const
{
    return is_set(operation)
	|| is_set(add.operation)
	|| is_set(primary_range.operation)
	|| is_set(remove.operation)
	|| is_set(secondary_range.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.operation)) leaf_name_data.push_back(add.get_name_leafdata());
    if (primary_range.is_set || is_set(primary_range.operation)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (remove.is_set || is_set(remove.operation)) leaf_name_data.push_back(remove.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.operation)) leaf_name_data.push_back(secondary_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "add")
    {
        add = value;
    }
    if(value_path == "primary-range")
    {
        primary_range = value;
    }
    if(value_path == "remove")
    {
        remove = value;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::HostAssociation()
    :
    primary_range{YType::uint16, "primary-range"},
    secondary_range{YType::uint16, "secondary-range"}
{
    yang_name = "host-association"; yang_parent_name = "private-vlan";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::~HostAssociation()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::has_data() const
{
    return primary_range.is_set
	|| secondary_range.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::has_operation() const
{
    return is_set(operation)
	|| is_set(primary_range.operation)
	|| is_set(secondary_range.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-association";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HostAssociation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary_range.is_set || is_set(primary_range.operation)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.operation)) leaf_name_data.push_back(secondary_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "primary-range")
    {
        primary_range = value;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::Mapping()
    :
    add{YType::str, "add"},
    primary_range{YType::uint16, "primary-range"},
    remove{YType::str, "remove"},
    secondary_range{YType::str, "secondary-range"}
{
    yang_name = "mapping"; yang_parent_name = "private-vlan";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::~Mapping()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::has_data() const
{
    return add.is_set
	|| primary_range.is_set
	|| remove.is_set
	|| secondary_range.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::has_operation() const
{
    return is_set(operation)
	|| is_set(add.operation)
	|| is_set(primary_range.operation)
	|| is_set(remove.operation)
	|| is_set(secondary_range.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.operation)) leaf_name_data.push_back(add.get_name_leafdata());
    if (primary_range.is_set || is_set(primary_range.operation)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (remove.is_set || is_set(remove.operation)) leaf_name_data.push_back(remove.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.operation)) leaf_name_data.push_back(secondary_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "add")
    {
        add = value;
    }
    if(value_path == "primary-range")
    {
        primary_range = value;
    }
    if(value_path == "remove")
    {
        remove = value;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Arp::Arp()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "arp"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Arp::~Arp()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Arp::has_data() const
{
    return timeout.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Arp::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Arp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Arp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay>())
	,interface(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_>())
	,load(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load>())
{
    delay->parent = this;

    interface->parent = this;

    load->parent = this;

    yang_name = "backup"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::~Backup()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Backup::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Backup::get_children() const
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

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{
    yang_name = "delay"; yang_parent_name = "backup";
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::~Delay()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::has_data() const
{
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(failure.operation)
	|| is_set(secondary_disable.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::set_value(const std::string & value_path, std::string value)
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

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::Interface_()
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
    atm_acrsubinterface(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backup";
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::~Interface_()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::has_data() const
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

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::has_operation() const
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

std::string Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::get_children() const
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

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::set_value(const std::string & value_path, std::string value)
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

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LispSubinterface::~LispSubinterface()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LispSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::PortChannelSubinterface_()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::~PortChannelSubinterface_()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::has_data() const
{
    return port_channel.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{
    yang_name = "load"; yang_parent_name = "backup";
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::~Load()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::has_data() const
{
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::has_operation() const
{
    return is_set(operation)
	|| is_set(kickin.operation)
	|| is_set(kickout.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::set_value(const std::string & value_path, std::string value)
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

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::AllEnum::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::DatabaseFilter::AllEnum::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::AllEnum::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Authentication::ControlDirectionEnum::both {0, "both"};
const Enum::YLeaf Native::Interface::PortChannel::Authentication::ControlDirectionEnum::in {1, "in"};

const Enum::YLeaf Native::Interface::PortChannel::Authentication::HostModeEnum::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::PortChannel::Authentication::HostModeEnum::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::PortChannel::Authentication::HostModeEnum::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::PortChannel::Authentication::HostModeEnum::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::PortChannel::Authentication::PortControlEnum::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::PortChannel::Authentication::PortControlEnum::force_authorized {1, "force-authorized"};
const Enum::YLeaf Native::Interface::PortChannel::Authentication::PortControlEnum::force_unauthorized {2, "force-unauthorized"};

const Enum::YLeaf Native::Interface::PortChannel::Authentication::ViolationEnum::protect {0, "protect"};
const Enum::YLeaf Native::Interface::PortChannel::Authentication::ViolationEnum::replace {1, "replace"};
const Enum::YLeaf Native::Interface::PortChannel::Authentication::ViolationEnum::restrict {2, "restrict"};
const Enum::YLeaf Native::Interface::PortChannel::Authentication::ViolationEnum::shutdown {3, "shutdown"};

const Enum::YLeaf Native::Interface::PortChannel::SpanningTree::BpdufilterEnum::disable {0, "disable"};
const Enum::YLeaf Native::Interface::PortChannel::SpanningTree::BpdufilterEnum::enable {1, "enable"};

const Enum::YLeaf Native::Interface::PortChannel::SpanningTree::GuardEnum::loop {0, "loop"};
const Enum::YLeaf Native::Interface::PortChannel::SpanningTree::GuardEnum::none {1, "none"};
const Enum::YLeaf Native::Interface::PortChannel::SpanningTree::GuardEnum::root {2, "root"};

const Enum::YLeaf Native::Interface::PortChannel::SpanningTree::LinkTypeEnum::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::PortChannel::SpanningTree::LinkTypeEnum::none {1, "none"};
const Enum::YLeaf Native::Interface::PortChannel::SpanningTree::LinkTypeEnum::point_to_point {2, "point-to-point"};
const Enum::YLeaf Native::Interface::PortChannel::SpanningTree::LinkTypeEnum::root {3, "root"};
const Enum::YLeaf Native::Interface::PortChannel::SpanningTree::LinkTypeEnum::shared {4, "shared"};

const Enum::YLeaf Native::Interface::PortChannel::Datalink::Flow::Monitor::InputOutputEnum::input {0, "input"};
const Enum::YLeaf Native::Interface::PortChannel::Datalink::Flow::Monitor::InputOutputEnum::output {1, "output"};

const Enum::YLeaf Native::Interface::PortChannel::Mac::AccessGroup::AclName::ApplyToEnum::in {0, "in"};
const Enum::YLeaf Native::Interface::PortChannel::Mac::AccessGroup::AclName::ApplyToEnum::out {1, "out"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::IfStateEnum::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::ServiceInsertionEnum::waas {0, "waas"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::ChannelProtocolEnum::lacp {0, "lacp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::ChannelProtocolEnum::pagp {1, "pagp"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::DuplexEnum::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::DuplexEnum::full {1, "full"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::DuplexEnum::half {2, "half"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::VlanEnum::dynamic {0, "dynamic"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::DynamicEnum::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::DynamicEnum::desirable {1, "desirable"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::ViolationEnum::protect {0, "protect"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::ViolationEnum::restrict {1, "restrict"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::ViolationEnum::shutdown {2, "shutdown"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::TypeEnum::absolute {0, "absolute"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::TypeEnum::inactivity {1, "inactivity"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::EncapsulationEnum::dot1q {0, "dot1q"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::EncapsulationEnum::isl {1, "isl"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::EncapsulationEnum::negotiate {2, "negotiate"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::VlanEnum::tag {0, "tag"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::VlanEnum::dot1p {0, "dot1p"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::VlanEnum::none {1, "none"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::VlanEnum::untagged {2, "untagged"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::FailureEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::SecondaryDisableEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::KickinEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::KickoutEnum::never {0, "never"};


}
}

