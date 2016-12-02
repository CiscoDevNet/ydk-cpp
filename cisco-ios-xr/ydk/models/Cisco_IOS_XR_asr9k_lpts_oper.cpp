
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_asr9k_lpts_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_lpts_oper {

PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::PoliceInfo()
    :
    	accepted_stats{YType::uint64, "accepted-stats"},
	 acl_config{YType::uint8, "acl-config"},
	 acl_str{YType::str, "acl-str"},
	 avgrate{YType::uint32, "avgrate"},
	 avgrate_type{YType::str, "avgrate-type"},
	 burst{YType::uint32, "burst"},
	 change_type{YType::uint8, "change-type"},
	 dropped_stats{YType::uint64, "dropped-stats"},
	 flow_type{YType::str, "flow-type"},
	 iptos_value{YType::uint8, "iptos-value"},
	 np{YType::uint8, "np"},
	 policer{YType::uint32, "policer"},
	 static_avgrate{YType::uint32, "static-avgrate"}
{
    yang_name = "police-info"; yang_parent_name = "police";
}

PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::~PoliceInfo()
{
}

bool PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::has_data() const
{
    return accepted_stats.is_set
	|| acl_config.is_set
	|| acl_str.is_set
	|| avgrate.is_set
	|| avgrate_type.is_set
	|| burst.is_set
	|| change_type.is_set
	|| dropped_stats.is_set
	|| flow_type.is_set
	|| iptos_value.is_set
	|| np.is_set
	|| policer.is_set
	|| static_avgrate.is_set;
}

bool PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_stats.operation)
	|| is_set(acl_config.operation)
	|| is_set(acl_str.operation)
	|| is_set(avgrate.operation)
	|| is_set(avgrate_type.operation)
	|| is_set(burst.operation)
	|| is_set(change_type.operation)
	|| is_set(dropped_stats.operation)
	|| is_set(flow_type.operation)
	|| is_set(iptos_value.operation)
	|| is_set(np.operation)
	|| is_set(policer.operation)
	|| is_set(static_avgrate.operation);
}

std::string PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-info";

    return path_buffer.str();

}

EntityPath PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_stats.is_set || is_set(accepted_stats.operation)) leaf_name_data.push_back(accepted_stats.get_name_leafdata());
    if (acl_config.is_set || is_set(acl_config.operation)) leaf_name_data.push_back(acl_config.get_name_leafdata());
    if (acl_str.is_set || is_set(acl_str.operation)) leaf_name_data.push_back(acl_str.get_name_leafdata());
    if (avgrate.is_set || is_set(avgrate.operation)) leaf_name_data.push_back(avgrate.get_name_leafdata());
    if (avgrate_type.is_set || is_set(avgrate_type.operation)) leaf_name_data.push_back(avgrate_type.get_name_leafdata());
    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.operation)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (dropped_stats.is_set || is_set(dropped_stats.operation)) leaf_name_data.push_back(dropped_stats.get_name_leafdata());
    if (flow_type.is_set || is_set(flow_type.operation)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (iptos_value.is_set || is_set(iptos_value.operation)) leaf_name_data.push_back(iptos_value.get_name_leafdata());
    if (np.is_set || is_set(np.operation)) leaf_name_data.push_back(np.get_name_leafdata());
    if (policer.is_set || is_set(policer.operation)) leaf_name_data.push_back(policer.get_name_leafdata());
    if (static_avgrate.is_set || is_set(static_avgrate.operation)) leaf_name_data.push_back(static_avgrate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::get_children()
{
    return children;
}

void PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-stats")
    {
        accepted_stats = value;
    }
    if(value_path == "acl-config")
    {
        acl_config = value;
    }
    if(value_path == "acl-str")
    {
        acl_str = value;
    }
    if(value_path == "avgrate")
    {
        avgrate = value;
    }
    if(value_path == "avgrate-type")
    {
        avgrate_type = value;
    }
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "change-type")
    {
        change_type = value;
    }
    if(value_path == "dropped-stats")
    {
        dropped_stats = value;
    }
    if(value_path == "flow-type")
    {
        flow_type = value;
    }
    if(value_path == "iptos-value")
    {
        iptos_value = value;
    }
    if(value_path == "np")
    {
        np = value;
    }
    if(value_path == "policer")
    {
        policer = value;
    }
    if(value_path == "static-avgrate")
    {
        static_avgrate = value;
    }
}

PlatformLptspIfib::Nodes::Node::Police::Police()
{
    yang_name = "police"; yang_parent_name = "node";
}

PlatformLptspIfib::Nodes::Node::Police::~Police()
{
}

bool PlatformLptspIfib::Nodes::Node::Police::has_data() const
{
    for (std::size_t index=0; index<police_info.size(); index++)
    {
        if(police_info[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformLptspIfib::Nodes::Node::Police::has_operation() const
{
    for (std::size_t index=0; index<police_info.size(); index++)
    {
        if(police_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformLptspIfib::Nodes::Node::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

EntityPath PlatformLptspIfib::Nodes::Node::Police::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformLptspIfib::Nodes::Node::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "police-info")
    {
        for(auto const & c : police_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformLptspIfib::Nodes::Node::Police::PoliceInfo>();
        c->parent = this;
        police_info.push_back(std::move(c));
        children[segment_path] = police_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformLptspIfib::Nodes::Node::Police::get_children()
{
    for (auto const & c : police_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformLptspIfib::Nodes::Node::Police::set_value(const std::string & value_path, std::string value)
{
}

PlatformLptspIfib::Nodes::Node::Stats::Stats()
    :
    	accepted{YType::uint64, "accepted"},
	 clear_ts{YType::uint64, "clear-ts"},
	 dropped{YType::uint64, "dropped"},
	 no_stats_mem_err{YType::uint64, "no-stats-mem-err"}
{
    yang_name = "stats"; yang_parent_name = "node";
}

PlatformLptspIfib::Nodes::Node::Stats::~Stats()
{
}

bool PlatformLptspIfib::Nodes::Node::Stats::has_data() const
{
    return accepted.is_set
	|| clear_ts.is_set
	|| dropped.is_set
	|| no_stats_mem_err.is_set;
}

bool PlatformLptspIfib::Nodes::Node::Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted.operation)
	|| is_set(clear_ts.operation)
	|| is_set(dropped.operation)
	|| is_set(no_stats_mem_err.operation);
}

std::string PlatformLptspIfib::Nodes::Node::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

EntityPath PlatformLptspIfib::Nodes::Node::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted.is_set || is_set(accepted.operation)) leaf_name_data.push_back(accepted.get_name_leafdata());
    if (clear_ts.is_set || is_set(clear_ts.operation)) leaf_name_data.push_back(clear_ts.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (no_stats_mem_err.is_set || is_set(no_stats_mem_err.operation)) leaf_name_data.push_back(no_stats_mem_err.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformLptspIfib::Nodes::Node::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformLptspIfib::Nodes::Node::Stats::get_children()
{
    return children;
}

void PlatformLptspIfib::Nodes::Node::Stats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted")
    {
        accepted = value;
    }
    if(value_path == "clear-ts")
    {
        clear_ts = value;
    }
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "no-stats-mem-err")
    {
        no_stats_mem_err = value;
    }
}

PlatformLptspIfib::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    police(std::make_unique<PlatformLptspIfib::Nodes::Node::Police>())
	,stats(std::make_unique<PlatformLptspIfib::Nodes::Node::Stats>())
{
    police->parent = this;
    children["police"] = police.get();

    stats->parent = this;
    children["stats"] = stats.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

PlatformLptspIfib::Nodes::Node::~Node()
{
}

bool PlatformLptspIfib::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (police !=  nullptr && police->has_data())
	|| (stats !=  nullptr && stats->has_data());
}

bool PlatformLptspIfib::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (police !=  nullptr && is_set(police->operation))
	|| (stats !=  nullptr && is_set(stats->operation));
}

std::string PlatformLptspIfib::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformLptspIfib::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-lpts-oper:platform-lptsp-ifib/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformLptspIfib::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "police")
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
        else
        {
            police = std::make_unique<PlatformLptspIfib::Nodes::Node::Police>();
            police->parent = this;
            children["police"] = police.get();
        }
        return children.at("police");
    }

    if(child_yang_name == "stats")
    {
        if(stats != nullptr)
        {
            children["stats"] = stats.get();
        }
        else
        {
            stats = std::make_unique<PlatformLptspIfib::Nodes::Node::Stats>();
            stats->parent = this;
            children["stats"] = stats.get();
        }
        return children.at("stats");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformLptspIfib::Nodes::Node::get_children()
{
    if(children.find("police") == children.end())
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
    }

    if(children.find("stats") == children.end())
    {
        if(stats != nullptr)
        {
            children["stats"] = stats.get();
        }
    }

    return children;
}

void PlatformLptspIfib::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

PlatformLptspIfib::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "platform-lptsp-ifib";
}

PlatformLptspIfib::Nodes::~Nodes()
{
}

bool PlatformLptspIfib::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformLptspIfib::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformLptspIfib::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath PlatformLptspIfib::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-lpts-oper:platform-lptsp-ifib/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformLptspIfib::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformLptspIfib::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformLptspIfib::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformLptspIfib::Nodes::set_value(const std::string & value_path, std::string value)
{
}

PlatformLptspIfib::PlatformLptspIfib()
    :
    nodes(std::make_unique<PlatformLptspIfib::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "platform-lptsp-ifib"; yang_parent_name = "Cisco-IOS-XR-asr9k-lpts-oper";
}

PlatformLptspIfib::~PlatformLptspIfib()
{
}

bool PlatformLptspIfib::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool PlatformLptspIfib::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string PlatformLptspIfib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lpts-oper:platform-lptsp-ifib";

    return path_buffer.str();

}

EntityPath PlatformLptspIfib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformLptspIfib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<PlatformLptspIfib::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformLptspIfib::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void PlatformLptspIfib::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> PlatformLptspIfib::clone_ptr()
{
    return std::make_unique<PlatformLptspIfib>();
}


}
}

