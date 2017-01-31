
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_infra_rsi_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_rsi_oper {

VrfGroup::Nodes::Node::Groups::Group::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"}
{
    yang_name = "vrf"; yang_parent_name = "group";
}

VrfGroup::Nodes::Node::Groups::Group::Vrf::~Vrf()
{
}

bool VrfGroup::Nodes::Node::Groups::Group::Vrf::has_data() const
{
    return vrf_name.is_set;
}

bool VrfGroup::Nodes::Node::Groups::Group::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation);
}

std::string VrfGroup::Nodes::Node::Groups::Group::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath VrfGroup::Nodes::Node::Groups::Group::Vrf::get_entity_path(Entity* ancestor) const
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

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* VrfGroup::Nodes::Node::Groups::Group::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & VrfGroup::Nodes::Node::Groups::Group::Vrf::get_children()
{
    return children;
}

void VrfGroup::Nodes::Node::Groups::Group::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

VrfGroup::Nodes::Node::Groups::Group::Group()
    :
    	group_name{YType::str, "group-name"},
	 forward_reference{YType::boolean, "forward-reference"},
	 vr_fs{YType::uint32, "vr-fs"}
{
    yang_name = "group"; yang_parent_name = "groups";
}

VrfGroup::Nodes::Node::Groups::Group::~Group()
{
}

bool VrfGroup::Nodes::Node::Groups::Group::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return group_name.is_set
	|| forward_reference.is_set
	|| vr_fs.is_set;
}

bool VrfGroup::Nodes::Node::Groups::Group::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(group_name.operation)
	|| is_set(forward_reference.operation)
	|| is_set(vr_fs.operation);
}

std::string VrfGroup::Nodes::Node::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-name='" <<group_name.get() <<"']";

    return path_buffer.str();

}

EntityPath VrfGroup::Nodes::Node::Groups::Group::get_entity_path(Entity* ancestor) const
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

    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (forward_reference.is_set || is_set(forward_reference.operation)) leaf_name_data.push_back(forward_reference.get_name_leafdata());
    if (vr_fs.is_set || is_set(vr_fs.operation)) leaf_name_data.push_back(vr_fs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* VrfGroup::Nodes::Node::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<VrfGroup::Nodes::Node::Groups::Group::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & VrfGroup::Nodes::Node::Groups::Group::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void VrfGroup::Nodes::Node::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "forward-reference")
    {
        forward_reference = value;
    }
    if(value_path == "vr-fs")
    {
        vr_fs = value;
    }
}

VrfGroup::Nodes::Node::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "node";
}

VrfGroup::Nodes::Node::Groups::~Groups()
{
}

bool VrfGroup::Nodes::Node::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool VrfGroup::Nodes::Node::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string VrfGroup::Nodes::Node::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

EntityPath VrfGroup::Nodes::Node::Groups::get_entity_path(Entity* ancestor) const
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

Entity* VrfGroup::Nodes::Node::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<VrfGroup::Nodes::Node::Groups::Group>();
        c->parent = this;
        group.push_back(std::move(c));
        children[segment_path] = group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & VrfGroup::Nodes::Node::Groups::get_children()
{
    for (auto const & c : group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void VrfGroup::Nodes::Node::Groups::set_value(const std::string & value_path, std::string value)
{
}

VrfGroup::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    groups(std::make_unique<VrfGroup::Nodes::Node::Groups>())
{
    groups->parent = this;
    children["groups"] = groups.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

VrfGroup::Nodes::Node::~Node()
{
}

bool VrfGroup::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (groups !=  nullptr && groups->has_data());
}

bool VrfGroup::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (groups !=  nullptr && groups->has_operation());
}

std::string VrfGroup::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath VrfGroup::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-oper:vrf-group/nodes/" << get_segment_path();
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

Entity* VrfGroup::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "groups")
    {
        if(groups != nullptr)
        {
            children["groups"] = groups.get();
        }
        else
        {
            groups = std::make_unique<VrfGroup::Nodes::Node::Groups>();
            groups->parent = this;
            children["groups"] = groups.get();
        }
        return children.at("groups");
    }

    return nullptr;
}

std::map<std::string, Entity*> & VrfGroup::Nodes::Node::get_children()
{
    if(children.find("groups") == children.end())
    {
        if(groups != nullptr)
        {
            children["groups"] = groups.get();
        }
    }

    return children;
}

void VrfGroup::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

VrfGroup::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "vrf-group";
}

VrfGroup::Nodes::~Nodes()
{
}

bool VrfGroup::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool VrfGroup::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string VrfGroup::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath VrfGroup::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-oper:vrf-group/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* VrfGroup::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<VrfGroup::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & VrfGroup::Nodes::get_children()
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

void VrfGroup::Nodes::set_value(const std::string & value_path, std::string value)
{
}

VrfGroup::VrfGroup()
    :
    nodes(std::make_unique<VrfGroup::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "vrf-group"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-oper";
}

VrfGroup::~VrfGroup()
{
}

bool VrfGroup::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool VrfGroup::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string VrfGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:vrf-group";

    return path_buffer.str();

}

EntityPath VrfGroup::get_entity_path(Entity* ancestor) const
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

Entity* VrfGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_unique<VrfGroup::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & VrfGroup::get_children()
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

void VrfGroup::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> VrfGroup::clone_ptr()
{
    return std::make_unique<VrfGroup>();
}
Srlg::SrlgMaps::SrlgMap::SrlgMap()
    :
    	srlg_name{YType::str, "srlg-name"},
	 srlg_name_xr{YType::str, "srlg-name-xr"},
	 srlg_value{YType::uint32, "srlg-value"}
{
    yang_name = "srlg-map"; yang_parent_name = "srlg-maps";
}

Srlg::SrlgMaps::SrlgMap::~SrlgMap()
{
}

bool Srlg::SrlgMaps::SrlgMap::has_data() const
{
    return srlg_name.is_set
	|| srlg_name_xr.is_set
	|| srlg_value.is_set;
}

bool Srlg::SrlgMaps::SrlgMap::has_operation() const
{
    return is_set(operation)
	|| is_set(srlg_name.operation)
	|| is_set(srlg_name_xr.operation)
	|| is_set(srlg_value.operation);
}

std::string Srlg::SrlgMaps::SrlgMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-map" <<"[srlg-name='" <<srlg_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::SrlgMaps::SrlgMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/srlg-maps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (srlg_name_xr.is_set || is_set(srlg_name_xr.operation)) leaf_name_data.push_back(srlg_name_xr.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.operation)) leaf_name_data.push_back(srlg_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::SrlgMaps::SrlgMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Srlg::SrlgMaps::SrlgMap::get_children()
{
    return children;
}

void Srlg::SrlgMaps::SrlgMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr = value;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
    }
}

Srlg::SrlgMaps::SrlgMaps()
{
    yang_name = "srlg-maps"; yang_parent_name = "srlg";
}

Srlg::SrlgMaps::~SrlgMaps()
{
}

bool Srlg::SrlgMaps::has_data() const
{
    for (std::size_t index=0; index<srlg_map.size(); index++)
    {
        if(srlg_map[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::SrlgMaps::has_operation() const
{
    for (std::size_t index=0; index<srlg_map.size(); index++)
    {
        if(srlg_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::SrlgMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-maps";

    return path_buffer.str();

}

EntityPath Srlg::SrlgMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::SrlgMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "srlg-map")
    {
        for(auto const & c : srlg_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::SrlgMaps::SrlgMap>();
        c->parent = this;
        srlg_map.push_back(std::move(c));
        children[segment_path] = srlg_map.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::SrlgMaps::get_children()
{
    for (auto const & c : srlg_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::SrlgMaps::set_value(const std::string & value_path, std::string value)
{
}

Srlg::Nodes::Node::SrlgMaps::SrlgMap::SrlgMap()
    :
    	srlg_name{YType::str, "srlg-name"},
	 srlg_name_xr{YType::str, "srlg-name-xr"},
	 srlg_value{YType::uint32, "srlg-value"}
{
    yang_name = "srlg-map"; yang_parent_name = "srlg-maps";
}

Srlg::Nodes::Node::SrlgMaps::SrlgMap::~SrlgMap()
{
}

bool Srlg::Nodes::Node::SrlgMaps::SrlgMap::has_data() const
{
    return srlg_name.is_set
	|| srlg_name_xr.is_set
	|| srlg_value.is_set;
}

bool Srlg::Nodes::Node::SrlgMaps::SrlgMap::has_operation() const
{
    return is_set(operation)
	|| is_set(srlg_name.operation)
	|| is_set(srlg_name_xr.operation)
	|| is_set(srlg_value.operation);
}

std::string Srlg::Nodes::Node::SrlgMaps::SrlgMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-map" <<"[srlg-name='" <<srlg_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::SrlgMaps::SrlgMap::get_entity_path(Entity* ancestor) const
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

    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (srlg_name_xr.is_set || is_set(srlg_name_xr.operation)) leaf_name_data.push_back(srlg_name_xr.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.operation)) leaf_name_data.push_back(srlg_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Nodes::Node::SrlgMaps::SrlgMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Srlg::Nodes::Node::SrlgMaps::SrlgMap::get_children()
{
    return children;
}

void Srlg::Nodes::Node::SrlgMaps::SrlgMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr = value;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
    }
}

Srlg::Nodes::Node::SrlgMaps::SrlgMaps()
{
    yang_name = "srlg-maps"; yang_parent_name = "node";
}

Srlg::Nodes::Node::SrlgMaps::~SrlgMaps()
{
}

bool Srlg::Nodes::Node::SrlgMaps::has_data() const
{
    for (std::size_t index=0; index<srlg_map.size(); index++)
    {
        if(srlg_map[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::SrlgMaps::has_operation() const
{
    for (std::size_t index=0; index<srlg_map.size(); index++)
    {
        if(srlg_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::Nodes::Node::SrlgMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-maps";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::SrlgMaps::get_entity_path(Entity* ancestor) const
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

Entity* Srlg::Nodes::Node::SrlgMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "srlg-map")
    {
        for(auto const & c : srlg_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::Nodes::Node::SrlgMaps::SrlgMap>();
        c->parent = this;
        srlg_map.push_back(std::move(c));
        children[segment_path] = srlg_map.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Nodes::Node::SrlgMaps::get_children()
{
    for (auto const & c : srlg_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::Nodes::Node::SrlgMaps::set_value(const std::string & value_path, std::string value)
{
}

Srlg::Nodes::Node::Groups::Group::SrlgAttribute::SrlgAttribute()
    :
    	priority{YType::enumeration, "priority"},
	 srlg_index{YType::uint16, "srlg-index"},
	 srlg_value{YType::uint32, "srlg-value"}
{
    yang_name = "srlg-attribute"; yang_parent_name = "group";
}

Srlg::Nodes::Node::Groups::Group::SrlgAttribute::~SrlgAttribute()
{
}

bool Srlg::Nodes::Node::Groups::Group::SrlgAttribute::has_data() const
{
    return priority.is_set
	|| srlg_index.is_set
	|| srlg_value.is_set;
}

bool Srlg::Nodes::Node::Groups::Group::SrlgAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(priority.operation)
	|| is_set(srlg_index.operation)
	|| is_set(srlg_value.operation);
}

std::string Srlg::Nodes::Node::Groups::Group::SrlgAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-attribute";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::Groups::Group::SrlgAttribute::get_entity_path(Entity* ancestor) const
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

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (srlg_index.is_set || is_set(srlg_index.operation)) leaf_name_data.push_back(srlg_index.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.operation)) leaf_name_data.push_back(srlg_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Nodes::Node::Groups::Group::SrlgAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Srlg::Nodes::Node::Groups::Group::SrlgAttribute::get_children()
{
    return children;
}

void Srlg::Nodes::Node::Groups::Group::SrlgAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "srlg-index")
    {
        srlg_index = value;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
    }
}

Srlg::Nodes::Node::Groups::Group::Group()
    :
    	group_name{YType::str, "group-name"},
	 group_name_xr{YType::str, "group-name-xr"},
	 group_values{YType::uint32, "group-values"}
{
    yang_name = "group"; yang_parent_name = "groups";
}

Srlg::Nodes::Node::Groups::Group::~Group()
{
}

bool Srlg::Nodes::Node::Groups::Group::has_data() const
{
    for (std::size_t index=0; index<srlg_attribute.size(); index++)
    {
        if(srlg_attribute[index]->has_data())
            return true;
    }
    return group_name.is_set
	|| group_name_xr.is_set
	|| group_values.is_set;
}

bool Srlg::Nodes::Node::Groups::Group::has_operation() const
{
    for (std::size_t index=0; index<srlg_attribute.size(); index++)
    {
        if(srlg_attribute[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(group_name.operation)
	|| is_set(group_name_xr.operation)
	|| is_set(group_values.operation);
}

std::string Srlg::Nodes::Node::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-name='" <<group_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::Groups::Group::get_entity_path(Entity* ancestor) const
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

    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.operation)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (group_values.is_set || is_set(group_values.operation)) leaf_name_data.push_back(group_values.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Nodes::Node::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "srlg-attribute")
    {
        for(auto const & c : srlg_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::Nodes::Node::Groups::Group::SrlgAttribute>();
        c->parent = this;
        srlg_attribute.push_back(std::move(c));
        children[segment_path] = srlg_attribute.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Nodes::Node::Groups::Group::get_children()
{
    for (auto const & c : srlg_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::Nodes::Node::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
    }
    if(value_path == "group-values")
    {
        group_values = value;
    }
}

Srlg::Nodes::Node::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "node";
}

Srlg::Nodes::Node::Groups::~Groups()
{
}

bool Srlg::Nodes::Node::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::Nodes::Node::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::Groups::get_entity_path(Entity* ancestor) const
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

Entity* Srlg::Nodes::Node::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::Nodes::Node::Groups::Group>();
        c->parent = this;
        group.push_back(std::move(c));
        children[segment_path] = group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Nodes::Node::Groups::get_children()
{
    for (auto const & c : group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::Nodes::Node::Groups::set_value(const std::string & value_path, std::string value)
{
}

Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::SrlgAttribute()
    :
    	priority{YType::enumeration, "priority"},
	 srlg_index{YType::uint16, "srlg-index"},
	 srlg_value{YType::uint32, "srlg-value"}
{
    yang_name = "srlg-attribute"; yang_parent_name = "inherit-node";
}

Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::~SrlgAttribute()
{
}

bool Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::has_data() const
{
    return priority.is_set
	|| srlg_index.is_set
	|| srlg_value.is_set;
}

bool Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(priority.operation)
	|| is_set(srlg_index.operation)
	|| is_set(srlg_value.operation);
}

std::string Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-attribute";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::get_entity_path(Entity* ancestor) const
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

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (srlg_index.is_set || is_set(srlg_index.operation)) leaf_name_data.push_back(srlg_index.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.operation)) leaf_name_data.push_back(srlg_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::get_children()
{
    return children;
}

void Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "srlg-index")
    {
        srlg_index = value;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
    }
}

Srlg::Nodes::Node::InheritNodes::InheritNode::InheritNode()
    :
    	inherit_node_name{YType::str, "inherit-node-name"},
	 node_name{YType::str, "node-name"},
	 node_values{YType::uint32, "node-values"}
{
    yang_name = "inherit-node"; yang_parent_name = "inherit-nodes";
}

Srlg::Nodes::Node::InheritNodes::InheritNode::~InheritNode()
{
}

bool Srlg::Nodes::Node::InheritNodes::InheritNode::has_data() const
{
    for (std::size_t index=0; index<srlg_attribute.size(); index++)
    {
        if(srlg_attribute[index]->has_data())
            return true;
    }
    return inherit_node_name.is_set
	|| node_name.is_set
	|| node_values.is_set;
}

bool Srlg::Nodes::Node::InheritNodes::InheritNode::has_operation() const
{
    for (std::size_t index=0; index<srlg_attribute.size(); index++)
    {
        if(srlg_attribute[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(inherit_node_name.operation)
	|| is_set(node_name.operation)
	|| is_set(node_values.operation);
}

std::string Srlg::Nodes::Node::InheritNodes::InheritNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit-node" <<"[inherit-node-name='" <<inherit_node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::InheritNodes::InheritNode::get_entity_path(Entity* ancestor) const
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

    if (inherit_node_name.is_set || is_set(inherit_node_name.operation)) leaf_name_data.push_back(inherit_node_name.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (node_values.is_set || is_set(node_values.operation)) leaf_name_data.push_back(node_values.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Nodes::Node::InheritNodes::InheritNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "srlg-attribute")
    {
        for(auto const & c : srlg_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute>();
        c->parent = this;
        srlg_attribute.push_back(std::move(c));
        children[segment_path] = srlg_attribute.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Nodes::Node::InheritNodes::InheritNode::get_children()
{
    for (auto const & c : srlg_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::Nodes::Node::InheritNodes::InheritNode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inherit-node-name")
    {
        inherit_node_name = value;
    }
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "node-values")
    {
        node_values = value;
    }
}

Srlg::Nodes::Node::InheritNodes::InheritNodes()
{
    yang_name = "inherit-nodes"; yang_parent_name = "node";
}

Srlg::Nodes::Node::InheritNodes::~InheritNodes()
{
}

bool Srlg::Nodes::Node::InheritNodes::has_data() const
{
    for (std::size_t index=0; index<inherit_node.size(); index++)
    {
        if(inherit_node[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::InheritNodes::has_operation() const
{
    for (std::size_t index=0; index<inherit_node.size(); index++)
    {
        if(inherit_node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::Nodes::Node::InheritNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit-nodes";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::InheritNodes::get_entity_path(Entity* ancestor) const
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

Entity* Srlg::Nodes::Node::InheritNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inherit-node")
    {
        for(auto const & c : inherit_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::Nodes::Node::InheritNodes::InheritNode>();
        c->parent = this;
        inherit_node.push_back(std::move(c));
        children[segment_path] = inherit_node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Nodes::Node::InheritNodes::get_children()
{
    for (auto const & c : inherit_node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::Nodes::Node::InheritNodes::set_value(const std::string & value_path, std::string value)
{
}

Srlg::Nodes::Node::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 interface_name_xr{YType::str, "interface-name-xr"},
	 registrations{YType::uint32, "registrations"},
	 srlg_value{YType::uint32, "srlg-value"},
	 value_count{YType::uint32, "value-count"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Srlg::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool Srlg::Nodes::Node::Interfaces::Interface::has_data() const
{
    for (auto const & leaf : srlg_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| registrations.is_set
	|| value_count.is_set;
}

bool Srlg::Nodes::Node::Interfaces::Interface::has_operation() const
{
    for (auto const & leaf : srlg_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(registrations.operation)
	|| is_set(srlg_value.operation)
	|| is_set(value_count.operation);
}

std::string Srlg::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::Interfaces::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (registrations.is_set || is_set(registrations.operation)) leaf_name_data.push_back(registrations.get_name_leafdata());
    if (value_count.is_set || is_set(value_count.operation)) leaf_name_data.push_back(value_count.get_name_leafdata());

    auto srlg_value_name_datas = srlg_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_value_name_datas.begin(), srlg_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Srlg::Nodes::Node::Interfaces::Interface::get_children()
{
    return children;
}

void Srlg::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "registrations")
    {
        registrations = value;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.append(value);
    }
    if(value_path == "value-count")
    {
        value_count = value;
    }
}

Srlg::Nodes::Node::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "node";
}

Srlg::Nodes::Node::Interfaces::~Interfaces()
{
}

bool Srlg::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::Interfaces::get_entity_path(Entity* ancestor) const
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

Entity* Srlg::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Srlg::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Nodes::Node::Interfaces::get_children()
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

void Srlg::Nodes::Node::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::SrlgAttribute()
    :
    	priority{YType::enumeration, "priority"},
	 source{YType::enumeration, "source"},
	 source_name{YType::str, "source-name"},
	 srlg_index{YType::uint16, "srlg-index"},
	 srlg_value{YType::uint32, "srlg-value"}
{
    yang_name = "srlg-attribute"; yang_parent_name = "interface-detail";
}

Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::~SrlgAttribute()
{
}

bool Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::has_data() const
{
    return priority.is_set
	|| source.is_set
	|| source_name.is_set
	|| srlg_index.is_set
	|| srlg_value.is_set;
}

bool Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(priority.operation)
	|| is_set(source.operation)
	|| is_set(source_name.operation)
	|| is_set(srlg_index.operation)
	|| is_set(srlg_value.operation);
}

std::string Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-attribute";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::get_entity_path(Entity* ancestor) const
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

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (source_name.is_set || is_set(source_name.operation)) leaf_name_data.push_back(source_name.get_name_leafdata());
    if (srlg_index.is_set || is_set(srlg_index.operation)) leaf_name_data.push_back(srlg_index.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.operation)) leaf_name_data.push_back(srlg_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::get_children()
{
    return children;
}

void Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "source-name")
    {
        source_name = value;
    }
    if(value_path == "srlg-index")
    {
        srlg_index = value;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
    }
}

Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::InterfaceDetail()
    :
    	interface_name{YType::str, "interface-name"},
	 groups{YType::uint32, "groups"},
	 nodes{YType::uint32, "nodes"}
{
    yang_name = "interface-detail"; yang_parent_name = "interface-details";
}

Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::~InterfaceDetail()
{
}

bool Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::has_data() const
{
    for (std::size_t index=0; index<srlg_attribute.size(); index++)
    {
        if(srlg_attribute[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| groups.is_set
	|| nodes.is_set;
}

bool Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::has_operation() const
{
    for (std::size_t index=0; index<srlg_attribute.size(); index++)
    {
        if(srlg_attribute[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(groups.operation)
	|| is_set(nodes.operation);
}

std::string Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-detail" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (groups.is_set || is_set(groups.operation)) leaf_name_data.push_back(groups.get_name_leafdata());
    if (nodes.is_set || is_set(nodes.operation)) leaf_name_data.push_back(nodes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "srlg-attribute")
    {
        for(auto const & c : srlg_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute>();
        c->parent = this;
        srlg_attribute.push_back(std::move(c));
        children[segment_path] = srlg_attribute.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::get_children()
{
    for (auto const & c : srlg_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "groups")
    {
        groups = value;
    }
    if(value_path == "nodes")
    {
        nodes = value;
    }
}

Srlg::Nodes::Node::InterfaceDetails::InterfaceDetails()
{
    yang_name = "interface-details"; yang_parent_name = "node";
}

Srlg::Nodes::Node::InterfaceDetails::~InterfaceDetails()
{
}

bool Srlg::Nodes::Node::InterfaceDetails::has_data() const
{
    for (std::size_t index=0; index<interface_detail.size(); index++)
    {
        if(interface_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::InterfaceDetails::has_operation() const
{
    for (std::size_t index=0; index<interface_detail.size(); index++)
    {
        if(interface_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::Nodes::Node::InterfaceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-details";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::InterfaceDetails::get_entity_path(Entity* ancestor) const
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

Entity* Srlg::Nodes::Node::InterfaceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-detail")
    {
        for(auto const & c : interface_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail>();
        c->parent = this;
        interface_detail.push_back(std::move(c));
        children[segment_path] = interface_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Nodes::Node::InterfaceDetails::get_children()
{
    for (auto const & c : interface_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::Nodes::Node::InterfaceDetails::set_value(const std::string & value_path, std::string value)
{
}

Srlg::Nodes::Node::SrlgValues::SrlgValue::SrlgValue()
    :
    	value_{YType::int32, "value"},
	 interface_name{YType::str, "interface-name"}
{
    yang_name = "srlg-value"; yang_parent_name = "srlg-values";
}

Srlg::Nodes::Node::SrlgValues::SrlgValue::~SrlgValue()
{
}

bool Srlg::Nodes::Node::SrlgValues::SrlgValue::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return value_.is_set;
}

bool Srlg::Nodes::Node::SrlgValues::SrlgValue::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation)
	|| is_set(interface_name.operation);
}

std::string Srlg::Nodes::Node::SrlgValues::SrlgValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-value" <<"[value='" <<value_.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::SrlgValues::SrlgValue::get_entity_path(Entity* ancestor) const
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

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());

    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Nodes::Node::SrlgValues::SrlgValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Srlg::Nodes::Node::SrlgValues::SrlgValue::get_children()
{
    return children;
}

void Srlg::Nodes::Node::SrlgValues::SrlgValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
    if(value_path == "interface-name")
    {
        interface_name.append(value);
    }
}

Srlg::Nodes::Node::SrlgValues::SrlgValues()
{
    yang_name = "srlg-values"; yang_parent_name = "node";
}

Srlg::Nodes::Node::SrlgValues::~SrlgValues()
{
}

bool Srlg::Nodes::Node::SrlgValues::has_data() const
{
    for (std::size_t index=0; index<srlg_value.size(); index++)
    {
        if(srlg_value[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::SrlgValues::has_operation() const
{
    for (std::size_t index=0; index<srlg_value.size(); index++)
    {
        if(srlg_value[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::Nodes::Node::SrlgValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-values";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::SrlgValues::get_entity_path(Entity* ancestor) const
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

Entity* Srlg::Nodes::Node::SrlgValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "srlg-value")
    {
        for(auto const & c : srlg_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::Nodes::Node::SrlgValues::SrlgValue>();
        c->parent = this;
        srlg_value.push_back(std::move(c));
        children[segment_path] = srlg_value.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Nodes::Node::SrlgValues::get_children()
{
    for (auto const & c : srlg_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::Nodes::Node::SrlgValues::set_value(const std::string & value_path, std::string value)
{
}

Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::Interfaces()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interfaces"; yang_parent_name = "interface-srlg-name";
}

Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::~Interfaces()
{
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_entity_path(Entity* ancestor) const
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


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_children()
{
    return children;
}

void Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name.append(value);
    }
}

Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::InterfaceSrlgName()
    :
    	srlg_name{YType::str, "srlg-name"},
	 srlg_name_xr{YType::str, "srlg-name-xr"},
	 srlg_value{YType::uint32, "srlg-value"}
    	,
    interfaces(std::make_unique<Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    yang_name = "interface-srlg-name"; yang_parent_name = "interface-srlg-names";
}

Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::~InterfaceSrlgName()
{
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::has_data() const
{
    return srlg_name.is_set
	|| srlg_name_xr.is_set
	|| srlg_value.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::has_operation() const
{
    return is_set(operation)
	|| is_set(srlg_name.operation)
	|| is_set(srlg_name_xr.operation)
	|| is_set(srlg_value.operation)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-srlg-name" <<"[srlg-name='" <<srlg_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::get_entity_path(Entity* ancestor) const
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

    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (srlg_name_xr.is_set || is_set(srlg_name_xr.operation)) leaf_name_data.push_back(srlg_name_xr.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.operation)) leaf_name_data.push_back(srlg_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            interfaces = std::make_unique<Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::get_children()
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

void Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr = value;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
    }
}

Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgNames()
{
    yang_name = "interface-srlg-names"; yang_parent_name = "node";
}

Srlg::Nodes::Node::InterfaceSrlgNames::~InterfaceSrlgNames()
{
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::has_data() const
{
    for (std::size_t index=0; index<interface_srlg_name.size(); index++)
    {
        if(interface_srlg_name[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::has_operation() const
{
    for (std::size_t index=0; index<interface_srlg_name.size(); index++)
    {
        if(interface_srlg_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::Nodes::Node::InterfaceSrlgNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-srlg-names";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::InterfaceSrlgNames::get_entity_path(Entity* ancestor) const
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

Entity* Srlg::Nodes::Node::InterfaceSrlgNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-srlg-name")
    {
        for(auto const & c : interface_srlg_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName>();
        c->parent = this;
        interface_srlg_name.push_back(std::move(c));
        children[segment_path] = interface_srlg_name.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Nodes::Node::InterfaceSrlgNames::get_children()
{
    for (auto const & c : interface_srlg_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::Nodes::Node::InterfaceSrlgNames::set_value(const std::string & value_path, std::string value)
{
}

Srlg::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    groups(std::make_unique<Srlg::Nodes::Node::Groups>())
	,inherit_nodes(std::make_unique<Srlg::Nodes::Node::InheritNodes>())
	,interface_details(std::make_unique<Srlg::Nodes::Node::InterfaceDetails>())
	,interface_srlg_names(std::make_unique<Srlg::Nodes::Node::InterfaceSrlgNames>())
	,interfaces(std::make_unique<Srlg::Nodes::Node::Interfaces>())
	,srlg_maps(std::make_unique<Srlg::Nodes::Node::SrlgMaps>())
	,srlg_values(std::make_unique<Srlg::Nodes::Node::SrlgValues>())
{
    groups->parent = this;
    children["groups"] = groups.get();

    inherit_nodes->parent = this;
    children["inherit-nodes"] = inherit_nodes.get();

    interface_details->parent = this;
    children["interface-details"] = interface_details.get();

    interface_srlg_names->parent = this;
    children["interface-srlg-names"] = interface_srlg_names.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    srlg_maps->parent = this;
    children["srlg-maps"] = srlg_maps.get();

    srlg_values->parent = this;
    children["srlg-values"] = srlg_values.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Srlg::Nodes::Node::~Node()
{
}

bool Srlg::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (groups !=  nullptr && groups->has_data())
	|| (inherit_nodes !=  nullptr && inherit_nodes->has_data())
	|| (interface_details !=  nullptr && interface_details->has_data())
	|| (interface_srlg_names !=  nullptr && interface_srlg_names->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (srlg_maps !=  nullptr && srlg_maps->has_data())
	|| (srlg_values !=  nullptr && srlg_values->has_data());
}

bool Srlg::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (groups !=  nullptr && groups->has_operation())
	|| (inherit_nodes !=  nullptr && inherit_nodes->has_operation())
	|| (interface_details !=  nullptr && interface_details->has_operation())
	|| (interface_srlg_names !=  nullptr && interface_srlg_names->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (srlg_maps !=  nullptr && srlg_maps->has_operation())
	|| (srlg_values !=  nullptr && srlg_values->has_operation());
}

std::string Srlg::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/nodes/" << get_segment_path();
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

Entity* Srlg::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "groups")
    {
        if(groups != nullptr)
        {
            children["groups"] = groups.get();
        }
        else
        {
            groups = std::make_unique<Srlg::Nodes::Node::Groups>();
            groups->parent = this;
            children["groups"] = groups.get();
        }
        return children.at("groups");
    }

    if(child_yang_name == "inherit-nodes")
    {
        if(inherit_nodes != nullptr)
        {
            children["inherit-nodes"] = inherit_nodes.get();
        }
        else
        {
            inherit_nodes = std::make_unique<Srlg::Nodes::Node::InheritNodes>();
            inherit_nodes->parent = this;
            children["inherit-nodes"] = inherit_nodes.get();
        }
        return children.at("inherit-nodes");
    }

    if(child_yang_name == "interface-details")
    {
        if(interface_details != nullptr)
        {
            children["interface-details"] = interface_details.get();
        }
        else
        {
            interface_details = std::make_unique<Srlg::Nodes::Node::InterfaceDetails>();
            interface_details->parent = this;
            children["interface-details"] = interface_details.get();
        }
        return children.at("interface-details");
    }

    if(child_yang_name == "interface-srlg-names")
    {
        if(interface_srlg_names != nullptr)
        {
            children["interface-srlg-names"] = interface_srlg_names.get();
        }
        else
        {
            interface_srlg_names = std::make_unique<Srlg::Nodes::Node::InterfaceSrlgNames>();
            interface_srlg_names->parent = this;
            children["interface-srlg-names"] = interface_srlg_names.get();
        }
        return children.at("interface-srlg-names");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Srlg::Nodes::Node::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "srlg-maps")
    {
        if(srlg_maps != nullptr)
        {
            children["srlg-maps"] = srlg_maps.get();
        }
        else
        {
            srlg_maps = std::make_unique<Srlg::Nodes::Node::SrlgMaps>();
            srlg_maps->parent = this;
            children["srlg-maps"] = srlg_maps.get();
        }
        return children.at("srlg-maps");
    }

    if(child_yang_name == "srlg-values")
    {
        if(srlg_values != nullptr)
        {
            children["srlg-values"] = srlg_values.get();
        }
        else
        {
            srlg_values = std::make_unique<Srlg::Nodes::Node::SrlgValues>();
            srlg_values->parent = this;
            children["srlg-values"] = srlg_values.get();
        }
        return children.at("srlg-values");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Nodes::Node::get_children()
{
    if(children.find("groups") == children.end())
    {
        if(groups != nullptr)
        {
            children["groups"] = groups.get();
        }
    }

    if(children.find("inherit-nodes") == children.end())
    {
        if(inherit_nodes != nullptr)
        {
            children["inherit-nodes"] = inherit_nodes.get();
        }
    }

    if(children.find("interface-details") == children.end())
    {
        if(interface_details != nullptr)
        {
            children["interface-details"] = interface_details.get();
        }
    }

    if(children.find("interface-srlg-names") == children.end())
    {
        if(interface_srlg_names != nullptr)
        {
            children["interface-srlg-names"] = interface_srlg_names.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("srlg-maps") == children.end())
    {
        if(srlg_maps != nullptr)
        {
            children["srlg-maps"] = srlg_maps.get();
        }
    }

    if(children.find("srlg-values") == children.end())
    {
        if(srlg_values != nullptr)
        {
            children["srlg-values"] = srlg_values.get();
        }
    }

    return children;
}

void Srlg::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Srlg::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "srlg";
}

Srlg::Nodes::~Nodes()
{
}

bool Srlg::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Srlg::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Srlg::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Nodes::get_children()
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

void Srlg::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::Interfaces()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interfaces"; yang_parent_name = "interface-srlg-name";
}

Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::~Interfaces()
{
}

bool Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_entity_path(Entity* ancestor) const
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


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_children()
{
    return children;
}

void Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name.append(value);
    }
}

Srlg::InterfaceSrlgNames::InterfaceSrlgName::InterfaceSrlgName()
    :
    	srlg_name{YType::str, "srlg-name"},
	 srlg_name_xr{YType::str, "srlg-name-xr"},
	 srlg_value{YType::uint32, "srlg-value"}
    	,
    interfaces(std::make_unique<Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    yang_name = "interface-srlg-name"; yang_parent_name = "interface-srlg-names";
}

Srlg::InterfaceSrlgNames::InterfaceSrlgName::~InterfaceSrlgName()
{
}

bool Srlg::InterfaceSrlgNames::InterfaceSrlgName::has_data() const
{
    return srlg_name.is_set
	|| srlg_name_xr.is_set
	|| srlg_value.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Srlg::InterfaceSrlgNames::InterfaceSrlgName::has_operation() const
{
    return is_set(operation)
	|| is_set(srlg_name.operation)
	|| is_set(srlg_name_xr.operation)
	|| is_set(srlg_value.operation)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Srlg::InterfaceSrlgNames::InterfaceSrlgName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-srlg-name" <<"[srlg-name='" <<srlg_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::InterfaceSrlgNames::InterfaceSrlgName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/interface-srlg-names/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (srlg_name_xr.is_set || is_set(srlg_name_xr.operation)) leaf_name_data.push_back(srlg_name_xr.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.operation)) leaf_name_data.push_back(srlg_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::InterfaceSrlgNames::InterfaceSrlgName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            interfaces = std::make_unique<Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::InterfaceSrlgNames::InterfaceSrlgName::get_children()
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

void Srlg::InterfaceSrlgNames::InterfaceSrlgName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr = value;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
    }
}

Srlg::InterfaceSrlgNames::InterfaceSrlgNames()
{
    yang_name = "interface-srlg-names"; yang_parent_name = "srlg";
}

Srlg::InterfaceSrlgNames::~InterfaceSrlgNames()
{
}

bool Srlg::InterfaceSrlgNames::has_data() const
{
    for (std::size_t index=0; index<interface_srlg_name.size(); index++)
    {
        if(interface_srlg_name[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::InterfaceSrlgNames::has_operation() const
{
    for (std::size_t index=0; index<interface_srlg_name.size(); index++)
    {
        if(interface_srlg_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::InterfaceSrlgNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-srlg-names";

    return path_buffer.str();

}

EntityPath Srlg::InterfaceSrlgNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::InterfaceSrlgNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-srlg-name")
    {
        for(auto const & c : interface_srlg_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::InterfaceSrlgNames::InterfaceSrlgName>();
        c->parent = this;
        interface_srlg_name.push_back(std::move(c));
        children[segment_path] = interface_srlg_name.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::InterfaceSrlgNames::get_children()
{
    for (auto const & c : interface_srlg_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::InterfaceSrlgNames::set_value(const std::string & value_path, std::string value)
{
}

Srlg::Srlg()
    :
    interface_srlg_names(std::make_unique<Srlg::InterfaceSrlgNames>())
	,nodes(std::make_unique<Srlg::Nodes>())
	,srlg_maps(std::make_unique<Srlg::SrlgMaps>())
{
    interface_srlg_names->parent = this;
    children["interface-srlg-names"] = interface_srlg_names.get();

    nodes->parent = this;
    children["nodes"] = nodes.get();

    srlg_maps->parent = this;
    children["srlg-maps"] = srlg_maps.get();

    yang_name = "srlg"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-oper";
}

Srlg::~Srlg()
{
}

bool Srlg::has_data() const
{
    return (interface_srlg_names !=  nullptr && interface_srlg_names->has_data())
	|| (nodes !=  nullptr && nodes->has_data())
	|| (srlg_maps !=  nullptr && srlg_maps->has_data());
}

bool Srlg::has_operation() const
{
    return is_set(operation)
	|| (interface_srlg_names !=  nullptr && interface_srlg_names->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (srlg_maps !=  nullptr && srlg_maps->has_operation());
}

std::string Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg";

    return path_buffer.str();

}

EntityPath Srlg::get_entity_path(Entity* ancestor) const
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

Entity* Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-srlg-names")
    {
        if(interface_srlg_names != nullptr)
        {
            children["interface-srlg-names"] = interface_srlg_names.get();
        }
        else
        {
            interface_srlg_names = std::make_unique<Srlg::InterfaceSrlgNames>();
            interface_srlg_names->parent = this;
            children["interface-srlg-names"] = interface_srlg_names.get();
        }
        return children.at("interface-srlg-names");
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<Srlg::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    if(child_yang_name == "srlg-maps")
    {
        if(srlg_maps != nullptr)
        {
            children["srlg-maps"] = srlg_maps.get();
        }
        else
        {
            srlg_maps = std::make_unique<Srlg::SrlgMaps>();
            srlg_maps->parent = this;
            children["srlg-maps"] = srlg_maps.get();
        }
        return children.at("srlg-maps");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::get_children()
{
    if(children.find("interface-srlg-names") == children.end())
    {
        if(interface_srlg_names != nullptr)
        {
            children["interface-srlg-names"] = interface_srlg_names.get();
        }
    }

    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    if(children.find("srlg-maps") == children.end())
    {
        if(srlg_maps != nullptr)
        {
            children["srlg-maps"] = srlg_maps.get();
        }
    }

    return children;
}

void Srlg::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Srlg::clone_ptr()
{
    return std::make_unique<Srlg>();
}
SelectiveVrfDownload::State::State()
    :
    	is_svd_enabled{YType::boolean, "is-svd-enabled"},
	 is_svd_enabled_cfg{YType::boolean, "is-svd-enabled-cfg"}
{
    yang_name = "state"; yang_parent_name = "selective-vrf-download";
}

SelectiveVrfDownload::State::~State()
{
}

bool SelectiveVrfDownload::State::has_data() const
{
    return is_svd_enabled.is_set
	|| is_svd_enabled_cfg.is_set;
}

bool SelectiveVrfDownload::State::has_operation() const
{
    return is_set(operation)
	|| is_set(is_svd_enabled.operation)
	|| is_set(is_svd_enabled_cfg.operation);
}

std::string SelectiveVrfDownload::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath SelectiveVrfDownload::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-oper:selective-vrf-download/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_svd_enabled.is_set || is_set(is_svd_enabled.operation)) leaf_name_data.push_back(is_svd_enabled.get_name_leafdata());
    if (is_svd_enabled_cfg.is_set || is_set(is_svd_enabled_cfg.operation)) leaf_name_data.push_back(is_svd_enabled_cfg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SelectiveVrfDownload::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SelectiveVrfDownload::State::get_children()
{
    return children;
}

void SelectiveVrfDownload::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-svd-enabled")
    {
        is_svd_enabled = value;
    }
    if(value_path == "is-svd-enabled-cfg")
    {
        is_svd_enabled_cfg = value;
    }
}

SelectiveVrfDownload::SelectiveVrfDownload()
    :
    state(std::make_unique<SelectiveVrfDownload::State>())
{
    state->parent = this;
    children["state"] = state.get();

    yang_name = "selective-vrf-download"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-oper";
}

SelectiveVrfDownload::~SelectiveVrfDownload()
{
}

bool SelectiveVrfDownload::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool SelectiveVrfDownload::has_operation() const
{
    return is_set(operation)
	|| (state !=  nullptr && state->has_operation());
}

std::string SelectiveVrfDownload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:selective-vrf-download";

    return path_buffer.str();

}

EntityPath SelectiveVrfDownload::get_entity_path(Entity* ancestor) const
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

Entity* SelectiveVrfDownload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<SelectiveVrfDownload::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SelectiveVrfDownload::get_children()
{
    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void SelectiveVrfDownload::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> SelectiveVrfDownload::clone_ptr()
{
    return std::make_unique<SelectiveVrfDownload>();
}

const Enum::YLeaf PriorityEnum::critical {0, "critical"};
const Enum::YLeaf PriorityEnum::high {1, "high"};
const Enum::YLeaf PriorityEnum::medium {2, "medium"};
const Enum::YLeaf PriorityEnum::low {3, "low"};
const Enum::YLeaf PriorityEnum::very_low {4, "very-low"};

const Enum::YLeaf SourceEnum::configured {1, "configured"};
const Enum::YLeaf SourceEnum::from_group {2, "from-group"};
const Enum::YLeaf SourceEnum::inherited {4, "inherited"};
const Enum::YLeaf SourceEnum::from_optical {8, "from-optical"};
const Enum::YLeaf SourceEnum::configured_and_notified {17, "configured-and-notified"};
const Enum::YLeaf SourceEnum::from_group_and_notified {18, "from-group-and-notified"};
const Enum::YLeaf SourceEnum::inherited_and_notified {20, "inherited-and-notified"};
const Enum::YLeaf SourceEnum::from_optical_and_notified {24, "from-optical-and-notified"};


}
}

