
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_parser_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_parser_cfg {

Parser::Indentation::Indentation()
    :
    	indentation_disable{YType::boolean, "indentation-disable"}
{
    yang_name = "indentation"; yang_parent_name = "parser";
}

Parser::Indentation::~Indentation()
{
}

bool Parser::Indentation::has_data() const
{
    return indentation_disable.is_set;
}

bool Parser::Indentation::has_operation() const
{
    return is_set(operation)
	|| is_set(indentation_disable.operation);
}

std::string Parser::Indentation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indentation";

    return path_buffer.str();

}

EntityPath Parser::Indentation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-parser-cfg:parser/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (indentation_disable.is_set || is_set(indentation_disable.operation)) leaf_name_data.push_back(indentation_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Parser::Indentation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Parser::Indentation::get_children()
{
    return children;
}

void Parser::Indentation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "indentation-disable")
    {
        indentation_disable = value;
    }
}

Parser::Alias::Execs::Exec::Exec()
    :
    	identifier{YType::str, "identifier"},
	 identifier_xr{YType::str, "identifier-xr"}
{
    yang_name = "exec"; yang_parent_name = "execs";
}

Parser::Alias::Execs::Exec::~Exec()
{
}

bool Parser::Alias::Execs::Exec::has_data() const
{
    return identifier.is_set
	|| identifier_xr.is_set;
}

bool Parser::Alias::Execs::Exec::has_operation() const
{
    return is_set(operation)
	|| is_set(identifier.operation)
	|| is_set(identifier_xr.operation);
}

std::string Parser::Alias::Execs::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec" <<"[identifier='" <<identifier.get() <<"']";

    return path_buffer.str();

}

EntityPath Parser::Alias::Execs::Exec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-parser-cfg:parser/alias/execs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (identifier_xr.is_set || is_set(identifier_xr.operation)) leaf_name_data.push_back(identifier_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Parser::Alias::Execs::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Parser::Alias::Execs::Exec::get_children()
{
    return children;
}

void Parser::Alias::Execs::Exec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "identifier-xr")
    {
        identifier_xr = value;
    }
}

Parser::Alias::Execs::Execs()
{
    yang_name = "execs"; yang_parent_name = "alias";
}

Parser::Alias::Execs::~Execs()
{
}

bool Parser::Alias::Execs::has_data() const
{
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_data())
            return true;
    }
    return false;
}

bool Parser::Alias::Execs::has_operation() const
{
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Parser::Alias::Execs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "execs";

    return path_buffer.str();

}

EntityPath Parser::Alias::Execs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-parser-cfg:parser/alias/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Parser::Alias::Execs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exec")
    {
        for(auto const & c : exec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Parser::Alias::Execs::Exec>();
        c->parent = this;
        exec.push_back(std::move(c));
        children[segment_path] = exec.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Parser::Alias::Execs::get_children()
{
    for (auto const & c : exec)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Parser::Alias::Execs::set_value(const std::string & value_path, std::string value)
{
}

Parser::Alias::Configurations::Configuration::Configuration()
    :
    	identifier{YType::str, "identifier"},
	 identifier_xr{YType::str, "identifier-xr"}
{
    yang_name = "configuration"; yang_parent_name = "configurations";
}

Parser::Alias::Configurations::Configuration::~Configuration()
{
}

bool Parser::Alias::Configurations::Configuration::has_data() const
{
    return identifier.is_set
	|| identifier_xr.is_set;
}

bool Parser::Alias::Configurations::Configuration::has_operation() const
{
    return is_set(operation)
	|| is_set(identifier.operation)
	|| is_set(identifier_xr.operation);
}

std::string Parser::Alias::Configurations::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration" <<"[identifier='" <<identifier.get() <<"']";

    return path_buffer.str();

}

EntityPath Parser::Alias::Configurations::Configuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-parser-cfg:parser/alias/configurations/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (identifier_xr.is_set || is_set(identifier_xr.operation)) leaf_name_data.push_back(identifier_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Parser::Alias::Configurations::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Parser::Alias::Configurations::Configuration::get_children()
{
    return children;
}

void Parser::Alias::Configurations::Configuration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "identifier-xr")
    {
        identifier_xr = value;
    }
}

Parser::Alias::Configurations::Configurations()
{
    yang_name = "configurations"; yang_parent_name = "alias";
}

Parser::Alias::Configurations::~Configurations()
{
}

bool Parser::Alias::Configurations::has_data() const
{
    for (std::size_t index=0; index<configuration.size(); index++)
    {
        if(configuration[index]->has_data())
            return true;
    }
    return false;
}

bool Parser::Alias::Configurations::has_operation() const
{
    for (std::size_t index=0; index<configuration.size(); index++)
    {
        if(configuration[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Parser::Alias::Configurations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configurations";

    return path_buffer.str();

}

EntityPath Parser::Alias::Configurations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-parser-cfg:parser/alias/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Parser::Alias::Configurations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "configuration")
    {
        for(auto const & c : configuration)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Parser::Alias::Configurations::Configuration>();
        c->parent = this;
        configuration.push_back(std::move(c));
        children[segment_path] = configuration.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Parser::Alias::Configurations::get_children()
{
    for (auto const & c : configuration)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Parser::Alias::Configurations::set_value(const std::string & value_path, std::string value)
{
}

Parser::Alias::Alls::All::All()
    :
    	identifier{YType::str, "identifier"},
	 identifier_xr{YType::str, "identifier-xr"}
{
    yang_name = "all"; yang_parent_name = "alls";
}

Parser::Alias::Alls::All::~All()
{
}

bool Parser::Alias::Alls::All::has_data() const
{
    return identifier.is_set
	|| identifier_xr.is_set;
}

bool Parser::Alias::Alls::All::has_operation() const
{
    return is_set(operation)
	|| is_set(identifier.operation)
	|| is_set(identifier_xr.operation);
}

std::string Parser::Alias::Alls::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all" <<"[identifier='" <<identifier.get() <<"']";

    return path_buffer.str();

}

EntityPath Parser::Alias::Alls::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-parser-cfg:parser/alias/alls/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (identifier_xr.is_set || is_set(identifier_xr.operation)) leaf_name_data.push_back(identifier_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Parser::Alias::Alls::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Parser::Alias::Alls::All::get_children()
{
    return children;
}

void Parser::Alias::Alls::All::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "identifier-xr")
    {
        identifier_xr = value;
    }
}

Parser::Alias::Alls::Alls()
{
    yang_name = "alls"; yang_parent_name = "alias";
}

Parser::Alias::Alls::~Alls()
{
}

bool Parser::Alias::Alls::has_data() const
{
    for (std::size_t index=0; index<all.size(); index++)
    {
        if(all[index]->has_data())
            return true;
    }
    return false;
}

bool Parser::Alias::Alls::has_operation() const
{
    for (std::size_t index=0; index<all.size(); index++)
    {
        if(all[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Parser::Alias::Alls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alls";

    return path_buffer.str();

}

EntityPath Parser::Alias::Alls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-parser-cfg:parser/alias/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Parser::Alias::Alls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all")
    {
        for(auto const & c : all)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Parser::Alias::Alls::All>();
        c->parent = this;
        all.push_back(std::move(c));
        children[segment_path] = all.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Parser::Alias::Alls::get_children()
{
    for (auto const & c : all)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Parser::Alias::Alls::set_value(const std::string & value_path, std::string value)
{
}

Parser::Alias::Alias()
    :
    alls(std::make_unique<Parser::Alias::Alls>())
	,configurations(std::make_unique<Parser::Alias::Configurations>())
	,execs(std::make_unique<Parser::Alias::Execs>())
{
    alls->parent = this;
    children["alls"] = alls.get();

    configurations->parent = this;
    children["configurations"] = configurations.get();

    execs->parent = this;
    children["execs"] = execs.get();

    yang_name = "alias"; yang_parent_name = "parser";
}

Parser::Alias::~Alias()
{
}

bool Parser::Alias::has_data() const
{
    return (alls !=  nullptr && alls->has_data())
	|| (configurations !=  nullptr && configurations->has_data())
	|| (execs !=  nullptr && execs->has_data());
}

bool Parser::Alias::has_operation() const
{
    return is_set(operation)
	|| (alls !=  nullptr && is_set(alls->operation))
	|| (configurations !=  nullptr && is_set(configurations->operation))
	|| (execs !=  nullptr && is_set(execs->operation));
}

std::string Parser::Alias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alias";

    return path_buffer.str();

}

EntityPath Parser::Alias::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-parser-cfg:parser/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Parser::Alias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "alls")
    {
        if(alls != nullptr)
        {
            children["alls"] = alls.get();
        }
        else
        {
            alls = std::make_unique<Parser::Alias::Alls>();
            alls->parent = this;
            children["alls"] = alls.get();
        }
        return children.at("alls");
    }

    if(child_yang_name == "configurations")
    {
        if(configurations != nullptr)
        {
            children["configurations"] = configurations.get();
        }
        else
        {
            configurations = std::make_unique<Parser::Alias::Configurations>();
            configurations->parent = this;
            children["configurations"] = configurations.get();
        }
        return children.at("configurations");
    }

    if(child_yang_name == "execs")
    {
        if(execs != nullptr)
        {
            children["execs"] = execs.get();
        }
        else
        {
            execs = std::make_unique<Parser::Alias::Execs>();
            execs->parent = this;
            children["execs"] = execs.get();
        }
        return children.at("execs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Parser::Alias::get_children()
{
    if(children.find("alls") == children.end())
    {
        if(alls != nullptr)
        {
            children["alls"] = alls.get();
        }
    }

    if(children.find("configurations") == children.end())
    {
        if(configurations != nullptr)
        {
            children["configurations"] = configurations.get();
        }
    }

    if(children.find("execs") == children.end())
    {
        if(execs != nullptr)
        {
            children["execs"] = execs.get();
        }
    }

    return children;
}

void Parser::Alias::set_value(const std::string & value_path, std::string value)
{
}

Parser::History::History()
    :
    	size{YType::uint32, "size"}
{
    yang_name = "history"; yang_parent_name = "parser";
}

Parser::History::~History()
{
}

bool Parser::History::has_data() const
{
    return size.is_set;
}

bool Parser::History::has_operation() const
{
    return is_set(operation)
	|| is_set(size.operation);
}

std::string Parser::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

EntityPath Parser::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-parser-cfg:parser/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Parser::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Parser::History::get_children()
{
    return children;
}

void Parser::History::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "size")
    {
        size = value;
    }
}

Parser::InterfaceDisplay::InterfaceDisplay()
    :
    	slot_order{YType::boolean, "slot-order"}
{
    yang_name = "interface-display"; yang_parent_name = "parser";
}

Parser::InterfaceDisplay::~InterfaceDisplay()
{
}

bool Parser::InterfaceDisplay::has_data() const
{
    return slot_order.is_set;
}

bool Parser::InterfaceDisplay::has_operation() const
{
    return is_set(operation)
	|| is_set(slot_order.operation);
}

std::string Parser::InterfaceDisplay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-display";

    return path_buffer.str();

}

EntityPath Parser::InterfaceDisplay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-parser-cfg:parser/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_order.is_set || is_set(slot_order.operation)) leaf_name_data.push_back(slot_order.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Parser::InterfaceDisplay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Parser::InterfaceDisplay::get_children()
{
    return children;
}

void Parser::InterfaceDisplay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slot-order")
    {
        slot_order = value;
    }
}

Parser::NetmaskFormat::NetmaskFormat()
    :
    	bit_count{YType::boolean, "bit-count"}
{
    yang_name = "netmask-format"; yang_parent_name = "parser";
}

Parser::NetmaskFormat::~NetmaskFormat()
{
}

bool Parser::NetmaskFormat::has_data() const
{
    return bit_count.is_set;
}

bool Parser::NetmaskFormat::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_count.operation);
}

std::string Parser::NetmaskFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netmask-format";

    return path_buffer.str();

}

EntityPath Parser::NetmaskFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-parser-cfg:parser/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_count.is_set || is_set(bit_count.operation)) leaf_name_data.push_back(bit_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Parser::NetmaskFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Parser::NetmaskFormat::get_children()
{
    return children;
}

void Parser::NetmaskFormat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-count")
    {
        bit_count = value;
    }
}

Parser::Configuration::Disable::Disable()
    :
    	usergroup{YType::str, "usergroup"}
{
    yang_name = "disable"; yang_parent_name = "configuration";
}

Parser::Configuration::Disable::~Disable()
{
}

bool Parser::Configuration::Disable::has_data() const
{
    return usergroup.is_set;
}

bool Parser::Configuration::Disable::has_operation() const
{
    return is_set(operation)
	|| is_set(usergroup.operation);
}

std::string Parser::Configuration::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";

    return path_buffer.str();

}

EntityPath Parser::Configuration::Disable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-parser-cfg:parser/configuration/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (usergroup.is_set || is_set(usergroup.operation)) leaf_name_data.push_back(usergroup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Parser::Configuration::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Parser::Configuration::Disable::get_children()
{
    return children;
}

void Parser::Configuration::Disable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "usergroup")
    {
        usergroup = value;
    }
}

Parser::Configuration::Configuration()
    :
    disable(std::make_unique<Parser::Configuration::Disable>())
{
    disable->parent = this;
    children["disable"] = disable.get();

    yang_name = "configuration"; yang_parent_name = "parser";
}

Parser::Configuration::~Configuration()
{
}

bool Parser::Configuration::has_data() const
{
    return (disable !=  nullptr && disable->has_data());
}

bool Parser::Configuration::has_operation() const
{
    return is_set(operation)
	|| (disable !=  nullptr && is_set(disable->operation));
}

std::string Parser::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";

    return path_buffer.str();

}

EntityPath Parser::Configuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-parser-cfg:parser/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Parser::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "disable")
    {
        if(disable != nullptr)
        {
            children["disable"] = disable.get();
        }
        else
        {
            disable = std::make_unique<Parser::Configuration::Disable>();
            disable->parent = this;
            children["disable"] = disable.get();
        }
        return children.at("disable");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Parser::Configuration::get_children()
{
    if(children.find("disable") == children.end())
    {
        if(disable != nullptr)
        {
            children["disable"] = disable.get();
        }
    }

    return children;
}

void Parser::Configuration::set_value(const std::string & value_path, std::string value)
{
}

Parser::SubmodeExit::SubmodeExit()
    :
    	enable{YType::boolean, "enable"}
{
    yang_name = "submode-exit"; yang_parent_name = "parser";
}

Parser::SubmodeExit::~SubmodeExit()
{
}

bool Parser::SubmodeExit::has_data() const
{
    return enable.is_set;
}

bool Parser::SubmodeExit::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Parser::SubmodeExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "submode-exit";

    return path_buffer.str();

}

EntityPath Parser::SubmodeExit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-parser-cfg:parser/" << get_segment_path();
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

Entity* Parser::SubmodeExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Parser::SubmodeExit::get_children()
{
    return children;
}

void Parser::SubmodeExit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Parser::Parser()
    :
    alias(std::make_unique<Parser::Alias>())
	,configuration(std::make_unique<Parser::Configuration>())
	,history(std::make_unique<Parser::History>())
	,indentation(std::make_unique<Parser::Indentation>())
	,interface_display(std::make_unique<Parser::InterfaceDisplay>())
	,netmask_format(std::make_unique<Parser::NetmaskFormat>())
	,submode_exit(std::make_unique<Parser::SubmodeExit>())
{
    alias->parent = this;
    children["alias"] = alias.get();

    configuration->parent = this;
    children["configuration"] = configuration.get();

    history->parent = this;
    children["history"] = history.get();

    indentation->parent = this;
    children["indentation"] = indentation.get();

    interface_display->parent = this;
    children["interface-display"] = interface_display.get();

    netmask_format->parent = this;
    children["netmask-format"] = netmask_format.get();

    submode_exit->parent = this;
    children["submode-exit"] = submode_exit.get();

    yang_name = "parser"; yang_parent_name = "Cisco-IOS-XR-parser-cfg";
}

Parser::~Parser()
{
}

bool Parser::has_data() const
{
    return (alias !=  nullptr && alias->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (indentation !=  nullptr && indentation->has_data())
	|| (interface_display !=  nullptr && interface_display->has_data())
	|| (netmask_format !=  nullptr && netmask_format->has_data())
	|| (submode_exit !=  nullptr && submode_exit->has_data());
}

bool Parser::has_operation() const
{
    return is_set(operation)
	|| (alias !=  nullptr && is_set(alias->operation))
	|| (configuration !=  nullptr && is_set(configuration->operation))
	|| (history !=  nullptr && is_set(history->operation))
	|| (indentation !=  nullptr && is_set(indentation->operation))
	|| (interface_display !=  nullptr && is_set(interface_display->operation))
	|| (netmask_format !=  nullptr && is_set(netmask_format->operation))
	|| (submode_exit !=  nullptr && is_set(submode_exit->operation));
}

std::string Parser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-parser-cfg:parser";

    return path_buffer.str();

}

EntityPath Parser::get_entity_path(Entity* ancestor) const
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

Entity* Parser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "alias")
    {
        if(alias != nullptr)
        {
            children["alias"] = alias.get();
        }
        else
        {
            alias = std::make_unique<Parser::Alias>();
            alias->parent = this;
            children["alias"] = alias.get();
        }
        return children.at("alias");
    }

    if(child_yang_name == "configuration")
    {
        if(configuration != nullptr)
        {
            children["configuration"] = configuration.get();
        }
        else
        {
            configuration = std::make_unique<Parser::Configuration>();
            configuration->parent = this;
            children["configuration"] = configuration.get();
        }
        return children.at("configuration");
    }

    if(child_yang_name == "history")
    {
        if(history != nullptr)
        {
            children["history"] = history.get();
        }
        else
        {
            history = std::make_unique<Parser::History>();
            history->parent = this;
            children["history"] = history.get();
        }
        return children.at("history");
    }

    if(child_yang_name == "indentation")
    {
        if(indentation != nullptr)
        {
            children["indentation"] = indentation.get();
        }
        else
        {
            indentation = std::make_unique<Parser::Indentation>();
            indentation->parent = this;
            children["indentation"] = indentation.get();
        }
        return children.at("indentation");
    }

    if(child_yang_name == "interface-display")
    {
        if(interface_display != nullptr)
        {
            children["interface-display"] = interface_display.get();
        }
        else
        {
            interface_display = std::make_unique<Parser::InterfaceDisplay>();
            interface_display->parent = this;
            children["interface-display"] = interface_display.get();
        }
        return children.at("interface-display");
    }

    if(child_yang_name == "netmask-format")
    {
        if(netmask_format != nullptr)
        {
            children["netmask-format"] = netmask_format.get();
        }
        else
        {
            netmask_format = std::make_unique<Parser::NetmaskFormat>();
            netmask_format->parent = this;
            children["netmask-format"] = netmask_format.get();
        }
        return children.at("netmask-format");
    }

    if(child_yang_name == "submode-exit")
    {
        if(submode_exit != nullptr)
        {
            children["submode-exit"] = submode_exit.get();
        }
        else
        {
            submode_exit = std::make_unique<Parser::SubmodeExit>();
            submode_exit->parent = this;
            children["submode-exit"] = submode_exit.get();
        }
        return children.at("submode-exit");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Parser::get_children()
{
    if(children.find("alias") == children.end())
    {
        if(alias != nullptr)
        {
            children["alias"] = alias.get();
        }
    }

    if(children.find("configuration") == children.end())
    {
        if(configuration != nullptr)
        {
            children["configuration"] = configuration.get();
        }
    }

    if(children.find("history") == children.end())
    {
        if(history != nullptr)
        {
            children["history"] = history.get();
        }
    }

    if(children.find("indentation") == children.end())
    {
        if(indentation != nullptr)
        {
            children["indentation"] = indentation.get();
        }
    }

    if(children.find("interface-display") == children.end())
    {
        if(interface_display != nullptr)
        {
            children["interface-display"] = interface_display.get();
        }
    }

    if(children.find("netmask-format") == children.end())
    {
        if(netmask_format != nullptr)
        {
            children["netmask-format"] = netmask_format.get();
        }
    }

    if(children.find("submode-exit") == children.end())
    {
        if(submode_exit != nullptr)
        {
            children["submode-exit"] = submode_exit.get();
        }
    }

    return children;
}

void Parser::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Parser::clone_ptr()
{
    return std::make_unique<Parser>();
}


}
}

