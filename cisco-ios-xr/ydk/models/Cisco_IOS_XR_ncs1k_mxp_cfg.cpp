
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ncs1k_mxp_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ncs1k_mxp_cfg {

HardwareModule::Node::Slice::Values::Values()
    :
    	client_rate{YType::enumeration, "client-rate"},
	 encrypted{YType::boolean, "encrypted"},
	 fec{YType::enumeration, "fec"},
	 trunk_rate{YType::enumeration, "trunk-rate"}
{
    yang_name = "values"; yang_parent_name = "slice";
}

HardwareModule::Node::Slice::Values::~Values()
{
}

bool HardwareModule::Node::Slice::Values::has_data() const
{
    return client_rate.is_set
	|| encrypted.is_set
	|| fec.is_set
	|| trunk_rate.is_set;
}

bool HardwareModule::Node::Slice::Values::has_operation() const
{
    return is_set(operation)
	|| is_set(client_rate.operation)
	|| is_set(encrypted.operation)
	|| is_set(fec.operation)
	|| is_set(trunk_rate.operation);
}

std::string HardwareModule::Node::Slice::Values::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "values";

    return path_buffer.str();

}

EntityPath HardwareModule::Node::Slice::Values::get_entity_path(Entity* ancestor) const
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

    if (client_rate.is_set || is_set(client_rate.operation)) leaf_name_data.push_back(client_rate.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.operation)) leaf_name_data.push_back(encrypted.get_name_leafdata());
    if (fec.is_set || is_set(fec.operation)) leaf_name_data.push_back(fec.get_name_leafdata());
    if (trunk_rate.is_set || is_set(trunk_rate.operation)) leaf_name_data.push_back(trunk_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModule::Node::Slice::Values::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & HardwareModule::Node::Slice::Values::get_children()
{
    return children;
}

void HardwareModule::Node::Slice::Values::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-rate")
    {
        client_rate = value;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
    }
    if(value_path == "fec")
    {
        fec = value;
    }
    if(value_path == "trunk-rate")
    {
        trunk_rate = value;
    }
}

HardwareModule::Node::Slice::Slice()
    :
    	slice_id{YType::str, "slice-id"},
	 lldp{YType::boolean, "lldp"}
    	,
    values(std::make_unique<HardwareModule::Node::Slice::Values>())
{
    values->parent = this;
    children["values"] = values.get();

    yang_name = "slice"; yang_parent_name = "node";
}

HardwareModule::Node::Slice::~Slice()
{
}

bool HardwareModule::Node::Slice::has_data() const
{
    return slice_id.is_set
	|| lldp.is_set
	|| (values !=  nullptr && values->has_data());
}

bool HardwareModule::Node::Slice::has_operation() const
{
    return is_set(operation)
	|| is_set(slice_id.operation)
	|| is_set(lldp.operation)
	|| (values !=  nullptr && values->has_operation());
}

std::string HardwareModule::Node::Slice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice" <<"[slice-id='" <<slice_id.get() <<"']";

    return path_buffer.str();

}

EntityPath HardwareModule::Node::Slice::get_entity_path(Entity* ancestor) const
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

    if (slice_id.is_set || is_set(slice_id.operation)) leaf_name_data.push_back(slice_id.get_name_leafdata());
    if (lldp.is_set || is_set(lldp.operation)) leaf_name_data.push_back(lldp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModule::Node::Slice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "values")
    {
        if(values != nullptr)
        {
            children["values"] = values.get();
        }
        else
        {
            values = std::make_unique<HardwareModule::Node::Slice::Values>();
            values->parent = this;
            children["values"] = values.get();
        }
        return children.at("values");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModule::Node::Slice::get_children()
{
    if(children.find("values") == children.end())
    {
        if(values != nullptr)
        {
            children["values"] = values.get();
        }
    }

    return children;
}

void HardwareModule::Node::Slice::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slice-id")
    {
        slice_id = value;
    }
    if(value_path == "lldp")
    {
        lldp = value;
    }
}

HardwareModule::Node::Node()
    :
    	location{YType::str, "location"}
{
    yang_name = "node"; yang_parent_name = "hardware-module";
}

HardwareModule::Node::~Node()
{
}

bool HardwareModule::Node::has_data() const
{
    for (std::size_t index=0; index<slice.size(); index++)
    {
        if(slice[index]->has_data())
            return true;
    }
    return location.is_set;
}

bool HardwareModule::Node::has_operation() const
{
    for (std::size_t index=0; index<slice.size(); index++)
    {
        if(slice[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(location.operation);
}

std::string HardwareModule::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[location='" <<location.get() <<"']";

    return path_buffer.str();

}

EntityPath HardwareModule::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs1k-mxp-cfg:hardware-module/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModule::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slice")
    {
        for(auto const & c : slice)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HardwareModule::Node::Slice>();
        c->parent = this;
        slice.push_back(std::move(c));
        children[segment_path] = slice.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModule::Node::get_children()
{
    for (auto const & c : slice)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HardwareModule::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location")
    {
        location = value;
    }
}

HardwareModule::HardwareModule()
{
    yang_name = "hardware-module"; yang_parent_name = "Cisco-IOS-XR-ncs1k-mxp-cfg";
}

HardwareModule::~HardwareModule()
{
}

bool HardwareModule::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModule::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HardwareModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-cfg:hardware-module";

    return path_buffer.str();

}

EntityPath HardwareModule::get_entity_path(Entity* ancestor) const
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

Entity* HardwareModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<HardwareModule::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModule::get_children()
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

void HardwareModule::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> HardwareModule::clone_ptr()
{
    return std::make_unique<HardwareModule>();
}

const Enum::YLeaf ClientDataRateEnum::ten_gig {1, "ten-gig"};
const Enum::YLeaf ClientDataRateEnum::forty_gig {2, "forty-gig"};
const Enum::YLeaf ClientDataRateEnum::hundred_gig {3, "hundred-gig"};

const Enum::YLeaf TrunkDataRateEnum::hundred_gig {2, "hundred-gig"};
const Enum::YLeaf TrunkDataRateEnum::two_hundred_gig {3, "two-hundred-gig"};
const Enum::YLeaf TrunkDataRateEnum::two_hundred_fifty_gig {4, "two-hundred-fifty-gig"};

const Enum::YLeaf FecEnum::sd7 {1, "sd7"};
const Enum::YLeaf FecEnum::sd20 {2, "sd20"};


}
}

