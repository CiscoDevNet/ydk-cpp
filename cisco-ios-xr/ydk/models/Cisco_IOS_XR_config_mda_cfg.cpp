
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_config_mda_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_config_mda_cfg {

ActiveNodes::ActiveNode::Ltrace::AllocationParams::AllocationParams()
    :
    	mode{YType::enumeration, "mode"},
	 scale_factor{YType::enumeration, "scale-factor"}
{
    yang_name = "allocation-params"; yang_parent_name = "ltrace";
}

ActiveNodes::ActiveNode::Ltrace::AllocationParams::~AllocationParams()
{
}

bool ActiveNodes::ActiveNode::Ltrace::AllocationParams::has_data() const
{
    return mode.is_set
	|| scale_factor.is_set;
}

bool ActiveNodes::ActiveNode::Ltrace::AllocationParams::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| is_set(scale_factor.operation);
}

std::string ActiveNodes::ActiveNode::Ltrace::AllocationParams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation-params";

    return path_buffer.str();

}

EntityPath ActiveNodes::ActiveNode::Ltrace::AllocationParams::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (scale_factor.is_set || is_set(scale_factor.operation)) leaf_name_data.push_back(scale_factor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ActiveNodes::ActiveNode::Ltrace::AllocationParams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & ActiveNodes::ActiveNode::Ltrace::AllocationParams::get_children()
{
    return children;
}

void ActiveNodes::ActiveNode::Ltrace::AllocationParams::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "scale-factor")
    {
        scale_factor = value;
    }
}

ActiveNodes::ActiveNode::Ltrace::Ltrace()
    :
    allocation_params(std::make_unique<ActiveNodes::ActiveNode::Ltrace::AllocationParams>())
{
    allocation_params->parent = this;
    children["allocation-params"] = allocation_params.get();

    yang_name = "ltrace"; yang_parent_name = "active-node";
}

ActiveNodes::ActiveNode::Ltrace::~Ltrace()
{
}

bool ActiveNodes::ActiveNode::Ltrace::has_data() const
{
    return (allocation_params !=  nullptr && allocation_params->has_data());
}

bool ActiveNodes::ActiveNode::Ltrace::has_operation() const
{
    return is_set(operation)
	|| (allocation_params !=  nullptr && allocation_params->has_operation());
}

std::string ActiveNodes::ActiveNode::Ltrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-ltrace-cfg:ltrace";

    return path_buffer.str();

}

EntityPath ActiveNodes::ActiveNode::Ltrace::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ActiveNodes::ActiveNode::Ltrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "allocation-params")
    {
        if(allocation_params != nullptr)
        {
            children["allocation-params"] = allocation_params.get();
        }
        else
        {
            allocation_params = std::make_unique<ActiveNodes::ActiveNode::Ltrace::AllocationParams>();
            allocation_params->parent = this;
            children["allocation-params"] = allocation_params.get();
        }
        return children.at("allocation-params");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ActiveNodes::ActiveNode::Ltrace::get_children()
{
    if(children.find("allocation-params") == children.end())
    {
        if(allocation_params != nullptr)
        {
            children["allocation-params"] = allocation_params.get();
        }
    }

    return children;
}

void ActiveNodes::ActiveNode::Ltrace::set_value(const std::string & value_path, std::string value)
{
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::Np()
    :
    	id1{YType::int32, "id1"},
	 rate{YType::int32, "rate"}
{
    yang_name = "np"; yang_parent_name = "nps";
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::~Np()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::has_data() const
{
    return id1.is_set
	|| rate.is_set;
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::has_operation() const
{
    return is_set(operation)
	|| is_set(id1.operation)
	|| is_set(rate.operation);
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np" <<"[id1='" <<id1.get() <<"']";

    return path_buffer.str();

}

EntityPath ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id1.is_set || is_set(id1.operation)) leaf_name_data.push_back(id1.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::get_children()
{
    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id1")
    {
        id1 = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Nps()
{
    yang_name = "nps"; yang_parent_name = "ipolicer-local-table";
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::~Nps()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::has_data() const
{
    for (std::size_t index=0; index<np.size(); index++)
    {
        if(np[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::has_operation() const
{
    for (std::size_t index=0; index<np.size(); index++)
    {
        if(np[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nps";

    return path_buffer.str();

}

EntityPath ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "np")
    {
        for(auto const & c : np)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np>();
        c->parent = this;
        np.push_back(std::move(c));
        children[segment_path] = np.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::get_children()
{
    for (auto const & c : np)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::set_value(const std::string & value_path, std::string value)
{
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::IpolicerLocalTable()
    :
    	id1{YType::str, "id1"}
    	,
    nps(std::make_unique<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps>())
{
    nps->parent = this;
    children["nps"] = nps.get();

    yang_name = "ipolicer-local-table"; yang_parent_name = "ipolicer-local-tables";
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::~IpolicerLocalTable()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::has_data() const
{
    return id1.is_set
	|| (nps !=  nullptr && nps->has_data());
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::has_operation() const
{
    return is_set(operation)
	|| is_set(id1.operation)
	|| (nps !=  nullptr && nps->has_operation());
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipolicer-local-table" <<"[id1='" <<id1.get() <<"']";

    return path_buffer.str();

}

EntityPath ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id1.is_set || is_set(id1.operation)) leaf_name_data.push_back(id1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nps")
    {
        if(nps != nullptr)
        {
            children["nps"] = nps.get();
        }
        else
        {
            nps = std::make_unique<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps>();
            nps->parent = this;
            children["nps"] = nps.get();
        }
        return children.at("nps");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_children()
{
    if(children.find("nps") == children.end())
    {
        if(nps != nullptr)
        {
            children["nps"] = nps.get();
        }
    }

    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id1")
    {
        id1 = value;
    }
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTables()
{
    yang_name = "ipolicer-local-tables"; yang_parent_name = "lpts-local";
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::~IpolicerLocalTables()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::has_data() const
{
    for (std::size_t index=0; index<ipolicer_local_table.size(); index++)
    {
        if(ipolicer_local_table[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::has_operation() const
{
    for (std::size_t index=0; index<ipolicer_local_table.size(); index++)
    {
        if(ipolicer_local_table[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipolicer-local-tables";

    return path_buffer.str();

}

EntityPath ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipolicer-local-table")
    {
        for(auto const & c : ipolicer_local_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable>();
        c->parent = this;
        ipolicer_local_table.push_back(std::move(c));
        children[segment_path] = ipolicer_local_table.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::get_children()
{
    for (auto const & c : ipolicer_local_table)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::set_value(const std::string & value_path, std::string value)
{
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::Precedences()
    :
    	precedence{YType::str, "precedence"}
{
    yang_name = "precedences"; yang_parent_name = "flow";
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::~Precedences()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::has_data() const
{
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::has_operation() const
{
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(precedence.operation);
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedences";

    return path_buffer.str();

}

EntityPath ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::get_children()
{
    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Flow()
    :
    	flow_type{YType::enumeration, "flow-type"},
	 rate{YType::int32, "rate"}
    	,
    precedences(std::make_unique<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences>())
{
    precedences->parent = this;
    children["precedences"] = precedences.get();

    yang_name = "flow"; yang_parent_name = "flows";
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::~Flow()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::has_data() const
{
    return flow_type.is_set
	|| rate.is_set
	|| (precedences !=  nullptr && precedences->has_data());
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_type.operation)
	|| is_set(rate.operation)
	|| (precedences !=  nullptr && precedences->has_operation());
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow" <<"[flow-type='" <<flow_type.get() <<"']";

    return path_buffer.str();

}

EntityPath ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_type.is_set || is_set(flow_type.operation)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "precedences")
    {
        if(precedences != nullptr)
        {
            children["precedences"] = precedences.get();
        }
        else
        {
            precedences = std::make_unique<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences>();
            precedences->parent = this;
            children["precedences"] = precedences.get();
        }
        return children.at("precedences");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::get_children()
{
    if(children.find("precedences") == children.end())
    {
        if(precedences != nullptr)
        {
            children["precedences"] = precedences.get();
        }
    }

    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-type")
    {
        flow_type = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flows()
{
    yang_name = "flows"; yang_parent_name = "ipolicer-local";
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::~Flows()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::has_data() const
{
    for (std::size_t index=0; index<flow.size(); index++)
    {
        if(flow[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::has_operation() const
{
    for (std::size_t index=0; index<flow.size(); index++)
    {
        if(flow[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flows";

    return path_buffer.str();

}

EntityPath ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow")
    {
        for(auto const & c : flow)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow>();
        c->parent = this;
        flow.push_back(std::move(c));
        children[segment_path] = flow.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::get_children()
{
    for (auto const & c : flow)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::set_value(const std::string & value_path, std::string value)
{
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::IpolicerLocal()
    :
    	enable{YType::empty, "enable"}
    	,
    flows(std::make_unique<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows>())
{
    flows->parent = this;
    children["flows"] = flows.get();

    yang_name = "ipolicer-local"; yang_parent_name = "lpts-local";
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::~IpolicerLocal()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::has_data() const
{
    return enable.is_set
	|| (flows !=  nullptr && flows->has_data());
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (flows !=  nullptr && flows->has_operation());
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipolicer-local";

    return path_buffer.str();

}

EntityPath ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flows")
    {
        if(flows != nullptr)
        {
            children["flows"] = flows.get();
        }
        else
        {
            flows = std::make_unique<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows>();
            flows->parent = this;
            children["flows"] = flows.get();
        }
        return children.at("flows");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::get_children()
{
    if(children.find("flows") == children.end())
    {
        if(flows != nullptr)
        {
            children["flows"] = flows.get();
        }
    }

    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

ActiveNodes::ActiveNode::LptsLocal::LptsLocal()
    :
    ipolicer_local(nullptr) // presence node
	,ipolicer_local_tables(std::make_unique<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables>())
{
    ipolicer_local_tables->parent = this;
    children["ipolicer-local-tables"] = ipolicer_local_tables.get();

    yang_name = "lpts-local"; yang_parent_name = "active-node";
}

ActiveNodes::ActiveNode::LptsLocal::~LptsLocal()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::has_data() const
{
    return (ipolicer_local !=  nullptr && ipolicer_local->has_data())
	|| (ipolicer_local_tables !=  nullptr && ipolicer_local_tables->has_data());
}

bool ActiveNodes::ActiveNode::LptsLocal::has_operation() const
{
    return is_set(operation)
	|| (ipolicer_local !=  nullptr && ipolicer_local->has_operation())
	|| (ipolicer_local_tables !=  nullptr && ipolicer_local_tables->has_operation());
}

std::string ActiveNodes::ActiveNode::LptsLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-pre-ifib-cfg:lpts-local";

    return path_buffer.str();

}

EntityPath ActiveNodes::ActiveNode::LptsLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ActiveNodes::ActiveNode::LptsLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipolicer-local")
    {
        if(ipolicer_local != nullptr)
        {
            children["ipolicer-local"] = ipolicer_local.get();
        }
        else
        {
            ipolicer_local = std::make_unique<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal>();
            ipolicer_local->parent = this;
            children["ipolicer-local"] = ipolicer_local.get();
        }
        return children.at("ipolicer-local");
    }

    if(child_yang_name == "ipolicer-local-tables")
    {
        if(ipolicer_local_tables != nullptr)
        {
            children["ipolicer-local-tables"] = ipolicer_local_tables.get();
        }
        else
        {
            ipolicer_local_tables = std::make_unique<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables>();
            ipolicer_local_tables->parent = this;
            children["ipolicer-local-tables"] = ipolicer_local_tables.get();
        }
        return children.at("ipolicer-local-tables");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ActiveNodes::ActiveNode::LptsLocal::get_children()
{
    if(children.find("ipolicer-local") == children.end())
    {
        if(ipolicer_local != nullptr)
        {
            children["ipolicer-local"] = ipolicer_local.get();
        }
    }

    if(children.find("ipolicer-local-tables") == children.end())
    {
        if(ipolicer_local_tables != nullptr)
        {
            children["ipolicer-local-tables"] = ipolicer_local_tables.get();
        }
    }

    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::set_value(const std::string & value_path, std::string value)
{
}

ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold::MemoryThreshold()
    :
    	critical{YType::uint32, "critical"},
	 minor{YType::uint32, "minor"},
	 severe{YType::uint32, "severe"}
{
    yang_name = "memory-threshold"; yang_parent_name = "Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold";
}

ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold::~MemoryThreshold()
{
}

bool ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold::has_data() const
{
    return critical.is_set
	|| minor.is_set
	|| severe.is_set;
}

bool ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(minor.operation)
	|| is_set(severe.operation);
}

std::string ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-threshold";

    return path_buffer.str();

}

EntityPath ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (minor.is_set || is_set(minor.operation)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (severe.is_set || is_set(severe.operation)) leaf_name_data.push_back(severe.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold::get_children()
{
    return children;
}

void ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "minor")
    {
        minor = value;
    }
    if(value_path == "severe")
    {
        severe = value;
    }
}

ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::CiscoIosXrWatchdCfg_WatchdogNodeThreshold()
    :
    memory_threshold(std::make_unique<ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold>())
{
    memory_threshold->parent = this;
    children["memory-threshold"] = memory_threshold.get();

    yang_name = "Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold"; yang_parent_name = "active-node";
}

ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::~CiscoIosXrWatchdCfg_WatchdogNodeThreshold()
{
}

bool ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::has_data() const
{
    return (memory_threshold !=  nullptr && memory_threshold->has_data());
}

bool ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::has_operation() const
{
    return is_set(operation)
	|| (memory_threshold !=  nullptr && memory_threshold->has_operation());
}

std::string ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-watchd-cfg:Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold";

    return path_buffer.str();

}

EntityPath ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "memory-threshold")
    {
        if(memory_threshold != nullptr)
        {
            children["memory-threshold"] = memory_threshold.get();
        }
        else
        {
            memory_threshold = std::make_unique<ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold>();
            memory_threshold->parent = this;
            children["memory-threshold"] = memory_threshold.get();
        }
        return children.at("memory-threshold");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::get_children()
{
    if(children.find("memory-threshold") == children.end())
    {
        if(memory_threshold != nullptr)
        {
            children["memory-threshold"] = memory_threshold.get();
        }
    }

    return children;
}

void ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::set_value(const std::string & value_path, std::string value)
{
}

ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold::MemoryThreshold()
    :
    	critical{YType::uint32, "critical"},
	 minor{YType::uint32, "minor"},
	 severe{YType::uint32, "severe"}
{
    yang_name = "memory-threshold"; yang_parent_name = "Cisco-IOS-XR-wd-cfg_watchdog-node-threshold";
}

ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold::~MemoryThreshold()
{
}

bool ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold::has_data() const
{
    return critical.is_set
	|| minor.is_set
	|| severe.is_set;
}

bool ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(minor.operation)
	|| is_set(severe.operation);
}

std::string ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-threshold";

    return path_buffer.str();

}

EntityPath ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (minor.is_set || is_set(minor.operation)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (severe.is_set || is_set(severe.operation)) leaf_name_data.push_back(severe.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold::get_children()
{
    return children;
}

void ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "minor")
    {
        minor = value;
    }
    if(value_path == "severe")
    {
        severe = value;
    }
}

ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::CiscoIosXrWdCfg_WatchdogNodeThreshold()
    :
    memory_threshold(std::make_unique<ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold>())
{
    memory_threshold->parent = this;
    children["memory-threshold"] = memory_threshold.get();

    yang_name = "Cisco-IOS-XR-wd-cfg_watchdog-node-threshold"; yang_parent_name = "active-node";
}

ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::~CiscoIosXrWdCfg_WatchdogNodeThreshold()
{
}

bool ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::has_data() const
{
    return (memory_threshold !=  nullptr && memory_threshold->has_data());
}

bool ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::has_operation() const
{
    return is_set(operation)
	|| (memory_threshold !=  nullptr && memory_threshold->has_operation());
}

std::string ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-wd-cfg:Cisco-IOS-XR-wd-cfg_watchdog-node-threshold";

    return path_buffer.str();

}

EntityPath ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "memory-threshold")
    {
        if(memory_threshold != nullptr)
        {
            children["memory-threshold"] = memory_threshold.get();
        }
        else
        {
            memory_threshold = std::make_unique<ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold>();
            memory_threshold->parent = this;
            children["memory-threshold"] = memory_threshold.get();
        }
        return children.at("memory-threshold");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::get_children()
{
    if(children.find("memory-threshold") == children.end())
    {
        if(memory_threshold != nullptr)
        {
            children["memory-threshold"] = memory_threshold.get();
        }
    }

    return children;
}

void ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::set_value(const std::string & value_path, std::string value)
{
}

ActiveNodes::ActiveNode::ActiveNode()
    :
    	node_name{YType::str, "node-name"}
    	,
    cisco_ios_xr_watchd_cfg_watchdog_node_threshold(std::make_unique<ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold>())
	,cisco_ios_xr_wd_cfg_watchdog_node_threshold(std::make_unique<ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold>())
	,lpts_local(std::make_unique<ActiveNodes::ActiveNode::LptsLocal>())
	,ltrace(std::make_unique<ActiveNodes::ActiveNode::Ltrace>())
{
    cisco_ios_xr_watchd_cfg_watchdog_node_threshold->parent = this;
    children["Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold"] = cisco_ios_xr_watchd_cfg_watchdog_node_threshold.get();

    cisco_ios_xr_wd_cfg_watchdog_node_threshold->parent = this;
    children["Cisco-IOS-XR-wd-cfg_watchdog-node-threshold"] = cisco_ios_xr_wd_cfg_watchdog_node_threshold.get();

    lpts_local->parent = this;
    children["lpts-local"] = lpts_local.get();

    ltrace->parent = this;
    children["ltrace"] = ltrace.get();

    yang_name = "active-node"; yang_parent_name = "active-nodes";
}

ActiveNodes::ActiveNode::~ActiveNode()
{
}

bool ActiveNodes::ActiveNode::has_data() const
{
    return node_name.is_set
	|| (cisco_ios_xr_watchd_cfg_watchdog_node_threshold !=  nullptr && cisco_ios_xr_watchd_cfg_watchdog_node_threshold->has_data())
	|| (cisco_ios_xr_wd_cfg_watchdog_node_threshold !=  nullptr && cisco_ios_xr_wd_cfg_watchdog_node_threshold->has_data())
	|| (lpts_local !=  nullptr && lpts_local->has_data())
	|| (ltrace !=  nullptr && ltrace->has_data());
}

bool ActiveNodes::ActiveNode::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (cisco_ios_xr_watchd_cfg_watchdog_node_threshold !=  nullptr && cisco_ios_xr_watchd_cfg_watchdog_node_threshold->has_operation())
	|| (cisco_ios_xr_wd_cfg_watchdog_node_threshold !=  nullptr && cisco_ios_xr_wd_cfg_watchdog_node_threshold->has_operation())
	|| (lpts_local !=  nullptr && lpts_local->has_operation())
	|| (ltrace !=  nullptr && ltrace->has_operation());
}

std::string ActiveNodes::ActiveNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath ActiveNodes::ActiveNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-config-mda-cfg:active-nodes/" << get_segment_path();
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

Entity* ActiveNodes::ActiveNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold")
    {
        if(cisco_ios_xr_watchd_cfg_watchdog_node_threshold != nullptr)
        {
            children["Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold"] = cisco_ios_xr_watchd_cfg_watchdog_node_threshold.get();
        }
        else
        {
            cisco_ios_xr_watchd_cfg_watchdog_node_threshold = std::make_unique<ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold>();
            cisco_ios_xr_watchd_cfg_watchdog_node_threshold->parent = this;
            children["Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold"] = cisco_ios_xr_watchd_cfg_watchdog_node_threshold.get();
        }
        return children.at("Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold");
    }

    if(child_yang_name == "Cisco-IOS-XR-wd-cfg_watchdog-node-threshold")
    {
        if(cisco_ios_xr_wd_cfg_watchdog_node_threshold != nullptr)
        {
            children["Cisco-IOS-XR-wd-cfg_watchdog-node-threshold"] = cisco_ios_xr_wd_cfg_watchdog_node_threshold.get();
        }
        else
        {
            cisco_ios_xr_wd_cfg_watchdog_node_threshold = std::make_unique<ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold>();
            cisco_ios_xr_wd_cfg_watchdog_node_threshold->parent = this;
            children["Cisco-IOS-XR-wd-cfg_watchdog-node-threshold"] = cisco_ios_xr_wd_cfg_watchdog_node_threshold.get();
        }
        return children.at("Cisco-IOS-XR-wd-cfg_watchdog-node-threshold");
    }

    if(child_yang_name == "lpts-local")
    {
        if(lpts_local != nullptr)
        {
            children["lpts-local"] = lpts_local.get();
        }
        else
        {
            lpts_local = std::make_unique<ActiveNodes::ActiveNode::LptsLocal>();
            lpts_local->parent = this;
            children["lpts-local"] = lpts_local.get();
        }
        return children.at("lpts-local");
    }

    if(child_yang_name == "ltrace")
    {
        if(ltrace != nullptr)
        {
            children["ltrace"] = ltrace.get();
        }
        else
        {
            ltrace = std::make_unique<ActiveNodes::ActiveNode::Ltrace>();
            ltrace->parent = this;
            children["ltrace"] = ltrace.get();
        }
        return children.at("ltrace");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ActiveNodes::ActiveNode::get_children()
{
    if(children.find("Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold") == children.end())
    {
        if(cisco_ios_xr_watchd_cfg_watchdog_node_threshold != nullptr)
        {
            children["Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold"] = cisco_ios_xr_watchd_cfg_watchdog_node_threshold.get();
        }
    }

    if(children.find("Cisco-IOS-XR-wd-cfg_watchdog-node-threshold") == children.end())
    {
        if(cisco_ios_xr_wd_cfg_watchdog_node_threshold != nullptr)
        {
            children["Cisco-IOS-XR-wd-cfg_watchdog-node-threshold"] = cisco_ios_xr_wd_cfg_watchdog_node_threshold.get();
        }
    }

    if(children.find("lpts-local") == children.end())
    {
        if(lpts_local != nullptr)
        {
            children["lpts-local"] = lpts_local.get();
        }
    }

    if(children.find("ltrace") == children.end())
    {
        if(ltrace != nullptr)
        {
            children["ltrace"] = ltrace.get();
        }
    }

    return children;
}

void ActiveNodes::ActiveNode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

ActiveNodes::ActiveNodes()
{
    yang_name = "active-nodes"; yang_parent_name = "Cisco-IOS-XR-config-mda-cfg";
}

ActiveNodes::~ActiveNodes()
{
}

bool ActiveNodes::has_data() const
{
    for (std::size_t index=0; index<active_node.size(); index++)
    {
        if(active_node[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::has_operation() const
{
    for (std::size_t index=0; index<active_node.size(); index++)
    {
        if(active_node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ActiveNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-mda-cfg:active-nodes";

    return path_buffer.str();

}

EntityPath ActiveNodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ActiveNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active-node")
    {
        for(auto const & c : active_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ActiveNodes::ActiveNode>();
        c->parent = this;
        active_node.push_back(std::move(c));
        children[segment_path] = active_node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ActiveNodes::get_children()
{
    for (auto const & c : active_node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ActiveNodes::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> ActiveNodes::clone_ptr()
{
    return std::make_unique<ActiveNodes>();
}
PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::AllocationParams()
    :
    	mode{YType::enumeration, "mode"},
	 scale_factor{YType::enumeration, "scale-factor"}
{
    yang_name = "allocation-params"; yang_parent_name = "ltrace";
}

PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::~AllocationParams()
{
}

bool PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::has_data() const
{
    return mode.is_set
	|| scale_factor.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| is_set(scale_factor.operation);
}

std::string PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation-params";

    return path_buffer.str();

}

EntityPath PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (scale_factor.is_set || is_set(scale_factor.operation)) leaf_name_data.push_back(scale_factor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::get_children()
{
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "scale-factor")
    {
        scale_factor = value;
    }
}

PreconfiguredNodes::PreconfiguredNode::Ltrace::Ltrace()
    :
    allocation_params(std::make_unique<PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams>())
{
    allocation_params->parent = this;
    children["allocation-params"] = allocation_params.get();

    yang_name = "ltrace"; yang_parent_name = "preconfigured-node";
}

PreconfiguredNodes::PreconfiguredNode::Ltrace::~Ltrace()
{
}

bool PreconfiguredNodes::PreconfiguredNode::Ltrace::has_data() const
{
    return (allocation_params !=  nullptr && allocation_params->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::Ltrace::has_operation() const
{
    return is_set(operation)
	|| (allocation_params !=  nullptr && allocation_params->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::Ltrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-ltrace-cfg:ltrace";

    return path_buffer.str();

}

EntityPath PreconfiguredNodes::PreconfiguredNode::Ltrace::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PreconfiguredNodes::PreconfiguredNode::Ltrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "allocation-params")
    {
        if(allocation_params != nullptr)
        {
            children["allocation-params"] = allocation_params.get();
        }
        else
        {
            allocation_params = std::make_unique<PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams>();
            allocation_params->parent = this;
            children["allocation-params"] = allocation_params.get();
        }
        return children.at("allocation-params");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PreconfiguredNodes::PreconfiguredNode::Ltrace::get_children()
{
    if(children.find("allocation-params") == children.end())
    {
        if(allocation_params != nullptr)
        {
            children["allocation-params"] = allocation_params.get();
        }
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::Ltrace::set_value(const std::string & value_path, std::string value)
{
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::Np()
    :
    	id1{YType::int32, "id1"},
	 rate{YType::int32, "rate"}
{
    yang_name = "np"; yang_parent_name = "nps";
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::~Np()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::has_data() const
{
    return id1.is_set
	|| rate.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::has_operation() const
{
    return is_set(operation)
	|| is_set(id1.operation)
	|| is_set(rate.operation);
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np" <<"[id1='" <<id1.get() <<"']";

    return path_buffer.str();

}

EntityPath PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id1.is_set || is_set(id1.operation)) leaf_name_data.push_back(id1.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::get_children()
{
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id1")
    {
        id1 = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Nps()
{
    yang_name = "nps"; yang_parent_name = "ipolicer-local-table";
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::~Nps()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::has_data() const
{
    for (std::size_t index=0; index<np.size(); index++)
    {
        if(np[index]->has_data())
            return true;
    }
    return false;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::has_operation() const
{
    for (std::size_t index=0; index<np.size(); index++)
    {
        if(np[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nps";

    return path_buffer.str();

}

EntityPath PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "np")
    {
        for(auto const & c : np)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np>();
        c->parent = this;
        np.push_back(std::move(c));
        children[segment_path] = np.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::get_children()
{
    for (auto const & c : np)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::set_value(const std::string & value_path, std::string value)
{
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::IpolicerLocalTable()
    :
    	id1{YType::str, "id1"}
    	,
    nps(std::make_unique<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps>())
{
    nps->parent = this;
    children["nps"] = nps.get();

    yang_name = "ipolicer-local-table"; yang_parent_name = "ipolicer-local-tables";
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::~IpolicerLocalTable()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::has_data() const
{
    return id1.is_set
	|| (nps !=  nullptr && nps->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::has_operation() const
{
    return is_set(operation)
	|| is_set(id1.operation)
	|| (nps !=  nullptr && nps->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipolicer-local-table" <<"[id1='" <<id1.get() <<"']";

    return path_buffer.str();

}

EntityPath PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id1.is_set || is_set(id1.operation)) leaf_name_data.push_back(id1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nps")
    {
        if(nps != nullptr)
        {
            children["nps"] = nps.get();
        }
        else
        {
            nps = std::make_unique<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps>();
            nps->parent = this;
            children["nps"] = nps.get();
        }
        return children.at("nps");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_children()
{
    if(children.find("nps") == children.end())
    {
        if(nps != nullptr)
        {
            children["nps"] = nps.get();
        }
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id1")
    {
        id1 = value;
    }
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTables()
{
    yang_name = "ipolicer-local-tables"; yang_parent_name = "lpts-local";
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::~IpolicerLocalTables()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::has_data() const
{
    for (std::size_t index=0; index<ipolicer_local_table.size(); index++)
    {
        if(ipolicer_local_table[index]->has_data())
            return true;
    }
    return false;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::has_operation() const
{
    for (std::size_t index=0; index<ipolicer_local_table.size(); index++)
    {
        if(ipolicer_local_table[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipolicer-local-tables";

    return path_buffer.str();

}

EntityPath PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipolicer-local-table")
    {
        for(auto const & c : ipolicer_local_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable>();
        c->parent = this;
        ipolicer_local_table.push_back(std::move(c));
        children[segment_path] = ipolicer_local_table.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::get_children()
{
    for (auto const & c : ipolicer_local_table)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::set_value(const std::string & value_path, std::string value)
{
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::Precedences()
    :
    	precedence{YType::str, "precedence"}
{
    yang_name = "precedences"; yang_parent_name = "flow";
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::~Precedences()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::has_data() const
{
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::has_operation() const
{
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(precedence.operation);
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedences";

    return path_buffer.str();

}

EntityPath PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::get_children()
{
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Flow()
    :
    	flow_type{YType::enumeration, "flow-type"},
	 rate{YType::int32, "rate"}
    	,
    precedences(std::make_unique<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences>())
{
    precedences->parent = this;
    children["precedences"] = precedences.get();

    yang_name = "flow"; yang_parent_name = "flows";
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::~Flow()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::has_data() const
{
    return flow_type.is_set
	|| rate.is_set
	|| (precedences !=  nullptr && precedences->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_type.operation)
	|| is_set(rate.operation)
	|| (precedences !=  nullptr && precedences->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow" <<"[flow-type='" <<flow_type.get() <<"']";

    return path_buffer.str();

}

EntityPath PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_type.is_set || is_set(flow_type.operation)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "precedences")
    {
        if(precedences != nullptr)
        {
            children["precedences"] = precedences.get();
        }
        else
        {
            precedences = std::make_unique<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences>();
            precedences->parent = this;
            children["precedences"] = precedences.get();
        }
        return children.at("precedences");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::get_children()
{
    if(children.find("precedences") == children.end())
    {
        if(precedences != nullptr)
        {
            children["precedences"] = precedences.get();
        }
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-type")
    {
        flow_type = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flows()
{
    yang_name = "flows"; yang_parent_name = "ipolicer-local";
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::~Flows()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::has_data() const
{
    for (std::size_t index=0; index<flow.size(); index++)
    {
        if(flow[index]->has_data())
            return true;
    }
    return false;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::has_operation() const
{
    for (std::size_t index=0; index<flow.size(); index++)
    {
        if(flow[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flows";

    return path_buffer.str();

}

EntityPath PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow")
    {
        for(auto const & c : flow)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow>();
        c->parent = this;
        flow.push_back(std::move(c));
        children[segment_path] = flow.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::get_children()
{
    for (auto const & c : flow)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::set_value(const std::string & value_path, std::string value)
{
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::IpolicerLocal()
    :
    	enable{YType::empty, "enable"}
    	,
    flows(std::make_unique<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows>())
{
    flows->parent = this;
    children["flows"] = flows.get();

    yang_name = "ipolicer-local"; yang_parent_name = "lpts-local";
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::~IpolicerLocal()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::has_data() const
{
    return enable.is_set
	|| (flows !=  nullptr && flows->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (flows !=  nullptr && flows->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipolicer-local";

    return path_buffer.str();

}

EntityPath PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flows")
    {
        if(flows != nullptr)
        {
            children["flows"] = flows.get();
        }
        else
        {
            flows = std::make_unique<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows>();
            flows->parent = this;
            children["flows"] = flows.get();
        }
        return children.at("flows");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::get_children()
{
    if(children.find("flows") == children.end())
    {
        if(flows != nullptr)
        {
            children["flows"] = flows.get();
        }
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::LptsLocal()
    :
    ipolicer_local(nullptr) // presence node
	,ipolicer_local_tables(std::make_unique<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables>())
{
    ipolicer_local_tables->parent = this;
    children["ipolicer-local-tables"] = ipolicer_local_tables.get();

    yang_name = "lpts-local"; yang_parent_name = "preconfigured-node";
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::~LptsLocal()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::has_data() const
{
    return (ipolicer_local !=  nullptr && ipolicer_local->has_data())
	|| (ipolicer_local_tables !=  nullptr && ipolicer_local_tables->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::has_operation() const
{
    return is_set(operation)
	|| (ipolicer_local !=  nullptr && ipolicer_local->has_operation())
	|| (ipolicer_local_tables !=  nullptr && ipolicer_local_tables->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-pre-ifib-cfg:lpts-local";

    return path_buffer.str();

}

EntityPath PreconfiguredNodes::PreconfiguredNode::LptsLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PreconfiguredNodes::PreconfiguredNode::LptsLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipolicer-local")
    {
        if(ipolicer_local != nullptr)
        {
            children["ipolicer-local"] = ipolicer_local.get();
        }
        else
        {
            ipolicer_local = std::make_unique<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal>();
            ipolicer_local->parent = this;
            children["ipolicer-local"] = ipolicer_local.get();
        }
        return children.at("ipolicer-local");
    }

    if(child_yang_name == "ipolicer-local-tables")
    {
        if(ipolicer_local_tables != nullptr)
        {
            children["ipolicer-local-tables"] = ipolicer_local_tables.get();
        }
        else
        {
            ipolicer_local_tables = std::make_unique<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables>();
            ipolicer_local_tables->parent = this;
            children["ipolicer-local-tables"] = ipolicer_local_tables.get();
        }
        return children.at("ipolicer-local-tables");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PreconfiguredNodes::PreconfiguredNode::LptsLocal::get_children()
{
    if(children.find("ipolicer-local") == children.end())
    {
        if(ipolicer_local != nullptr)
        {
            children["ipolicer-local"] = ipolicer_local.get();
        }
    }

    if(children.find("ipolicer-local-tables") == children.end())
    {
        if(ipolicer_local_tables != nullptr)
        {
            children["ipolicer-local-tables"] = ipolicer_local_tables.get();
        }
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::set_value(const std::string & value_path, std::string value)
{
}

PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold::MemoryThreshold()
    :
    	critical{YType::uint32, "critical"},
	 minor{YType::uint32, "minor"},
	 severe{YType::uint32, "severe"}
{
    yang_name = "memory-threshold"; yang_parent_name = "Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold";
}

PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold::~MemoryThreshold()
{
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold::has_data() const
{
    return critical.is_set
	|| minor.is_set
	|| severe.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(minor.operation)
	|| is_set(severe.operation);
}

std::string PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-threshold";

    return path_buffer.str();

}

EntityPath PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (minor.is_set || is_set(minor.operation)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (severe.is_set || is_set(severe.operation)) leaf_name_data.push_back(severe.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold::get_children()
{
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "minor")
    {
        minor = value;
    }
    if(value_path == "severe")
    {
        severe = value;
    }
}

PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::CiscoIosXrWatchdCfg_WatchdogNodeThreshold()
    :
    memory_threshold(std::make_unique<PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold>())
{
    memory_threshold->parent = this;
    children["memory-threshold"] = memory_threshold.get();

    yang_name = "Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold"; yang_parent_name = "preconfigured-node";
}

PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::~CiscoIosXrWatchdCfg_WatchdogNodeThreshold()
{
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::has_data() const
{
    return (memory_threshold !=  nullptr && memory_threshold->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::has_operation() const
{
    return is_set(operation)
	|| (memory_threshold !=  nullptr && memory_threshold->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-watchd-cfg:Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold";

    return path_buffer.str();

}

EntityPath PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "memory-threshold")
    {
        if(memory_threshold != nullptr)
        {
            children["memory-threshold"] = memory_threshold.get();
        }
        else
        {
            memory_threshold = std::make_unique<PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold>();
            memory_threshold->parent = this;
            children["memory-threshold"] = memory_threshold.get();
        }
        return children.at("memory-threshold");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::get_children()
{
    if(children.find("memory-threshold") == children.end())
    {
        if(memory_threshold != nullptr)
        {
            children["memory-threshold"] = memory_threshold.get();
        }
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::set_value(const std::string & value_path, std::string value)
{
}

PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold::MemoryThreshold()
    :
    	critical{YType::uint32, "critical"},
	 minor{YType::uint32, "minor"},
	 severe{YType::uint32, "severe"}
{
    yang_name = "memory-threshold"; yang_parent_name = "Cisco-IOS-XR-wd-cfg_watchdog-node-threshold";
}

PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold::~MemoryThreshold()
{
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold::has_data() const
{
    return critical.is_set
	|| minor.is_set
	|| severe.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(minor.operation)
	|| is_set(severe.operation);
}

std::string PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-threshold";

    return path_buffer.str();

}

EntityPath PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (minor.is_set || is_set(minor.operation)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (severe.is_set || is_set(severe.operation)) leaf_name_data.push_back(severe.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold::get_children()
{
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "minor")
    {
        minor = value;
    }
    if(value_path == "severe")
    {
        severe = value;
    }
}

PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::CiscoIosXrWdCfg_WatchdogNodeThreshold()
    :
    memory_threshold(std::make_unique<PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold>())
{
    memory_threshold->parent = this;
    children["memory-threshold"] = memory_threshold.get();

    yang_name = "Cisco-IOS-XR-wd-cfg_watchdog-node-threshold"; yang_parent_name = "preconfigured-node";
}

PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::~CiscoIosXrWdCfg_WatchdogNodeThreshold()
{
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::has_data() const
{
    return (memory_threshold !=  nullptr && memory_threshold->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::has_operation() const
{
    return is_set(operation)
	|| (memory_threshold !=  nullptr && memory_threshold->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-wd-cfg:Cisco-IOS-XR-wd-cfg_watchdog-node-threshold";

    return path_buffer.str();

}

EntityPath PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "memory-threshold")
    {
        if(memory_threshold != nullptr)
        {
            children["memory-threshold"] = memory_threshold.get();
        }
        else
        {
            memory_threshold = std::make_unique<PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold>();
            memory_threshold->parent = this;
            children["memory-threshold"] = memory_threshold.get();
        }
        return children.at("memory-threshold");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::get_children()
{
    if(children.find("memory-threshold") == children.end())
    {
        if(memory_threshold != nullptr)
        {
            children["memory-threshold"] = memory_threshold.get();
        }
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::set_value(const std::string & value_path, std::string value)
{
}

PreconfiguredNodes::PreconfiguredNode::PreconfiguredNode()
    :
    	node_name{YType::str, "node-name"}
    	,
    cisco_ios_xr_watchd_cfg_watchdog_node_threshold(std::make_unique<PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold>())
	,cisco_ios_xr_wd_cfg_watchdog_node_threshold(std::make_unique<PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold>())
	,lpts_local(std::make_unique<PreconfiguredNodes::PreconfiguredNode::LptsLocal>())
	,ltrace(std::make_unique<PreconfiguredNodes::PreconfiguredNode::Ltrace>())
{
    cisco_ios_xr_watchd_cfg_watchdog_node_threshold->parent = this;
    children["Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold"] = cisco_ios_xr_watchd_cfg_watchdog_node_threshold.get();

    cisco_ios_xr_wd_cfg_watchdog_node_threshold->parent = this;
    children["Cisco-IOS-XR-wd-cfg_watchdog-node-threshold"] = cisco_ios_xr_wd_cfg_watchdog_node_threshold.get();

    lpts_local->parent = this;
    children["lpts-local"] = lpts_local.get();

    ltrace->parent = this;
    children["ltrace"] = ltrace.get();

    yang_name = "preconfigured-node"; yang_parent_name = "preconfigured-nodes";
}

PreconfiguredNodes::PreconfiguredNode::~PreconfiguredNode()
{
}

bool PreconfiguredNodes::PreconfiguredNode::has_data() const
{
    return node_name.is_set
	|| (cisco_ios_xr_watchd_cfg_watchdog_node_threshold !=  nullptr && cisco_ios_xr_watchd_cfg_watchdog_node_threshold->has_data())
	|| (cisco_ios_xr_wd_cfg_watchdog_node_threshold !=  nullptr && cisco_ios_xr_wd_cfg_watchdog_node_threshold->has_data())
	|| (lpts_local !=  nullptr && lpts_local->has_data())
	|| (ltrace !=  nullptr && ltrace->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (cisco_ios_xr_watchd_cfg_watchdog_node_threshold !=  nullptr && cisco_ios_xr_watchd_cfg_watchdog_node_threshold->has_operation())
	|| (cisco_ios_xr_wd_cfg_watchdog_node_threshold !=  nullptr && cisco_ios_xr_wd_cfg_watchdog_node_threshold->has_operation())
	|| (lpts_local !=  nullptr && lpts_local->has_operation())
	|| (ltrace !=  nullptr && ltrace->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preconfigured-node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PreconfiguredNodes::PreconfiguredNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-config-mda-cfg:preconfigured-nodes/" << get_segment_path();
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

Entity* PreconfiguredNodes::PreconfiguredNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold")
    {
        if(cisco_ios_xr_watchd_cfg_watchdog_node_threshold != nullptr)
        {
            children["Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold"] = cisco_ios_xr_watchd_cfg_watchdog_node_threshold.get();
        }
        else
        {
            cisco_ios_xr_watchd_cfg_watchdog_node_threshold = std::make_unique<PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold>();
            cisco_ios_xr_watchd_cfg_watchdog_node_threshold->parent = this;
            children["Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold"] = cisco_ios_xr_watchd_cfg_watchdog_node_threshold.get();
        }
        return children.at("Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold");
    }

    if(child_yang_name == "Cisco-IOS-XR-wd-cfg_watchdog-node-threshold")
    {
        if(cisco_ios_xr_wd_cfg_watchdog_node_threshold != nullptr)
        {
            children["Cisco-IOS-XR-wd-cfg_watchdog-node-threshold"] = cisco_ios_xr_wd_cfg_watchdog_node_threshold.get();
        }
        else
        {
            cisco_ios_xr_wd_cfg_watchdog_node_threshold = std::make_unique<PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold>();
            cisco_ios_xr_wd_cfg_watchdog_node_threshold->parent = this;
            children["Cisco-IOS-XR-wd-cfg_watchdog-node-threshold"] = cisco_ios_xr_wd_cfg_watchdog_node_threshold.get();
        }
        return children.at("Cisco-IOS-XR-wd-cfg_watchdog-node-threshold");
    }

    if(child_yang_name == "lpts-local")
    {
        if(lpts_local != nullptr)
        {
            children["lpts-local"] = lpts_local.get();
        }
        else
        {
            lpts_local = std::make_unique<PreconfiguredNodes::PreconfiguredNode::LptsLocal>();
            lpts_local->parent = this;
            children["lpts-local"] = lpts_local.get();
        }
        return children.at("lpts-local");
    }

    if(child_yang_name == "ltrace")
    {
        if(ltrace != nullptr)
        {
            children["ltrace"] = ltrace.get();
        }
        else
        {
            ltrace = std::make_unique<PreconfiguredNodes::PreconfiguredNode::Ltrace>();
            ltrace->parent = this;
            children["ltrace"] = ltrace.get();
        }
        return children.at("ltrace");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PreconfiguredNodes::PreconfiguredNode::get_children()
{
    if(children.find("Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold") == children.end())
    {
        if(cisco_ios_xr_watchd_cfg_watchdog_node_threshold != nullptr)
        {
            children["Cisco-IOS-XR-watchd-cfg_watchdog-node-threshold"] = cisco_ios_xr_watchd_cfg_watchdog_node_threshold.get();
        }
    }

    if(children.find("Cisco-IOS-XR-wd-cfg_watchdog-node-threshold") == children.end())
    {
        if(cisco_ios_xr_wd_cfg_watchdog_node_threshold != nullptr)
        {
            children["Cisco-IOS-XR-wd-cfg_watchdog-node-threshold"] = cisco_ios_xr_wd_cfg_watchdog_node_threshold.get();
        }
    }

    if(children.find("lpts-local") == children.end())
    {
        if(lpts_local != nullptr)
        {
            children["lpts-local"] = lpts_local.get();
        }
    }

    if(children.find("ltrace") == children.end())
    {
        if(ltrace != nullptr)
        {
            children["ltrace"] = ltrace.get();
        }
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

PreconfiguredNodes::PreconfiguredNodes()
{
    yang_name = "preconfigured-nodes"; yang_parent_name = "Cisco-IOS-XR-config-mda-cfg";
}

PreconfiguredNodes::~PreconfiguredNodes()
{
}

bool PreconfiguredNodes::has_data() const
{
    for (std::size_t index=0; index<preconfigured_node.size(); index++)
    {
        if(preconfigured_node[index]->has_data())
            return true;
    }
    return false;
}

bool PreconfiguredNodes::has_operation() const
{
    for (std::size_t index=0; index<preconfigured_node.size(); index++)
    {
        if(preconfigured_node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PreconfiguredNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-mda-cfg:preconfigured-nodes";

    return path_buffer.str();

}

EntityPath PreconfiguredNodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PreconfiguredNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "preconfigured-node")
    {
        for(auto const & c : preconfigured_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PreconfiguredNodes::PreconfiguredNode>();
        c->parent = this;
        preconfigured_node.push_back(std::move(c));
        children[segment_path] = preconfigured_node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PreconfiguredNodes::get_children()
{
    for (auto const & c : preconfigured_node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PreconfiguredNodes::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> PreconfiguredNodes::clone_ptr()
{
    return std::make_unique<PreconfiguredNodes>();
}


}
}

