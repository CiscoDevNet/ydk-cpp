
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ip_iep_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_iep_cfg {

IpExplicitPaths::Paths::Path::Name::Hops::Hop::Hop()
    :
    	index_number{YType::uint32, "index-number"},
	 hop_type{YType::enumeration, "hop-type"},
	 if_index{YType::int32, "if-index"},
	 ip_address{YType::str, "ip-address"},
	 mpls_label{YType::int32, "mpls-label"},
	 num_type{YType::enumeration, "num-type"}
{
    yang_name = "hop"; yang_parent_name = "hops";
}

IpExplicitPaths::Paths::Path::Name::Hops::Hop::~Hop()
{
}

bool IpExplicitPaths::Paths::Path::Name::Hops::Hop::has_data() const
{
    return index_number.is_set
	|| hop_type.is_set
	|| if_index.is_set
	|| ip_address.is_set
	|| mpls_label.is_set
	|| num_type.is_set;
}

bool IpExplicitPaths::Paths::Path::Name::Hops::Hop::has_operation() const
{
    return is_set(operation)
	|| is_set(index_number.operation)
	|| is_set(hop_type.operation)
	|| is_set(if_index.operation)
	|| is_set(ip_address.operation)
	|| is_set(mpls_label.operation)
	|| is_set(num_type.operation);
}

std::string IpExplicitPaths::Paths::Path::Name::Hops::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop" <<"[index-number='" <<index_number.get() <<"']";

    return path_buffer.str();

}

EntityPath IpExplicitPaths::Paths::Path::Name::Hops::Hop::get_entity_path(Entity* ancestor) const
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

    if (index_number.is_set || is_set(index_number.operation)) leaf_name_data.push_back(index_number.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.operation)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.operation)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (num_type.is_set || is_set(num_type.operation)) leaf_name_data.push_back(num_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpExplicitPaths::Paths::Path::Name::Hops::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & IpExplicitPaths::Paths::Path::Name::Hops::Hop::get_children()
{
    return children;
}

void IpExplicitPaths::Paths::Path::Name::Hops::Hop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index-number")
    {
        index_number = value;
    }
    if(value_path == "hop-type")
    {
        hop_type = value;
    }
    if(value_path == "if-index")
    {
        if_index = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "num-type")
    {
        num_type = value;
    }
}

IpExplicitPaths::Paths::Path::Name::Hops::Hops()
{
    yang_name = "hops"; yang_parent_name = "name";
}

IpExplicitPaths::Paths::Path::Name::Hops::~Hops()
{
}

bool IpExplicitPaths::Paths::Path::Name::Hops::has_data() const
{
    for (std::size_t index=0; index<hop.size(); index++)
    {
        if(hop[index]->has_data())
            return true;
    }
    return false;
}

bool IpExplicitPaths::Paths::Path::Name::Hops::has_operation() const
{
    for (std::size_t index=0; index<hop.size(); index++)
    {
        if(hop[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpExplicitPaths::Paths::Path::Name::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";

    return path_buffer.str();

}

EntityPath IpExplicitPaths::Paths::Path::Name::Hops::get_entity_path(Entity* ancestor) const
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

Entity* IpExplicitPaths::Paths::Path::Name::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hop")
    {
        for(auto const & c : hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<IpExplicitPaths::Paths::Path::Name::Hops::Hop>();
        c->parent = this;
        hop.push_back(std::move(c));
        children[segment_path] = hop.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & IpExplicitPaths::Paths::Path::Name::Hops::get_children()
{
    for (auto const & c : hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void IpExplicitPaths::Paths::Path::Name::Hops::set_value(const std::string & value_path, std::string value)
{
}

IpExplicitPaths::Paths::Path::Name::Name()
    :
    	name{YType::str, "name"},
	 disable{YType::empty, "disable"}
    	,
    hops(std::make_unique<IpExplicitPaths::Paths::Path::Name::Hops>())
{
    hops->parent = this;
    children["hops"] = hops.get();

    yang_name = "name"; yang_parent_name = "path";
}

IpExplicitPaths::Paths::Path::Name::~Name()
{
}

bool IpExplicitPaths::Paths::Path::Name::has_data() const
{
    return name.is_set
	|| disable.is_set
	|| (hops !=  nullptr && hops->has_data());
}

bool IpExplicitPaths::Paths::Path::Name::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(disable.operation)
	|| (hops !=  nullptr && hops->has_operation());
}

std::string IpExplicitPaths::Paths::Path::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath IpExplicitPaths::Paths::Path::Name::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpExplicitPaths::Paths::Path::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hops")
    {
        if(hops != nullptr)
        {
            children["hops"] = hops.get();
        }
        else
        {
            hops = std::make_unique<IpExplicitPaths::Paths::Path::Name::Hops>();
            hops->parent = this;
            children["hops"] = hops.get();
        }
        return children.at("hops");
    }

    return nullptr;
}

std::map<std::string, Entity*> & IpExplicitPaths::Paths::Path::Name::get_children()
{
    if(children.find("hops") == children.end())
    {
        if(hops != nullptr)
        {
            children["hops"] = hops.get();
        }
    }

    return children;
}

void IpExplicitPaths::Paths::Path::Name::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
}

IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::Hop()
    :
    	index_number{YType::uint32, "index-number"},
	 hop_type{YType::enumeration, "hop-type"},
	 if_index{YType::int32, "if-index"},
	 ip_address{YType::str, "ip-address"},
	 mpls_label{YType::int32, "mpls-label"},
	 num_type{YType::enumeration, "num-type"}
{
    yang_name = "hop"; yang_parent_name = "hops";
}

IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::~Hop()
{
}

bool IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::has_data() const
{
    return index_number.is_set
	|| hop_type.is_set
	|| if_index.is_set
	|| ip_address.is_set
	|| mpls_label.is_set
	|| num_type.is_set;
}

bool IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::has_operation() const
{
    return is_set(operation)
	|| is_set(index_number.operation)
	|| is_set(hop_type.operation)
	|| is_set(if_index.operation)
	|| is_set(ip_address.operation)
	|| is_set(mpls_label.operation)
	|| is_set(num_type.operation);
}

std::string IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop" <<"[index-number='" <<index_number.get() <<"']";

    return path_buffer.str();

}

EntityPath IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::get_entity_path(Entity* ancestor) const
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

    if (index_number.is_set || is_set(index_number.operation)) leaf_name_data.push_back(index_number.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.operation)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.operation)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (num_type.is_set || is_set(num_type.operation)) leaf_name_data.push_back(num_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::get_children()
{
    return children;
}

void IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index-number")
    {
        index_number = value;
    }
    if(value_path == "hop-type")
    {
        hop_type = value;
    }
    if(value_path == "if-index")
    {
        if_index = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "num-type")
    {
        num_type = value;
    }
}

IpExplicitPaths::Paths::Path::Identifier::Hops::Hops()
{
    yang_name = "hops"; yang_parent_name = "identifier";
}

IpExplicitPaths::Paths::Path::Identifier::Hops::~Hops()
{
}

bool IpExplicitPaths::Paths::Path::Identifier::Hops::has_data() const
{
    for (std::size_t index=0; index<hop.size(); index++)
    {
        if(hop[index]->has_data())
            return true;
    }
    return false;
}

bool IpExplicitPaths::Paths::Path::Identifier::Hops::has_operation() const
{
    for (std::size_t index=0; index<hop.size(); index++)
    {
        if(hop[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpExplicitPaths::Paths::Path::Identifier::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";

    return path_buffer.str();

}

EntityPath IpExplicitPaths::Paths::Path::Identifier::Hops::get_entity_path(Entity* ancestor) const
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

Entity* IpExplicitPaths::Paths::Path::Identifier::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hop")
    {
        for(auto const & c : hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<IpExplicitPaths::Paths::Path::Identifier::Hops::Hop>();
        c->parent = this;
        hop.push_back(std::move(c));
        children[segment_path] = hop.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & IpExplicitPaths::Paths::Path::Identifier::Hops::get_children()
{
    for (auto const & c : hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void IpExplicitPaths::Paths::Path::Identifier::Hops::set_value(const std::string & value_path, std::string value)
{
}

IpExplicitPaths::Paths::Path::Identifier::Identifier()
    :
    	id{YType::uint32, "id"},
	 disable{YType::empty, "disable"}
    	,
    hops(std::make_unique<IpExplicitPaths::Paths::Path::Identifier::Hops>())
{
    hops->parent = this;
    children["hops"] = hops.get();

    yang_name = "identifier"; yang_parent_name = "path";
}

IpExplicitPaths::Paths::Path::Identifier::~Identifier()
{
}

bool IpExplicitPaths::Paths::Path::Identifier::has_data() const
{
    return id.is_set
	|| disable.is_set
	|| (hops !=  nullptr && hops->has_data());
}

bool IpExplicitPaths::Paths::Path::Identifier::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(disable.operation)
	|| (hops !=  nullptr && hops->has_operation());
}

std::string IpExplicitPaths::Paths::Path::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier" <<"[id='" <<id.get() <<"']";

    return path_buffer.str();

}

EntityPath IpExplicitPaths::Paths::Path::Identifier::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpExplicitPaths::Paths::Path::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hops")
    {
        if(hops != nullptr)
        {
            children["hops"] = hops.get();
        }
        else
        {
            hops = std::make_unique<IpExplicitPaths::Paths::Path::Identifier::Hops>();
            hops->parent = this;
            children["hops"] = hops.get();
        }
        return children.at("hops");
    }

    return nullptr;
}

std::map<std::string, Entity*> & IpExplicitPaths::Paths::Path::Identifier::get_children()
{
    if(children.find("hops") == children.end())
    {
        if(hops != nullptr)
        {
            children["hops"] = hops.get();
        }
    }

    return children;
}

void IpExplicitPaths::Paths::Path::Identifier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
}

IpExplicitPaths::Paths::Path::Path()
    :
    	type{YType::enumeration, "type"}
{
    yang_name = "path"; yang_parent_name = "paths";
}

IpExplicitPaths::Paths::Path::~Path()
{
}

bool IpExplicitPaths::Paths::Path::has_data() const
{
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return type.is_set;
}

bool IpExplicitPaths::Paths::Path::has_operation() const
{
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(type.operation);
}

std::string IpExplicitPaths::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[type='" <<type.get() <<"']";

    return path_buffer.str();

}

EntityPath IpExplicitPaths::Paths::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-iep-cfg:ip-explicit-paths/paths/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpExplicitPaths::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "identifier")
    {
        for(auto const & c : identifier)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<IpExplicitPaths::Paths::Path::Identifier>();
        c->parent = this;
        identifier.push_back(std::move(c));
        children[segment_path] = identifier.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<IpExplicitPaths::Paths::Path::Name>();
        c->parent = this;
        name.push_back(std::move(c));
        children[segment_path] = name.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & IpExplicitPaths::Paths::Path::get_children()
{
    for (auto const & c : identifier)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void IpExplicitPaths::Paths::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

IpExplicitPaths::Paths::Paths()
{
    yang_name = "paths"; yang_parent_name = "ip-explicit-paths";
}

IpExplicitPaths::Paths::~Paths()
{
}

bool IpExplicitPaths::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool IpExplicitPaths::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpExplicitPaths::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath IpExplicitPaths::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-iep-cfg:ip-explicit-paths/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpExplicitPaths::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<IpExplicitPaths::Paths::Path>();
        c->parent = this;
        path.push_back(std::move(c));
        children[segment_path] = path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & IpExplicitPaths::Paths::get_children()
{
    for (auto const & c : path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void IpExplicitPaths::Paths::set_value(const std::string & value_path, std::string value)
{
}

IpExplicitPaths::IpExplicitPaths()
    :
    paths(std::make_unique<IpExplicitPaths::Paths>())
{
    paths->parent = this;
    children["paths"] = paths.get();

    yang_name = "ip-explicit-paths"; yang_parent_name = "Cisco-IOS-XR-ip-iep-cfg";
}

IpExplicitPaths::~IpExplicitPaths()
{
}

bool IpExplicitPaths::has_data() const
{
    return (paths !=  nullptr && paths->has_data());
}

bool IpExplicitPaths::has_operation() const
{
    return is_set(operation)
	|| (paths !=  nullptr && paths->has_operation());
}

std::string IpExplicitPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iep-cfg:ip-explicit-paths";

    return path_buffer.str();

}

EntityPath IpExplicitPaths::get_entity_path(Entity* ancestor) const
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

Entity* IpExplicitPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "paths")
    {
        if(paths != nullptr)
        {
            children["paths"] = paths.get();
        }
        else
        {
            paths = std::make_unique<IpExplicitPaths::Paths>();
            paths->parent = this;
            children["paths"] = paths.get();
        }
        return children.at("paths");
    }

    return nullptr;
}

std::map<std::string, Entity*> & IpExplicitPaths::get_children()
{
    if(children.find("paths") == children.end())
    {
        if(paths != nullptr)
        {
            children["paths"] = paths.get();
        }
    }

    return children;
}

void IpExplicitPaths::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> IpExplicitPaths::clone_ptr()
{
    return std::make_unique<IpExplicitPaths>();
}

const Enum::YLeaf IpIepPathEnum::identifier {1, "identifier"};
const Enum::YLeaf IpIepPathEnum::name {2, "name"};

const Enum::YLeaf IpIepHopEnum::next_strict {2, "next-strict"};
const Enum::YLeaf IpIepHopEnum::next_loose {3, "next-loose"};
const Enum::YLeaf IpIepHopEnum::exclude {4, "exclude"};
const Enum::YLeaf IpIepHopEnum::exclude_srlg {5, "exclude-srlg"};
const Enum::YLeaf IpIepHopEnum::next_label {6, "next-label"};

const Enum::YLeaf IpIepNumEnum::unnumbered {1, "unnumbered"};
const Enum::YLeaf IpIepNumEnum::numbered {2, "numbered"};


}
}

