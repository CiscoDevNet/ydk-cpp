
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_pbr_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pbr_oper {

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::GeneralStats()
    :
    	match_data_rate{YType::uint32, "match-data-rate"},
	 pre_policy_matched_bytes{YType::uint64, "pre-policy-matched-bytes"},
	 pre_policy_matched_packets{YType::uint64, "pre-policy-matched-packets"},
	 total_drop_bytes{YType::uint64, "total-drop-bytes"},
	 total_drop_packets{YType::uint64, "total-drop-packets"},
	 total_drop_rate{YType::uint32, "total-drop-rate"},
	 total_transmit_rate{YType::uint32, "total-transmit-rate"},
	 transmit_bytes{YType::uint64, "transmit-bytes"},
	 transmit_packets{YType::uint64, "transmit-packets"}
{
    yang_name = "general-stats"; yang_parent_name = "class-stat";
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::~GeneralStats()
{
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::has_data() const
{
    return match_data_rate.is_set
	|| pre_policy_matched_bytes.is_set
	|| pre_policy_matched_packets.is_set
	|| total_drop_bytes.is_set
	|| total_drop_packets.is_set
	|| total_drop_rate.is_set
	|| total_transmit_rate.is_set
	|| transmit_bytes.is_set
	|| transmit_packets.is_set;
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::has_operation() const
{
    return is_set(operation)
	|| is_set(match_data_rate.operation)
	|| is_set(pre_policy_matched_bytes.operation)
	|| is_set(pre_policy_matched_packets.operation)
	|| is_set(total_drop_bytes.operation)
	|| is_set(total_drop_packets.operation)
	|| is_set(total_drop_rate.operation)
	|| is_set(total_transmit_rate.operation)
	|| is_set(transmit_bytes.operation)
	|| is_set(transmit_packets.operation);
}

std::string Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general-stats";

    return path_buffer.str();

}

EntityPath Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::get_entity_path(Entity* ancestor) const
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

    if (match_data_rate.is_set || is_set(match_data_rate.operation)) leaf_name_data.push_back(match_data_rate.get_name_leafdata());
    if (pre_policy_matched_bytes.is_set || is_set(pre_policy_matched_bytes.operation)) leaf_name_data.push_back(pre_policy_matched_bytes.get_name_leafdata());
    if (pre_policy_matched_packets.is_set || is_set(pre_policy_matched_packets.operation)) leaf_name_data.push_back(pre_policy_matched_packets.get_name_leafdata());
    if (total_drop_bytes.is_set || is_set(total_drop_bytes.operation)) leaf_name_data.push_back(total_drop_bytes.get_name_leafdata());
    if (total_drop_packets.is_set || is_set(total_drop_packets.operation)) leaf_name_data.push_back(total_drop_packets.get_name_leafdata());
    if (total_drop_rate.is_set || is_set(total_drop_rate.operation)) leaf_name_data.push_back(total_drop_rate.get_name_leafdata());
    if (total_transmit_rate.is_set || is_set(total_transmit_rate.operation)) leaf_name_data.push_back(total_transmit_rate.get_name_leafdata());
    if (transmit_bytes.is_set || is_set(transmit_bytes.operation)) leaf_name_data.push_back(transmit_bytes.get_name_leafdata());
    if (transmit_packets.is_set || is_set(transmit_packets.operation)) leaf_name_data.push_back(transmit_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::get_children()
{
    return children;
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-data-rate")
    {
        match_data_rate = value;
    }
    if(value_path == "pre-policy-matched-bytes")
    {
        pre_policy_matched_bytes = value;
    }
    if(value_path == "pre-policy-matched-packets")
    {
        pre_policy_matched_packets = value;
    }
    if(value_path == "total-drop-bytes")
    {
        total_drop_bytes = value;
    }
    if(value_path == "total-drop-packets")
    {
        total_drop_packets = value;
    }
    if(value_path == "total-drop-rate")
    {
        total_drop_rate = value;
    }
    if(value_path == "total-transmit-rate")
    {
        total_transmit_rate = value;
    }
    if(value_path == "transmit-bytes")
    {
        transmit_bytes = value;
    }
    if(value_path == "transmit-packets")
    {
        transmit_packets = value;
    }
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::HttprStats()
    :
    	drop_bytes{YType::uint64, "drop-bytes"},
	 drop_packets{YType::uint64, "drop-packets"},
	 resp_sent_bytes{YType::uint64, "resp-sent-bytes"},
	 resp_sent_packets{YType::uint64, "resp-sent-packets"},
	 rqst_rcvd_bytes{YType::uint64, "rqst-rcvd-bytes"},
	 rqst_rcvd_packets{YType::uint64, "rqst-rcvd-packets"}
{
    yang_name = "httpr-stats"; yang_parent_name = "class-stat";
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::~HttprStats()
{
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::has_data() const
{
    return drop_bytes.is_set
	|| drop_packets.is_set
	|| resp_sent_bytes.is_set
	|| resp_sent_packets.is_set
	|| rqst_rcvd_bytes.is_set
	|| rqst_rcvd_packets.is_set;
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::has_operation() const
{
    return is_set(operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_packets.operation)
	|| is_set(resp_sent_bytes.operation)
	|| is_set(resp_sent_packets.operation)
	|| is_set(rqst_rcvd_bytes.operation)
	|| is_set(rqst_rcvd_packets.operation);
}

std::string Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "httpr-stats";

    return path_buffer.str();

}

EntityPath Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::get_entity_path(Entity* ancestor) const
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

    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.operation)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (resp_sent_bytes.is_set || is_set(resp_sent_bytes.operation)) leaf_name_data.push_back(resp_sent_bytes.get_name_leafdata());
    if (resp_sent_packets.is_set || is_set(resp_sent_packets.operation)) leaf_name_data.push_back(resp_sent_packets.get_name_leafdata());
    if (rqst_rcvd_bytes.is_set || is_set(rqst_rcvd_bytes.operation)) leaf_name_data.push_back(rqst_rcvd_bytes.get_name_leafdata());
    if (rqst_rcvd_packets.is_set || is_set(rqst_rcvd_packets.operation)) leaf_name_data.push_back(rqst_rcvd_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::get_children()
{
    return children;
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
    }
    if(value_path == "resp-sent-bytes")
    {
        resp_sent_bytes = value;
    }
    if(value_path == "resp-sent-packets")
    {
        resp_sent_packets = value;
    }
    if(value_path == "rqst-rcvd-bytes")
    {
        rqst_rcvd_bytes = value;
    }
    if(value_path == "rqst-rcvd-packets")
    {
        rqst_rcvd_packets = value;
    }
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::ClassStat()
    :
    	class_id{YType::uint32, "class-id"},
	 class_name{YType::str, "class-name"},
	 counter_validity_bitmask{YType::uint64, "counter-validity-bitmask"}
    	,
    general_stats(std::make_unique<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats>())
	,httpr_stats(std::make_unique<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats>())
{
    general_stats->parent = this;
    children["general-stats"] = general_stats.get();

    httpr_stats->parent = this;
    children["httpr-stats"] = httpr_stats.get();

    yang_name = "class-stat"; yang_parent_name = "input";
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::~ClassStat()
{
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::has_data() const
{
    return class_id.is_set
	|| class_name.is_set
	|| counter_validity_bitmask.is_set
	|| (general_stats !=  nullptr && general_stats->has_data())
	|| (httpr_stats !=  nullptr && httpr_stats->has_data());
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::has_operation() const
{
    return is_set(operation)
	|| is_set(class_id.operation)
	|| is_set(class_name.operation)
	|| is_set(counter_validity_bitmask.operation)
	|| (general_stats !=  nullptr && is_set(general_stats->operation))
	|| (httpr_stats !=  nullptr && is_set(httpr_stats->operation));
}

std::string Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-stat";

    return path_buffer.str();

}

EntityPath Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::get_entity_path(Entity* ancestor) const
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

    if (class_id.is_set || is_set(class_id.operation)) leaf_name_data.push_back(class_id.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (counter_validity_bitmask.is_set || is_set(counter_validity_bitmask.operation)) leaf_name_data.push_back(counter_validity_bitmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "general-stats")
    {
        if(general_stats != nullptr)
        {
            children["general-stats"] = general_stats.get();
        }
        else
        {
            general_stats = std::make_unique<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats>();
            general_stats->parent = this;
            children["general-stats"] = general_stats.get();
        }
        return children.at("general-stats");
    }

    if(child_yang_name == "httpr-stats")
    {
        if(httpr_stats != nullptr)
        {
            children["httpr-stats"] = httpr_stats.get();
        }
        else
        {
            httpr_stats = std::make_unique<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats>();
            httpr_stats->parent = this;
            children["httpr-stats"] = httpr_stats.get();
        }
        return children.at("httpr-stats");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::get_children()
{
    if(children.find("general-stats") == children.end())
    {
        if(general_stats != nullptr)
        {
            children["general-stats"] = general_stats.get();
        }
    }

    if(children.find("httpr-stats") == children.end())
    {
        if(httpr_stats != nullptr)
        {
            children["httpr-stats"] = httpr_stats.get();
        }
    }

    return children;
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-id")
    {
        class_id = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "counter-validity-bitmask")
    {
        counter_validity_bitmask = value;
    }
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::Input()
    :
    	node_name{YType::str, "node-name"},
	 policy_name{YType::str, "policy-name"},
	 state{YType::enumeration, "state"},
	 state_description{YType::str, "state-description"}
{
    yang_name = "input"; yang_parent_name = "direction";
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::~Input()
{
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::has_data() const
{
    for (std::size_t index=0; index<class_stat.size(); index++)
    {
        if(class_stat[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| policy_name.is_set
	|| state.is_set
	|| state_description.is_set;
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::has_operation() const
{
    for (std::size_t index=0; index<class_stat.size(); index++)
    {
        if(class_stat[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(policy_name.operation)
	|| is_set(state.operation)
	|| is_set(state_description.operation);
}

std::string Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

EntityPath Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::get_entity_path(Entity* ancestor) const
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

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_description.is_set || is_set(state_description.operation)) leaf_name_data.push_back(state_description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-stat")
    {
        for(auto const & c : class_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat>();
        c->parent = this;
        class_stat.push_back(std::move(c));
        children[segment_path] = class_stat.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::get_children()
{
    for (auto const & c : class_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "state-description")
    {
        state_description = value;
    }
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Direction()
    :
    input(std::make_unique<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input>())
{
    input->parent = this;
    children["input"] = input.get();

    yang_name = "direction"; yang_parent_name = "interface";
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::~Direction()
{
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && is_set(input->operation));
}

std::string Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction";

    return path_buffer.str();

}

EntityPath Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::get_entity_path(Entity* ancestor) const
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

Entity* Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "input")
    {
        if(input != nullptr)
        {
            children["input"] = input.get();
        }
        else
        {
            input = std::make_unique<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input>();
            input->parent = this;
            children["input"] = input.get();
        }
        return children.at("input");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::get_children()
{
    if(children.find("input") == children.end())
    {
        if(input != nullptr)
        {
            children["input"] = input.get();
        }
    }

    return children;
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::set_value(const std::string & value_path, std::string value)
{
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"}
    	,
    direction(std::make_unique<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction>())
{
    direction->parent = this;
    children["direction"] = direction.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::~Interface()
{
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| (direction !=  nullptr && direction->has_data());
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (direction !=  nullptr && is_set(direction->operation));
}

std::string Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "direction")
    {
        if(direction != nullptr)
        {
            children["direction"] = direction.get();
        }
        else
        {
            direction = std::make_unique<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction>();
            direction->parent = this;
            children["direction"] = direction.get();
        }
        return children.at("direction");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::get_children()
{
    if(children.find("direction") == children.end())
    {
        if(direction != nullptr)
        {
            children["direction"] = direction.get();
        }
    }

    return children;
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Pbr::Nodes::Node::PolicyMap::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "policy-map";
}

Pbr::Nodes::Node::PolicyMap::Interfaces::~Interfaces()
{
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pbr::Nodes::Node::PolicyMap::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pbr::Nodes::Node::PolicyMap::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Pbr::Nodes::Node::PolicyMap::Interfaces::get_entity_path(Entity* ancestor) const
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

Entity* Pbr::Nodes::Node::PolicyMap::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pbr::Nodes::Node::PolicyMap::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pbr::Nodes::Node::PolicyMap::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pbr::Nodes::Node::PolicyMap::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Pbr::Nodes::Node::PolicyMap::PolicyMap()
    :
    interfaces(std::make_unique<Pbr::Nodes::Node::PolicyMap::Interfaces>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    yang_name = "policy-map"; yang_parent_name = "node";
}

Pbr::Nodes::Node::PolicyMap::~PolicyMap()
{
}

bool Pbr::Nodes::Node::PolicyMap::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool Pbr::Nodes::Node::PolicyMap::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && is_set(interfaces->operation));
}

std::string Pbr::Nodes::Node::PolicyMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map";

    return path_buffer.str();

}

EntityPath Pbr::Nodes::Node::PolicyMap::get_entity_path(Entity* ancestor) const
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

Entity* Pbr::Nodes::Node::PolicyMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Pbr::Nodes::Node::PolicyMap::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pbr::Nodes::Node::PolicyMap::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    return children;
}

void Pbr::Nodes::Node::PolicyMap::set_value(const std::string & value_path, std::string value)
{
}

Pbr::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    policy_map(std::make_unique<Pbr::Nodes::Node::PolicyMap>())
{
    policy_map->parent = this;
    children["policy-map"] = policy_map.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Pbr::Nodes::Node::~Node()
{
}

bool Pbr::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (policy_map !=  nullptr && policy_map->has_data());
}

bool Pbr::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (policy_map !=  nullptr && is_set(policy_map->operation));
}

std::string Pbr::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Pbr::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-oper:pbr/nodes/" << get_segment_path();
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

Entity* Pbr::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-map")
    {
        if(policy_map != nullptr)
        {
            children["policy-map"] = policy_map.get();
        }
        else
        {
            policy_map = std::make_unique<Pbr::Nodes::Node::PolicyMap>();
            policy_map->parent = this;
            children["policy-map"] = policy_map.get();
        }
        return children.at("policy-map");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pbr::Nodes::Node::get_children()
{
    if(children.find("policy-map") == children.end())
    {
        if(policy_map != nullptr)
        {
            children["policy-map"] = policy_map.get();
        }
    }

    return children;
}

void Pbr::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Pbr::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "pbr";
}

Pbr::Nodes::~Nodes()
{
}

bool Pbr::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Pbr::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pbr::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Pbr::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-oper:pbr/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pbr::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Pbr::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pbr::Nodes::get_children()
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

void Pbr::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Pbr::Pbr()
    :
    nodes(std::make_unique<Pbr::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "pbr"; yang_parent_name = "Cisco-IOS-XR-pbr-oper";
}

Pbr::~Pbr()
{
}

bool Pbr::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Pbr::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string Pbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-oper:pbr";

    return path_buffer.str();

}

EntityPath Pbr::get_entity_path(Entity* ancestor) const
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

Entity* Pbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_unique<Pbr::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pbr::get_children()
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

void Pbr::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Pbr::clone_ptr()
{
    return std::make_unique<Pbr>();
}

const Enum::Value PolicyStateEnum::active {0, "active"};
const Enum::Value PolicyStateEnum::suspended {1, "suspended"};


}
}

