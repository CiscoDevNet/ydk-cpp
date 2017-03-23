
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_1.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_clns_isis_oper {

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::Added()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "added"; yang_parent_name = "item-counts";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::~Added()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "added";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Added' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::Deleted()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "deleted"; yang_parent_name = "item-counts";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::~Deleted()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deleted";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deleted' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::Modified()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "modified"; yang_parent_name = "item-counts";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::~Modified()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modified";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Modified' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::Touched()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "touched"; yang_parent_name = "item-counts";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::~Touched()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "touched";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Touched' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::RouteCounts()
    :
    added(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added>())
	,deleted(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted>())
	,modified(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified>())
	,reachable(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable>())
	,touched(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched>())
	,unreachable(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable>())
{
    added->parent = this;
    children["added"] = added;

    deleted->parent = this;
    children["deleted"] = deleted;

    modified->parent = this;
    children["modified"] = modified;

    reachable->parent = this;
    children["reachable"] = reachable;

    touched->parent = this;
    children["touched"] = touched;

    unreachable->parent = this;
    children["unreachable"] = unreachable;

    yang_name = "route-counts"; yang_parent_name = "route-update-statistics";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::~RouteCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::has_data() const
{
    return (added !=  nullptr && added->has_data())
	|| (deleted !=  nullptr && deleted->has_data())
	|| (modified !=  nullptr && modified->has_data())
	|| (reachable !=  nullptr && reachable->has_data())
	|| (touched !=  nullptr && touched->has_data())
	|| (unreachable !=  nullptr && unreachable->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::has_operation() const
{
    return is_set(operation)
	|| (added !=  nullptr && added->has_operation())
	|| (deleted !=  nullptr && deleted->has_operation())
	|| (modified !=  nullptr && modified->has_operation())
	|| (reachable !=  nullptr && reachable->has_operation())
	|| (touched !=  nullptr && touched->has_operation())
	|| (unreachable !=  nullptr && unreachable->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-counts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteCounts' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "added")
    {
        if(added != nullptr)
        {
            children["added"] = added;
        }
        else
        {
            added = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added>();
            added->parent = this;
            children["added"] = added;
        }
        return children.at("added");
    }

    if(child_yang_name == "deleted")
    {
        if(deleted != nullptr)
        {
            children["deleted"] = deleted;
        }
        else
        {
            deleted = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted>();
            deleted->parent = this;
            children["deleted"] = deleted;
        }
        return children.at("deleted");
    }

    if(child_yang_name == "modified")
    {
        if(modified != nullptr)
        {
            children["modified"] = modified;
        }
        else
        {
            modified = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified>();
            modified->parent = this;
            children["modified"] = modified;
        }
        return children.at("modified");
    }

    if(child_yang_name == "reachable")
    {
        if(reachable != nullptr)
        {
            children["reachable"] = reachable;
        }
        else
        {
            reachable = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable>();
            reachable->parent = this;
            children["reachable"] = reachable;
        }
        return children.at("reachable");
    }

    if(child_yang_name == "touched")
    {
        if(touched != nullptr)
        {
            children["touched"] = touched;
        }
        else
        {
            touched = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched>();
            touched->parent = this;
            children["touched"] = touched;
        }
        return children.at("touched");
    }

    if(child_yang_name == "unreachable")
    {
        if(unreachable != nullptr)
        {
            children["unreachable"] = unreachable;
        }
        else
        {
            unreachable = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable>();
            unreachable->parent = this;
            children["unreachable"] = unreachable;
        }
        return children.at("unreachable");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::get_children()
{
    if(children.find("added") == children.end())
    {
        if(added != nullptr)
        {
            children["added"] = added;
        }
    }

    if(children.find("deleted") == children.end())
    {
        if(deleted != nullptr)
        {
            children["deleted"] = deleted;
        }
    }

    if(children.find("modified") == children.end())
    {
        if(modified != nullptr)
        {
            children["modified"] = modified;
        }
    }

    if(children.find("reachable") == children.end())
    {
        if(reachable != nullptr)
        {
            children["reachable"] = reachable;
        }
    }

    if(children.find("touched") == children.end())
    {
        if(touched != nullptr)
        {
            children["touched"] = touched;
        }
    }

    if(children.find("unreachable") == children.end())
    {
        if(unreachable != nullptr)
        {
            children["unreachable"] = unreachable;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::Unreachable()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "unreachable"; yang_parent_name = "route-counts";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::~Unreachable()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unreachable' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::Reachable()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "reachable"; yang_parent_name = "route-counts";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::~Reachable()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reachable' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::Added()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "added"; yang_parent_name = "route-counts";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::~Added()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "added";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Added' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::Deleted()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "deleted"; yang_parent_name = "route-counts";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::~Deleted()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deleted";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deleted' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::Modified()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "modified"; yang_parent_name = "route-counts";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::~Modified()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modified";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Modified' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::Touched()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "touched"; yang_parent_name = "route-counts";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::~Touched()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "touched";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Touched' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::RibBatchCounts()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "rib-batch-counts"; yang_parent_name = "route-update-statistics";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::~RibBatchCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-batch-counts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibBatchCounts' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnels()
{
    yang_name = "te-tunnels"; yang_parent_name = "topology-level";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::~TeTunnels()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::has_data() const
{
    for (std::size_t index=0; index<te_tunnel.size(); index++)
    {
        if(te_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::has_operation() const
{
    for (std::size_t index=0; index<te_tunnel.size(); index++)
    {
        if(te_tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-tunnels";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeTunnels' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "te-tunnel")
    {
        for(auto const & c : te_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel>();
        c->parent = this;
        te_tunnel.push_back(std::move(c));
        children[segment_path] = te_tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::get_children()
{
    for (auto const & c : te_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::TeTunnel()
    :
    interface_name{YType::str, "interface-name"},
    system_id{YType::str, "system-id"},
    te_bandwidth{YType::uint32, "te-bandwidth"},
    te_checkpoint_object_id{YType::uint32, "te-checkpoint-object-id"},
    te_interface{YType::str, "te-interface"},
    te_mode_type{YType::enumeration, "te-mode-type"},
    te_next_hop_ip_address{YType::str, "te-next-hop-ip-address"},
    te_segment_routing_enabled{YType::boolean, "te-segment-routing-enabled"},
    te_segment_routing_exclude{YType::boolean, "te-segment-routing-exclude"},
    te_segment_routing_strict_spf{YType::boolean, "te-segment-routing-strict-spf"},
    te_system_id{YType::str, "te-system-id"},
    teigp_metric{YType::int32, "teigp-metric"},
    teipv4aa_enabled{YType::boolean, "teipv4aa-enabled"},
    teipv4fa_enabled{YType::boolean, "teipv4fa-enabled"},
    teipv6aa_enabled{YType::boolean, "teipv6aa-enabled"},
    teipv6fa_enabled{YType::boolean, "teipv6fa-enabled"}
{
    yang_name = "te-tunnel"; yang_parent_name = "te-tunnels";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::~TeTunnel()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::has_data() const
{
    return interface_name.is_set
	|| system_id.is_set
	|| te_bandwidth.is_set
	|| te_checkpoint_object_id.is_set
	|| te_interface.is_set
	|| te_mode_type.is_set
	|| te_next_hop_ip_address.is_set
	|| te_segment_routing_enabled.is_set
	|| te_segment_routing_exclude.is_set
	|| te_segment_routing_strict_spf.is_set
	|| te_system_id.is_set
	|| teigp_metric.is_set
	|| teipv4aa_enabled.is_set
	|| teipv4fa_enabled.is_set
	|| teipv6aa_enabled.is_set
	|| teipv6fa_enabled.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(system_id.operation)
	|| is_set(te_bandwidth.operation)
	|| is_set(te_checkpoint_object_id.operation)
	|| is_set(te_interface.operation)
	|| is_set(te_mode_type.operation)
	|| is_set(te_next_hop_ip_address.operation)
	|| is_set(te_segment_routing_enabled.operation)
	|| is_set(te_segment_routing_exclude.operation)
	|| is_set(te_segment_routing_strict_spf.operation)
	|| is_set(te_system_id.operation)
	|| is_set(teigp_metric.operation)
	|| is_set(teipv4aa_enabled.operation)
	|| is_set(teipv4fa_enabled.operation)
	|| is_set(teipv6aa_enabled.operation)
	|| is_set(teipv6fa_enabled.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-tunnel";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeTunnel' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.operation)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (te_bandwidth.is_set || is_set(te_bandwidth.operation)) leaf_name_data.push_back(te_bandwidth.get_name_leafdata());
    if (te_checkpoint_object_id.is_set || is_set(te_checkpoint_object_id.operation)) leaf_name_data.push_back(te_checkpoint_object_id.get_name_leafdata());
    if (te_interface.is_set || is_set(te_interface.operation)) leaf_name_data.push_back(te_interface.get_name_leafdata());
    if (te_mode_type.is_set || is_set(te_mode_type.operation)) leaf_name_data.push_back(te_mode_type.get_name_leafdata());
    if (te_next_hop_ip_address.is_set || is_set(te_next_hop_ip_address.operation)) leaf_name_data.push_back(te_next_hop_ip_address.get_name_leafdata());
    if (te_segment_routing_enabled.is_set || is_set(te_segment_routing_enabled.operation)) leaf_name_data.push_back(te_segment_routing_enabled.get_name_leafdata());
    if (te_segment_routing_exclude.is_set || is_set(te_segment_routing_exclude.operation)) leaf_name_data.push_back(te_segment_routing_exclude.get_name_leafdata());
    if (te_segment_routing_strict_spf.is_set || is_set(te_segment_routing_strict_spf.operation)) leaf_name_data.push_back(te_segment_routing_strict_spf.get_name_leafdata());
    if (te_system_id.is_set || is_set(te_system_id.operation)) leaf_name_data.push_back(te_system_id.get_name_leafdata());
    if (teigp_metric.is_set || is_set(teigp_metric.operation)) leaf_name_data.push_back(teigp_metric.get_name_leafdata());
    if (teipv4aa_enabled.is_set || is_set(teipv4aa_enabled.operation)) leaf_name_data.push_back(teipv4aa_enabled.get_name_leafdata());
    if (teipv4fa_enabled.is_set || is_set(teipv4fa_enabled.operation)) leaf_name_data.push_back(teipv4fa_enabled.get_name_leafdata());
    if (teipv6aa_enabled.is_set || is_set(teipv6aa_enabled.operation)) leaf_name_data.push_back(teipv6aa_enabled.get_name_leafdata());
    if (teipv6fa_enabled.is_set || is_set(teipv6fa_enabled.operation)) leaf_name_data.push_back(teipv6fa_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "system-id")
    {
        system_id = value;
    }
    if(value_path == "te-bandwidth")
    {
        te_bandwidth = value;
    }
    if(value_path == "te-checkpoint-object-id")
    {
        te_checkpoint_object_id = value;
    }
    if(value_path == "te-interface")
    {
        te_interface = value;
    }
    if(value_path == "te-mode-type")
    {
        te_mode_type = value;
    }
    if(value_path == "te-next-hop-ip-address")
    {
        te_next_hop_ip_address = value;
    }
    if(value_path == "te-segment-routing-enabled")
    {
        te_segment_routing_enabled = value;
    }
    if(value_path == "te-segment-routing-exclude")
    {
        te_segment_routing_exclude = value;
    }
    if(value_path == "te-segment-routing-strict-spf")
    {
        te_segment_routing_strict_spf = value;
    }
    if(value_path == "te-system-id")
    {
        te_system_id = value;
    }
    if(value_path == "teigp-metric")
    {
        teigp_metric = value;
    }
    if(value_path == "teipv4aa-enabled")
    {
        teipv4aa_enabled = value;
    }
    if(value_path == "teipv4fa-enabled")
    {
        teipv4fa_enabled = value;
    }
    if(value_path == "teipv6aa-enabled")
    {
        teipv6aa_enabled = value;
    }
    if(value_path == "teipv6fa-enabled")
    {
        teipv6fa_enabled = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopologies()
{
    yang_name = "ipv4-link-topologies"; yang_parent_name = "topology-level";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::~Ipv4LinkTopologies()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::has_data() const
{
    for (std::size_t index=0; index<ipv4_link_topology.size(); index++)
    {
        if(ipv4_link_topology[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::has_operation() const
{
    for (std::size_t index=0; index<ipv4_link_topology.size(); index++)
    {
        if(ipv4_link_topology[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-link-topologies";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4LinkTopologies' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-link-topology")
    {
        for(auto const & c : ipv4_link_topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology>();
        c->parent = this;
        ipv4_link_topology.push_back(std::move(c));
        children[segment_path] = ipv4_link_topology.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::get_children()
{
    for (auto const & c : ipv4_link_topology)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::Ipv4LinkTopology()
    :
    system_id{YType::str, "system-id"},
    is_attached{YType::boolean, "is-attached"},
    is_overloaded{YType::boolean, "is-overloaded"},
    is_participant{YType::boolean, "is-participant"},
    source_address{YType::str, "source-address"}
    	,
    advertised_prefix_item_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts>())
	,reachability_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus>())
{
    advertised_prefix_item_counts->parent = this;
    children["advertised-prefix-item-counts"] = advertised_prefix_item_counts;

    reachability_status->parent = this;
    children["reachability-status"] = reachability_status;

    yang_name = "ipv4-link-topology"; yang_parent_name = "ipv4-link-topologies";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::~Ipv4LinkTopology()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::has_data() const
{
    return system_id.is_set
	|| is_attached.is_set
	|| is_overloaded.is_set
	|| is_participant.is_set
	|| source_address.is_set
	|| (advertised_prefix_item_counts !=  nullptr && advertised_prefix_item_counts->has_data())
	|| (reachability_status !=  nullptr && reachability_status->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::has_operation() const
{
    return is_set(operation)
	|| is_set(system_id.operation)
	|| is_set(is_attached.operation)
	|| is_set(is_overloaded.operation)
	|| is_set(is_participant.operation)
	|| is_set(source_address.operation)
	|| (advertised_prefix_item_counts !=  nullptr && advertised_prefix_item_counts->has_operation())
	|| (reachability_status !=  nullptr && reachability_status->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-link-topology" <<"[system-id='" <<system_id <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4LinkTopology' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.operation)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (is_attached.is_set || is_set(is_attached.operation)) leaf_name_data.push_back(is_attached.get_name_leafdata());
    if (is_overloaded.is_set || is_set(is_overloaded.operation)) leaf_name_data.push_back(is_overloaded.get_name_leafdata());
    if (is_participant.is_set || is_set(is_participant.operation)) leaf_name_data.push_back(is_participant.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertised-prefix-item-counts")
    {
        if(advertised_prefix_item_counts != nullptr)
        {
            children["advertised-prefix-item-counts"] = advertised_prefix_item_counts;
        }
        else
        {
            advertised_prefix_item_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts>();
            advertised_prefix_item_counts->parent = this;
            children["advertised-prefix-item-counts"] = advertised_prefix_item_counts;
        }
        return children.at("advertised-prefix-item-counts");
    }

    if(child_yang_name == "reachability-status")
    {
        if(reachability_status != nullptr)
        {
            children["reachability-status"] = reachability_status;
        }
        else
        {
            reachability_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus>();
            reachability_status->parent = this;
            children["reachability-status"] = reachability_status;
        }
        return children.at("reachability-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::get_children()
{
    if(children.find("advertised-prefix-item-counts") == children.end())
    {
        if(advertised_prefix_item_counts != nullptr)
        {
            children["advertised-prefix-item-counts"] = advertised_prefix_item_counts;
        }
    }

    if(children.find("reachability-status") == children.end())
    {
        if(reachability_status != nullptr)
        {
            children["reachability-status"] = reachability_status;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-id")
    {
        system_id = value;
    }
    if(value_path == "is-attached")
    {
        is_attached = value;
    }
    if(value_path == "is-overloaded")
    {
        is_overloaded = value;
    }
    if(value_path == "is-participant")
    {
        is_participant = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachabilityStatus()
    :
    reachable_status{YType::enumeration, "reachable-status"}
    	,
    reachable_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails>())
{
    reachable_details->parent = this;
    children["reachable-details"] = reachable_details;

    yang_name = "reachability-status"; yang_parent_name = "ipv4-link-topology";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::~ReachabilityStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::has_data() const
{
    return reachable_status.is_set
	|| (reachable_details !=  nullptr && reachable_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(reachable_status.operation)
	|| (reachable_details !=  nullptr && reachable_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachability-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReachabilityStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable_status.is_set || is_set(reachable_status.operation)) leaf_name_data.push_back(reachable_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "reachable-details")
    {
        if(reachable_details != nullptr)
        {
            children["reachable-details"] = reachable_details;
        }
        else
        {
            reachable_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails>();
            reachable_details->parent = this;
            children["reachable-details"] = reachable_details;
        }
        return children.at("reachable-details");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::get_children()
{
    if(children.find("reachable-details") == children.end())
    {
        if(reachable_details != nullptr)
        {
            children["reachable-details"] = reachable_details;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reachable-status")
    {
        reachable_status = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::ReachableDetails()
    :
    multicast_root_distance{YType::uint32, "multicast-root-distance"},
    root_distance{YType::uint32, "root-distance"}
{
    yang_name = "reachable-details"; yang_parent_name = "reachability-status";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::~ReachableDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::has_data() const
{
    for (std::size_t index=0; index<children_.size(); index++)
    {
        if(children_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.size(); index++)
    {
        if(multicast_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<parent_.size(); index++)
    {
        if(parent_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    return multicast_root_distance.is_set
	|| root_distance.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::has_operation() const
{
    for (std::size_t index=0; index<children_.size(); index++)
    {
        if(children_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.size(); index++)
    {
        if(multicast_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<parent_.size(); index++)
    {
        if(parent_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(multicast_root_distance.operation)
	|| is_set(root_distance.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable-details";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReachableDetails' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_root_distance.is_set || is_set(multicast_root_distance.operation)) leaf_name_data.push_back(multicast_root_distance.get_name_leafdata());
    if (root_distance.is_set || is_set(root_distance.operation)) leaf_name_data.push_back(root_distance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "children")
    {
        for(auto const & c : children_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_>();
        c->parent = this;
        children_.push_back(std::move(c));
        children[segment_path] = children_.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-path")
    {
        for(auto const & c : multicast_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath>();
        c->parent = this;
        multicast_path.push_back(std::move(c));
        children[segment_path] = multicast_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "parent")
    {
        for(auto const & c : parent_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_>();
        c->parent = this;
        parent_.push_back(std::move(c));
        children[segment_path] = parent_.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths>();
        c->parent = this;
        paths.push_back(std::move(c));
        children[segment_path] = paths.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::get_children()
{
    for (auto const & c : children_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : multicast_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : parent_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multicast-root-distance")
    {
        multicast_root_distance = value;
    }
    if(value_path == "root-distance")
    {
        root_distance = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Paths()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "paths"; yang_parent_name = "reachable-details";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::~Paths()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Paths' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(std::move(c));
        children[segment_path] = uloop_explicit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    for (auto const & c : uloop_explicit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "paths";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "uloop-explicit"; yang_parent_name = "paths";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UloopExplicit' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::MulticastPath()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "multicast-path"; yang_parent_name = "reachable-details";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::~MulticastPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-path";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastPath' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(std::move(c));
        children[segment_path] = uloop_explicit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    for (auto const & c : uloop_explicit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "multicast-path";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "uloop-explicit"; yang_parent_name = "multicast-path";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UloopExplicit' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::Parent_()
    :
    intermediate_pseudonode{YType::str, "intermediate-pseudonode"},
    neighbor_id{YType::str, "neighbor-id"}
{
    yang_name = "parent"; yang_parent_name = "reachable-details";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::~Parent_()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::has_data() const
{
    return intermediate_pseudonode.is_set
	|| neighbor_id.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::has_operation() const
{
    return is_set(operation)
	|| is_set(intermediate_pseudonode.operation)
	|| is_set(neighbor_id.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Parent_' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intermediate_pseudonode.is_set || is_set(intermediate_pseudonode.operation)) leaf_name_data.push_back(intermediate_pseudonode.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::Children_()
    :
    intermediate_pseudonode{YType::str, "intermediate-pseudonode"},
    neighbor_id{YType::str, "neighbor-id"}
{
    yang_name = "children"; yang_parent_name = "reachable-details";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::~Children_()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::has_data() const
{
    return intermediate_pseudonode.is_set
	|| neighbor_id.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::has_operation() const
{
    return is_set(operation)
	|| is_set(intermediate_pseudonode.operation)
	|| is_set(neighbor_id.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "children";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Children_' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intermediate_pseudonode.is_set || is_set(intermediate_pseudonode.operation)) leaf_name_data.push_back(intermediate_pseudonode.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::AdvertisedPrefixItemCounts()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "advertised-prefix-item-counts"; yang_parent_name = "ipv4-link-topology";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::~AdvertisedPrefixItemCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertised-prefix-item-counts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertisedPrefixItemCounts' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::TopologySummary()
    :
    pseudonode_node_count(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount>())
	,router_node_count(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount>())
{
    pseudonode_node_count->parent = this;
    children["pseudonode-node-count"] = pseudonode_node_count;

    router_node_count->parent = this;
    children["router-node-count"] = router_node_count;

    yang_name = "topology-summary"; yang_parent_name = "topology-level";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::~TopologySummary()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::has_data() const
{
    return (pseudonode_node_count !=  nullptr && pseudonode_node_count->has_data())
	|| (router_node_count !=  nullptr && router_node_count->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::has_operation() const
{
    return is_set(operation)
	|| (pseudonode_node_count !=  nullptr && pseudonode_node_count->has_operation())
	|| (router_node_count !=  nullptr && router_node_count->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-summary";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologySummary' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pseudonode-node-count")
    {
        if(pseudonode_node_count != nullptr)
        {
            children["pseudonode-node-count"] = pseudonode_node_count;
        }
        else
        {
            pseudonode_node_count = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount>();
            pseudonode_node_count->parent = this;
            children["pseudonode-node-count"] = pseudonode_node_count;
        }
        return children.at("pseudonode-node-count");
    }

    if(child_yang_name == "router-node-count")
    {
        if(router_node_count != nullptr)
        {
            children["router-node-count"] = router_node_count;
        }
        else
        {
            router_node_count = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount>();
            router_node_count->parent = this;
            children["router-node-count"] = router_node_count;
        }
        return children.at("router-node-count");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::get_children()
{
    if(children.find("pseudonode-node-count") == children.end())
    {
        if(pseudonode_node_count != nullptr)
        {
            children["pseudonode-node-count"] = pseudonode_node_count;
        }
    }

    if(children.find("router-node-count") == children.end())
    {
        if(router_node_count != nullptr)
        {
            children["router-node-count"] = router_node_count;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::RouterNodeCount()
    :
    reachable_node_count{YType::uint32, "reachable-node-count"},
    unreachable_node_count{YType::uint32, "unreachable-node-count"},
    unreachable_participant_node_count{YType::uint32, "unreachable-participant-node-count"}
{
    yang_name = "router-node-count"; yang_parent_name = "topology-summary";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::~RouterNodeCount()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::has_data() const
{
    return reachable_node_count.is_set
	|| unreachable_node_count.is_set
	|| unreachable_participant_node_count.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::has_operation() const
{
    return is_set(operation)
	|| is_set(reachable_node_count.operation)
	|| is_set(unreachable_node_count.operation)
	|| is_set(unreachable_participant_node_count.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-node-count";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouterNodeCount' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable_node_count.is_set || is_set(reachable_node_count.operation)) leaf_name_data.push_back(reachable_node_count.get_name_leafdata());
    if (unreachable_node_count.is_set || is_set(unreachable_node_count.operation)) leaf_name_data.push_back(unreachable_node_count.get_name_leafdata());
    if (unreachable_participant_node_count.is_set || is_set(unreachable_participant_node_count.operation)) leaf_name_data.push_back(unreachable_participant_node_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reachable-node-count")
    {
        reachable_node_count = value;
    }
    if(value_path == "unreachable-node-count")
    {
        unreachable_node_count = value;
    }
    if(value_path == "unreachable-participant-node-count")
    {
        unreachable_participant_node_count = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::PseudonodeNodeCount()
    :
    reachable_node_count{YType::uint32, "reachable-node-count"},
    unreachable_node_count{YType::uint32, "unreachable-node-count"},
    unreachable_participant_node_count{YType::uint32, "unreachable-participant-node-count"}
{
    yang_name = "pseudonode-node-count"; yang_parent_name = "topology-summary";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::~PseudonodeNodeCount()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::has_data() const
{
    return reachable_node_count.is_set
	|| unreachable_node_count.is_set
	|| unreachable_participant_node_count.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::has_operation() const
{
    return is_set(operation)
	|| is_set(reachable_node_count.operation)
	|| is_set(unreachable_node_count.operation)
	|| is_set(unreachable_participant_node_count.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudonode-node-count";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudonodeNodeCount' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable_node_count.is_set || is_set(reachable_node_count.operation)) leaf_name_data.push_back(reachable_node_count.get_name_leafdata());
    if (unreachable_node_count.is_set || is_set(unreachable_node_count.operation)) leaf_name_data.push_back(unreachable_node_count.get_name_leafdata());
    if (unreachable_participant_node_count.is_set || is_set(unreachable_participant_node_count.operation)) leaf_name_data.push_back(unreachable_participant_node_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reachable-node-count")
    {
        reachable_node_count = value;
    }
    if(value_path == "unreachable-node-count")
    {
        unreachable_node_count = value;
    }
    if(value_path == "unreachable-participant-node-count")
    {
        unreachable_participant_node_count = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopologies()
{
    yang_name = "ipv6-link-topologies"; yang_parent_name = "topology-level";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::~Ipv6LinkTopologies()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::has_data() const
{
    for (std::size_t index=0; index<ipv6_link_topology.size(); index++)
    {
        if(ipv6_link_topology[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::has_operation() const
{
    for (std::size_t index=0; index<ipv6_link_topology.size(); index++)
    {
        if(ipv6_link_topology[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-link-topologies";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6LinkTopologies' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-link-topology")
    {
        for(auto const & c : ipv6_link_topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology>();
        c->parent = this;
        ipv6_link_topology.push_back(std::move(c));
        children[segment_path] = ipv6_link_topology.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::get_children()
{
    for (auto const & c : ipv6_link_topology)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::Ipv6LinkTopology()
    :
    system_id{YType::str, "system-id"},
    is_attached{YType::boolean, "is-attached"},
    is_overloaded{YType::boolean, "is-overloaded"},
    is_participant{YType::boolean, "is-participant"},
    source_address{YType::str, "source-address"}
    	,
    advertised_prefix_item_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts>())
	,reachability_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus>())
{
    advertised_prefix_item_counts->parent = this;
    children["advertised-prefix-item-counts"] = advertised_prefix_item_counts;

    reachability_status->parent = this;
    children["reachability-status"] = reachability_status;

    yang_name = "ipv6-link-topology"; yang_parent_name = "ipv6-link-topologies";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::~Ipv6LinkTopology()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::has_data() const
{
    return system_id.is_set
	|| is_attached.is_set
	|| is_overloaded.is_set
	|| is_participant.is_set
	|| source_address.is_set
	|| (advertised_prefix_item_counts !=  nullptr && advertised_prefix_item_counts->has_data())
	|| (reachability_status !=  nullptr && reachability_status->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::has_operation() const
{
    return is_set(operation)
	|| is_set(system_id.operation)
	|| is_set(is_attached.operation)
	|| is_set(is_overloaded.operation)
	|| is_set(is_participant.operation)
	|| is_set(source_address.operation)
	|| (advertised_prefix_item_counts !=  nullptr && advertised_prefix_item_counts->has_operation())
	|| (reachability_status !=  nullptr && reachability_status->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-link-topology" <<"[system-id='" <<system_id <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6LinkTopology' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.operation)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (is_attached.is_set || is_set(is_attached.operation)) leaf_name_data.push_back(is_attached.get_name_leafdata());
    if (is_overloaded.is_set || is_set(is_overloaded.operation)) leaf_name_data.push_back(is_overloaded.get_name_leafdata());
    if (is_participant.is_set || is_set(is_participant.operation)) leaf_name_data.push_back(is_participant.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertised-prefix-item-counts")
    {
        if(advertised_prefix_item_counts != nullptr)
        {
            children["advertised-prefix-item-counts"] = advertised_prefix_item_counts;
        }
        else
        {
            advertised_prefix_item_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts>();
            advertised_prefix_item_counts->parent = this;
            children["advertised-prefix-item-counts"] = advertised_prefix_item_counts;
        }
        return children.at("advertised-prefix-item-counts");
    }

    if(child_yang_name == "reachability-status")
    {
        if(reachability_status != nullptr)
        {
            children["reachability-status"] = reachability_status;
        }
        else
        {
            reachability_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus>();
            reachability_status->parent = this;
            children["reachability-status"] = reachability_status;
        }
        return children.at("reachability-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::get_children()
{
    if(children.find("advertised-prefix-item-counts") == children.end())
    {
        if(advertised_prefix_item_counts != nullptr)
        {
            children["advertised-prefix-item-counts"] = advertised_prefix_item_counts;
        }
    }

    if(children.find("reachability-status") == children.end())
    {
        if(reachability_status != nullptr)
        {
            children["reachability-status"] = reachability_status;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-id")
    {
        system_id = value;
    }
    if(value_path == "is-attached")
    {
        is_attached = value;
    }
    if(value_path == "is-overloaded")
    {
        is_overloaded = value;
    }
    if(value_path == "is-participant")
    {
        is_participant = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachabilityStatus()
    :
    reachable_status{YType::enumeration, "reachable-status"}
    	,
    reachable_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails>())
{
    reachable_details->parent = this;
    children["reachable-details"] = reachable_details;

    yang_name = "reachability-status"; yang_parent_name = "ipv6-link-topology";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::~ReachabilityStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::has_data() const
{
    return reachable_status.is_set
	|| (reachable_details !=  nullptr && reachable_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(reachable_status.operation)
	|| (reachable_details !=  nullptr && reachable_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachability-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReachabilityStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable_status.is_set || is_set(reachable_status.operation)) leaf_name_data.push_back(reachable_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "reachable-details")
    {
        if(reachable_details != nullptr)
        {
            children["reachable-details"] = reachable_details;
        }
        else
        {
            reachable_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails>();
            reachable_details->parent = this;
            children["reachable-details"] = reachable_details;
        }
        return children.at("reachable-details");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::get_children()
{
    if(children.find("reachable-details") == children.end())
    {
        if(reachable_details != nullptr)
        {
            children["reachable-details"] = reachable_details;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reachable-status")
    {
        reachable_status = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::ReachableDetails()
    :
    multicast_root_distance{YType::uint32, "multicast-root-distance"},
    root_distance{YType::uint32, "root-distance"}
{
    yang_name = "reachable-details"; yang_parent_name = "reachability-status";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::~ReachableDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::has_data() const
{
    for (std::size_t index=0; index<children_.size(); index++)
    {
        if(children_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.size(); index++)
    {
        if(multicast_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<parent_.size(); index++)
    {
        if(parent_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    return multicast_root_distance.is_set
	|| root_distance.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::has_operation() const
{
    for (std::size_t index=0; index<children_.size(); index++)
    {
        if(children_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.size(); index++)
    {
        if(multicast_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<parent_.size(); index++)
    {
        if(parent_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(multicast_root_distance.operation)
	|| is_set(root_distance.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable-details";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReachableDetails' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_root_distance.is_set || is_set(multicast_root_distance.operation)) leaf_name_data.push_back(multicast_root_distance.get_name_leafdata());
    if (root_distance.is_set || is_set(root_distance.operation)) leaf_name_data.push_back(root_distance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "children")
    {
        for(auto const & c : children_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_>();
        c->parent = this;
        children_.push_back(std::move(c));
        children[segment_path] = children_.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-path")
    {
        for(auto const & c : multicast_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath>();
        c->parent = this;
        multicast_path.push_back(std::move(c));
        children[segment_path] = multicast_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "parent")
    {
        for(auto const & c : parent_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_>();
        c->parent = this;
        parent_.push_back(std::move(c));
        children[segment_path] = parent_.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths>();
        c->parent = this;
        paths.push_back(std::move(c));
        children[segment_path] = paths.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::get_children()
{
    for (auto const & c : children_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : multicast_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : parent_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multicast-root-distance")
    {
        multicast_root_distance = value;
    }
    if(value_path == "root-distance")
    {
        root_distance = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Paths()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "paths"; yang_parent_name = "reachable-details";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::~Paths()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Paths' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(std::move(c));
        children[segment_path] = uloop_explicit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    for (auto const & c : uloop_explicit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "paths";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "uloop-explicit"; yang_parent_name = "paths";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UloopExplicit' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::MulticastPath()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "multicast-path"; yang_parent_name = "reachable-details";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::~MulticastPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-path";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastPath' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(std::move(c));
        children[segment_path] = uloop_explicit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    for (auto const & c : uloop_explicit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "multicast-path";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "uloop-explicit"; yang_parent_name = "multicast-path";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UloopExplicit' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::Parent_()
    :
    intermediate_pseudonode{YType::str, "intermediate-pseudonode"},
    neighbor_id{YType::str, "neighbor-id"}
{
    yang_name = "parent"; yang_parent_name = "reachable-details";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::~Parent_()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::has_data() const
{
    return intermediate_pseudonode.is_set
	|| neighbor_id.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::has_operation() const
{
    return is_set(operation)
	|| is_set(intermediate_pseudonode.operation)
	|| is_set(neighbor_id.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Parent_' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intermediate_pseudonode.is_set || is_set(intermediate_pseudonode.operation)) leaf_name_data.push_back(intermediate_pseudonode.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::Children_()
    :
    intermediate_pseudonode{YType::str, "intermediate-pseudonode"},
    neighbor_id{YType::str, "neighbor-id"}
{
    yang_name = "children"; yang_parent_name = "reachable-details";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::~Children_()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::has_data() const
{
    return intermediate_pseudonode.is_set
	|| neighbor_id.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::has_operation() const
{
    return is_set(operation)
	|| is_set(intermediate_pseudonode.operation)
	|| is_set(neighbor_id.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "children";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Children_' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intermediate_pseudonode.is_set || is_set(intermediate_pseudonode.operation)) leaf_name_data.push_back(intermediate_pseudonode.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::AdvertisedPrefixItemCounts()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "advertised-prefix-item-counts"; yang_parent_name = "ipv6-link-topology";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::~AdvertisedPrefixItemCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertised-prefix-item-counts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertisedPrefixItemCounts' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Routes()
{
    yang_name = "ipv6-routes"; yang_parent_name = "topology";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::~Ipv6Routes()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::has_data() const
{
    for (std::size_t index=0; index<ipv6_route.size(); index++)
    {
        if(ipv6_route[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::has_operation() const
{
    for (std::size_t index=0; index<ipv6_route.size(); index++)
    {
        if(ipv6_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-routes";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Routes' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-route")
    {
        for(auto const & c : ipv6_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route>();
        c->parent = this;
        ipv6_route.push_back(std::move(c));
        children[segment_path] = ipv6_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::get_children()
{
    for (auto const & c : ipv6_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::Ipv6Route()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
    	,
    connected_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus>())
	,native_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus>())
	,redistributed_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus>())
{
    connected_status->parent = this;
    children["connected-status"] = connected_status;

    native_status->parent = this;
    children["native-status"] = native_status;

    redistributed_status->parent = this;
    children["redistributed-status"] = redistributed_status;

    yang_name = "ipv6-route"; yang_parent_name = "ipv6-routes";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::~Ipv6Route()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::has_data() const
{
    for (std::size_t index=0; index<per_level_advertising_detail.size(); index++)
    {
        if(per_level_advertising_detail[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| (connected_status !=  nullptr && connected_status->has_data())
	|| (native_status !=  nullptr && native_status->has_data())
	|| (redistributed_status !=  nullptr && redistributed_status->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::has_operation() const
{
    for (std::size_t index=0; index<per_level_advertising_detail.size(); index++)
    {
        if(per_level_advertising_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| (connected_status !=  nullptr && connected_status->has_operation())
	|| (native_status !=  nullptr && native_status->has_operation())
	|| (redistributed_status !=  nullptr && redistributed_status->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-route";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Route' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "connected-status")
    {
        if(connected_status != nullptr)
        {
            children["connected-status"] = connected_status;
        }
        else
        {
            connected_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus>();
            connected_status->parent = this;
            children["connected-status"] = connected_status;
        }
        return children.at("connected-status");
    }

    if(child_yang_name == "native-status")
    {
        if(native_status != nullptr)
        {
            children["native-status"] = native_status;
        }
        else
        {
            native_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus>();
            native_status->parent = this;
            children["native-status"] = native_status;
        }
        return children.at("native-status");
    }

    if(child_yang_name == "per-level-advertising-detail")
    {
        for(auto const & c : per_level_advertising_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail>();
        c->parent = this;
        per_level_advertising_detail.push_back(std::move(c));
        children[segment_path] = per_level_advertising_detail.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "redistributed-status")
    {
        if(redistributed_status != nullptr)
        {
            children["redistributed-status"] = redistributed_status;
        }
        else
        {
            redistributed_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus>();
            redistributed_status->parent = this;
            children["redistributed-status"] = redistributed_status;
        }
        return children.at("redistributed-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::get_children()
{
    if(children.find("connected-status") == children.end())
    {
        if(connected_status != nullptr)
        {
            children["connected-status"] = connected_status;
        }
    }

    if(children.find("native-status") == children.end())
    {
        if(native_status != nullptr)
        {
            children["native-status"] = native_status;
        }
    }

    for (auto const & c : per_level_advertising_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("redistributed-status") == children.end())
    {
        if(redistributed_status != nullptr)
        {
            children["redistributed-status"] = redistributed_status;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedStatus()
    :
    is_valid{YType::enumeration, "is-valid"}
    	,
    connected_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails>())
{
    connected_details->parent = this;
    children["connected-details"] = connected_details;

    yang_name = "connected-status"; yang_parent_name = "ipv6-route";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::~ConnectedStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::has_data() const
{
    return is_valid.is_set
	|| (connected_details !=  nullptr && connected_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(is_valid.operation)
	|| (connected_details !=  nullptr && connected_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "connected-details")
    {
        if(connected_details != nullptr)
        {
            children["connected-details"] = connected_details;
        }
        else
        {
            connected_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails>();
            connected_details->parent = this;
            children["connected-details"] = connected_details;
        }
        return children.at("connected-details");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::get_children()
{
    if(children.find("connected-details") == children.end())
    {
        if(connected_details != nullptr)
        {
            children["connected-details"] = connected_details;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::ConnectedDetails()
    :
    interface{YType::str, "interface"}
{
    yang_name = "connected-details"; yang_parent_name = "connected-status";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::~ConnectedDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::has_data() const
{
    for (auto const & leaf : interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::has_operation() const
{
    for (auto const & leaf : interface.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-details";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedDetails' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_datas = interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_datas.begin(), interface_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface.append(value);
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributedStatus()
    :
    is_valid{YType::enumeration, "is-valid"}
    	,
    redistribution_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails>())
{
    redistribution_details->parent = this;
    children["redistribution-details"] = redistribution_details;

    yang_name = "redistributed-status"; yang_parent_name = "ipv6-route";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::~RedistributedStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::has_data() const
{
    return is_valid.is_set
	|| (redistribution_details !=  nullptr && redistribution_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(is_valid.operation)
	|| (redistribution_details !=  nullptr && redistribution_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributed-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistributedStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "redistribution-details")
    {
        if(redistribution_details != nullptr)
        {
            children["redistribution-details"] = redistribution_details;
        }
        else
        {
            redistribution_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails>();
            redistribution_details->parent = this;
            children["redistribution-details"] = redistribution_details;
        }
        return children.at("redistribution-details");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::get_children()
{
    if(children.find("redistribution-details") == children.end())
    {
        if(redistribution_details != nullptr)
        {
            children["redistribution-details"] = redistribution_details;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::RedistributionDetails()
{
    yang_name = "redistribution-details"; yang_parent_name = "redistributed-status";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::~RedistributionDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::has_data() const
{
    for (std::size_t index=0; index<isis_sh_route_redist_detail.size(); index++)
    {
        if(isis_sh_route_redist_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::has_operation() const
{
    for (std::size_t index=0; index<isis_sh_route_redist_detail.size(); index++)
    {
        if(isis_sh_route_redist_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution-details";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistributionDetails' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "isis-sh-route-redist-detail")
    {
        for(auto const & c : isis_sh_route_redist_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail>();
        c->parent = this;
        isis_sh_route_redist_detail.push_back(std::move(c));
        children[segment_path] = isis_sh_route_redist_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::get_children()
{
    for (auto const & c : isis_sh_route_redist_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::IsisShRouteRedistDetail()
    :
    level{YType::enumeration, "level"}
    	,
    owner(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner>())
{
    owner->parent = this;
    children["owner"] = owner;

    yang_name = "isis-sh-route-redist-detail"; yang_parent_name = "redistribution-details";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::~IsisShRouteRedistDetail()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::has_data() const
{
    return level.is_set
	|| (owner !=  nullptr && owner->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| (owner !=  nullptr && owner->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-sh-route-redist-detail";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisShRouteRedistDetail' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "owner")
    {
        if(owner != nullptr)
        {
            children["owner"] = owner;
        }
        else
        {
            owner = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner>();
            owner->parent = this;
            children["owner"] = owner;
        }
        return children.at("owner");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::get_children()
{
    if(children.find("owner") == children.end())
    {
        if(owner != nullptr)
        {
            children["owner"] = owner;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::Owner()
    :
    application_name{YType::str, "application-name"},
    bgp_as_number{YType::str, "bgp-as-number"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    ospfv3_process_id{YType::str, "ospfv3-process-id"},
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "owner"; yang_parent_name = "isis-sh-route-redist-detail";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::~Owner()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::has_data() const
{
    return application_name.is_set
	|| bgp_as_number.is_set
	|| eigrp_as_number.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| ospfv3_process_id.is_set
	|| protocol.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::has_operation() const
{
    return is_set(operation)
	|| is_set(application_name.operation)
	|| is_set(bgp_as_number.operation)
	|| is_set(eigrp_as_number.operation)
	|| is_set(isis_instance_id.operation)
	|| is_set(ospf_process_id.operation)
	|| is_set(ospfv3_process_id.operation)
	|| is_set(protocol.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Owner' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.operation)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (bgp_as_number.is_set || is_set(bgp_as_number.operation)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.operation)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.operation)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.operation)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (ospfv3_process_id.is_set || is_set(ospfv3_process_id.operation)) leaf_name_data.push_back(ospfv3_process_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "application-name")
    {
        application_name = value;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id = value;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id = value;
    }
    if(value_path == "ospfv3-process-id")
    {
        ospfv3_process_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeStatus()
    :
    is_valid{YType::enumeration, "is-valid"}
    	,
    native_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails>())
{
    native_details->parent = this;
    children["native-details"] = native_details;

    yang_name = "native-status"; yang_parent_name = "ipv6-route";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::~NativeStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::has_data() const
{
    return is_valid.is_set
	|| (native_details !=  nullptr && native_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(is_valid.operation)
	|| (native_details !=  nullptr && native_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NativeStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "native-details")
    {
        if(native_details != nullptr)
        {
            children["native-details"] = native_details;
        }
        else
        {
            native_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails>();
            native_details->parent = this;
            children["native-details"] = native_details;
        }
        return children.at("native-details");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::get_children()
{
    if(children.find("native-details") == children.end())
    {
        if(native_details != nullptr)
        {
            children["native-details"] = native_details;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::NativeDetails()
    :
    priority{YType::enumeration, "priority"}
    	,
    primary(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary>())
{
    primary->parent = this;
    children["primary"] = primary;

    yang_name = "native-details"; yang_parent_name = "native-status";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::~NativeDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::has_data() const
{
    for (std::size_t index=0; index<backup.size(); index++)
    {
        if(backup[index]->has_data())
            return true;
    }
    return priority.is_set
	|| (primary !=  nullptr && primary->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::has_operation() const
{
    for (std::size_t index=0; index<backup.size(); index++)
    {
        if(backup[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(priority.operation)
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native-details";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NativeDetails' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup")
    {
        for(auto const & c : backup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup>();
        c->parent = this;
        backup.push_back(std::move(c));
        children[segment_path] = backup.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "primary")
    {
        if(primary != nullptr)
        {
            children["primary"] = primary;
        }
        else
        {
            primary = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary>();
            primary->parent = this;
            children["primary"] = primary;
        }
        return children.at("primary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::get_children()
{
    for (auto const & c : backup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("primary") == children.end())
    {
        if(primary != nullptr)
        {
            children["primary"] = primary;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Primary()
    :
    administrative_distance{YType::uint16, "administrative-distance"},
    is_external_metric{YType::boolean, "is-external-metric"},
    metric{YType::uint32, "metric"},
    multicast_metric{YType::uint32, "multicast-metric"},
    origin{YType::enumeration, "origin"}
{
    yang_name = "primary"; yang_parent_name = "native-details";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::~Primary()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::has_data() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.size(); index++)
    {
        if(multicast_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_source.size(); index++)
    {
        if(multicast_source[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srte_path.size(); index++)
    {
        if(srte_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ucmp_next_hop.size(); index++)
    {
        if(ucmp_next_hop[index]->has_data())
            return true;
    }
    return administrative_distance.is_set
	|| is_external_metric.is_set
	|| metric.is_set
	|| multicast_metric.is_set
	|| origin.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::has_operation() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.size(); index++)
    {
        if(multicast_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_source.size(); index++)
    {
        if(multicast_source[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srte_path.size(); index++)
    {
        if(srte_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ucmp_next_hop.size(); index++)
    {
        if(ucmp_next_hop[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(administrative_distance.operation)
	|| is_set(is_external_metric.operation)
	|| is_set(metric.operation)
	|| is_set(multicast_metric.operation)
	|| is_set(origin.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Primary' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative_distance.is_set || is_set(administrative_distance.operation)) leaf_name_data.push_back(administrative_distance.get_name_leafdata());
    if (is_external_metric.is_set || is_set(is_external_metric.operation)) leaf_name_data.push_back(is_external_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (multicast_metric.is_set || is_set(multicast_metric.operation)) leaf_name_data.push_back(multicast_metric.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "explicit-path")
    {
        for(auto const & c : explicit_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath>();
        c->parent = this;
        explicit_path.push_back(std::move(c));
        children[segment_path] = explicit_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-path")
    {
        for(auto const & c : multicast_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath>();
        c->parent = this;
        multicast_path.push_back(std::move(c));
        children[segment_path] = multicast_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-source")
    {
        for(auto const & c : multicast_source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource>();
        c->parent = this;
        multicast_source.push_back(std::move(c));
        children[segment_path] = multicast_source.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths>();
        c->parent = this;
        paths.push_back(std::move(c));
        children[segment_path] = paths.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "source")
    {
        for(auto const & c : source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source>();
        c->parent = this;
        source.push_back(std::move(c));
        children[segment_path] = source.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "srte-path")
    {
        for(auto const & c : srte_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath>();
        c->parent = this;
        srte_path.push_back(std::move(c));
        children[segment_path] = srte_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ucmp-next-hop")
    {
        for(auto const & c : ucmp_next_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop>();
        c->parent = this;
        ucmp_next_hop.push_back(std::move(c));
        children[segment_path] = ucmp_next_hop.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::get_children()
{
    for (auto const & c : explicit_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : multicast_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : multicast_source)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : source)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : srte_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ucmp_next_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "administrative-distance")
    {
        administrative_distance = value;
    }
    if(value_path == "is-external-metric")
    {
        is_external_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "multicast-metric")
    {
        multicast_metric = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::Paths()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "paths"; yang_parent_name = "primary";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::~Paths()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Paths' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(std::move(c));
        children[segment_path] = uloop_explicit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    for (auto const & c : uloop_explicit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "paths";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "uloop-explicit"; yang_parent_name = "paths";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UloopExplicit' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::UcmpNextHop()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    total_ucmp_distance{YType::uint32, "total-ucmp-distance"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "ucmp-next-hop"; yang_parent_name = "primary";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::~UcmpNextHop()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::has_data() const
{
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| total_ucmp_distance.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(total_ucmp_distance.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucmp-next-hop";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UcmpNextHop' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (total_ucmp_distance.is_set || is_set(total_ucmp_distance.operation)) leaf_name_data.push_back(total_ucmp_distance.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "total-ucmp-distance")
    {
        total_ucmp_distance = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "ucmp-next-hop";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::MulticastPath()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "multicast-path"; yang_parent_name = "primary";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::~MulticastPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-path";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastPath' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(std::move(c));
        children[segment_path] = uloop_explicit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    for (auto const & c : uloop_explicit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "multicast-path";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "uloop-explicit"; yang_parent_name = "multicast-path";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UloopExplicit' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::SrtePath()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "srte-path"; yang_parent_name = "primary";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::~SrtePath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srte-path";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrtePath' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(std::move(c));
        children[segment_path] = uloop_explicit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    for (auto const & c : uloop_explicit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "srte-path";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "uloop-explicit"; yang_parent_name = "srte-path";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UloopExplicit' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::ExplicitPath()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "explicit-path"; yang_parent_name = "primary";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::~ExplicitPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-path";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExplicitPath' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(std::move(c));
        children[segment_path] = uloop_explicit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    for (auto const & c : uloop_explicit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "explicit-path";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "uloop-explicit"; yang_parent_name = "explicit-path";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UloopExplicit' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::Source()
    :
    source_address{YType::str, "source-address"},
    source_lsp_id{YType::str, "source-lsp-id"},
    tags{YType::uint32, "tags"}
{
    yang_name = "source"; yang_parent_name = "primary";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::~Source()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::has_data() const
{
    for (std::size_t index=0; index<nodal_sid.size(); index++)
    {
        if(nodal_sid[index]->has_data())
            return true;
    }
    for (auto const & leaf : tags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return source_address.is_set
	|| source_lsp_id.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::has_operation() const
{
    for (std::size_t index=0; index<nodal_sid.size(); index++)
    {
        if(nodal_sid[index]->has_operation())
            return true;
    }
    for (auto const & leaf : tags.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(source_lsp_id.operation)
	|| is_set(tags.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_lsp_id.is_set || is_set(source_lsp_id.operation)) leaf_name_data.push_back(source_lsp_id.get_name_leafdata());

    auto tags_name_datas = tags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tags_name_datas.begin(), tags_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodal-sid")
    {
        for(auto const & c : nodal_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid>();
        c->parent = this;
        nodal_sid.push_back(std::move(c));
        children[segment_path] = nodal_sid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::get_children()
{
    for (auto const & c : nodal_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-lsp-id")
    {
        source_lsp_id = value;
    }
    if(value_path == "tags")
    {
        tags.append(value);
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::NodalSid()
    :
    algorithm{YType::uint8, "algorithm"},
    eflag{YType::uint8, "eflag"},
    lflag{YType::uint8, "lflag"},
    nflag{YType::uint8, "nflag"},
    pflag{YType::uint8, "pflag"},
    rflag{YType::uint8, "rflag"},
    sid_value{YType::uint32, "sid-value"},
    vflag{YType::uint8, "vflag"}
{
    yang_name = "nodal-sid"; yang_parent_name = "source";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::~NodalSid()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::has_data() const
{
    return algorithm.is_set
	|| eflag.is_set
	|| lflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| rflag.is_set
	|| sid_value.is_set
	|| vflag.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation)
	|| is_set(eflag.operation)
	|| is_set(lflag.operation)
	|| is_set(nflag.operation)
	|| is_set(pflag.operation)
	|| is_set(rflag.operation)
	|| is_set(sid_value.operation)
	|| is_set(vflag.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodal-sid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodalSid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.operation)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.operation)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.operation)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.operation)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.operation)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (sid_value.is_set || is_set(sid_value.operation)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.operation)) leaf_name_data.push_back(vflag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "eflag")
    {
        eflag = value;
    }
    if(value_path == "lflag")
    {
        lflag = value;
    }
    if(value_path == "nflag")
    {
        nflag = value;
    }
    if(value_path == "pflag")
    {
        pflag = value;
    }
    if(value_path == "rflag")
    {
        rflag = value;
    }
    if(value_path == "sid-value")
    {
        sid_value = value;
    }
    if(value_path == "vflag")
    {
        vflag = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::MulticastSource()
    :
    source_address{YType::str, "source-address"},
    source_lsp_id{YType::str, "source-lsp-id"},
    tags{YType::uint32, "tags"}
{
    yang_name = "multicast-source"; yang_parent_name = "primary";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::~MulticastSource()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::has_data() const
{
    for (std::size_t index=0; index<nodal_sid.size(); index++)
    {
        if(nodal_sid[index]->has_data())
            return true;
    }
    for (auto const & leaf : tags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return source_address.is_set
	|| source_lsp_id.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::has_operation() const
{
    for (std::size_t index=0; index<nodal_sid.size(); index++)
    {
        if(nodal_sid[index]->has_operation())
            return true;
    }
    for (auto const & leaf : tags.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(source_lsp_id.operation)
	|| is_set(tags.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-source";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastSource' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_lsp_id.is_set || is_set(source_lsp_id.operation)) leaf_name_data.push_back(source_lsp_id.get_name_leafdata());

    auto tags_name_datas = tags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tags_name_datas.begin(), tags_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodal-sid")
    {
        for(auto const & c : nodal_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid>();
        c->parent = this;
        nodal_sid.push_back(std::move(c));
        children[segment_path] = nodal_sid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::get_children()
{
    for (auto const & c : nodal_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-lsp-id")
    {
        source_lsp_id = value;
    }
    if(value_path == "tags")
    {
        tags.append(value);
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::NodalSid()
    :
    algorithm{YType::uint8, "algorithm"},
    eflag{YType::uint8, "eflag"},
    lflag{YType::uint8, "lflag"},
    nflag{YType::uint8, "nflag"},
    pflag{YType::uint8, "pflag"},
    rflag{YType::uint8, "rflag"},
    sid_value{YType::uint32, "sid-value"},
    vflag{YType::uint8, "vflag"}
{
    yang_name = "nodal-sid"; yang_parent_name = "multicast-source";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::~NodalSid()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::has_data() const
{
    return algorithm.is_set
	|| eflag.is_set
	|| lflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| rflag.is_set
	|| sid_value.is_set
	|| vflag.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation)
	|| is_set(eflag.operation)
	|| is_set(lflag.operation)
	|| is_set(nflag.operation)
	|| is_set(pflag.operation)
	|| is_set(rflag.operation)
	|| is_set(sid_value.operation)
	|| is_set(vflag.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodal-sid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodalSid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.operation)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.operation)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.operation)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.operation)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.operation)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (sid_value.is_set || is_set(sid_value.operation)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.operation)) leaf_name_data.push_back(vflag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "eflag")
    {
        eflag = value;
    }
    if(value_path == "lflag")
    {
        lflag = value;
    }
    if(value_path == "nflag")
    {
        nflag = value;
    }
    if(value_path == "pflag")
    {
        pflag = value;
    }
    if(value_path == "rflag")
    {
        rflag = value;
    }
    if(value_path == "sid-value")
    {
        sid_value = value;
    }
    if(value_path == "vflag")
    {
        vflag = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Backup()
    :
    administrative_distance{YType::uint16, "administrative-distance"},
    is_external_metric{YType::boolean, "is-external-metric"},
    metric{YType::uint32, "metric"},
    multicast_metric{YType::uint32, "multicast-metric"},
    origin{YType::enumeration, "origin"}
{
    yang_name = "backup"; yang_parent_name = "native-details";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::~Backup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::has_data() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.size(); index++)
    {
        if(multicast_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_source.size(); index++)
    {
        if(multicast_source[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srte_path.size(); index++)
    {
        if(srte_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ucmp_next_hop.size(); index++)
    {
        if(ucmp_next_hop[index]->has_data())
            return true;
    }
    return administrative_distance.is_set
	|| is_external_metric.is_set
	|| metric.is_set
	|| multicast_metric.is_set
	|| origin.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::has_operation() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.size(); index++)
    {
        if(multicast_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_source.size(); index++)
    {
        if(multicast_source[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srte_path.size(); index++)
    {
        if(srte_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ucmp_next_hop.size(); index++)
    {
        if(ucmp_next_hop[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(administrative_distance.operation)
	|| is_set(is_external_metric.operation)
	|| is_set(metric.operation)
	|| is_set(multicast_metric.operation)
	|| is_set(origin.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative_distance.is_set || is_set(administrative_distance.operation)) leaf_name_data.push_back(administrative_distance.get_name_leafdata());
    if (is_external_metric.is_set || is_set(is_external_metric.operation)) leaf_name_data.push_back(is_external_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (multicast_metric.is_set || is_set(multicast_metric.operation)) leaf_name_data.push_back(multicast_metric.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "explicit-path")
    {
        for(auto const & c : explicit_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath>();
        c->parent = this;
        explicit_path.push_back(std::move(c));
        children[segment_path] = explicit_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-path")
    {
        for(auto const & c : multicast_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath>();
        c->parent = this;
        multicast_path.push_back(std::move(c));
        children[segment_path] = multicast_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-source")
    {
        for(auto const & c : multicast_source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource>();
        c->parent = this;
        multicast_source.push_back(std::move(c));
        children[segment_path] = multicast_source.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths>();
        c->parent = this;
        paths.push_back(std::move(c));
        children[segment_path] = paths.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "source")
    {
        for(auto const & c : source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source>();
        c->parent = this;
        source.push_back(std::move(c));
        children[segment_path] = source.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "srte-path")
    {
        for(auto const & c : srte_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath>();
        c->parent = this;
        srte_path.push_back(std::move(c));
        children[segment_path] = srte_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ucmp-next-hop")
    {
        for(auto const & c : ucmp_next_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop>();
        c->parent = this;
        ucmp_next_hop.push_back(std::move(c));
        children[segment_path] = ucmp_next_hop.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::get_children()
{
    for (auto const & c : explicit_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : multicast_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : multicast_source)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : source)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : srte_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ucmp_next_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "administrative-distance")
    {
        administrative_distance = value;
    }
    if(value_path == "is-external-metric")
    {
        is_external_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "multicast-metric")
    {
        multicast_metric = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::Paths()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "paths"; yang_parent_name = "backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::~Paths()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Paths' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(std::move(c));
        children[segment_path] = uloop_explicit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    for (auto const & c : uloop_explicit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "paths";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "uloop-explicit"; yang_parent_name = "paths";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UloopExplicit' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::UcmpNextHop()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    total_ucmp_distance{YType::uint32, "total-ucmp-distance"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "ucmp-next-hop"; yang_parent_name = "backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::~UcmpNextHop()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::has_data() const
{
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| total_ucmp_distance.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(total_ucmp_distance.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucmp-next-hop";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UcmpNextHop' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (total_ucmp_distance.is_set || is_set(total_ucmp_distance.operation)) leaf_name_data.push_back(total_ucmp_distance.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "total-ucmp-distance")
    {
        total_ucmp_distance = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "ucmp-next-hop";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::MulticastPath()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "multicast-path"; yang_parent_name = "backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::~MulticastPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-path";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastPath' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(std::move(c));
        children[segment_path] = uloop_explicit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    for (auto const & c : uloop_explicit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "multicast-path";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "uloop-explicit"; yang_parent_name = "multicast-path";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UloopExplicit' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::SrtePath()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "srte-path"; yang_parent_name = "backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::~SrtePath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srte-path";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrtePath' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(std::move(c));
        children[segment_path] = uloop_explicit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    for (auto const & c : uloop_explicit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "srte-path";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "uloop-explicit"; yang_parent_name = "srte-path";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UloopExplicit' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::ExplicitPath()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "explicit-path"; yang_parent_name = "backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::~ExplicitPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-path";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExplicitPath' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(std::move(c));
        children[segment_path] = uloop_explicit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    for (auto const & c : uloop_explicit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "explicit-path";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "uloop-explicit"; yang_parent_name = "explicit-path";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UloopExplicit' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::Source()
    :
    source_address{YType::str, "source-address"},
    source_lsp_id{YType::str, "source-lsp-id"},
    tags{YType::uint32, "tags"}
{
    yang_name = "source"; yang_parent_name = "backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::~Source()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::has_data() const
{
    for (std::size_t index=0; index<nodal_sid.size(); index++)
    {
        if(nodal_sid[index]->has_data())
            return true;
    }
    for (auto const & leaf : tags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return source_address.is_set
	|| source_lsp_id.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::has_operation() const
{
    for (std::size_t index=0; index<nodal_sid.size(); index++)
    {
        if(nodal_sid[index]->has_operation())
            return true;
    }
    for (auto const & leaf : tags.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(source_lsp_id.operation)
	|| is_set(tags.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_lsp_id.is_set || is_set(source_lsp_id.operation)) leaf_name_data.push_back(source_lsp_id.get_name_leafdata());

    auto tags_name_datas = tags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tags_name_datas.begin(), tags_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodal-sid")
    {
        for(auto const & c : nodal_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid>();
        c->parent = this;
        nodal_sid.push_back(std::move(c));
        children[segment_path] = nodal_sid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::get_children()
{
    for (auto const & c : nodal_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-lsp-id")
    {
        source_lsp_id = value;
    }
    if(value_path == "tags")
    {
        tags.append(value);
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::NodalSid()
    :
    algorithm{YType::uint8, "algorithm"},
    eflag{YType::uint8, "eflag"},
    lflag{YType::uint8, "lflag"},
    nflag{YType::uint8, "nflag"},
    pflag{YType::uint8, "pflag"},
    rflag{YType::uint8, "rflag"},
    sid_value{YType::uint32, "sid-value"},
    vflag{YType::uint8, "vflag"}
{
    yang_name = "nodal-sid"; yang_parent_name = "source";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::~NodalSid()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::has_data() const
{
    return algorithm.is_set
	|| eflag.is_set
	|| lflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| rflag.is_set
	|| sid_value.is_set
	|| vflag.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation)
	|| is_set(eflag.operation)
	|| is_set(lflag.operation)
	|| is_set(nflag.operation)
	|| is_set(pflag.operation)
	|| is_set(rflag.operation)
	|| is_set(sid_value.operation)
	|| is_set(vflag.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodal-sid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodalSid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.operation)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.operation)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.operation)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.operation)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.operation)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (sid_value.is_set || is_set(sid_value.operation)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.operation)) leaf_name_data.push_back(vflag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "eflag")
    {
        eflag = value;
    }
    if(value_path == "lflag")
    {
        lflag = value;
    }
    if(value_path == "nflag")
    {
        nflag = value;
    }
    if(value_path == "pflag")
    {
        pflag = value;
    }
    if(value_path == "rflag")
    {
        rflag = value;
    }
    if(value_path == "sid-value")
    {
        sid_value = value;
    }
    if(value_path == "vflag")
    {
        vflag = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::MulticastSource()
    :
    source_address{YType::str, "source-address"},
    source_lsp_id{YType::str, "source-lsp-id"},
    tags{YType::uint32, "tags"}
{
    yang_name = "multicast-source"; yang_parent_name = "backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::~MulticastSource()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::has_data() const
{
    for (std::size_t index=0; index<nodal_sid.size(); index++)
    {
        if(nodal_sid[index]->has_data())
            return true;
    }
    for (auto const & leaf : tags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return source_address.is_set
	|| source_lsp_id.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::has_operation() const
{
    for (std::size_t index=0; index<nodal_sid.size(); index++)
    {
        if(nodal_sid[index]->has_operation())
            return true;
    }
    for (auto const & leaf : tags.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(source_lsp_id.operation)
	|| is_set(tags.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-source";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastSource' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_lsp_id.is_set || is_set(source_lsp_id.operation)) leaf_name_data.push_back(source_lsp_id.get_name_leafdata());

    auto tags_name_datas = tags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tags_name_datas.begin(), tags_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodal-sid")
    {
        for(auto const & c : nodal_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid>();
        c->parent = this;
        nodal_sid.push_back(std::move(c));
        children[segment_path] = nodal_sid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::get_children()
{
    for (auto const & c : nodal_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-lsp-id")
    {
        source_lsp_id = value;
    }
    if(value_path == "tags")
    {
        tags.append(value);
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::NodalSid()
    :
    algorithm{YType::uint8, "algorithm"},
    eflag{YType::uint8, "eflag"},
    lflag{YType::uint8, "lflag"},
    nflag{YType::uint8, "nflag"},
    pflag{YType::uint8, "pflag"},
    rflag{YType::uint8, "rflag"},
    sid_value{YType::uint32, "sid-value"},
    vflag{YType::uint8, "vflag"}
{
    yang_name = "nodal-sid"; yang_parent_name = "multicast-source";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::~NodalSid()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::has_data() const
{
    return algorithm.is_set
	|| eflag.is_set
	|| lflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| rflag.is_set
	|| sid_value.is_set
	|| vflag.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation)
	|| is_set(eflag.operation)
	|| is_set(lflag.operation)
	|| is_set(nflag.operation)
	|| is_set(pflag.operation)
	|| is_set(rflag.operation)
	|| is_set(sid_value.operation)
	|| is_set(vflag.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodal-sid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodalSid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.operation)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.operation)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.operation)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.operation)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.operation)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (sid_value.is_set || is_set(sid_value.operation)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.operation)) leaf_name_data.push_back(vflag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "eflag")
    {
        eflag = value;
    }
    if(value_path == "lflag")
    {
        lflag = value;
    }
    if(value_path == "nflag")
    {
        nflag = value;
    }
    if(value_path == "pflag")
    {
        pflag = value;
    }
    if(value_path == "rflag")
    {
        rflag = value;
    }
    if(value_path == "sid-value")
    {
        sid_value = value;
    }
    if(value_path == "vflag")
    {
        vflag = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::PerLevelAdvertisingDetail()
    :
    advertising_origin{YType::enumeration, "advertising-origin"},
    is_external_metric{YType::boolean, "is-external-metric"},
    is_external_reachability{YType::boolean, "is-external-reachability"},
    is_interarea{YType::boolean, "is-interarea"},
    is_propagated{YType::boolean, "is-propagated"},
    level{YType::enumeration, "level"},
    metric{YType::uint32, "metric"},
    tags{YType::uint32, "tags"}
    	,
    summarization_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus>())
{
    summarization_status->parent = this;
    children["summarization-status"] = summarization_status;

    yang_name = "per-level-advertising-detail"; yang_parent_name = "ipv6-route";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::~PerLevelAdvertisingDetail()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::has_data() const
{
    for (std::size_t index=0; index<nodal_sid.size(); index++)
    {
        if(nodal_sid[index]->has_data())
            return true;
    }
    for (auto const & leaf : tags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return advertising_origin.is_set
	|| is_external_metric.is_set
	|| is_external_reachability.is_set
	|| is_interarea.is_set
	|| is_propagated.is_set
	|| level.is_set
	|| metric.is_set
	|| (summarization_status !=  nullptr && summarization_status->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::has_operation() const
{
    for (std::size_t index=0; index<nodal_sid.size(); index++)
    {
        if(nodal_sid[index]->has_operation())
            return true;
    }
    for (auto const & leaf : tags.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(advertising_origin.operation)
	|| is_set(is_external_metric.operation)
	|| is_set(is_external_reachability.operation)
	|| is_set(is_interarea.operation)
	|| is_set(is_propagated.operation)
	|| is_set(level.operation)
	|| is_set(metric.operation)
	|| is_set(tags.operation)
	|| (summarization_status !=  nullptr && summarization_status->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-level-advertising-detail";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerLevelAdvertisingDetail' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_origin.is_set || is_set(advertising_origin.operation)) leaf_name_data.push_back(advertising_origin.get_name_leafdata());
    if (is_external_metric.is_set || is_set(is_external_metric.operation)) leaf_name_data.push_back(is_external_metric.get_name_leafdata());
    if (is_external_reachability.is_set || is_set(is_external_reachability.operation)) leaf_name_data.push_back(is_external_reachability.get_name_leafdata());
    if (is_interarea.is_set || is_set(is_interarea.operation)) leaf_name_data.push_back(is_interarea.get_name_leafdata());
    if (is_propagated.is_set || is_set(is_propagated.operation)) leaf_name_data.push_back(is_propagated.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto tags_name_datas = tags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tags_name_datas.begin(), tags_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodal-sid")
    {
        for(auto const & c : nodal_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid>();
        c->parent = this;
        nodal_sid.push_back(std::move(c));
        children[segment_path] = nodal_sid.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "summarization-status")
    {
        if(summarization_status != nullptr)
        {
            children["summarization-status"] = summarization_status;
        }
        else
        {
            summarization_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus>();
            summarization_status->parent = this;
            children["summarization-status"] = summarization_status;
        }
        return children.at("summarization-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::get_children()
{
    for (auto const & c : nodal_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("summarization-status") == children.end())
    {
        if(summarization_status != nullptr)
        {
            children["summarization-status"] = summarization_status;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-origin")
    {
        advertising_origin = value;
    }
    if(value_path == "is-external-metric")
    {
        is_external_metric = value;
    }
    if(value_path == "is-external-reachability")
    {
        is_external_reachability = value;
    }
    if(value_path == "is-interarea")
    {
        is_interarea = value;
    }
    if(value_path == "is-propagated")
    {
        is_propagated = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "tags")
    {
        tags.append(value);
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummarizationStatus()
    :
    is_valid{YType::enumeration, "is-valid"}
    	,
    summary_prefix(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix>())
{
    summary_prefix->parent = this;
    children["summary-prefix"] = summary_prefix;

    yang_name = "summarization-status"; yang_parent_name = "per-level-advertising-detail";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::~SummarizationStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::has_data() const
{
    return is_valid.is_set
	|| (summary_prefix !=  nullptr && summary_prefix->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(is_valid.operation)
	|| (summary_prefix !=  nullptr && summary_prefix->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summarization-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummarizationStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary-prefix")
    {
        if(summary_prefix != nullptr)
        {
            children["summary-prefix"] = summary_prefix;
        }
        else
        {
            summary_prefix = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix>();
            summary_prefix->parent = this;
            children["summary-prefix"] = summary_prefix;
        }
        return children.at("summary-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::get_children()
{
    if(children.find("summary-prefix") == children.end())
    {
        if(summary_prefix != nullptr)
        {
            children["summary-prefix"] = summary_prefix;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::SummaryPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "summary-prefix"; yang_parent_name = "summarization-status";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::~SummaryPrefix()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryPrefix' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid::NodalSid()
    :
    algorithm{YType::uint8, "algorithm"},
    eflag{YType::uint8, "eflag"},
    lflag{YType::uint8, "lflag"},
    nflag{YType::uint8, "nflag"},
    pflag{YType::uint8, "pflag"},
    rflag{YType::uint8, "rflag"},
    sid_value{YType::uint32, "sid-value"},
    vflag{YType::uint8, "vflag"}
{
    yang_name = "nodal-sid"; yang_parent_name = "per-level-advertising-detail";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid::~NodalSid()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid::has_data() const
{
    return algorithm.is_set
	|| eflag.is_set
	|| lflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| rflag.is_set
	|| sid_value.is_set
	|| vflag.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation)
	|| is_set(eflag.operation)
	|| is_set(lflag.operation)
	|| is_set(nflag.operation)
	|| is_set(pflag.operation)
	|| is_set(rflag.operation)
	|| is_set(sid_value.operation)
	|| is_set(vflag.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodal-sid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodalSid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.operation)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.operation)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.operation)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.operation)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.operation)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (sid_value.is_set || is_set(sid_value.operation)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.operation)) leaf_name_data.push_back(vflag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "eflag")
    {
        eflag = value;
    }
    if(value_path == "lflag")
    {
        lflag = value;
    }
    if(value_path == "nflag")
    {
        nflag = value;
    }
    if(value_path == "pflag")
    {
        pflag = value;
    }
    if(value_path == "rflag")
    {
        rflag = value;
    }
    if(value_path == "sid-value")
    {
        sid_value = value;
    }
    if(value_path == "vflag")
    {
        vflag = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackups()
{
    yang_name = "ipv6frr-backups"; yang_parent_name = "topology";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::~Ipv6FrrBackups()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::has_data() const
{
    for (std::size_t index=0; index<ipv6frr_backup.size(); index++)
    {
        if(ipv6frr_backup[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::has_operation() const
{
    for (std::size_t index=0; index<ipv6frr_backup.size(); index++)
    {
        if(ipv6frr_backup[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6frr-backups";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6FrrBackups' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6frr-backup")
    {
        for(auto const & c : ipv6frr_backup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup>();
        c->parent = this;
        ipv6frr_backup.push_back(std::move(c));
        children[segment_path] = ipv6frr_backup.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::get_children()
{
    for (auto const & c : ipv6frr_backup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::Ipv6FrrBackup()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
    	,
    connected_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus>())
	,native_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus>())
	,redistributed_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus>())
{
    connected_status->parent = this;
    children["connected-status"] = connected_status;

    native_status->parent = this;
    children["native-status"] = native_status;

    redistributed_status->parent = this;
    children["redistributed-status"] = redistributed_status;

    yang_name = "ipv6frr-backup"; yang_parent_name = "ipv6frr-backups";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::~Ipv6FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::has_data() const
{
    for (std::size_t index=0; index<per_level_advertising_detail.size(); index++)
    {
        if(per_level_advertising_detail[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| (connected_status !=  nullptr && connected_status->has_data())
	|| (native_status !=  nullptr && native_status->has_data())
	|| (redistributed_status !=  nullptr && redistributed_status->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<per_level_advertising_detail.size(); index++)
    {
        if(per_level_advertising_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| (connected_status !=  nullptr && connected_status->has_operation())
	|| (native_status !=  nullptr && native_status->has_operation())
	|| (redistributed_status !=  nullptr && redistributed_status->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "connected-status")
    {
        if(connected_status != nullptr)
        {
            children["connected-status"] = connected_status;
        }
        else
        {
            connected_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus>();
            connected_status->parent = this;
            children["connected-status"] = connected_status;
        }
        return children.at("connected-status");
    }

    if(child_yang_name == "native-status")
    {
        if(native_status != nullptr)
        {
            children["native-status"] = native_status;
        }
        else
        {
            native_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus>();
            native_status->parent = this;
            children["native-status"] = native_status;
        }
        return children.at("native-status");
    }

    if(child_yang_name == "per-level-advertising-detail")
    {
        for(auto const & c : per_level_advertising_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail>();
        c->parent = this;
        per_level_advertising_detail.push_back(std::move(c));
        children[segment_path] = per_level_advertising_detail.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "redistributed-status")
    {
        if(redistributed_status != nullptr)
        {
            children["redistributed-status"] = redistributed_status;
        }
        else
        {
            redistributed_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus>();
            redistributed_status->parent = this;
            children["redistributed-status"] = redistributed_status;
        }
        return children.at("redistributed-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::get_children()
{
    if(children.find("connected-status") == children.end())
    {
        if(connected_status != nullptr)
        {
            children["connected-status"] = connected_status;
        }
    }

    if(children.find("native-status") == children.end())
    {
        if(native_status != nullptr)
        {
            children["native-status"] = native_status;
        }
    }

    for (auto const & c : per_level_advertising_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("redistributed-status") == children.end())
    {
        if(redistributed_status != nullptr)
        {
            children["redistributed-status"] = redistributed_status;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::ConnectedStatus()
    :
    is_valid{YType::enumeration, "is-valid"}
    	,
    connected_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::ConnectedDetails>())
{
    connected_details->parent = this;
    children["connected-details"] = connected_details;

    yang_name = "connected-status"; yang_parent_name = "ipv6frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::~ConnectedStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::has_data() const
{
    return is_valid.is_set
	|| (connected_details !=  nullptr && connected_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(is_valid.operation)
	|| (connected_details !=  nullptr && connected_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "connected-details")
    {
        if(connected_details != nullptr)
        {
            children["connected-details"] = connected_details;
        }
        else
        {
            connected_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::ConnectedDetails>();
            connected_details->parent = this;
            children["connected-details"] = connected_details;
        }
        return children.at("connected-details");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::get_children()
{
    if(children.find("connected-details") == children.end())
    {
        if(connected_details != nullptr)
        {
            children["connected-details"] = connected_details;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::ConnectedDetails::ConnectedDetails()
    :
    interface{YType::str, "interface"}
{
    yang_name = "connected-details"; yang_parent_name = "connected-status";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::ConnectedDetails::~ConnectedDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::ConnectedDetails::has_data() const
{
    for (auto const & leaf : interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::ConnectedDetails::has_operation() const
{
    for (auto const & leaf : interface.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::ConnectedDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-details";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::ConnectedDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedDetails' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_datas = interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_datas.begin(), interface_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::ConnectedDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::ConnectedDetails::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::ConnectedDetails::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface.append(value);
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributedStatus()
    :
    is_valid{YType::enumeration, "is-valid"}
    	,
    redistribution_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails>())
{
    redistribution_details->parent = this;
    children["redistribution-details"] = redistribution_details;

    yang_name = "redistributed-status"; yang_parent_name = "ipv6frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::~RedistributedStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::has_data() const
{
    return is_valid.is_set
	|| (redistribution_details !=  nullptr && redistribution_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(is_valid.operation)
	|| (redistribution_details !=  nullptr && redistribution_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributed-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistributedStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "redistribution-details")
    {
        if(redistribution_details != nullptr)
        {
            children["redistribution-details"] = redistribution_details;
        }
        else
        {
            redistribution_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails>();
            redistribution_details->parent = this;
            children["redistribution-details"] = redistribution_details;
        }
        return children.at("redistribution-details");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::get_children()
{
    if(children.find("redistribution-details") == children.end())
    {
        if(redistribution_details != nullptr)
        {
            children["redistribution-details"] = redistribution_details;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::RedistributionDetails()
{
    yang_name = "redistribution-details"; yang_parent_name = "redistributed-status";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::~RedistributionDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::has_data() const
{
    for (std::size_t index=0; index<isis_sh_route_redist_detail.size(); index++)
    {
        if(isis_sh_route_redist_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::has_operation() const
{
    for (std::size_t index=0; index<isis_sh_route_redist_detail.size(); index++)
    {
        if(isis_sh_route_redist_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution-details";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistributionDetails' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "isis-sh-route-redist-detail")
    {
        for(auto const & c : isis_sh_route_redist_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail>();
        c->parent = this;
        isis_sh_route_redist_detail.push_back(std::move(c));
        children[segment_path] = isis_sh_route_redist_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::get_children()
{
    for (auto const & c : isis_sh_route_redist_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::IsisShRouteRedistDetail()
    :
    level{YType::enumeration, "level"}
    	,
    owner(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner>())
{
    owner->parent = this;
    children["owner"] = owner;

    yang_name = "isis-sh-route-redist-detail"; yang_parent_name = "redistribution-details";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::~IsisShRouteRedistDetail()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::has_data() const
{
    return level.is_set
	|| (owner !=  nullptr && owner->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| (owner !=  nullptr && owner->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-sh-route-redist-detail";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisShRouteRedistDetail' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "owner")
    {
        if(owner != nullptr)
        {
            children["owner"] = owner;
        }
        else
        {
            owner = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner>();
            owner->parent = this;
            children["owner"] = owner;
        }
        return children.at("owner");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::get_children()
{
    if(children.find("owner") == children.end())
    {
        if(owner != nullptr)
        {
            children["owner"] = owner;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::Owner()
    :
    application_name{YType::str, "application-name"},
    bgp_as_number{YType::str, "bgp-as-number"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    ospfv3_process_id{YType::str, "ospfv3-process-id"},
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "owner"; yang_parent_name = "isis-sh-route-redist-detail";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::~Owner()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::has_data() const
{
    return application_name.is_set
	|| bgp_as_number.is_set
	|| eigrp_as_number.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| ospfv3_process_id.is_set
	|| protocol.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::has_operation() const
{
    return is_set(operation)
	|| is_set(application_name.operation)
	|| is_set(bgp_as_number.operation)
	|| is_set(eigrp_as_number.operation)
	|| is_set(isis_instance_id.operation)
	|| is_set(ospf_process_id.operation)
	|| is_set(ospfv3_process_id.operation)
	|| is_set(protocol.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Owner' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.operation)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (bgp_as_number.is_set || is_set(bgp_as_number.operation)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.operation)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.operation)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.operation)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (ospfv3_process_id.is_set || is_set(ospfv3_process_id.operation)) leaf_name_data.push_back(ospfv3_process_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "application-name")
    {
        application_name = value;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id = value;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id = value;
    }
    if(value_path == "ospfv3-process-id")
    {
        ospfv3_process_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeStatus()
    :
    is_valid{YType::enumeration, "is-valid"}
    	,
    native_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails>())
{
    native_details->parent = this;
    children["native-details"] = native_details;

    yang_name = "native-status"; yang_parent_name = "ipv6frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::~NativeStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::has_data() const
{
    return is_valid.is_set
	|| (native_details !=  nullptr && native_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(is_valid.operation)
	|| (native_details !=  nullptr && native_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NativeStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "native-details")
    {
        if(native_details != nullptr)
        {
            children["native-details"] = native_details;
        }
        else
        {
            native_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails>();
            native_details->parent = this;
            children["native-details"] = native_details;
        }
        return children.at("native-details");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::get_children()
{
    if(children.find("native-details") == children.end())
    {
        if(native_details != nullptr)
        {
            children["native-details"] = native_details;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::NativeDetails()
    :
    priority{YType::enumeration, "priority"}
    	,
    primary(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary>())
{
    primary->parent = this;
    children["primary"] = primary;

    yang_name = "native-details"; yang_parent_name = "native-status";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::~NativeDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::has_data() const
{
    for (std::size_t index=0; index<backup.size(); index++)
    {
        if(backup[index]->has_data())
            return true;
    }
    return priority.is_set
	|| (primary !=  nullptr && primary->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::has_operation() const
{
    for (std::size_t index=0; index<backup.size(); index++)
    {
        if(backup[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(priority.operation)
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native-details";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NativeDetails' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup")
    {
        for(auto const & c : backup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup>();
        c->parent = this;
        backup.push_back(std::move(c));
        children[segment_path] = backup.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "primary")
    {
        if(primary != nullptr)
        {
            children["primary"] = primary;
        }
        else
        {
            primary = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary>();
            primary->parent = this;
            children["primary"] = primary;
        }
        return children.at("primary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::get_children()
{
    for (auto const & c : backup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("primary") == children.end())
    {
        if(primary != nullptr)
        {
            children["primary"] = primary;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Primary()
    :
    administrative_distance{YType::uint16, "administrative-distance"},
    is_external_metric{YType::boolean, "is-external-metric"},
    metric{YType::uint32, "metric"},
    multicast_metric{YType::uint32, "multicast-metric"},
    origin{YType::enumeration, "origin"}
{
    yang_name = "primary"; yang_parent_name = "native-details";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::~Primary()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::has_data() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.size(); index++)
    {
        if(multicast_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_source.size(); index++)
    {
        if(multicast_source[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srte_path.size(); index++)
    {
        if(srte_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ucmp_next_hop.size(); index++)
    {
        if(ucmp_next_hop[index]->has_data())
            return true;
    }
    return administrative_distance.is_set
	|| is_external_metric.is_set
	|| metric.is_set
	|| multicast_metric.is_set
	|| origin.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::has_operation() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.size(); index++)
    {
        if(multicast_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_source.size(); index++)
    {
        if(multicast_source[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srte_path.size(); index++)
    {
        if(srte_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ucmp_next_hop.size(); index++)
    {
        if(ucmp_next_hop[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(administrative_distance.operation)
	|| is_set(is_external_metric.operation)
	|| is_set(metric.operation)
	|| is_set(multicast_metric.operation)
	|| is_set(origin.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Primary' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative_distance.is_set || is_set(administrative_distance.operation)) leaf_name_data.push_back(administrative_distance.get_name_leafdata());
    if (is_external_metric.is_set || is_set(is_external_metric.operation)) leaf_name_data.push_back(is_external_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (multicast_metric.is_set || is_set(multicast_metric.operation)) leaf_name_data.push_back(multicast_metric.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "explicit-path")
    {
        for(auto const & c : explicit_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath>();
        c->parent = this;
        explicit_path.push_back(std::move(c));
        children[segment_path] = explicit_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-path")
    {
        for(auto const & c : multicast_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath>();
        c->parent = this;
        multicast_path.push_back(std::move(c));
        children[segment_path] = multicast_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-source")
    {
        for(auto const & c : multicast_source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource>();
        c->parent = this;
        multicast_source.push_back(std::move(c));
        children[segment_path] = multicast_source.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths>();
        c->parent = this;
        paths.push_back(std::move(c));
        children[segment_path] = paths.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "source")
    {
        for(auto const & c : source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source>();
        c->parent = this;
        source.push_back(std::move(c));
        children[segment_path] = source.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "srte-path")
    {
        for(auto const & c : srte_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath>();
        c->parent = this;
        srte_path.push_back(std::move(c));
        children[segment_path] = srte_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ucmp-next-hop")
    {
        for(auto const & c : ucmp_next_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop>();
        c->parent = this;
        ucmp_next_hop.push_back(std::move(c));
        children[segment_path] = ucmp_next_hop.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::get_children()
{
    for (auto const & c : explicit_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : multicast_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : multicast_source)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : source)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : srte_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ucmp_next_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "administrative-distance")
    {
        administrative_distance = value;
    }
    if(value_path == "is-external-metric")
    {
        is_external_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "multicast-metric")
    {
        multicast_metric = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::Paths()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "paths"; yang_parent_name = "primary";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::~Paths()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Paths' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(std::move(c));
        children[segment_path] = uloop_explicit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    for (auto const & c : uloop_explicit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "paths";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "uloop-explicit"; yang_parent_name = "paths";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UloopExplicit' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::UcmpNextHop()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    total_ucmp_distance{YType::uint32, "total-ucmp-distance"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "ucmp-next-hop"; yang_parent_name = "primary";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::~UcmpNextHop()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::has_data() const
{
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| total_ucmp_distance.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(total_ucmp_distance.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucmp-next-hop";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UcmpNextHop' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (total_ucmp_distance.is_set || is_set(total_ucmp_distance.operation)) leaf_name_data.push_back(total_ucmp_distance.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "total-ucmp-distance")
    {
        total_ucmp_distance = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "ucmp-next-hop";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::MulticastPath()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "multicast-path"; yang_parent_name = "primary";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::~MulticastPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-path";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastPath' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(std::move(c));
        children[segment_path] = uloop_explicit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    for (auto const & c : uloop_explicit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "multicast-path";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "uloop-explicit"; yang_parent_name = "multicast-path";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UloopExplicit' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::SrtePath()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "srte-path"; yang_parent_name = "primary";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::~SrtePath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srte-path";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrtePath' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(std::move(c));
        children[segment_path] = uloop_explicit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    for (auto const & c : uloop_explicit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "srte-path";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "uloop-explicit"; yang_parent_name = "srte-path";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UloopExplicit' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::ExplicitPath()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "explicit-path"; yang_parent_name = "primary";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::~ExplicitPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-path";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExplicitPath' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(std::move(c));
        children[segment_path] = uloop_explicit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    for (auto const & c : uloop_explicit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "explicit-path";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "uloop-explicit"; yang_parent_name = "explicit-path";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UloopExplicit' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::Source()
    :
    source_address{YType::str, "source-address"},
    source_lsp_id{YType::str, "source-lsp-id"},
    tags{YType::uint32, "tags"}
{
    yang_name = "source"; yang_parent_name = "primary";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::~Source()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::has_data() const
{
    for (std::size_t index=0; index<nodal_sid.size(); index++)
    {
        if(nodal_sid[index]->has_data())
            return true;
    }
    for (auto const & leaf : tags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return source_address.is_set
	|| source_lsp_id.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::has_operation() const
{
    for (std::size_t index=0; index<nodal_sid.size(); index++)
    {
        if(nodal_sid[index]->has_operation())
            return true;
    }
    for (auto const & leaf : tags.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(source_lsp_id.operation)
	|| is_set(tags.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_lsp_id.is_set || is_set(source_lsp_id.operation)) leaf_name_data.push_back(source_lsp_id.get_name_leafdata());

    auto tags_name_datas = tags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tags_name_datas.begin(), tags_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodal-sid")
    {
        for(auto const & c : nodal_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid>();
        c->parent = this;
        nodal_sid.push_back(std::move(c));
        children[segment_path] = nodal_sid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::get_children()
{
    for (auto const & c : nodal_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-lsp-id")
    {
        source_lsp_id = value;
    }
    if(value_path == "tags")
    {
        tags.append(value);
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid::NodalSid()
    :
    algorithm{YType::uint8, "algorithm"},
    eflag{YType::uint8, "eflag"},
    lflag{YType::uint8, "lflag"},
    nflag{YType::uint8, "nflag"},
    pflag{YType::uint8, "pflag"},
    rflag{YType::uint8, "rflag"},
    sid_value{YType::uint32, "sid-value"},
    vflag{YType::uint8, "vflag"}
{
    yang_name = "nodal-sid"; yang_parent_name = "source";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid::~NodalSid()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid::has_data() const
{
    return algorithm.is_set
	|| eflag.is_set
	|| lflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| rflag.is_set
	|| sid_value.is_set
	|| vflag.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation)
	|| is_set(eflag.operation)
	|| is_set(lflag.operation)
	|| is_set(nflag.operation)
	|| is_set(pflag.operation)
	|| is_set(rflag.operation)
	|| is_set(sid_value.operation)
	|| is_set(vflag.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodal-sid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodalSid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.operation)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.operation)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.operation)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.operation)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.operation)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (sid_value.is_set || is_set(sid_value.operation)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.operation)) leaf_name_data.push_back(vflag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "eflag")
    {
        eflag = value;
    }
    if(value_path == "lflag")
    {
        lflag = value;
    }
    if(value_path == "nflag")
    {
        nflag = value;
    }
    if(value_path == "pflag")
    {
        pflag = value;
    }
    if(value_path == "rflag")
    {
        rflag = value;
    }
    if(value_path == "sid-value")
    {
        sid_value = value;
    }
    if(value_path == "vflag")
    {
        vflag = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::MulticastSource()
    :
    source_address{YType::str, "source-address"},
    source_lsp_id{YType::str, "source-lsp-id"},
    tags{YType::uint32, "tags"}
{
    yang_name = "multicast-source"; yang_parent_name = "primary";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::~MulticastSource()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::has_data() const
{
    for (std::size_t index=0; index<nodal_sid.size(); index++)
    {
        if(nodal_sid[index]->has_data())
            return true;
    }
    for (auto const & leaf : tags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return source_address.is_set
	|| source_lsp_id.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::has_operation() const
{
    for (std::size_t index=0; index<nodal_sid.size(); index++)
    {
        if(nodal_sid[index]->has_operation())
            return true;
    }
    for (auto const & leaf : tags.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(source_lsp_id.operation)
	|| is_set(tags.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-source";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastSource' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_lsp_id.is_set || is_set(source_lsp_id.operation)) leaf_name_data.push_back(source_lsp_id.get_name_leafdata());

    auto tags_name_datas = tags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tags_name_datas.begin(), tags_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodal-sid")
    {
        for(auto const & c : nodal_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid>();
        c->parent = this;
        nodal_sid.push_back(std::move(c));
        children[segment_path] = nodal_sid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::get_children()
{
    for (auto const & c : nodal_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-lsp-id")
    {
        source_lsp_id = value;
    }
    if(value_path == "tags")
    {
        tags.append(value);
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::NodalSid()
    :
    algorithm{YType::uint8, "algorithm"},
    eflag{YType::uint8, "eflag"},
    lflag{YType::uint8, "lflag"},
    nflag{YType::uint8, "nflag"},
    pflag{YType::uint8, "pflag"},
    rflag{YType::uint8, "rflag"},
    sid_value{YType::uint32, "sid-value"},
    vflag{YType::uint8, "vflag"}
{
    yang_name = "nodal-sid"; yang_parent_name = "multicast-source";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::~NodalSid()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::has_data() const
{
    return algorithm.is_set
	|| eflag.is_set
	|| lflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| rflag.is_set
	|| sid_value.is_set
	|| vflag.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation)
	|| is_set(eflag.operation)
	|| is_set(lflag.operation)
	|| is_set(nflag.operation)
	|| is_set(pflag.operation)
	|| is_set(rflag.operation)
	|| is_set(sid_value.operation)
	|| is_set(vflag.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodal-sid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodalSid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.operation)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.operation)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.operation)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.operation)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.operation)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (sid_value.is_set || is_set(sid_value.operation)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.operation)) leaf_name_data.push_back(vflag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "eflag")
    {
        eflag = value;
    }
    if(value_path == "lflag")
    {
        lflag = value;
    }
    if(value_path == "nflag")
    {
        nflag = value;
    }
    if(value_path == "pflag")
    {
        pflag = value;
    }
    if(value_path == "rflag")
    {
        rflag = value;
    }
    if(value_path == "sid-value")
    {
        sid_value = value;
    }
    if(value_path == "vflag")
    {
        vflag = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Backup()
    :
    administrative_distance{YType::uint16, "administrative-distance"},
    is_external_metric{YType::boolean, "is-external-metric"},
    metric{YType::uint32, "metric"},
    multicast_metric{YType::uint32, "multicast-metric"},
    origin{YType::enumeration, "origin"}
{
    yang_name = "backup"; yang_parent_name = "native-details";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::~Backup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::has_data() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.size(); index++)
    {
        if(multicast_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_source.size(); index++)
    {
        if(multicast_source[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srte_path.size(); index++)
    {
        if(srte_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ucmp_next_hop.size(); index++)
    {
        if(ucmp_next_hop[index]->has_data())
            return true;
    }
    return administrative_distance.is_set
	|| is_external_metric.is_set
	|| metric.is_set
	|| multicast_metric.is_set
	|| origin.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::has_operation() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.size(); index++)
    {
        if(multicast_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_source.size(); index++)
    {
        if(multicast_source[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srte_path.size(); index++)
    {
        if(srte_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ucmp_next_hop.size(); index++)
    {
        if(ucmp_next_hop[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(administrative_distance.operation)
	|| is_set(is_external_metric.operation)
	|| is_set(metric.operation)
	|| is_set(multicast_metric.operation)
	|| is_set(origin.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative_distance.is_set || is_set(administrative_distance.operation)) leaf_name_data.push_back(administrative_distance.get_name_leafdata());
    if (is_external_metric.is_set || is_set(is_external_metric.operation)) leaf_name_data.push_back(is_external_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (multicast_metric.is_set || is_set(multicast_metric.operation)) leaf_name_data.push_back(multicast_metric.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "explicit-path")
    {
        for(auto const & c : explicit_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath>();
        c->parent = this;
        explicit_path.push_back(std::move(c));
        children[segment_path] = explicit_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-path")
    {
        for(auto const & c : multicast_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath>();
        c->parent = this;
        multicast_path.push_back(std::move(c));
        children[segment_path] = multicast_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-source")
    {
        for(auto const & c : multicast_source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource>();
        c->parent = this;
        multicast_source.push_back(std::move(c));
        children[segment_path] = multicast_source.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths>();
        c->parent = this;
        paths.push_back(std::move(c));
        children[segment_path] = paths.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "source")
    {
        for(auto const & c : source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Source>();
        c->parent = this;
        source.push_back(std::move(c));
        children[segment_path] = source.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "srte-path")
    {
        for(auto const & c : srte_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath>();
        c->parent = this;
        srte_path.push_back(std::move(c));
        children[segment_path] = srte_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ucmp-next-hop")
    {
        for(auto const & c : ucmp_next_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop>();
        c->parent = this;
        ucmp_next_hop.push_back(std::move(c));
        children[segment_path] = ucmp_next_hop.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::get_children()
{
    for (auto const & c : explicit_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : multicast_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : multicast_source)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : source)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : srte_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ucmp_next_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "administrative-distance")
    {
        administrative_distance = value;
    }
    if(value_path == "is-external-metric")
    {
        is_external_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "multicast-metric")
    {
        multicast_metric = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::Paths()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "paths"; yang_parent_name = "backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::~Paths()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Paths' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(std::move(c));
        children[segment_path] = uloop_explicit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    for (auto const & c : uloop_explicit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "paths";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "frr-backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{
    yang_name = "uloop-explicit"; yang_parent_name = "paths";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_node_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_ipv4_addr.operation)
	|| is_set(repair_ipv6_addr.operation)
	|| is_set(repair_label.operation)
	|| is_set(repair_strict_spf_label.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UloopExplicit' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.operation)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.operation)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.operation)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.operation)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::UcmpNextHop()
    :
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    total_ucmp_distance{YType::uint32, "total-ucmp-distance"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup>())
{
    frr_backup->parent = this;
    children["frr-backup"] = frr_backup;

    yang_name = "ucmp-next-hop"; yang_parent_name = "backup";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::~UcmpNextHop()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::has_data() const
{
    return egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| total_ucmp_distance.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(tag.operation)
	|| is_set(total_ucmp_distance.operation)
	|| is_set(weight.operation)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucmp-next-hop";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UcmpNextHop' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (total_ucmp_distance.is_set || is_set(total_ucmp_distance.operation)) leaf_name_data.push_back(total_ucmp_distance.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-backup")
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
        else
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup>();
            frr_backup->parent = this;
            children["frr-backup"] = frr_backup;
        }
        return children.at("frr-backup");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::get_children()
{
    if(children.find("frr-backup") == children.end())
    {
        if(frr_backup != nullptr)
        {
            children["frr-backup"] = frr_backup;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "total-ucmp-distance")
    {
        total_ucmp_distance = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    segment_routing_sid_value_entry{YType::uint32, "segment-routing-sid-value-entry"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{
    yang_name = "frr-backup"; yang_parent_name = "ucmp-next-hop";
}

Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (auto const & leaf : segment_routing_sid_value_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(egress_interface.operation)
	|| is_set(is_downstream.operation)
	|| is_set(is_epcfrr_lfa.operation)
	|| is_set(is_lc_disjoint.operation)
	|| is_set(is_node_protecting.operation)
	|| is_set(is_primary_path.operation)
	|| is_set(is_remote_lfa.operation)
	|| is_set(is_srlg_disjoint.operation)
	|| is_set(is_strict_spflfa.operation)
	|| is_set(is_tunnel_requested.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(num_sid.operation)
	|| is_set(remote_lfa_router_id.operation)
	|| is_set(remote_lfa_router_pid.operation)
	|| is_set(remote_lfa_system_id.operation)
	|| is_set(remote_lfa_system_pid.operation)
	|| is_set(segment_routing_sid_value.operation)
	|| is_set(segment_routing_sid_value_entry.operation)
	|| is_set(tilfa_computation.operation)
	|| is_set(total_backup_distance.operation)
	|| is_set(tunnel_egress_interface.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.operation)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.operation)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.operation)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.operation)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.operation)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.operation)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.operation)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.operation)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.operation)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.operation)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.operation)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.operation)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.operation)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.operation)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.operation)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.operation)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.operation)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.operation)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto segment_routing_sid_value_entry_name_datas = segment_routing_sid_value_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), segment_routing_sid_value_entry_name_datas.begin(), segment_routing_sid_value_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
    }
    if(value_path == "segment-routing-sid-value-entry")
    {
        segment_routing_sid_value_entry.append(value);
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}


}
}

