
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "openconfig_mpls.hpp"

namespace ydk {
namespace openconfig_mpls {

PathComputationMethodIdentity::PathComputationMethodIdentity()
     : Identity("openconfig-mpls-te:path-computation-method")
{
}

PathComputationMethodIdentity::~PathComputationMethodIdentity()
{
}

Mpls::Global::Config::Config()
    :
    	null_label{YType::identityref, "null-label"}
{
    yang_name = "config"; yang_parent_name = "global";
}

Mpls::Global::Config::~Config()
{
}

bool Mpls::Global::Config::has_data() const
{
    return null_label.is_set;
}

bool Mpls::Global::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(null_label.operation);
}

std::string Mpls::Global::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::Global::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null_label.is_set || is_set(null_label.operation)) leaf_name_data.push_back(null_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Global::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Global::Config::get_children()
{
    return children;
}

void Mpls::Global::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "null-label")
    {
        null_label = value;
    }
}

Mpls::Global::State::State()
    :
    	null_label{YType::identityref, "null-label"}
{
    yang_name = "state"; yang_parent_name = "global";
}

Mpls::Global::State::~State()
{
}

bool Mpls::Global::State::has_data() const
{
    return null_label.is_set;
}

bool Mpls::Global::State::has_operation() const
{
    return is_set(operation)
	|| is_set(null_label.operation);
}

std::string Mpls::Global::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::Global::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null_label.is_set || is_set(null_label.operation)) leaf_name_data.push_back(null_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Global::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Global::State::get_children()
{
    return children;
}

void Mpls::Global::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "null-label")
    {
        null_label = value;
    }
}

Mpls::Global::MplsInterfaceAttributes::Interface::Config::Config()
    :
    	mpls_enabled{YType::boolean, "mpls-enabled"},
	 name{YType::str, "name"}
{
    yang_name = "config"; yang_parent_name = "interface";
}

Mpls::Global::MplsInterfaceAttributes::Interface::Config::~Config()
{
}

bool Mpls::Global::MplsInterfaceAttributes::Interface::Config::has_data() const
{
    return mpls_enabled.is_set
	|| name.is_set;
}

bool Mpls::Global::MplsInterfaceAttributes::Interface::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(mpls_enabled.operation)
	|| is_set(name.operation);
}

std::string Mpls::Global::MplsInterfaceAttributes::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::Global::MplsInterfaceAttributes::Interface::Config::get_entity_path(Entity* ancestor) const
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

    if (mpls_enabled.is_set || is_set(mpls_enabled.operation)) leaf_name_data.push_back(mpls_enabled.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Global::MplsInterfaceAttributes::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Global::MplsInterfaceAttributes::Interface::Config::get_children()
{
    return children;
}

void Mpls::Global::MplsInterfaceAttributes::Interface::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpls-enabled")
    {
        mpls_enabled = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Mpls::Global::MplsInterfaceAttributes::Interface::State::State()
    :
    	mpls_enabled{YType::boolean, "mpls-enabled"},
	 name{YType::str, "name"}
{
    yang_name = "state"; yang_parent_name = "interface";
}

Mpls::Global::MplsInterfaceAttributes::Interface::State::~State()
{
}

bool Mpls::Global::MplsInterfaceAttributes::Interface::State::has_data() const
{
    return mpls_enabled.is_set
	|| name.is_set;
}

bool Mpls::Global::MplsInterfaceAttributes::Interface::State::has_operation() const
{
    return is_set(operation)
	|| is_set(mpls_enabled.operation)
	|| is_set(name.operation);
}

std::string Mpls::Global::MplsInterfaceAttributes::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::Global::MplsInterfaceAttributes::Interface::State::get_entity_path(Entity* ancestor) const
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

    if (mpls_enabled.is_set || is_set(mpls_enabled.operation)) leaf_name_data.push_back(mpls_enabled.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Global::MplsInterfaceAttributes::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Global::MplsInterfaceAttributes::Interface::State::get_children()
{
    return children;
}

void Mpls::Global::MplsInterfaceAttributes::Interface::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpls-enabled")
    {
        mpls_enabled = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Mpls::Global::MplsInterfaceAttributes::Interface::Interface()
    :
    	name{YType::str, "name"}
    	,
    config(std::make_unique<Mpls::Global::MplsInterfaceAttributes::Interface::Config>())
	,state(std::make_unique<Mpls::Global::MplsInterfaceAttributes::Interface::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "interface"; yang_parent_name = "mpls-interface-attributes";
}

Mpls::Global::MplsInterfaceAttributes::Interface::~Interface()
{
}

bool Mpls::Global::MplsInterfaceAttributes::Interface::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Global::MplsInterfaceAttributes::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::Global::MplsInterfaceAttributes::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::Global::MplsInterfaceAttributes::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/global/mpls-interface-attributes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Global::MplsInterfaceAttributes::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::Global::MplsInterfaceAttributes::Interface::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::Global::MplsInterfaceAttributes::Interface::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Global::MplsInterfaceAttributes::Interface::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::Global::MplsInterfaceAttributes::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Mpls::Global::MplsInterfaceAttributes::MplsInterfaceAttributes()
{
    yang_name = "mpls-interface-attributes"; yang_parent_name = "global";
}

Mpls::Global::MplsInterfaceAttributes::~MplsInterfaceAttributes()
{
}

bool Mpls::Global::MplsInterfaceAttributes::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Global::MplsInterfaceAttributes::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mpls::Global::MplsInterfaceAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-interface-attributes";

    return path_buffer.str();

}

EntityPath Mpls::Global::MplsInterfaceAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Global::MplsInterfaceAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Mpls::Global::MplsInterfaceAttributes::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Global::MplsInterfaceAttributes::get_children()
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

void Mpls::Global::MplsInterfaceAttributes::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Global::Global()
    :
    config(std::make_unique<Mpls::Global::Config>())
	,mpls_interface_attributes(std::make_unique<Mpls::Global::MplsInterfaceAttributes>())
	,state(std::make_unique<Mpls::Global::State>())
{
    config->parent = this;
    children["config"] = config.get();

    mpls_interface_attributes->parent = this;
    children["mpls-interface-attributes"] = mpls_interface_attributes.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "global"; yang_parent_name = "mpls";
}

Mpls::Global::~Global()
{
}

bool Mpls::Global::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (mpls_interface_attributes !=  nullptr && mpls_interface_attributes->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Global::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (mpls_interface_attributes !=  nullptr && is_set(mpls_interface_attributes->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath Mpls::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::Global::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "mpls-interface-attributes")
    {
        if(mpls_interface_attributes != nullptr)
        {
            children["mpls-interface-attributes"] = mpls_interface_attributes.get();
        }
        else
        {
            mpls_interface_attributes = std::make_unique<Mpls::Global::MplsInterfaceAttributes>();
            mpls_interface_attributes->parent = this;
            children["mpls-interface-attributes"] = mpls_interface_attributes.get();
        }
        return children.at("mpls-interface-attributes");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::Global::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Global::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("mpls-interface-attributes") == children.end())
    {
        if(mpls_interface_attributes != nullptr)
        {
            children["mpls-interface-attributes"] = mpls_interface_attributes.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::Global::set_value(const std::string & value_path, std::string value)
{
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::Config()
    :
    	cost{YType::uint32, "cost"},
	 flooding_type{YType::enumeration, "flooding-type"},
	 name{YType::str, "name"},
	 value_{YType::uint32, "value"}
{
    yang_name = "config"; yang_parent_name = "srlg";
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::~Config()
{
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::has_data() const
{
    return cost.is_set
	|| flooding_type.is_set
	|| name.is_set
	|| value_.is_set;
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(flooding_type.operation)
	|| is_set(name.operation)
	|| is_set(value_.operation);
}

std::string Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::get_entity_path(Entity* ancestor) const
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

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (flooding_type.is_set || is_set(flooding_type.operation)) leaf_name_data.push_back(flooding_type.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::get_children()
{
    return children;
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "flooding-type")
    {
        flooding_type = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::State::State()
    :
    	cost{YType::uint32, "cost"},
	 flooding_type{YType::enumeration, "flooding-type"},
	 name{YType::str, "name"},
	 value_{YType::uint32, "value"}
{
    yang_name = "state"; yang_parent_name = "srlg";
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::State::~State()
{
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::State::has_data() const
{
    return cost.is_set
	|| flooding_type.is_set
	|| name.is_set
	|| value_.is_set;
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::State::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(flooding_type.operation)
	|| is_set(name.operation)
	|| is_set(value_.operation);
}

std::string Mpls::TeGlobalAttributes::Srlg::Srlg_::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::Srlg::Srlg_::State::get_entity_path(Entity* ancestor) const
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

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (flooding_type.is_set || is_set(flooding_type.operation)) leaf_name_data.push_back(flooding_type.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeGlobalAttributes::Srlg::Srlg_::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::Srlg::Srlg_::State::get_children()
{
    return children;
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "flooding-type")
    {
        flooding_type = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::Config()
    :
    	from_address{YType::str, "from-address"},
	 to_address{YType::str, "to-address"}
{
    yang_name = "config"; yang_parent_name = "members-list";
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::~Config()
{
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::has_data() const
{
    return from_address.is_set
	|| to_address.is_set;
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(from_address.operation)
	|| is_set(to_address.operation);
}

std::string Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::get_entity_path(Entity* ancestor) const
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

    if (from_address.is_set || is_set(from_address.operation)) leaf_name_data.push_back(from_address.get_name_leafdata());
    if (to_address.is_set || is_set(to_address.operation)) leaf_name_data.push_back(to_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::get_children()
{
    return children;
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "from-address")
    {
        from_address = value;
    }
    if(value_path == "to-address")
    {
        to_address = value;
    }
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::State()
    :
    	from_address{YType::str, "from-address"},
	 to_address{YType::str, "to-address"}
{
    yang_name = "state"; yang_parent_name = "members-list";
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::~State()
{
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::has_data() const
{
    return from_address.is_set
	|| to_address.is_set;
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::has_operation() const
{
    return is_set(operation)
	|| is_set(from_address.operation)
	|| is_set(to_address.operation);
}

std::string Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::get_entity_path(Entity* ancestor) const
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

    if (from_address.is_set || is_set(from_address.operation)) leaf_name_data.push_back(from_address.get_name_leafdata());
    if (to_address.is_set || is_set(to_address.operation)) leaf_name_data.push_back(to_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::get_children()
{
    return children;
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "from-address")
    {
        from_address = value;
    }
    if(value_path == "to-address")
    {
        to_address = value;
    }
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::MembersList()
    :
    	from_address{YType::str, "from-address"}
    	,
    config(std::make_unique<Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config>())
	,state(std::make_unique<Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "members-list"; yang_parent_name = "static-srlg-members";
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::~MembersList()
{
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::has_data() const
{
    return from_address.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::has_operation() const
{
    return is_set(operation)
	|| is_set(from_address.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members-list" <<"[from-address='" <<from_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::get_entity_path(Entity* ancestor) const
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

    if (from_address.is_set || is_set(from_address.operation)) leaf_name_data.push_back(from_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "from-address")
    {
        from_address = value;
    }
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::StaticSrlgMembers()
{
    yang_name = "static-srlg-members"; yang_parent_name = "srlg";
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::~StaticSrlgMembers()
{
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::has_data() const
{
    for (std::size_t index=0; index<members_list.size(); index++)
    {
        if(members_list[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::has_operation() const
{
    for (std::size_t index=0; index<members_list.size(); index++)
    {
        if(members_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-srlg-members";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::get_entity_path(Entity* ancestor) const
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

Entity* Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "members-list")
    {
        for(auto const & c : members_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList>();
        c->parent = this;
        members_list.push_back(std::move(c));
        children[segment_path] = members_list.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::get_children()
{
    for (auto const & c : members_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::set_value(const std::string & value_path, std::string value)
{
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::Srlg_()
    :
    	name{YType::str, "name"}
    	,
    config(std::make_unique<Mpls::TeGlobalAttributes::Srlg::Srlg_::Config>())
	,state(std::make_unique<Mpls::TeGlobalAttributes::Srlg::Srlg_::State>())
	,static_srlg_members(std::make_unique<Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    static_srlg_members->parent = this;
    children["static-srlg-members"] = static_srlg_members.get();

    yang_name = "srlg"; yang_parent_name = "srlg";
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::~Srlg_()
{
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (static_srlg_members !=  nullptr && static_srlg_members->has_data());
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation))
	|| (static_srlg_members !=  nullptr && is_set(static_srlg_members->operation));
}

std::string Mpls::TeGlobalAttributes::Srlg::Srlg_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::Srlg::Srlg_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/te-global-attributes/srlg/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeGlobalAttributes::Srlg::Srlg_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::TeGlobalAttributes::Srlg::Srlg_::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::TeGlobalAttributes::Srlg::Srlg_::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    if(child_yang_name == "static-srlg-members")
    {
        if(static_srlg_members != nullptr)
        {
            children["static-srlg-members"] = static_srlg_members.get();
        }
        else
        {
            static_srlg_members = std::make_unique<Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers>();
            static_srlg_members->parent = this;
            children["static-srlg-members"] = static_srlg_members.get();
        }
        return children.at("static-srlg-members");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::Srlg::Srlg_::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    if(children.find("static-srlg-members") == children.end())
    {
        if(static_srlg_members != nullptr)
        {
            children["static-srlg-members"] = static_srlg_members.get();
        }
    }

    return children;
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Mpls::TeGlobalAttributes::Srlg::Srlg()
{
    yang_name = "srlg"; yang_parent_name = "te-global-attributes";
}

Mpls::TeGlobalAttributes::Srlg::~Srlg()
{
}

bool Mpls::TeGlobalAttributes::Srlg::has_data() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::TeGlobalAttributes::Srlg::has_operation() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mpls::TeGlobalAttributes::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::Srlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/te-global-attributes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeGlobalAttributes::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "srlg")
    {
        for(auto const & c : srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mpls::TeGlobalAttributes::Srlg::Srlg_>();
        c->parent = this;
        srlg.push_back(std::move(c));
        children[segment_path] = srlg.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::Srlg::get_children()
{
    for (auto const & c : srlg)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Mpls::TeGlobalAttributes::Srlg::set_value(const std::string & value_path, std::string value)
{
}

Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::Config()
    :
    	delta_percentage{YType::uint8, "delta-percentage"},
	 down_thresholds{YType::uint8, "down-thresholds"},
	 threshold_specification{YType::enumeration, "threshold-specification"},
	 threshold_type{YType::enumeration, "threshold-type"},
	 up_down_thresholds{YType::uint8, "up-down-thresholds"},
	 up_thresholds{YType::uint8, "up-thresholds"}
{
    yang_name = "config"; yang_parent_name = "igp-flooding-bandwidth";
}

Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::~Config()
{
}

bool Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::has_data() const
{
    for (auto const & leaf : down_thresholds.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_thresholds.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return delta_percentage.is_set
	|| threshold_specification.is_set
	|| threshold_type.is_set;
}

bool Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::has_operation() const
{
    for (auto const & leaf : down_thresholds.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : up_thresholds.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(delta_percentage.operation)
	|| is_set(threshold_specification.operation)
	|| is_set(threshold_type.operation);
}

std::string Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/te-global-attributes/igp-flooding-bandwidth/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delta_percentage.is_set || is_set(delta_percentage.operation)) leaf_name_data.push_back(delta_percentage.get_name_leafdata());
    if (threshold_specification.is_set || is_set(threshold_specification.operation)) leaf_name_data.push_back(threshold_specification.get_name_leafdata());
    if (threshold_type.is_set || is_set(threshold_type.operation)) leaf_name_data.push_back(threshold_type.get_name_leafdata());

    auto down_thresholds_name_datas = down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_thresholds_name_datas.begin(), down_thresholds_name_datas.end());
    auto up_down_thresholds_name_datas = up_down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_down_thresholds_name_datas.begin(), up_down_thresholds_name_datas.end());
    auto up_thresholds_name_datas = up_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_thresholds_name_datas.begin(), up_thresholds_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::get_children()
{
    return children;
}

void Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delta-percentage")
    {
        delta_percentage = value;
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.append(value);
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification = value;
    }
    if(value_path == "threshold-type")
    {
        threshold_type = value;
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.append(value);
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.append(value);
    }
}

Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::State()
    :
    	delta_percentage{YType::uint8, "delta-percentage"},
	 down_thresholds{YType::uint8, "down-thresholds"},
	 threshold_specification{YType::enumeration, "threshold-specification"},
	 threshold_type{YType::enumeration, "threshold-type"},
	 up_down_thresholds{YType::uint8, "up-down-thresholds"},
	 up_thresholds{YType::uint8, "up-thresholds"}
{
    yang_name = "state"; yang_parent_name = "igp-flooding-bandwidth";
}

Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::~State()
{
}

bool Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::has_data() const
{
    for (auto const & leaf : down_thresholds.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_thresholds.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return delta_percentage.is_set
	|| threshold_specification.is_set
	|| threshold_type.is_set;
}

bool Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::has_operation() const
{
    for (auto const & leaf : down_thresholds.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : up_thresholds.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(delta_percentage.operation)
	|| is_set(threshold_specification.operation)
	|| is_set(threshold_type.operation);
}

std::string Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/te-global-attributes/igp-flooding-bandwidth/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delta_percentage.is_set || is_set(delta_percentage.operation)) leaf_name_data.push_back(delta_percentage.get_name_leafdata());
    if (threshold_specification.is_set || is_set(threshold_specification.operation)) leaf_name_data.push_back(threshold_specification.get_name_leafdata());
    if (threshold_type.is_set || is_set(threshold_type.operation)) leaf_name_data.push_back(threshold_type.get_name_leafdata());

    auto down_thresholds_name_datas = down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_thresholds_name_datas.begin(), down_thresholds_name_datas.end());
    auto up_down_thresholds_name_datas = up_down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_down_thresholds_name_datas.begin(), up_down_thresholds_name_datas.end());
    auto up_thresholds_name_datas = up_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_thresholds_name_datas.begin(), up_thresholds_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::get_children()
{
    return children;
}

void Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delta-percentage")
    {
        delta_percentage = value;
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.append(value);
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification = value;
    }
    if(value_path == "threshold-type")
    {
        threshold_type = value;
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.append(value);
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.append(value);
    }
}

Mpls::TeGlobalAttributes::IgpFloodingBandwidth::IgpFloodingBandwidth()
    :
    config(std::make_unique<Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config>())
	,state(std::make_unique<Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "igp-flooding-bandwidth"; yang_parent_name = "te-global-attributes";
}

Mpls::TeGlobalAttributes::IgpFloodingBandwidth::~IgpFloodingBandwidth()
{
}

bool Mpls::TeGlobalAttributes::IgpFloodingBandwidth::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::TeGlobalAttributes::IgpFloodingBandwidth::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::TeGlobalAttributes::IgpFloodingBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-flooding-bandwidth";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::IgpFloodingBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/te-global-attributes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeGlobalAttributes::IgpFloodingBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::IgpFloodingBandwidth::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::TeGlobalAttributes::IgpFloodingBandwidth::set_value(const std::string & value_path, std::string value)
{
}

Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::Config()
    :
    	admin_group_name{YType::str, "admin-group-name"},
	 bit_position{YType::uint32, "bit-position"}
{
    yang_name = "config"; yang_parent_name = "admin-group";
}

Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::~Config()
{
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::has_data() const
{
    return admin_group_name.is_set
	|| bit_position.is_set;
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_group_name.operation)
	|| is_set(bit_position.operation);
}

std::string Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::get_entity_path(Entity* ancestor) const
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

    if (admin_group_name.is_set || is_set(admin_group_name.operation)) leaf_name_data.push_back(admin_group_name.get_name_leafdata());
    if (bit_position.is_set || is_set(bit_position.operation)) leaf_name_data.push_back(bit_position.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::get_children()
{
    return children;
}

void Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-group-name")
    {
        admin_group_name = value;
    }
    if(value_path == "bit-position")
    {
        bit_position = value;
    }
}

Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::State()
    :
    	admin_group_name{YType::str, "admin-group-name"},
	 bit_position{YType::uint32, "bit-position"}
{
    yang_name = "state"; yang_parent_name = "admin-group";
}

Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::~State()
{
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::has_data() const
{
    return admin_group_name.is_set
	|| bit_position.is_set;
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_group_name.operation)
	|| is_set(bit_position.operation);
}

std::string Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::get_entity_path(Entity* ancestor) const
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

    if (admin_group_name.is_set || is_set(admin_group_name.operation)) leaf_name_data.push_back(admin_group_name.get_name_leafdata());
    if (bit_position.is_set || is_set(bit_position.operation)) leaf_name_data.push_back(bit_position.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::get_children()
{
    return children;
}

void Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-group-name")
    {
        admin_group_name = value;
    }
    if(value_path == "bit-position")
    {
        bit_position = value;
    }
}

Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::AdminGroup()
    :
    	admin_group_name{YType::str, "admin-group-name"}
    	,
    config(std::make_unique<Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config>())
	,state(std::make_unique<Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "admin-group"; yang_parent_name = "mpls-admin-groups";
}

Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::~AdminGroup()
{
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::has_data() const
{
    return admin_group_name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_group_name.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-group" <<"[admin-group-name='" <<admin_group_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/te-global-attributes/mpls-admin-groups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_group_name.is_set || is_set(admin_group_name.operation)) leaf_name_data.push_back(admin_group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-group-name")
    {
        admin_group_name = value;
    }
}

Mpls::TeGlobalAttributes::MplsAdminGroups::MplsAdminGroups()
{
    yang_name = "mpls-admin-groups"; yang_parent_name = "te-global-attributes";
}

Mpls::TeGlobalAttributes::MplsAdminGroups::~MplsAdminGroups()
{
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::has_data() const
{
    for (std::size_t index=0; index<admin_group.size(); index++)
    {
        if(admin_group[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::has_operation() const
{
    for (std::size_t index=0; index<admin_group.size(); index++)
    {
        if(admin_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mpls::TeGlobalAttributes::MplsAdminGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-admin-groups";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::MplsAdminGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/te-global-attributes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeGlobalAttributes::MplsAdminGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admin-group")
    {
        for(auto const & c : admin_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup>();
        c->parent = this;
        admin_group.push_back(std::move(c));
        children[segment_path] = admin_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::MplsAdminGroups::get_children()
{
    for (auto const & c : admin_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Mpls::TeGlobalAttributes::MplsAdminGroups::set_value(const std::string & value_path, std::string value)
{
}

Mpls::TeGlobalAttributes::TeLspTimers::Config::Config()
    :
    	cleanup_delay{YType::uint16, "cleanup-delay"},
	 install_delay{YType::uint16, "install-delay"},
	 reoptimize_timer{YType::uint16, "reoptimize-timer"}
{
    yang_name = "config"; yang_parent_name = "te-lsp-timers";
}

Mpls::TeGlobalAttributes::TeLspTimers::Config::~Config()
{
}

bool Mpls::TeGlobalAttributes::TeLspTimers::Config::has_data() const
{
    return cleanup_delay.is_set
	|| install_delay.is_set
	|| reoptimize_timer.is_set;
}

bool Mpls::TeGlobalAttributes::TeLspTimers::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(cleanup_delay.operation)
	|| is_set(install_delay.operation)
	|| is_set(reoptimize_timer.operation);
}

std::string Mpls::TeGlobalAttributes::TeLspTimers::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::TeLspTimers::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/te-global-attributes/te-lsp-timers/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cleanup_delay.is_set || is_set(cleanup_delay.operation)) leaf_name_data.push_back(cleanup_delay.get_name_leafdata());
    if (install_delay.is_set || is_set(install_delay.operation)) leaf_name_data.push_back(install_delay.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.operation)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeGlobalAttributes::TeLspTimers::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::TeLspTimers::Config::get_children()
{
    return children;
}

void Mpls::TeGlobalAttributes::TeLspTimers::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cleanup-delay")
    {
        cleanup_delay = value;
    }
    if(value_path == "install-delay")
    {
        install_delay = value;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer = value;
    }
}

Mpls::TeGlobalAttributes::TeLspTimers::State::State()
    :
    	cleanup_delay{YType::uint16, "cleanup-delay"},
	 install_delay{YType::uint16, "install-delay"},
	 reoptimize_timer{YType::uint16, "reoptimize-timer"}
{
    yang_name = "state"; yang_parent_name = "te-lsp-timers";
}

Mpls::TeGlobalAttributes::TeLspTimers::State::~State()
{
}

bool Mpls::TeGlobalAttributes::TeLspTimers::State::has_data() const
{
    return cleanup_delay.is_set
	|| install_delay.is_set
	|| reoptimize_timer.is_set;
}

bool Mpls::TeGlobalAttributes::TeLspTimers::State::has_operation() const
{
    return is_set(operation)
	|| is_set(cleanup_delay.operation)
	|| is_set(install_delay.operation)
	|| is_set(reoptimize_timer.operation);
}

std::string Mpls::TeGlobalAttributes::TeLspTimers::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::TeLspTimers::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/te-global-attributes/te-lsp-timers/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cleanup_delay.is_set || is_set(cleanup_delay.operation)) leaf_name_data.push_back(cleanup_delay.get_name_leafdata());
    if (install_delay.is_set || is_set(install_delay.operation)) leaf_name_data.push_back(install_delay.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.operation)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeGlobalAttributes::TeLspTimers::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::TeLspTimers::State::get_children()
{
    return children;
}

void Mpls::TeGlobalAttributes::TeLspTimers::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cleanup-delay")
    {
        cleanup_delay = value;
    }
    if(value_path == "install-delay")
    {
        install_delay = value;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer = value;
    }
}

Mpls::TeGlobalAttributes::TeLspTimers::TeLspTimers()
    :
    config(std::make_unique<Mpls::TeGlobalAttributes::TeLspTimers::Config>())
	,state(std::make_unique<Mpls::TeGlobalAttributes::TeLspTimers::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "te-lsp-timers"; yang_parent_name = "te-global-attributes";
}

Mpls::TeGlobalAttributes::TeLspTimers::~TeLspTimers()
{
}

bool Mpls::TeGlobalAttributes::TeLspTimers::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::TeGlobalAttributes::TeLspTimers::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::TeGlobalAttributes::TeLspTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-lsp-timers";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::TeLspTimers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/te-global-attributes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeGlobalAttributes::TeLspTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::TeGlobalAttributes::TeLspTimers::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::TeGlobalAttributes::TeLspTimers::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::TeLspTimers::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::TeGlobalAttributes::TeLspTimers::set_value(const std::string & value_path, std::string value)
{
}

Mpls::TeGlobalAttributes::TeGlobalAttributes()
    :
    igp_flooding_bandwidth(std::make_unique<Mpls::TeGlobalAttributes::IgpFloodingBandwidth>())
	,mpls_admin_groups(std::make_unique<Mpls::TeGlobalAttributes::MplsAdminGroups>())
	,srlg(std::make_unique<Mpls::TeGlobalAttributes::Srlg>())
	,te_lsp_timers(std::make_unique<Mpls::TeGlobalAttributes::TeLspTimers>())
{
    igp_flooding_bandwidth->parent = this;
    children["igp-flooding-bandwidth"] = igp_flooding_bandwidth.get();

    mpls_admin_groups->parent = this;
    children["mpls-admin-groups"] = mpls_admin_groups.get();

    srlg->parent = this;
    children["srlg"] = srlg.get();

    te_lsp_timers->parent = this;
    children["te-lsp-timers"] = te_lsp_timers.get();

    yang_name = "te-global-attributes"; yang_parent_name = "mpls";
}

Mpls::TeGlobalAttributes::~TeGlobalAttributes()
{
}

bool Mpls::TeGlobalAttributes::has_data() const
{
    return (igp_flooding_bandwidth !=  nullptr && igp_flooding_bandwidth->has_data())
	|| (mpls_admin_groups !=  nullptr && mpls_admin_groups->has_data())
	|| (srlg !=  nullptr && srlg->has_data())
	|| (te_lsp_timers !=  nullptr && te_lsp_timers->has_data());
}

bool Mpls::TeGlobalAttributes::has_operation() const
{
    return is_set(operation)
	|| (igp_flooding_bandwidth !=  nullptr && is_set(igp_flooding_bandwidth->operation))
	|| (mpls_admin_groups !=  nullptr && is_set(mpls_admin_groups->operation))
	|| (srlg !=  nullptr && is_set(srlg->operation))
	|| (te_lsp_timers !=  nullptr && is_set(te_lsp_timers->operation));
}

std::string Mpls::TeGlobalAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-global-attributes";

    return path_buffer.str();

}

EntityPath Mpls::TeGlobalAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeGlobalAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "igp-flooding-bandwidth")
    {
        if(igp_flooding_bandwidth != nullptr)
        {
            children["igp-flooding-bandwidth"] = igp_flooding_bandwidth.get();
        }
        else
        {
            igp_flooding_bandwidth = std::make_unique<Mpls::TeGlobalAttributes::IgpFloodingBandwidth>();
            igp_flooding_bandwidth->parent = this;
            children["igp-flooding-bandwidth"] = igp_flooding_bandwidth.get();
        }
        return children.at("igp-flooding-bandwidth");
    }

    if(child_yang_name == "mpls-admin-groups")
    {
        if(mpls_admin_groups != nullptr)
        {
            children["mpls-admin-groups"] = mpls_admin_groups.get();
        }
        else
        {
            mpls_admin_groups = std::make_unique<Mpls::TeGlobalAttributes::MplsAdminGroups>();
            mpls_admin_groups->parent = this;
            children["mpls-admin-groups"] = mpls_admin_groups.get();
        }
        return children.at("mpls-admin-groups");
    }

    if(child_yang_name == "srlg")
    {
        if(srlg != nullptr)
        {
            children["srlg"] = srlg.get();
        }
        else
        {
            srlg = std::make_unique<Mpls::TeGlobalAttributes::Srlg>();
            srlg->parent = this;
            children["srlg"] = srlg.get();
        }
        return children.at("srlg");
    }

    if(child_yang_name == "te-lsp-timers")
    {
        if(te_lsp_timers != nullptr)
        {
            children["te-lsp-timers"] = te_lsp_timers.get();
        }
        else
        {
            te_lsp_timers = std::make_unique<Mpls::TeGlobalAttributes::TeLspTimers>();
            te_lsp_timers->parent = this;
            children["te-lsp-timers"] = te_lsp_timers.get();
        }
        return children.at("te-lsp-timers");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::TeGlobalAttributes::get_children()
{
    if(children.find("igp-flooding-bandwidth") == children.end())
    {
        if(igp_flooding_bandwidth != nullptr)
        {
            children["igp-flooding-bandwidth"] = igp_flooding_bandwidth.get();
        }
    }

    if(children.find("mpls-admin-groups") == children.end())
    {
        if(mpls_admin_groups != nullptr)
        {
            children["mpls-admin-groups"] = mpls_admin_groups.get();
        }
    }

    if(children.find("srlg") == children.end())
    {
        if(srlg != nullptr)
        {
            children["srlg"] = srlg.get();
        }
    }

    if(children.find("te-lsp-timers") == children.end())
    {
        if(te_lsp_timers != nullptr)
        {
            children["te-lsp-timers"] = te_lsp_timers.get();
        }
    }

    return children;
}

void Mpls::TeGlobalAttributes::set_value(const std::string & value_path, std::string value)
{
}

Mpls::TeInterfaceAttributes::Interface::Config::Config()
    :
    	admin_group{YType::str, "admin-group"},
	 name{YType::str, "name"},
	 srlg_membership{YType::str, "srlg-membership"},
	 te_metric{YType::uint32, "te-metric"}
{
    yang_name = "config"; yang_parent_name = "interface";
}

Mpls::TeInterfaceAttributes::Interface::Config::~Config()
{
}

bool Mpls::TeInterfaceAttributes::Interface::Config::has_data() const
{
    for (auto const & leaf : admin_group.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : srlg_membership.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| te_metric.is_set;
}

bool Mpls::TeInterfaceAttributes::Interface::Config::has_operation() const
{
    for (auto const & leaf : admin_group.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : srlg_membership.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(te_metric.operation);
}

std::string Mpls::TeInterfaceAttributes::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::TeInterfaceAttributes::Interface::Config::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());

    auto admin_group_name_datas = admin_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), admin_group_name_datas.begin(), admin_group_name_datas.end());
    auto srlg_membership_name_datas = srlg_membership.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_membership_name_datas.begin(), srlg_membership_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeInterfaceAttributes::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::TeInterfaceAttributes::Interface::Config::get_children()
{
    return children;
}

void Mpls::TeInterfaceAttributes::Interface::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-group")
    {
        admin_group.append(value);
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "srlg-membership")
    {
        srlg_membership.append(value);
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
}

Mpls::TeInterfaceAttributes::Interface::State::State()
    :
    	admin_group{YType::str, "admin-group"},
	 name{YType::str, "name"},
	 srlg_membership{YType::str, "srlg-membership"},
	 te_metric{YType::uint32, "te-metric"}
{
    yang_name = "state"; yang_parent_name = "interface";
}

Mpls::TeInterfaceAttributes::Interface::State::~State()
{
}

bool Mpls::TeInterfaceAttributes::Interface::State::has_data() const
{
    for (auto const & leaf : admin_group.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : srlg_membership.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| te_metric.is_set;
}

bool Mpls::TeInterfaceAttributes::Interface::State::has_operation() const
{
    for (auto const & leaf : admin_group.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : srlg_membership.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(te_metric.operation);
}

std::string Mpls::TeInterfaceAttributes::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::TeInterfaceAttributes::Interface::State::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());

    auto admin_group_name_datas = admin_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), admin_group_name_datas.begin(), admin_group_name_datas.end());
    auto srlg_membership_name_datas = srlg_membership.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_membership_name_datas.begin(), srlg_membership_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeInterfaceAttributes::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::TeInterfaceAttributes::Interface::State::get_children()
{
    return children;
}

void Mpls::TeInterfaceAttributes::Interface::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-group")
    {
        admin_group.append(value);
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "srlg-membership")
    {
        srlg_membership.append(value);
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::Config()
    :
    	delta_percentage{YType::uint8, "delta-percentage"},
	 down_thresholds{YType::uint8, "down-thresholds"},
	 threshold_specification{YType::enumeration, "threshold-specification"},
	 threshold_type{YType::enumeration, "threshold-type"},
	 up_down_thresholds{YType::uint8, "up-down-thresholds"},
	 up_thresholds{YType::uint8, "up-thresholds"}
{
    yang_name = "config"; yang_parent_name = "igp-flooding-bandwidth";
}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::~Config()
{
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::has_data() const
{
    for (auto const & leaf : down_thresholds.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_thresholds.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return delta_percentage.is_set
	|| threshold_specification.is_set
	|| threshold_type.is_set;
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::has_operation() const
{
    for (auto const & leaf : down_thresholds.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : up_thresholds.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(delta_percentage.operation)
	|| is_set(threshold_specification.operation)
	|| is_set(threshold_type.operation);
}

std::string Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::get_entity_path(Entity* ancestor) const
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

    if (delta_percentage.is_set || is_set(delta_percentage.operation)) leaf_name_data.push_back(delta_percentage.get_name_leafdata());
    if (threshold_specification.is_set || is_set(threshold_specification.operation)) leaf_name_data.push_back(threshold_specification.get_name_leafdata());
    if (threshold_type.is_set || is_set(threshold_type.operation)) leaf_name_data.push_back(threshold_type.get_name_leafdata());

    auto down_thresholds_name_datas = down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_thresholds_name_datas.begin(), down_thresholds_name_datas.end());
    auto up_down_thresholds_name_datas = up_down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_down_thresholds_name_datas.begin(), up_down_thresholds_name_datas.end());
    auto up_thresholds_name_datas = up_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_thresholds_name_datas.begin(), up_thresholds_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::get_children()
{
    return children;
}

void Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delta-percentage")
    {
        delta_percentage = value;
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.append(value);
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification = value;
    }
    if(value_path == "threshold-type")
    {
        threshold_type = value;
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.append(value);
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.append(value);
    }
}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::State()
    :
    	delta_percentage{YType::uint8, "delta-percentage"},
	 down_thresholds{YType::uint8, "down-thresholds"},
	 threshold_specification{YType::enumeration, "threshold-specification"},
	 threshold_type{YType::enumeration, "threshold-type"},
	 up_down_thresholds{YType::uint8, "up-down-thresholds"},
	 up_thresholds{YType::uint8, "up-thresholds"}
{
    yang_name = "state"; yang_parent_name = "igp-flooding-bandwidth";
}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::~State()
{
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::has_data() const
{
    for (auto const & leaf : down_thresholds.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_thresholds.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return delta_percentage.is_set
	|| threshold_specification.is_set
	|| threshold_type.is_set;
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::has_operation() const
{
    for (auto const & leaf : down_thresholds.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : up_thresholds.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(delta_percentage.operation)
	|| is_set(threshold_specification.operation)
	|| is_set(threshold_type.operation);
}

std::string Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::get_entity_path(Entity* ancestor) const
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

    if (delta_percentage.is_set || is_set(delta_percentage.operation)) leaf_name_data.push_back(delta_percentage.get_name_leafdata());
    if (threshold_specification.is_set || is_set(threshold_specification.operation)) leaf_name_data.push_back(threshold_specification.get_name_leafdata());
    if (threshold_type.is_set || is_set(threshold_type.operation)) leaf_name_data.push_back(threshold_type.get_name_leafdata());

    auto down_thresholds_name_datas = down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_thresholds_name_datas.begin(), down_thresholds_name_datas.end());
    auto up_down_thresholds_name_datas = up_down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_down_thresholds_name_datas.begin(), up_down_thresholds_name_datas.end());
    auto up_thresholds_name_datas = up_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_thresholds_name_datas.begin(), up_thresholds_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::get_children()
{
    return children;
}

void Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delta-percentage")
    {
        delta_percentage = value;
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.append(value);
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification = value;
    }
    if(value_path == "threshold-type")
    {
        threshold_type = value;
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.append(value);
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.append(value);
    }
}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::IgpFloodingBandwidth()
    :
    config(std::make_unique<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config>())
	,state(std::make_unique<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "igp-flooding-bandwidth"; yang_parent_name = "interface";
}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::~IgpFloodingBandwidth()
{
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-flooding-bandwidth";

    return path_buffer.str();

}

EntityPath Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::get_entity_path(Entity* ancestor) const
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

Entity* Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::set_value(const std::string & value_path, std::string value)
{
}

Mpls::TeInterfaceAttributes::Interface::Interface()
    :
    	name{YType::str, "name"}
    	,
    config(std::make_unique<Mpls::TeInterfaceAttributes::Interface::Config>())
	,igp_flooding_bandwidth(std::make_unique<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth>())
	,state(std::make_unique<Mpls::TeInterfaceAttributes::Interface::State>())
{
    config->parent = this;
    children["config"] = config.get();

    igp_flooding_bandwidth->parent = this;
    children["igp-flooding-bandwidth"] = igp_flooding_bandwidth.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "interface"; yang_parent_name = "te-interface-attributes";
}

Mpls::TeInterfaceAttributes::Interface::~Interface()
{
}

bool Mpls::TeInterfaceAttributes::Interface::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (igp_flooding_bandwidth !=  nullptr && igp_flooding_bandwidth->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::TeInterfaceAttributes::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (igp_flooding_bandwidth !=  nullptr && is_set(igp_flooding_bandwidth->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::TeInterfaceAttributes::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::TeInterfaceAttributes::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/te-interface-attributes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeInterfaceAttributes::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::TeInterfaceAttributes::Interface::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "igp-flooding-bandwidth")
    {
        if(igp_flooding_bandwidth != nullptr)
        {
            children["igp-flooding-bandwidth"] = igp_flooding_bandwidth.get();
        }
        else
        {
            igp_flooding_bandwidth = std::make_unique<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth>();
            igp_flooding_bandwidth->parent = this;
            children["igp-flooding-bandwidth"] = igp_flooding_bandwidth.get();
        }
        return children.at("igp-flooding-bandwidth");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::TeInterfaceAttributes::Interface::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::TeInterfaceAttributes::Interface::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("igp-flooding-bandwidth") == children.end())
    {
        if(igp_flooding_bandwidth != nullptr)
        {
            children["igp-flooding-bandwidth"] = igp_flooding_bandwidth.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::TeInterfaceAttributes::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Mpls::TeInterfaceAttributes::TeInterfaceAttributes()
{
    yang_name = "te-interface-attributes"; yang_parent_name = "mpls";
}

Mpls::TeInterfaceAttributes::~TeInterfaceAttributes()
{
}

bool Mpls::TeInterfaceAttributes::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::TeInterfaceAttributes::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mpls::TeInterfaceAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-interface-attributes";

    return path_buffer.str();

}

EntityPath Mpls::TeInterfaceAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::TeInterfaceAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Mpls::TeInterfaceAttributes::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::TeInterfaceAttributes::get_children()
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

void Mpls::TeInterfaceAttributes::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Config::Config()
{
    yang_name = "config"; yang_parent_name = "sessions";
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Config::has_data() const
{
    return false;
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Config::has_operation() const
{
    return is_set(operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Sessions::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/sessions/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Sessions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Sessions::Config::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::Config::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::Session()
    :
    	destination_address{YType::str, "destination-address"},
	 destination_port{YType::uint16, "destination-port"},
	 source_address{YType::str, "source-address"},
	 source_port{YType::uint16, "source-port"},
	 associated_lsps{YType::str, "associated-lsps"},
	 label_in{YType::str, "label-in"},
	 label_out{YType::str, "label-out"},
	 status{YType::enumeration, "status"},
	 tunnel_id{YType::uint16, "tunnel-id"},
	 type{YType::enumeration, "type"}
{
    yang_name = "session"; yang_parent_name = "state";
}

Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::~Session()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::has_data() const
{
    for (auto const & leaf : associated_lsps.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return destination_address.is_set
	|| destination_port.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| label_in.is_set
	|| label_out.is_set
	|| status.is_set
	|| tunnel_id.is_set
	|| type.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::has_operation() const
{
    for (auto const & leaf : associated_lsps.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation)
	|| is_set(label_in.operation)
	|| is_set(label_out.operation)
	|| is_set(status.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(type.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[destination-address='" <<destination_address.get() <<"']" <<"[destination-port='" <<destination_port.get() <<"']" <<"[source-address='" <<source_address.get() <<"']" <<"[source-port='" <<source_port.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/sessions/state/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (label_in.is_set || is_set(label_in.operation)) leaf_name_data.push_back(label_in.get_name_leafdata());
    if (label_out.is_set || is_set(label_out.operation)) leaf_name_data.push_back(label_out.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());

    auto associated_lsps_name_datas = associated_lsps.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), associated_lsps_name_datas.begin(), associated_lsps_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "associated-lsps")
    {
        associated_lsps.append(value);
    }
    if(value_path == "label-in")
    {
        label_in = value;
    }
    if(value_path == "label-out")
    {
        label_out = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::Sessions::State::State()
{
    yang_name = "state"; yang_parent_name = "sessions";
}

Mpls::SignalingProtocols::RsvpTe::Sessions::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::State::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::State::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Sessions::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/sessions/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Sessions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session>();
        c->parent = this;
        session.push_back(std::move(c));
        children[segment_path] = session.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Sessions::State::get_children()
{
    for (auto const & c : session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::State::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Sessions()
    :
    config(std::make_unique<Mpls::SignalingProtocols::RsvpTe::Sessions::Config>())
	,state(std::make_unique<Mpls::SignalingProtocols::RsvpTe::Sessions::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "sessions"; yang_parent_name = "rsvp-te";
}

Mpls::SignalingProtocols::RsvpTe::Sessions::~Sessions()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Sessions::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Sessions::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Sessions::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::Config()
{
    yang_name = "config"; yang_parent_name = "neighbors";
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::has_data() const
{
    return false;
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::has_operation() const
{
    return is_set(operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/neighbors/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::Neighbor()
    :
    	address{YType::str, "address"},
	 detected_interface{YType::str, "detected-interface"},
	 neighbor_status{YType::enumeration, "neighbor-status"},
	 refresh_reduction{YType::boolean, "refresh-reduction"}
{
    yang_name = "neighbor"; yang_parent_name = "state";
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::~Neighbor()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::has_data() const
{
    return address.is_set
	|| detected_interface.is_set
	|| neighbor_status.is_set
	|| refresh_reduction.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(detected_interface.operation)
	|| is_set(neighbor_status.operation)
	|| is_set(refresh_reduction.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[address='" <<address.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/neighbors/state/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (detected_interface.is_set || is_set(detected_interface.operation)) leaf_name_data.push_back(detected_interface.get_name_leafdata());
    if (neighbor_status.is_set || is_set(neighbor_status.operation)) leaf_name_data.push_back(neighbor_status.get_name_leafdata());
    if (refresh_reduction.is_set || is_set(refresh_reduction.operation)) leaf_name_data.push_back(refresh_reduction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "detected-interface")
    {
        detected_interface = value;
    }
    if(value_path == "neighbor-status")
    {
        neighbor_status = value;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::State::State()
{
    yang_name = "state"; yang_parent_name = "neighbors";
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::State::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::State::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::Neighbors::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Neighbors::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/neighbors/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Neighbors::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Neighbors::State::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Neighbors::State::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbors()
    :
    config(std::make_unique<Mpls::SignalingProtocols::RsvpTe::Neighbors::Config>())
	,state(std::make_unique<Mpls::SignalingProtocols::RsvpTe::Neighbors::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "neighbors"; yang_parent_name = "rsvp-te";
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::~Neighbors()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::SignalingProtocols::RsvpTe::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Neighbors::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Neighbors::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Neighbors::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::Config()
    :
    	enable{YType::boolean, "enable"},
	 recovery_time{YType::uint32, "recovery-time"},
	 restart_time{YType::uint32, "restart-time"}
{
    yang_name = "config"; yang_parent_name = "graceful-restart";
}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::has_data() const
{
    return enable.is_set
	|| recovery_time.is_set
	|| restart_time.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(recovery_time.operation)
	|| is_set(restart_time.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/graceful-restart/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.operation)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::State()
    :
    	enable{YType::boolean, "enable"},
	 recovery_time{YType::uint32, "recovery-time"},
	 restart_time{YType::uint32, "restart-time"}
{
    yang_name = "state"; yang_parent_name = "graceful-restart";
}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::has_data() const
{
    return enable.is_set
	|| recovery_time.is_set
	|| restart_time.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(recovery_time.operation)
	|| is_set(restart_time.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/graceful-restart/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.operation)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::GracefulRestart()
    :
    config(std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config>())
	,state(std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "graceful-restart"; yang_parent_name = "global";
}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::~GracefulRestart()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::Config()
    :
    	enable{YType::boolean, "enable"},
	 soft_preemption_timeout{YType::uint16, "soft-preemption-timeout"}
{
    yang_name = "config"; yang_parent_name = "soft-preemption";
}

Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::has_data() const
{
    return enable.is_set
	|| soft_preemption_timeout.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(soft_preemption_timeout.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/soft-preemption/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (soft_preemption_timeout.is_set || is_set(soft_preemption_timeout.operation)) leaf_name_data.push_back(soft_preemption_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::State()
    :
    	enable{YType::boolean, "enable"},
	 soft_preemption_timeout{YType::uint16, "soft-preemption-timeout"}
{
    yang_name = "state"; yang_parent_name = "soft-preemption";
}

Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::has_data() const
{
    return enable.is_set
	|| soft_preemption_timeout.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(soft_preemption_timeout.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/soft-preemption/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (soft_preemption_timeout.is_set || is_set(soft_preemption_timeout.operation)) leaf_name_data.push_back(soft_preemption_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::SoftPreemption()
    :
    config(std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config>())
	,state(std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "soft-preemption"; yang_parent_name = "global";
}

Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::~SoftPreemption()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::Config()
    :
    	hello_interval{YType::uint16, "hello-interval"},
	 refresh_reduction{YType::boolean, "refresh-reduction"}
{
    yang_name = "config"; yang_parent_name = "hellos";
}

Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::has_data() const
{
    return hello_interval.is_set
	|| refresh_reduction.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_interval.operation)
	|| is_set(refresh_reduction.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/hellos/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (refresh_reduction.is_set || is_set(refresh_reduction.operation)) leaf_name_data.push_back(refresh_reduction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::State()
    :
    	hello_interval{YType::uint16, "hello-interval"},
	 refresh_reduction{YType::boolean, "refresh-reduction"}
{
    yang_name = "state"; yang_parent_name = "hellos";
}

Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::has_data() const
{
    return hello_interval.is_set
	|| refresh_reduction.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_interval.operation)
	|| is_set(refresh_reduction.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/hellos/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (refresh_reduction.is_set || is_set(refresh_reduction.operation)) leaf_name_data.push_back(refresh_reduction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Hellos()
    :
    config(std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config>())
	,state(std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "hellos"; yang_parent_name = "global";
}

Mpls::SignalingProtocols::RsvpTe::Global::Hellos::~Hellos()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::Hellos::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Global::Hellos::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::Hellos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hellos";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Global::Hellos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Global::Hellos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Global::Hellos::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::Hellos::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::Counters()
    :
    	in_ack_messages{YType::uint64, "in-ack-messages"},
	 in_hello_messages{YType::uint64, "in-hello-messages"},
	 in_path_error_messages{YType::uint64, "in-path-error-messages"},
	 in_path_messages{YType::uint64, "in-path-messages"},
	 in_path_tear_messages{YType::uint64, "in-path-tear-messages"},
	 in_reservation_error_messages{YType::uint64, "in-reservation-error-messages"},
	 in_reservation_messages{YType::uint64, "in-reservation-messages"},
	 in_reservation_tear_messages{YType::uint64, "in-reservation-tear-messages"},
	 in_srefresh_messages{YType::uint64, "in-srefresh-messages"},
	 out_ack_messages{YType::uint64, "out-ack-messages"},
	 out_hello_messages{YType::uint64, "out-hello-messages"},
	 out_path_error_messages{YType::uint64, "out-path-error-messages"},
	 out_path_messages{YType::uint64, "out-path-messages"},
	 out_path_tear_messages{YType::uint64, "out-path-tear-messages"},
	 out_reservation_error_messages{YType::uint64, "out-reservation-error-messages"},
	 out_reservation_messages{YType::uint64, "out-reservation-messages"},
	 out_reservation_tear_messages{YType::uint64, "out-reservation-tear-messages"},
	 out_srefresh_messages{YType::uint64, "out-srefresh-messages"},
	 path_timeouts{YType::uint64, "path-timeouts"},
	 rate_limited_messages{YType::uint64, "rate-limited-messages"},
	 reservation_timeouts{YType::uint64, "reservation-timeouts"}
{
    yang_name = "counters"; yang_parent_name = "state";
}

Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::~Counters()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::has_data() const
{
    return in_ack_messages.is_set
	|| in_hello_messages.is_set
	|| in_path_error_messages.is_set
	|| in_path_messages.is_set
	|| in_path_tear_messages.is_set
	|| in_reservation_error_messages.is_set
	|| in_reservation_messages.is_set
	|| in_reservation_tear_messages.is_set
	|| in_srefresh_messages.is_set
	|| out_ack_messages.is_set
	|| out_hello_messages.is_set
	|| out_path_error_messages.is_set
	|| out_path_messages.is_set
	|| out_path_tear_messages.is_set
	|| out_reservation_error_messages.is_set
	|| out_reservation_messages.is_set
	|| out_reservation_tear_messages.is_set
	|| out_srefresh_messages.is_set
	|| path_timeouts.is_set
	|| rate_limited_messages.is_set
	|| reservation_timeouts.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(in_ack_messages.operation)
	|| is_set(in_hello_messages.operation)
	|| is_set(in_path_error_messages.operation)
	|| is_set(in_path_messages.operation)
	|| is_set(in_path_tear_messages.operation)
	|| is_set(in_reservation_error_messages.operation)
	|| is_set(in_reservation_messages.operation)
	|| is_set(in_reservation_tear_messages.operation)
	|| is_set(in_srefresh_messages.operation)
	|| is_set(out_ack_messages.operation)
	|| is_set(out_hello_messages.operation)
	|| is_set(out_path_error_messages.operation)
	|| is_set(out_path_messages.operation)
	|| is_set(out_path_tear_messages.operation)
	|| is_set(out_reservation_error_messages.operation)
	|| is_set(out_reservation_messages.operation)
	|| is_set(out_reservation_tear_messages.operation)
	|| is_set(out_srefresh_messages.operation)
	|| is_set(path_timeouts.operation)
	|| is_set(rate_limited_messages.operation)
	|| is_set(reservation_timeouts.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/state/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_ack_messages.is_set || is_set(in_ack_messages.operation)) leaf_name_data.push_back(in_ack_messages.get_name_leafdata());
    if (in_hello_messages.is_set || is_set(in_hello_messages.operation)) leaf_name_data.push_back(in_hello_messages.get_name_leafdata());
    if (in_path_error_messages.is_set || is_set(in_path_error_messages.operation)) leaf_name_data.push_back(in_path_error_messages.get_name_leafdata());
    if (in_path_messages.is_set || is_set(in_path_messages.operation)) leaf_name_data.push_back(in_path_messages.get_name_leafdata());
    if (in_path_tear_messages.is_set || is_set(in_path_tear_messages.operation)) leaf_name_data.push_back(in_path_tear_messages.get_name_leafdata());
    if (in_reservation_error_messages.is_set || is_set(in_reservation_error_messages.operation)) leaf_name_data.push_back(in_reservation_error_messages.get_name_leafdata());
    if (in_reservation_messages.is_set || is_set(in_reservation_messages.operation)) leaf_name_data.push_back(in_reservation_messages.get_name_leafdata());
    if (in_reservation_tear_messages.is_set || is_set(in_reservation_tear_messages.operation)) leaf_name_data.push_back(in_reservation_tear_messages.get_name_leafdata());
    if (in_srefresh_messages.is_set || is_set(in_srefresh_messages.operation)) leaf_name_data.push_back(in_srefresh_messages.get_name_leafdata());
    if (out_ack_messages.is_set || is_set(out_ack_messages.operation)) leaf_name_data.push_back(out_ack_messages.get_name_leafdata());
    if (out_hello_messages.is_set || is_set(out_hello_messages.operation)) leaf_name_data.push_back(out_hello_messages.get_name_leafdata());
    if (out_path_error_messages.is_set || is_set(out_path_error_messages.operation)) leaf_name_data.push_back(out_path_error_messages.get_name_leafdata());
    if (out_path_messages.is_set || is_set(out_path_messages.operation)) leaf_name_data.push_back(out_path_messages.get_name_leafdata());
    if (out_path_tear_messages.is_set || is_set(out_path_tear_messages.operation)) leaf_name_data.push_back(out_path_tear_messages.get_name_leafdata());
    if (out_reservation_error_messages.is_set || is_set(out_reservation_error_messages.operation)) leaf_name_data.push_back(out_reservation_error_messages.get_name_leafdata());
    if (out_reservation_messages.is_set || is_set(out_reservation_messages.operation)) leaf_name_data.push_back(out_reservation_messages.get_name_leafdata());
    if (out_reservation_tear_messages.is_set || is_set(out_reservation_tear_messages.operation)) leaf_name_data.push_back(out_reservation_tear_messages.get_name_leafdata());
    if (out_srefresh_messages.is_set || is_set(out_srefresh_messages.operation)) leaf_name_data.push_back(out_srefresh_messages.get_name_leafdata());
    if (path_timeouts.is_set || is_set(path_timeouts.operation)) leaf_name_data.push_back(path_timeouts.get_name_leafdata());
    if (rate_limited_messages.is_set || is_set(rate_limited_messages.operation)) leaf_name_data.push_back(rate_limited_messages.get_name_leafdata());
    if (reservation_timeouts.is_set || is_set(reservation_timeouts.operation)) leaf_name_data.push_back(reservation_timeouts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-ack-messages")
    {
        in_ack_messages = value;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages = value;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages = value;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages = value;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages = value;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages = value;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages = value;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages = value;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages = value;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages = value;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages = value;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages = value;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages = value;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages = value;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages = value;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages = value;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages = value;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages = value;
    }
    if(value_path == "path-timeouts")
    {
        path_timeouts = value;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages = value;
    }
    if(value_path == "reservation-timeouts")
    {
        reservation_timeouts = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::Global::State::State()
    :
    counters(std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::State::Counters>())
{
    counters->parent = this;
    children["counters"] = counters.get();

    yang_name = "state"; yang_parent_name = "global";
}

Mpls::SignalingProtocols::RsvpTe::Global::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::State::has_data() const
{
    return (counters !=  nullptr && counters->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Global::State::has_operation() const
{
    return is_set(operation)
	|| (counters !=  nullptr && is_set(counters->operation));
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Global::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Global::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "counters")
    {
        if(counters != nullptr)
        {
            children["counters"] = counters.get();
        }
        else
        {
            counters = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::State::Counters>();
            counters->parent = this;
            children["counters"] = counters.get();
        }
        return children.at("counters");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Global::State::get_children()
{
    if(children.find("counters") == children.end())
    {
        if(counters != nullptr)
        {
            children["counters"] = counters.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::State::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::RsvpTe::Global::Global()
    :
    graceful_restart(std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart>())
	,hellos(std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::Hellos>())
	,soft_preemption(std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption>())
	,state(std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::State>())
{
    graceful_restart->parent = this;
    children["graceful-restart"] = graceful_restart.get();

    hellos->parent = this;
    children["hellos"] = hellos.get();

    soft_preemption->parent = this;
    children["soft-preemption"] = soft_preemption.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "global"; yang_parent_name = "rsvp-te";
}

Mpls::SignalingProtocols::RsvpTe::Global::~Global()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::has_data() const
{
    return (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (hellos !=  nullptr && hellos->has_data())
	|| (soft_preemption !=  nullptr && soft_preemption->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Global::has_operation() const
{
    return is_set(operation)
	|| (graceful_restart !=  nullptr && is_set(graceful_restart->operation))
	|| (hellos !=  nullptr && is_set(hellos->operation))
	|| (soft_preemption !=  nullptr && is_set(soft_preemption->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart.get();
        }
        else
        {
            graceful_restart = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart>();
            graceful_restart->parent = this;
            children["graceful-restart"] = graceful_restart.get();
        }
        return children.at("graceful-restart");
    }

    if(child_yang_name == "hellos")
    {
        if(hellos != nullptr)
        {
            children["hellos"] = hellos.get();
        }
        else
        {
            hellos = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::Hellos>();
            hellos->parent = this;
            children["hellos"] = hellos.get();
        }
        return children.at("hellos");
    }

    if(child_yang_name == "soft-preemption")
    {
        if(soft_preemption != nullptr)
        {
            children["soft-preemption"] = soft_preemption.get();
        }
        else
        {
            soft_preemption = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption>();
            soft_preemption->parent = this;
            children["soft-preemption"] = soft_preemption.get();
        }
        return children.at("soft-preemption");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::Global::get_children()
{
    if(children.find("graceful-restart") == children.end())
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart.get();
        }
    }

    if(children.find("hellos") == children.end())
    {
        if(hellos != nullptr)
        {
            children["hellos"] = hellos.get();
        }
    }

    if(children.find("soft-preemption") == children.end())
    {
        if(soft_preemption != nullptr)
        {
            children["soft-preemption"] = soft_preemption.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::Config()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "config"; yang_parent_name = "interface";
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::has_data() const
{
    return interface_name.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::get_entity_path(Entity* ancestor) const
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

Entity* Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::Bandwidth()
    :
    	priority{YType::uint8, "priority"},
	 available_bandwidth{YType::uint64, "available-bandwidth"},
	 reserved_bandwidth{YType::uint64, "reserved-bandwidth"}
{
    yang_name = "bandwidth"; yang_parent_name = "state";
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::~Bandwidth()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::has_data() const
{
    return priority.is_set
	|| available_bandwidth.is_set
	|| reserved_bandwidth.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(priority.operation)
	|| is_set(available_bandwidth.operation)
	|| is_set(reserved_bandwidth.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth" <<"[priority='" <<priority.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::get_entity_path(Entity* ancestor) const
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

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.operation)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.operation)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::Counters()
    :
    	in_ack_messages{YType::uint64, "in-ack-messages"},
	 in_hello_messages{YType::uint64, "in-hello-messages"},
	 in_path_error_messages{YType::uint64, "in-path-error-messages"},
	 in_path_messages{YType::uint64, "in-path-messages"},
	 in_path_tear_messages{YType::uint64, "in-path-tear-messages"},
	 in_reservation_error_messages{YType::uint64, "in-reservation-error-messages"},
	 in_reservation_messages{YType::uint64, "in-reservation-messages"},
	 in_reservation_tear_messages{YType::uint64, "in-reservation-tear-messages"},
	 in_srefresh_messages{YType::uint64, "in-srefresh-messages"},
	 out_ack_messages{YType::uint64, "out-ack-messages"},
	 out_hello_messages{YType::uint64, "out-hello-messages"},
	 out_path_error_messages{YType::uint64, "out-path-error-messages"},
	 out_path_messages{YType::uint64, "out-path-messages"},
	 out_path_tear_messages{YType::uint64, "out-path-tear-messages"},
	 out_reservation_error_messages{YType::uint64, "out-reservation-error-messages"},
	 out_reservation_messages{YType::uint64, "out-reservation-messages"},
	 out_reservation_tear_messages{YType::uint64, "out-reservation-tear-messages"},
	 out_srefresh_messages{YType::uint64, "out-srefresh-messages"}
{
    yang_name = "counters"; yang_parent_name = "state";
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::~Counters()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::has_data() const
{
    return in_ack_messages.is_set
	|| in_hello_messages.is_set
	|| in_path_error_messages.is_set
	|| in_path_messages.is_set
	|| in_path_tear_messages.is_set
	|| in_reservation_error_messages.is_set
	|| in_reservation_messages.is_set
	|| in_reservation_tear_messages.is_set
	|| in_srefresh_messages.is_set
	|| out_ack_messages.is_set
	|| out_hello_messages.is_set
	|| out_path_error_messages.is_set
	|| out_path_messages.is_set
	|| out_path_tear_messages.is_set
	|| out_reservation_error_messages.is_set
	|| out_reservation_messages.is_set
	|| out_reservation_tear_messages.is_set
	|| out_srefresh_messages.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(in_ack_messages.operation)
	|| is_set(in_hello_messages.operation)
	|| is_set(in_path_error_messages.operation)
	|| is_set(in_path_messages.operation)
	|| is_set(in_path_tear_messages.operation)
	|| is_set(in_reservation_error_messages.operation)
	|| is_set(in_reservation_messages.operation)
	|| is_set(in_reservation_tear_messages.operation)
	|| is_set(in_srefresh_messages.operation)
	|| is_set(out_ack_messages.operation)
	|| is_set(out_hello_messages.operation)
	|| is_set(out_path_error_messages.operation)
	|| is_set(out_path_messages.operation)
	|| is_set(out_path_tear_messages.operation)
	|| is_set(out_reservation_error_messages.operation)
	|| is_set(out_reservation_messages.operation)
	|| is_set(out_reservation_tear_messages.operation)
	|| is_set(out_srefresh_messages.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::get_entity_path(Entity* ancestor) const
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

    if (in_ack_messages.is_set || is_set(in_ack_messages.operation)) leaf_name_data.push_back(in_ack_messages.get_name_leafdata());
    if (in_hello_messages.is_set || is_set(in_hello_messages.operation)) leaf_name_data.push_back(in_hello_messages.get_name_leafdata());
    if (in_path_error_messages.is_set || is_set(in_path_error_messages.operation)) leaf_name_data.push_back(in_path_error_messages.get_name_leafdata());
    if (in_path_messages.is_set || is_set(in_path_messages.operation)) leaf_name_data.push_back(in_path_messages.get_name_leafdata());
    if (in_path_tear_messages.is_set || is_set(in_path_tear_messages.operation)) leaf_name_data.push_back(in_path_tear_messages.get_name_leafdata());
    if (in_reservation_error_messages.is_set || is_set(in_reservation_error_messages.operation)) leaf_name_data.push_back(in_reservation_error_messages.get_name_leafdata());
    if (in_reservation_messages.is_set || is_set(in_reservation_messages.operation)) leaf_name_data.push_back(in_reservation_messages.get_name_leafdata());
    if (in_reservation_tear_messages.is_set || is_set(in_reservation_tear_messages.operation)) leaf_name_data.push_back(in_reservation_tear_messages.get_name_leafdata());
    if (in_srefresh_messages.is_set || is_set(in_srefresh_messages.operation)) leaf_name_data.push_back(in_srefresh_messages.get_name_leafdata());
    if (out_ack_messages.is_set || is_set(out_ack_messages.operation)) leaf_name_data.push_back(out_ack_messages.get_name_leafdata());
    if (out_hello_messages.is_set || is_set(out_hello_messages.operation)) leaf_name_data.push_back(out_hello_messages.get_name_leafdata());
    if (out_path_error_messages.is_set || is_set(out_path_error_messages.operation)) leaf_name_data.push_back(out_path_error_messages.get_name_leafdata());
    if (out_path_messages.is_set || is_set(out_path_messages.operation)) leaf_name_data.push_back(out_path_messages.get_name_leafdata());
    if (out_path_tear_messages.is_set || is_set(out_path_tear_messages.operation)) leaf_name_data.push_back(out_path_tear_messages.get_name_leafdata());
    if (out_reservation_error_messages.is_set || is_set(out_reservation_error_messages.operation)) leaf_name_data.push_back(out_reservation_error_messages.get_name_leafdata());
    if (out_reservation_messages.is_set || is_set(out_reservation_messages.operation)) leaf_name_data.push_back(out_reservation_messages.get_name_leafdata());
    if (out_reservation_tear_messages.is_set || is_set(out_reservation_tear_messages.operation)) leaf_name_data.push_back(out_reservation_tear_messages.get_name_leafdata());
    if (out_srefresh_messages.is_set || is_set(out_srefresh_messages.operation)) leaf_name_data.push_back(out_srefresh_messages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-ack-messages")
    {
        in_ack_messages = value;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages = value;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages = value;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages = value;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages = value;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages = value;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages = value;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages = value;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages = value;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages = value;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages = value;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages = value;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages = value;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages = value;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages = value;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages = value;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages = value;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::State()
    :
    	active_reservation_count{YType::uint64, "active-reservation-count"},
	 highwater_mark{YType::uint64, "highwater-mark"}
    	,
    counters(std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters>())
{
    counters->parent = this;
    children["counters"] = counters.get();

    yang_name = "state"; yang_parent_name = "interface";
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::has_data() const
{
    for (std::size_t index=0; index<bandwidth.size(); index++)
    {
        if(bandwidth[index]->has_data())
            return true;
    }
    return active_reservation_count.is_set
	|| highwater_mark.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::has_operation() const
{
    for (std::size_t index=0; index<bandwidth.size(); index++)
    {
        if(bandwidth[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active_reservation_count.operation)
	|| is_set(highwater_mark.operation)
	|| (counters !=  nullptr && is_set(counters->operation));
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::get_entity_path(Entity* ancestor) const
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

    if (active_reservation_count.is_set || is_set(active_reservation_count.operation)) leaf_name_data.push_back(active_reservation_count.get_name_leafdata());
    if (highwater_mark.is_set || is_set(highwater_mark.operation)) leaf_name_data.push_back(highwater_mark.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth")
    {
        for(auto const & c : bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth>();
        c->parent = this;
        bandwidth.push_back(std::move(c));
        children[segment_path] = bandwidth.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "counters")
    {
        if(counters != nullptr)
        {
            children["counters"] = counters.get();
        }
        else
        {
            counters = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters>();
            counters->parent = this;
            children["counters"] = counters.get();
        }
        return children.at("counters");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::get_children()
{
    for (auto const & c : bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("counters") == children.end())
    {
        if(counters != nullptr)
        {
            children["counters"] = counters.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-reservation-count")
    {
        active_reservation_count = value;
    }
    if(value_path == "highwater-mark")
    {
        highwater_mark = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::Config()
    :
    	hello_interval{YType::uint16, "hello-interval"},
	 refresh_reduction{YType::boolean, "refresh-reduction"}
{
    yang_name = "config"; yang_parent_name = "hellos";
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::has_data() const
{
    return hello_interval.is_set
	|| refresh_reduction.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_interval.operation)
	|| is_set(refresh_reduction.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::get_entity_path(Entity* ancestor) const
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

    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (refresh_reduction.is_set || is_set(refresh_reduction.operation)) leaf_name_data.push_back(refresh_reduction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::State()
    :
    	hello_interval{YType::uint16, "hello-interval"},
	 refresh_reduction{YType::boolean, "refresh-reduction"}
{
    yang_name = "state"; yang_parent_name = "hellos";
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::has_data() const
{
    return hello_interval.is_set
	|| refresh_reduction.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_interval.operation)
	|| is_set(refresh_reduction.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::get_entity_path(Entity* ancestor) const
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

    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (refresh_reduction.is_set || is_set(refresh_reduction.operation)) leaf_name_data.push_back(refresh_reduction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Hellos()
    :
    config(std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config>())
	,state(std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "hellos"; yang_parent_name = "interface";
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::~Hellos()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hellos";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::get_entity_path(Entity* ancestor) const
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

Entity* Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::Config()
    :
    	authentication_key{YType::str, "authentication-key"},
	 enable{YType::boolean, "enable"}
{
    yang_name = "config"; yang_parent_name = "authentication";
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::has_data() const
{
    return authentication_key.is_set
	|| enable.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_key.operation)
	|| is_set(enable.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::get_entity_path(Entity* ancestor) const
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

    if (authentication_key.is_set || is_set(authentication_key.operation)) leaf_name_data.push_back(authentication_key.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-key")
    {
        authentication_key = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::State()
    :
    	authentication_key{YType::str, "authentication-key"},
	 enable{YType::boolean, "enable"}
{
    yang_name = "state"; yang_parent_name = "authentication";
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::has_data() const
{
    return authentication_key.is_set
	|| enable.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_key.operation)
	|| is_set(enable.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::get_entity_path(Entity* ancestor) const
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

    if (authentication_key.is_set || is_set(authentication_key.operation)) leaf_name_data.push_back(authentication_key.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-key")
    {
        authentication_key = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Authentication()
    :
    config(std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config>())
	,state(std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "authentication"; yang_parent_name = "interface";
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::~Authentication()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::get_entity_path(Entity* ancestor) const
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

Entity* Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::Config()
    :
    	subscription{YType::uint8, "subscription"}
{
    yang_name = "config"; yang_parent_name = "subscription";
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::has_data() const
{
    return subscription.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(subscription.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::get_entity_path(Entity* ancestor) const
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

    if (subscription.is_set || is_set(subscription.operation)) leaf_name_data.push_back(subscription.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscription")
    {
        subscription = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::State()
    :
    	subscription{YType::uint8, "subscription"}
{
    yang_name = "state"; yang_parent_name = "subscription";
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::has_data() const
{
    return subscription.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::has_operation() const
{
    return is_set(operation)
	|| is_set(subscription.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::get_entity_path(Entity* ancestor) const
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

    if (subscription.is_set || is_set(subscription.operation)) leaf_name_data.push_back(subscription.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscription")
    {
        subscription = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Subscription()
    :
    config(std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config>())
	,state(std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "subscription"; yang_parent_name = "interface";
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::~Subscription()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::get_entity_path(Entity* ancestor) const
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

Entity* Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::Config()
    :
    	bypass_optimize_interval{YType::uint16, "bypass-optimize-interval"},
	 link_protection_style_requested{YType::identityref, "link-protection-style-requested"}
{
    yang_name = "config"; yang_parent_name = "protection";
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::has_data() const
{
    return bypass_optimize_interval.is_set
	|| link_protection_style_requested.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(bypass_optimize_interval.operation)
	|| is_set(link_protection_style_requested.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::get_entity_path(Entity* ancestor) const
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

    if (bypass_optimize_interval.is_set || is_set(bypass_optimize_interval.operation)) leaf_name_data.push_back(bypass_optimize_interval.get_name_leafdata());
    if (link_protection_style_requested.is_set || is_set(link_protection_style_requested.operation)) leaf_name_data.push_back(link_protection_style_requested.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bypass-optimize-interval")
    {
        bypass_optimize_interval = value;
    }
    if(value_path == "link-protection-style-requested")
    {
        link_protection_style_requested = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::State()
    :
    	bypass_optimize_interval{YType::uint16, "bypass-optimize-interval"},
	 link_protection_style_requested{YType::identityref, "link-protection-style-requested"}
{
    yang_name = "state"; yang_parent_name = "protection";
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::has_data() const
{
    return bypass_optimize_interval.is_set
	|| link_protection_style_requested.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::has_operation() const
{
    return is_set(operation)
	|| is_set(bypass_optimize_interval.operation)
	|| is_set(link_protection_style_requested.operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::get_entity_path(Entity* ancestor) const
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

    if (bypass_optimize_interval.is_set || is_set(bypass_optimize_interval.operation)) leaf_name_data.push_back(bypass_optimize_interval.get_name_leafdata());
    if (link_protection_style_requested.is_set || is_set(link_protection_style_requested.operation)) leaf_name_data.push_back(link_protection_style_requested.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bypass-optimize-interval")
    {
        bypass_optimize_interval = value;
    }
    if(value_path == "link-protection-style-requested")
    {
        link_protection_style_requested = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Protection()
    :
    config(std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config>())
	,state(std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "protection"; yang_parent_name = "interface";
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::~Protection()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::get_entity_path(Entity* ancestor) const
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

Entity* Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"}
    	,
    authentication(std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication>())
	,config(std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config>())
	,hellos(std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos>())
	,protection(std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection>())
	,state(std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State>())
	,subscription(std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription>())
{
    authentication->parent = this;
    children["authentication"] = authentication.get();

    config->parent = this;
    children["config"] = config.get();

    hellos->parent = this;
    children["hellos"] = hellos.get();

    protection->parent = this;
    children["protection"] = protection.get();

    state->parent = this;
    children["state"] = state.get();

    subscription->parent = this;
    children["subscription"] = subscription.get();

    yang_name = "interface"; yang_parent_name = "interface-attributes";
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::~Interface()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::has_data() const
{
    return interface_name.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (hellos !=  nullptr && hellos->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (subscription !=  nullptr && subscription->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (authentication !=  nullptr && is_set(authentication->operation))
	|| (config !=  nullptr && is_set(config->operation))
	|| (hellos !=  nullptr && is_set(hellos->operation))
	|| (protection !=  nullptr && is_set(protection->operation))
	|| (state !=  nullptr && is_set(state->operation))
	|| (subscription !=  nullptr && is_set(subscription->operation));
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/interface-attributes/" << get_segment_path();
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

Entity* Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication.get();
        }
        else
        {
            authentication = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication.get();
        }
        return children.at("authentication");
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "hellos")
    {
        if(hellos != nullptr)
        {
            children["hellos"] = hellos.get();
        }
        else
        {
            hellos = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos>();
            hellos->parent = this;
            children["hellos"] = hellos.get();
        }
        return children.at("hellos");
    }

    if(child_yang_name == "protection")
    {
        if(protection != nullptr)
        {
            children["protection"] = protection.get();
        }
        else
        {
            protection = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection>();
            protection->parent = this;
            children["protection"] = protection.get();
        }
        return children.at("protection");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    if(child_yang_name == "subscription")
    {
        if(subscription != nullptr)
        {
            children["subscription"] = subscription.get();
        }
        else
        {
            subscription = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription>();
            subscription->parent = this;
            children["subscription"] = subscription.get();
        }
        return children.at("subscription");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication.get();
        }
    }

    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("hellos") == children.end())
    {
        if(hellos != nullptr)
        {
            children["hellos"] = hellos.get();
        }
    }

    if(children.find("protection") == children.end())
    {
        if(protection != nullptr)
        {
            children["protection"] = protection.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    if(children.find("subscription") == children.end())
    {
        if(subscription != nullptr)
        {
            children["subscription"] = subscription.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::InterfaceAttributes()
{
    yang_name = "interface-attributes"; yang_parent_name = "rsvp-te";
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::~InterfaceAttributes()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-attributes";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::get_children()
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

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::RsvpTe::RsvpTe()
    :
    global(std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global>())
	,interface_attributes(std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes>())
	,neighbors(std::make_unique<Mpls::SignalingProtocols::RsvpTe::Neighbors>())
	,sessions(std::make_unique<Mpls::SignalingProtocols::RsvpTe::Sessions>())
{
    global->parent = this;
    children["global"] = global.get();

    interface_attributes->parent = this;
    children["interface-attributes"] = interface_attributes.get();

    neighbors->parent = this;
    children["neighbors"] = neighbors.get();

    sessions->parent = this;
    children["sessions"] = sessions.get();

    yang_name = "rsvp-te"; yang_parent_name = "signaling-protocols";
}

Mpls::SignalingProtocols::RsvpTe::~RsvpTe()
{
}

bool Mpls::SignalingProtocols::RsvpTe::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (interface_attributes !=  nullptr && interface_attributes->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (sessions !=  nullptr && sessions->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::has_operation() const
{
    return is_set(operation)
	|| (global !=  nullptr && is_set(global->operation))
	|| (interface_attributes !=  nullptr && is_set(interface_attributes->operation))
	|| (neighbors !=  nullptr && is_set(neighbors->operation))
	|| (sessions !=  nullptr && is_set(sessions->operation));
}

std::string Mpls::SignalingProtocols::RsvpTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::RsvpTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::RsvpTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global.get();
        }
        else
        {
            global = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global>();
            global->parent = this;
            children["global"] = global.get();
        }
        return children.at("global");
    }

    if(child_yang_name == "interface-attributes")
    {
        if(interface_attributes != nullptr)
        {
            children["interface-attributes"] = interface_attributes.get();
        }
        else
        {
            interface_attributes = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes>();
            interface_attributes->parent = this;
            children["interface-attributes"] = interface_attributes.get();
        }
        return children.at("interface-attributes");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors.get();
        }
        else
        {
            neighbors = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors.get();
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions.get();
        }
        else
        {
            sessions = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions.get();
        }
        return children.at("sessions");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::RsvpTe::get_children()
{
    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global.get();
        }
    }

    if(children.find("interface-attributes") == children.end())
    {
        if(interface_attributes != nullptr)
        {
            children["interface-attributes"] = interface_attributes.get();
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors.get();
        }
    }

    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::Config()
    :
    	lower_bound{YType::uint32, "lower-bound"},
	 upper_bound{YType::uint32, "upper-bound"}
{
    yang_name = "config"; yang_parent_name = "srgb";
}

Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::~Config()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::has_data() const
{
    return lower_bound.is_set
	|| upper_bound.is_set;
}

bool Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(lower_bound.operation)
	|| is_set(upper_bound.operation);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::get_entity_path(Entity* ancestor) const
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

    if (lower_bound.is_set || is_set(lower_bound.operation)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.operation)) leaf_name_data.push_back(upper_bound.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lower-bound")
    {
        lower_bound = value;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
    }
}

Mpls::SignalingProtocols::SegmentRouting::Srgb::State::State()
    :
    	free{YType::uint32, "free"},
	 lower_bound{YType::uint32, "lower-bound"},
	 size{YType::uint32, "size"},
	 upper_bound{YType::uint32, "upper-bound"},
	 used{YType::uint32, "used"}
{
    yang_name = "state"; yang_parent_name = "srgb";
}

Mpls::SignalingProtocols::SegmentRouting::Srgb::State::~State()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Srgb::State::has_data() const
{
    return free.is_set
	|| lower_bound.is_set
	|| size.is_set
	|| upper_bound.is_set
	|| used.is_set;
}

bool Mpls::SignalingProtocols::SegmentRouting::Srgb::State::has_operation() const
{
    return is_set(operation)
	|| is_set(free.operation)
	|| is_set(lower_bound.operation)
	|| is_set(size.operation)
	|| is_set(upper_bound.operation)
	|| is_set(used.operation);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Srgb::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::SegmentRouting::Srgb::State::get_entity_path(Entity* ancestor) const
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

    if (free.is_set || is_set(free.operation)) leaf_name_data.push_back(free.get_name_leafdata());
    if (lower_bound.is_set || is_set(lower_bound.operation)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.operation)) leaf_name_data.push_back(upper_bound.get_name_leafdata());
    if (used.is_set || is_set(used.operation)) leaf_name_data.push_back(used.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::SegmentRouting::Srgb::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::SegmentRouting::Srgb::State::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::SegmentRouting::Srgb::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free")
    {
        free = value;
    }
    if(value_path == "lower-bound")
    {
        lower_bound = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
    }
    if(value_path == "used")
    {
        used = value;
    }
}

Mpls::SignalingProtocols::SegmentRouting::Srgb::Srgb()
    :
    	lower_bound{YType::uint32, "lower-bound"},
	 upper_bound{YType::uint32, "upper-bound"}
    	,
    config(std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Srgb::Config>())
	,state(std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Srgb::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "srgb"; yang_parent_name = "segment-routing";
}

Mpls::SignalingProtocols::SegmentRouting::Srgb::~Srgb()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Srgb::has_data() const
{
    return lower_bound.is_set
	|| upper_bound.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::SegmentRouting::Srgb::has_operation() const
{
    return is_set(operation)
	|| is_set(lower_bound.operation)
	|| is_set(upper_bound.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::SignalingProtocols::SegmentRouting::Srgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb" <<"[lower-bound='" <<lower_bound.get() <<"']" <<"[upper-bound='" <<upper_bound.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::SegmentRouting::Srgb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/segment-routing/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_bound.is_set || is_set(lower_bound.operation)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.operation)) leaf_name_data.push_back(upper_bound.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::SegmentRouting::Srgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Srgb::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Srgb::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::SegmentRouting::Srgb::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::SegmentRouting::Srgb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lower-bound")
    {
        lower_bound = value;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
    }
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::Config()
    :
    	interface{YType::str, "interface"}
{
    yang_name = "config"; yang_parent_name = "interfaces";
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::~Config()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::has_data() const
{
    return interface.is_set;
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::get_entity_path(Entity* ancestor) const
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

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::State()
    :
    	interface{YType::str, "interface"}
{
    yang_name = "state"; yang_parent_name = "interfaces";
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::~State()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::has_data() const
{
    return interface.is_set;
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::get_entity_path(Entity* ancestor) const
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

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::Config()
    :
    	advertise{YType::enumeration, "advertise"},
	 groups{YType::uint32, "groups"}
{
    yang_name = "config"; yang_parent_name = "adjacency-sid";
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::~Config()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::has_data() const
{
    for (auto const & leaf : advertise.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : groups.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::has_operation() const
{
    for (auto const & leaf : advertise.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : groups.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::get_entity_path(Entity* ancestor) const
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


    auto advertise_name_datas = advertise.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), advertise_name_datas.begin(), advertise_name_datas.end());
    auto groups_name_datas = groups.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), groups_name_datas.begin(), groups_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise")
    {
        advertise.append(value);
    }
    if(value_path == "groups")
    {
        groups.append(value);
    }
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::State()
    :
    	advertise{YType::enumeration, "advertise"},
	 groups{YType::uint32, "groups"}
{
    yang_name = "state"; yang_parent_name = "adjacency-sid";
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::~State()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::has_data() const
{
    for (auto const & leaf : advertise.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : groups.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::has_operation() const
{
    for (auto const & leaf : advertise.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : groups.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::get_entity_path(Entity* ancestor) const
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


    auto advertise_name_datas = advertise.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), advertise_name_datas.begin(), advertise_name_datas.end());
    auto groups_name_datas = groups.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), groups_name_datas.begin(), groups_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise")
    {
        advertise.append(value);
    }
    if(value_path == "groups")
    {
        groups.append(value);
    }
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::AdjacencySid()
    :
    config(std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config>())
	,state(std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "adjacency-sid"; yang_parent_name = "interfaces";
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::~AdjacencySid()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::get_entity_path(Entity* ancestor) const
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

Entity* Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interfaces()
    :
    	interface{YType::str, "interface"}
    	,
    adjacency_sid(std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid>())
	,config(std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config>())
	,state(std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Interfaces::State>())
{
    adjacency_sid->parent = this;
    children["adjacency-sid"] = adjacency_sid.get();

    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "interfaces"; yang_parent_name = "segment-routing";
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::~Interfaces()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::has_data() const
{
    return interface.is_set
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| (adjacency_sid !=  nullptr && is_set(adjacency_sid->operation))
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces" <<"[interface='" <<interface.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::SegmentRouting::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/segment-routing/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::SegmentRouting::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-sid")
    {
        if(adjacency_sid != nullptr)
        {
            children["adjacency-sid"] = adjacency_sid.get();
        }
        else
        {
            adjacency_sid = std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid>();
            adjacency_sid->parent = this;
            children["adjacency-sid"] = adjacency_sid.get();
        }
        return children.at("adjacency-sid");
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Interfaces::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::SegmentRouting::Interfaces::get_children()
{
    if(children.find("adjacency-sid") == children.end())
    {
        if(adjacency_sid != nullptr)
        {
            children["adjacency-sid"] = adjacency_sid.get();
        }
    }

    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Mpls::SignalingProtocols::SegmentRouting::SegmentRouting()
{
    yang_name = "segment-routing"; yang_parent_name = "signaling-protocols";
}

Mpls::SignalingProtocols::SegmentRouting::~SegmentRouting()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::has_data() const
{
    for (std::size_t index=0; index<interfaces.size(); index++)
    {
        if(interfaces[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb.size(); index++)
    {
        if(srgb[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::SegmentRouting::has_operation() const
{
    for (std::size_t index=0; index<interfaces.size(); index++)
    {
        if(interfaces[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb.size(); index++)
    {
        if(srgb[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mpls::SignalingProtocols::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::SegmentRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        for(auto const & c : interfaces)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Interfaces>();
        c->parent = this;
        interfaces.push_back(std::move(c));
        children[segment_path] = interfaces.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "srgb")
    {
        for(auto const & c : srgb)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Srgb>();
        c->parent = this;
        srgb.push_back(std::move(c));
        children[segment_path] = srgb.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::SegmentRouting::get_children()
{
    for (auto const & c : interfaces)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : srgb)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::SegmentRouting::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::Ldp::Timers::Timers()
{
    yang_name = "timers"; yang_parent_name = "ldp";
}

Mpls::SignalingProtocols::Ldp::Timers::~Timers()
{
}

bool Mpls::SignalingProtocols::Ldp::Timers::has_data() const
{
    return false;
}

bool Mpls::SignalingProtocols::Ldp::Timers::has_operation() const
{
    return is_set(operation);
}

std::string Mpls::SignalingProtocols::Ldp::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::Ldp::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/ldp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::Ldp::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::SignalingProtocols::Ldp::Timers::get_children()
{
    return children;
}

void Mpls::SignalingProtocols::Ldp::Timers::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::Ldp::Ldp()
    :
    timers(std::make_unique<Mpls::SignalingProtocols::Ldp::Timers>())
{
    timers->parent = this;
    children["timers"] = timers.get();

    yang_name = "ldp"; yang_parent_name = "signaling-protocols";
}

Mpls::SignalingProtocols::Ldp::~Ldp()
{
}

bool Mpls::SignalingProtocols::Ldp::has_data() const
{
    return (timers !=  nullptr && timers->has_data());
}

bool Mpls::SignalingProtocols::Ldp::has_operation() const
{
    return is_set(operation)
	|| (timers !=  nullptr && is_set(timers->operation));
}

std::string Mpls::SignalingProtocols::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::Ldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/signaling-protocols/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers.get();
        }
        else
        {
            timers = std::make_unique<Mpls::SignalingProtocols::Ldp::Timers>();
            timers->parent = this;
            children["timers"] = timers.get();
        }
        return children.at("timers");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::Ldp::get_children()
{
    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::Ldp::set_value(const std::string & value_path, std::string value)
{
}

Mpls::SignalingProtocols::SignalingProtocols()
    :
    ldp(std::make_unique<Mpls::SignalingProtocols::Ldp>())
	,rsvp_te(std::make_unique<Mpls::SignalingProtocols::RsvpTe>())
	,segment_routing(std::make_unique<Mpls::SignalingProtocols::SegmentRouting>())
{
    ldp->parent = this;
    children["ldp"] = ldp.get();

    rsvp_te->parent = this;
    children["rsvp-te"] = rsvp_te.get();

    segment_routing->parent = this;
    children["segment-routing"] = segment_routing.get();

    yang_name = "signaling-protocols"; yang_parent_name = "mpls";
}

Mpls::SignalingProtocols::~SignalingProtocols()
{
}

bool Mpls::SignalingProtocols::has_data() const
{
    return (ldp !=  nullptr && ldp->has_data())
	|| (rsvp_te !=  nullptr && rsvp_te->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Mpls::SignalingProtocols::has_operation() const
{
    return is_set(operation)
	|| (ldp !=  nullptr && is_set(ldp->operation))
	|| (rsvp_te !=  nullptr && is_set(rsvp_te->operation))
	|| (segment_routing !=  nullptr && is_set(segment_routing->operation));
}

std::string Mpls::SignalingProtocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling-protocols";

    return path_buffer.str();

}

EntityPath Mpls::SignalingProtocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::SignalingProtocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ldp")
    {
        if(ldp != nullptr)
        {
            children["ldp"] = ldp.get();
        }
        else
        {
            ldp = std::make_unique<Mpls::SignalingProtocols::Ldp>();
            ldp->parent = this;
            children["ldp"] = ldp.get();
        }
        return children.at("ldp");
    }

    if(child_yang_name == "rsvp-te")
    {
        if(rsvp_te != nullptr)
        {
            children["rsvp-te"] = rsvp_te.get();
        }
        else
        {
            rsvp_te = std::make_unique<Mpls::SignalingProtocols::RsvpTe>();
            rsvp_te->parent = this;
            children["rsvp-te"] = rsvp_te.get();
        }
        return children.at("rsvp-te");
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing != nullptr)
        {
            children["segment-routing"] = segment_routing.get();
        }
        else
        {
            segment_routing = std::make_unique<Mpls::SignalingProtocols::SegmentRouting>();
            segment_routing->parent = this;
            children["segment-routing"] = segment_routing.get();
        }
        return children.at("segment-routing");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::SignalingProtocols::get_children()
{
    if(children.find("ldp") == children.end())
    {
        if(ldp != nullptr)
        {
            children["ldp"] = ldp.get();
        }
    }

    if(children.find("rsvp-te") == children.end())
    {
        if(rsvp_te != nullptr)
        {
            children["rsvp-te"] = rsvp_te.get();
        }
    }

    if(children.find("segment-routing") == children.end())
    {
        if(segment_routing != nullptr)
        {
            children["segment-routing"] = segment_routing.get();
        }
    }

    return children;
}

void Mpls::SignalingProtocols::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::Config()
    :
    	name{YType::str, "name"}
{
    yang_name = "config"; yang_parent_name = "named-explicit-paths";
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::has_data() const
{
    return name.is_set;
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::State()
    :
    	name{YType::str, "name"}
{
    yang_name = "state"; yang_parent_name = "named-explicit-paths";
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::has_data() const
{
    return name.is_set;
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::Config()
    :
    	address{YType::str, "address"},
	 hop_type{YType::enumeration, "hop-type"},
	 index_{YType::uint8, "index"}
{
    yang_name = "config"; yang_parent_name = "explicit-route-objects";
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::has_data() const
{
    return address.is_set
	|| hop_type.is_set
	|| index_.is_set;
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(hop_type.operation)
	|| is_set(index_.operation);
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.operation)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "hop-type")
    {
        hop_type = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::State()
    :
    	address{YType::str, "address"},
	 hop_type{YType::enumeration, "hop-type"},
	 index_{YType::uint8, "index"}
{
    yang_name = "state"; yang_parent_name = "explicit-route-objects";
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::has_data() const
{
    return address.is_set
	|| hop_type.is_set
	|| index_.is_set;
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(hop_type.operation)
	|| is_set(index_.operation);
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.operation)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "hop-type")
    {
        hop_type = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::ExplicitRouteObjects()
    :
    	index_{YType::str, "index"}
    	,
    config(std::make_unique<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config>())
	,state(std::make_unique<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "explicit-route-objects"; yang_parent_name = "named-explicit-paths";
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::~ExplicitRouteObjects()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::has_data() const
{
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-route-objects" <<"[index='" <<index_.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::get_entity_path(Entity* ancestor) const
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

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPaths()
    :
    	name{YType::str, "name"}
    	,
    config(std::make_unique<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config>())
	,state(std::make_unique<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "named-explicit-paths"; yang_parent_name = "constrained-path";
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::~NamedExplicitPaths()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::has_data() const
{
    for (std::size_t index=0; index<explicit_route_objects.size(); index++)
    {
        if(explicit_route_objects[index]->has_data())
            return true;
    }
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::has_operation() const
{
    for (std::size_t index=0; index<explicit_route_objects.size(); index++)
    {
        if(explicit_route_objects[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-explicit-paths" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/lsps/constrained-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "explicit-route-objects")
    {
        for(auto const & c : explicit_route_objects)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects>();
        c->parent = this;
        explicit_route_objects.push_back(std::move(c));
        children[segment_path] = explicit_route_objects.back().get();
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
            state = std::make_unique<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    for (auto const & c : explicit_route_objects)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::Config::Config()
    :
    	admin_status{YType::identityref, "admin-status"},
	 description{YType::str, "description"},
	 hold_priority{YType::uint8, "hold-priority"},
	 local_id{YType::str, "local-id"},
	 metric{YType::str, "metric"},
	 name{YType::str, "name"},
	 preference{YType::uint8, "preference"},
	 protection_style_requested{YType::identityref, "protection-style-requested"},
	 reoptimize_timer{YType::uint16, "reoptimize-timer"},
	 setup_priority{YType::uint8, "setup-priority"},
	 signaling_protocol{YType::identityref, "signaling-protocol"},
	 soft_preemption{YType::boolean, "soft-preemption"},
	 source{YType::str, "source"},
	 type{YType::identityref, "type"}
{
    yang_name = "config"; yang_parent_name = "tunnel";
}

Mpls::Lsps::ConstrainedPath::Tunnel::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Config::has_data() const
{
    return admin_status.is_set
	|| description.is_set
	|| hold_priority.is_set
	|| local_id.is_set
	|| metric.is_set
	|| name.is_set
	|| preference.is_set
	|| protection_style_requested.is_set
	|| reoptimize_timer.is_set
	|| setup_priority.is_set
	|| signaling_protocol.is_set
	|| soft_preemption.is_set
	|| source.is_set
	|| type.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_status.operation)
	|| is_set(description.operation)
	|| is_set(hold_priority.operation)
	|| is_set(local_id.operation)
	|| is_set(metric.operation)
	|| is_set(name.operation)
	|| is_set(preference.operation)
	|| is_set(protection_style_requested.operation)
	|| is_set(reoptimize_timer.operation)
	|| is_set(setup_priority.operation)
	|| is_set(signaling_protocol.operation)
	|| is_set(soft_preemption.operation)
	|| is_set(source.operation)
	|| is_set(type.operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::Config::get_entity_path(Entity* ancestor) const
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

    if (admin_status.is_set || is_set(admin_status.operation)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (local_id.is_set || is_set(local_id.operation)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (preference.is_set || is_set(preference.operation)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (protection_style_requested.is_set || is_set(protection_style_requested.operation)) leaf_name_data.push_back(protection_style_requested.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.operation)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (signaling_protocol.is_set || is_set(signaling_protocol.operation)) leaf_name_data.push_back(signaling_protocol.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.operation)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::Config::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-status")
    {
        admin_status = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "local-id")
    {
        local_id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "preference")
    {
        preference = value;
    }
    if(value_path == "protection-style-requested")
    {
        protection_style_requested = value;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol = value;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::Counters()
    :
    	bytes{YType::uint64, "bytes"},
	 current_path_time{YType::str, "current-path-time"},
	 next_reoptimization_time{YType::str, "next-reoptimization-time"},
	 online_time{YType::str, "online-time"},
	 packets{YType::uint64, "packets"},
	 path_changes{YType::uint64, "path-changes"},
	 state_changes{YType::uint64, "state-changes"}
{
    yang_name = "counters"; yang_parent_name = "state";
}

Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::~Counters()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::has_data() const
{
    return bytes.is_set
	|| current_path_time.is_set
	|| next_reoptimization_time.is_set
	|| online_time.is_set
	|| packets.is_set
	|| path_changes.is_set
	|| state_changes.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(current_path_time.operation)
	|| is_set(next_reoptimization_time.operation)
	|| is_set(online_time.operation)
	|| is_set(packets.operation)
	|| is_set(path_changes.operation)
	|| is_set(state_changes.operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::get_entity_path(Entity* ancestor) const
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

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (current_path_time.is_set || is_set(current_path_time.operation)) leaf_name_data.push_back(current_path_time.get_name_leafdata());
    if (next_reoptimization_time.is_set || is_set(next_reoptimization_time.operation)) leaf_name_data.push_back(next_reoptimization_time.get_name_leafdata());
    if (online_time.is_set || is_set(online_time.operation)) leaf_name_data.push_back(online_time.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (path_changes.is_set || is_set(path_changes.operation)) leaf_name_data.push_back(path_changes.get_name_leafdata());
    if (state_changes.is_set || is_set(state_changes.operation)) leaf_name_data.push_back(state_changes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "current-path-time")
    {
        current_path_time = value;
    }
    if(value_path == "next-reoptimization-time")
    {
        next_reoptimization_time = value;
    }
    if(value_path == "online-time")
    {
        online_time = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
    if(value_path == "path-changes")
    {
        path_changes = value;
    }
    if(value_path == "state-changes")
    {
        state_changes = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::State::State()
    :
    	admin_status{YType::identityref, "admin-status"},
	 description{YType::str, "description"},
	 hold_priority{YType::uint8, "hold-priority"},
	 local_id{YType::str, "local-id"},
	 metric{YType::str, "metric"},
	 name{YType::str, "name"},
	 oper_status{YType::identityref, "oper-status"},
	 preference{YType::uint8, "preference"},
	 protection_style_requested{YType::identityref, "protection-style-requested"},
	 reoptimize_timer{YType::uint16, "reoptimize-timer"},
	 role{YType::identityref, "role"},
	 setup_priority{YType::uint8, "setup-priority"},
	 signaling_protocol{YType::identityref, "signaling-protocol"},
	 soft_preemption{YType::boolean, "soft-preemption"},
	 source{YType::str, "source"},
	 type{YType::identityref, "type"}
    	,
    counters(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters>())
{
    counters->parent = this;
    children["counters"] = counters.get();

    yang_name = "state"; yang_parent_name = "tunnel";
}

Mpls::Lsps::ConstrainedPath::Tunnel::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::State::has_data() const
{
    return admin_status.is_set
	|| description.is_set
	|| hold_priority.is_set
	|| local_id.is_set
	|| metric.is_set
	|| name.is_set
	|| oper_status.is_set
	|| preference.is_set
	|| protection_style_requested.is_set
	|| reoptimize_timer.is_set
	|| role.is_set
	|| setup_priority.is_set
	|| signaling_protocol.is_set
	|| soft_preemption.is_set
	|| source.is_set
	|| type.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::State::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_status.operation)
	|| is_set(description.operation)
	|| is_set(hold_priority.operation)
	|| is_set(local_id.operation)
	|| is_set(metric.operation)
	|| is_set(name.operation)
	|| is_set(oper_status.operation)
	|| is_set(preference.operation)
	|| is_set(protection_style_requested.operation)
	|| is_set(reoptimize_timer.operation)
	|| is_set(role.operation)
	|| is_set(setup_priority.operation)
	|| is_set(signaling_protocol.operation)
	|| is_set(soft_preemption.operation)
	|| is_set(source.operation)
	|| is_set(type.operation)
	|| (counters !=  nullptr && is_set(counters->operation));
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::State::get_entity_path(Entity* ancestor) const
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

    if (admin_status.is_set || is_set(admin_status.operation)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (local_id.is_set || is_set(local_id.operation)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.operation)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (preference.is_set || is_set(preference.operation)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (protection_style_requested.is_set || is_set(protection_style_requested.operation)) leaf_name_data.push_back(protection_style_requested.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.operation)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (signaling_protocol.is_set || is_set(signaling_protocol.operation)) leaf_name_data.push_back(signaling_protocol.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.operation)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "counters")
    {
        if(counters != nullptr)
        {
            children["counters"] = counters.get();
        }
        else
        {
            counters = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters>();
            counters->parent = this;
            children["counters"] = counters.get();
        }
        return children.at("counters");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::State::get_children()
{
    if(children.find("counters") == children.end())
    {
        if(counters != nullptr)
        {
            children["counters"] = counters.get();
        }
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-status")
    {
        admin_status = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "local-id")
    {
        local_id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
    }
    if(value_path == "preference")
    {
        preference = value;
    }
    if(value_path == "protection-style-requested")
    {
        protection_style_requested = value;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol = value;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::Config()
    :
    	set_bandwidth{YType::uint32, "set-bandwidth"},
	 specification_type{YType::enumeration, "specification-type"}
{
    yang_name = "config"; yang_parent_name = "bandwidth";
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::has_data() const
{
    return set_bandwidth.is_set
	|| specification_type.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(set_bandwidth.operation)
	|| is_set(specification_type.operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::get_entity_path(Entity* ancestor) const
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

    if (set_bandwidth.is_set || is_set(set_bandwidth.operation)) leaf_name_data.push_back(set_bandwidth.get_name_leafdata());
    if (specification_type.is_set || is_set(specification_type.operation)) leaf_name_data.push_back(specification_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-bandwidth")
    {
        set_bandwidth = value;
    }
    if(value_path == "specification-type")
    {
        specification_type = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::State()
    :
    	set_bandwidth{YType::uint32, "set-bandwidth"},
	 specification_type{YType::enumeration, "specification-type"}
{
    yang_name = "state"; yang_parent_name = "bandwidth";
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::has_data() const
{
    return set_bandwidth.is_set
	|| specification_type.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::has_operation() const
{
    return is_set(operation)
	|| is_set(set_bandwidth.operation)
	|| is_set(specification_type.operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::get_entity_path(Entity* ancestor) const
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

    if (set_bandwidth.is_set || is_set(set_bandwidth.operation)) leaf_name_data.push_back(set_bandwidth.get_name_leafdata());
    if (specification_type.is_set || is_set(specification_type.operation)) leaf_name_data.push_back(specification_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-bandwidth")
    {
        set_bandwidth = value;
    }
    if(value_path == "specification-type")
    {
        specification_type = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::Config()
    :
    	adjust_interval{YType::uint32, "adjust-interval"},
	 adjust_threshold{YType::uint8, "adjust-threshold"},
	 enabled{YType::boolean, "enabled"},
	 max_bw{YType::uint32, "max-bw"},
	 min_bw{YType::uint32, "min-bw"}
{
    yang_name = "config"; yang_parent_name = "auto-bandwidth";
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::has_data() const
{
    return adjust_interval.is_set
	|| adjust_threshold.is_set
	|| enabled.is_set
	|| max_bw.is_set
	|| min_bw.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(adjust_interval.operation)
	|| is_set(adjust_threshold.operation)
	|| is_set(enabled.operation)
	|| is_set(max_bw.operation)
	|| is_set(min_bw.operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::get_entity_path(Entity* ancestor) const
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

    if (adjust_interval.is_set || is_set(adjust_interval.operation)) leaf_name_data.push_back(adjust_interval.get_name_leafdata());
    if (adjust_threshold.is_set || is_set(adjust_threshold.operation)) leaf_name_data.push_back(adjust_threshold.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (max_bw.is_set || is_set(max_bw.operation)) leaf_name_data.push_back(max_bw.get_name_leafdata());
    if (min_bw.is_set || is_set(min_bw.operation)) leaf_name_data.push_back(min_bw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjust-interval")
    {
        adjust_interval = value;
    }
    if(value_path == "adjust-threshold")
    {
        adjust_threshold = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "max-bw")
    {
        max_bw = value;
    }
    if(value_path == "min-bw")
    {
        min_bw = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::State()
    :
    	adjust_interval{YType::uint32, "adjust-interval"},
	 adjust_threshold{YType::uint8, "adjust-threshold"},
	 enabled{YType::boolean, "enabled"},
	 max_bw{YType::uint32, "max-bw"},
	 min_bw{YType::uint32, "min-bw"}
{
    yang_name = "state"; yang_parent_name = "auto-bandwidth";
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::has_data() const
{
    return adjust_interval.is_set
	|| adjust_threshold.is_set
	|| enabled.is_set
	|| max_bw.is_set
	|| min_bw.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::has_operation() const
{
    return is_set(operation)
	|| is_set(adjust_interval.operation)
	|| is_set(adjust_threshold.operation)
	|| is_set(enabled.operation)
	|| is_set(max_bw.operation)
	|| is_set(min_bw.operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::get_entity_path(Entity* ancestor) const
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

    if (adjust_interval.is_set || is_set(adjust_interval.operation)) leaf_name_data.push_back(adjust_interval.get_name_leafdata());
    if (adjust_threshold.is_set || is_set(adjust_threshold.operation)) leaf_name_data.push_back(adjust_threshold.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (max_bw.is_set || is_set(max_bw.operation)) leaf_name_data.push_back(max_bw.get_name_leafdata());
    if (min_bw.is_set || is_set(min_bw.operation)) leaf_name_data.push_back(min_bw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjust-interval")
    {
        adjust_interval = value;
    }
    if(value_path == "adjust-threshold")
    {
        adjust_threshold = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "max-bw")
    {
        max_bw = value;
    }
    if(value_path == "min-bw")
    {
        min_bw = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::Config()
    :
    	enabled{YType::boolean, "enabled"},
	 overflow_threshold{YType::uint8, "overflow-threshold"},
	 trigger_event_count{YType::uint16, "trigger-event-count"}
{
    yang_name = "config"; yang_parent_name = "overflow";
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::has_data() const
{
    return enabled.is_set
	|| overflow_threshold.is_set
	|| trigger_event_count.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(overflow_threshold.operation)
	|| is_set(trigger_event_count.operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::get_entity_path(Entity* ancestor) const
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

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (overflow_threshold.is_set || is_set(overflow_threshold.operation)) leaf_name_data.push_back(overflow_threshold.get_name_leafdata());
    if (trigger_event_count.is_set || is_set(trigger_event_count.operation)) leaf_name_data.push_back(trigger_event_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold = value;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::State()
    :
    	enabled{YType::boolean, "enabled"},
	 overflow_threshold{YType::uint8, "overflow-threshold"},
	 trigger_event_count{YType::uint16, "trigger-event-count"}
{
    yang_name = "state"; yang_parent_name = "overflow";
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::has_data() const
{
    return enabled.is_set
	|| overflow_threshold.is_set
	|| trigger_event_count.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(overflow_threshold.operation)
	|| is_set(trigger_event_count.operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::get_entity_path(Entity* ancestor) const
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

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (overflow_threshold.is_set || is_set(overflow_threshold.operation)) leaf_name_data.push_back(overflow_threshold.get_name_leafdata());
    if (trigger_event_count.is_set || is_set(trigger_event_count.operation)) leaf_name_data.push_back(trigger_event_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold = value;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Overflow()
    :
    config(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config>())
	,state(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "overflow"; yang_parent_name = "auto-bandwidth";
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::~Overflow()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overflow";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::get_entity_path(Entity* ancestor) const
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

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::Config()
    :
    	enabled{YType::boolean, "enabled"},
	 trigger_event_count{YType::uint16, "trigger-event-count"},
	 underflow_threshold{YType::uint8, "underflow-threshold"}
{
    yang_name = "config"; yang_parent_name = "underflow";
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::has_data() const
{
    return enabled.is_set
	|| trigger_event_count.is_set
	|| underflow_threshold.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(trigger_event_count.operation)
	|| is_set(underflow_threshold.operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::get_entity_path(Entity* ancestor) const
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

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (trigger_event_count.is_set || is_set(trigger_event_count.operation)) leaf_name_data.push_back(trigger_event_count.get_name_leafdata());
    if (underflow_threshold.is_set || is_set(underflow_threshold.operation)) leaf_name_data.push_back(underflow_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count = value;
    }
    if(value_path == "underflow-threshold")
    {
        underflow_threshold = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::State()
    :
    	enabled{YType::boolean, "enabled"},
	 trigger_event_count{YType::uint16, "trigger-event-count"},
	 underflow_threshold{YType::uint8, "underflow-threshold"}
{
    yang_name = "state"; yang_parent_name = "underflow";
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::has_data() const
{
    return enabled.is_set
	|| trigger_event_count.is_set
	|| underflow_threshold.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(trigger_event_count.operation)
	|| is_set(underflow_threshold.operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::get_entity_path(Entity* ancestor) const
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

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (trigger_event_count.is_set || is_set(trigger_event_count.operation)) leaf_name_data.push_back(trigger_event_count.get_name_leafdata());
    if (underflow_threshold.is_set || is_set(underflow_threshold.operation)) leaf_name_data.push_back(underflow_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count = value;
    }
    if(value_path == "underflow-threshold")
    {
        underflow_threshold = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Underflow()
    :
    config(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config>())
	,state(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "underflow"; yang_parent_name = "auto-bandwidth";
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::~Underflow()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underflow";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::get_entity_path(Entity* ancestor) const
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

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::AutoBandwidth()
    :
    config(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config>())
	,overflow(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow>())
	,state(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State>())
	,underflow(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow>())
{
    config->parent = this;
    children["config"] = config.get();

    overflow->parent = this;
    children["overflow"] = overflow.get();

    state->parent = this;
    children["state"] = state.get();

    underflow->parent = this;
    children["underflow"] = underflow.get();

    yang_name = "auto-bandwidth"; yang_parent_name = "bandwidth";
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::~AutoBandwidth()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (overflow !=  nullptr && overflow->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (underflow !=  nullptr && underflow->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (overflow !=  nullptr && is_set(overflow->operation))
	|| (state !=  nullptr && is_set(state->operation))
	|| (underflow !=  nullptr && is_set(underflow->operation));
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::get_entity_path(Entity* ancestor) const
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

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "overflow")
    {
        if(overflow != nullptr)
        {
            children["overflow"] = overflow.get();
        }
        else
        {
            overflow = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow>();
            overflow->parent = this;
            children["overflow"] = overflow.get();
        }
        return children.at("overflow");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    if(child_yang_name == "underflow")
    {
        if(underflow != nullptr)
        {
            children["underflow"] = underflow.get();
        }
        else
        {
            underflow = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow>();
            underflow->parent = this;
            children["underflow"] = underflow.get();
        }
        return children.at("underflow");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("overflow") == children.end())
    {
        if(overflow != nullptr)
        {
            children["overflow"] = overflow.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    if(children.find("underflow") == children.end())
    {
        if(underflow != nullptr)
        {
            children["underflow"] = underflow.get();
        }
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Bandwidth()
    :
    auto_bandwidth(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth>())
	,config(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config>())
	,state(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State>())
{
    auto_bandwidth->parent = this;
    children["auto-bandwidth"] = auto_bandwidth.get();

    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "bandwidth"; yang_parent_name = "tunnel";
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::~Bandwidth()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::has_data() const
{
    return (auto_bandwidth !=  nullptr && auto_bandwidth->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| (auto_bandwidth !=  nullptr && is_set(auto_bandwidth->operation))
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::get_entity_path(Entity* ancestor) const
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

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-bandwidth")
    {
        if(auto_bandwidth != nullptr)
        {
            children["auto-bandwidth"] = auto_bandwidth.get();
        }
        else
        {
            auto_bandwidth = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth>();
            auto_bandwidth->parent = this;
            children["auto-bandwidth"] = auto_bandwidth.get();
        }
        return children.at("auto-bandwidth");
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::get_children()
{
    if(children.find("auto-bandwidth") == children.end())
    {
        if(auto_bandwidth != nullptr)
        {
            children["auto-bandwidth"] = auto_bandwidth.get();
        }
    }

    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::Config()
    :
    	destination{YType::str, "destination"}
{
    yang_name = "config"; yang_parent_name = "p2p-tunnel-attributes";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::has_data() const
{
    return destination.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::get_entity_path(Entity* ancestor) const
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

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::State()
    :
    	destination{YType::str, "destination"}
{
    yang_name = "state"; yang_parent_name = "p2p-tunnel-attributes";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::has_data() const
{
    return destination.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::get_entity_path(Entity* ancestor) const
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

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::Config()
    :
    	cspf_tiebreaker{YType::enumeration, "cspf-tiebreaker"},
	 explicit_path_name{YType::str, "explicit-path-name"},
	 hold_priority{YType::uint8, "hold-priority"},
	 name{YType::str, "name"},
	 path_computation_method{YType::identityref, "path-computation-method"},
	 path_computation_server{YType::str, "path-computation-server"},
	 preference{YType::uint8, "preference"},
	 retry_timer{YType::uint16, "retry-timer"},
	 setup_priority{YType::uint8, "setup-priority"},
	 use_cspf{YType::boolean, "use-cspf"}
{
    yang_name = "config"; yang_parent_name = "p2p-primary-paths";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::has_data() const
{
    return cspf_tiebreaker.is_set
	|| explicit_path_name.is_set
	|| hold_priority.is_set
	|| name.is_set
	|| path_computation_method.is_set
	|| path_computation_server.is_set
	|| preference.is_set
	|| retry_timer.is_set
	|| setup_priority.is_set
	|| use_cspf.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(cspf_tiebreaker.operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(hold_priority.operation)
	|| is_set(name.operation)
	|| is_set(path_computation_method.operation)
	|| is_set(path_computation_server.operation)
	|| is_set(preference.operation)
	|| is_set(retry_timer.operation)
	|| is_set(setup_priority.operation)
	|| is_set(use_cspf.operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::get_entity_path(Entity* ancestor) const
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

    if (cspf_tiebreaker.is_set || is_set(cspf_tiebreaker.operation)) leaf_name_data.push_back(cspf_tiebreaker.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path_computation_method.is_set || is_set(path_computation_method.operation)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.operation)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());
    if (preference.is_set || is_set(preference.operation)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.operation)) leaf_name_data.push_back(retry_timer.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (use_cspf.is_set || is_set(use_cspf.operation)) leaf_name_data.push_back(use_cspf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker = value;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method = value;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
    }
    if(value_path == "preference")
    {
        preference = value;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "use-cspf")
    {
        use_cspf = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::State()
    :
    	cspf_tiebreaker{YType::enumeration, "cspf-tiebreaker"},
	 explicit_path_name{YType::str, "explicit-path-name"},
	 hold_priority{YType::uint8, "hold-priority"},
	 name{YType::str, "name"},
	 path_computation_method{YType::identityref, "path-computation-method"},
	 path_computation_server{YType::str, "path-computation-server"},
	 preference{YType::uint8, "preference"},
	 retry_timer{YType::uint16, "retry-timer"},
	 setup_priority{YType::uint8, "setup-priority"},
	 use_cspf{YType::boolean, "use-cspf"}
{
    yang_name = "state"; yang_parent_name = "p2p-primary-paths";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::has_data() const
{
    return cspf_tiebreaker.is_set
	|| explicit_path_name.is_set
	|| hold_priority.is_set
	|| name.is_set
	|| path_computation_method.is_set
	|| path_computation_server.is_set
	|| preference.is_set
	|| retry_timer.is_set
	|| setup_priority.is_set
	|| use_cspf.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::has_operation() const
{
    return is_set(operation)
	|| is_set(cspf_tiebreaker.operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(hold_priority.operation)
	|| is_set(name.operation)
	|| is_set(path_computation_method.operation)
	|| is_set(path_computation_server.operation)
	|| is_set(preference.operation)
	|| is_set(retry_timer.operation)
	|| is_set(setup_priority.operation)
	|| is_set(use_cspf.operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::get_entity_path(Entity* ancestor) const
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

    if (cspf_tiebreaker.is_set || is_set(cspf_tiebreaker.operation)) leaf_name_data.push_back(cspf_tiebreaker.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path_computation_method.is_set || is_set(path_computation_method.operation)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.operation)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());
    if (preference.is_set || is_set(preference.operation)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.operation)) leaf_name_data.push_back(retry_timer.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (use_cspf.is_set || is_set(use_cspf.operation)) leaf_name_data.push_back(use_cspf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker = value;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method = value;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
    }
    if(value_path == "preference")
    {
        preference = value;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "use-cspf")
    {
        use_cspf = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::Config()
    :
    	priority{YType::uint16, "priority"},
	 secondary_path{YType::str, "secondary-path"}
{
    yang_name = "config"; yang_parent_name = "candidate-secondary-path";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::has_data() const
{
    return priority.is_set
	|| secondary_path.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(priority.operation)
	|| is_set(secondary_path.operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::get_entity_path(Entity* ancestor) const
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

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (secondary_path.is_set || is_set(secondary_path.operation)) leaf_name_data.push_back(secondary_path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "secondary-path")
    {
        secondary_path = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::State()
    :
    	active{YType::boolean, "active"},
	 priority{YType::uint16, "priority"},
	 secondary_path{YType::str, "secondary-path"}
{
    yang_name = "state"; yang_parent_name = "candidate-secondary-path";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::has_data() const
{
    return active.is_set
	|| priority.is_set
	|| secondary_path.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(priority.operation)
	|| is_set(secondary_path.operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::get_entity_path(Entity* ancestor) const
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

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (secondary_path.is_set || is_set(secondary_path.operation)) leaf_name_data.push_back(secondary_path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "secondary-path")
    {
        secondary_path = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::CandidateSecondaryPath()
    :
    	secondary_path{YType::str, "secondary-path"}
    	,
    config(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config>())
	,state(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "candidate-secondary-path"; yang_parent_name = "candidate-secondary-paths";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::~CandidateSecondaryPath()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::has_data() const
{
    return secondary_path.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::has_operation() const
{
    return is_set(operation)
	|| is_set(secondary_path.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-secondary-path" <<"[secondary-path='" <<secondary_path.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::get_entity_path(Entity* ancestor) const
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

    if (secondary_path.is_set || is_set(secondary_path.operation)) leaf_name_data.push_back(secondary_path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "secondary-path")
    {
        secondary_path = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPaths()
{
    yang_name = "candidate-secondary-paths"; yang_parent_name = "p2p-primary-paths";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::~CandidateSecondaryPaths()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::has_data() const
{
    for (std::size_t index=0; index<candidate_secondary_path.size(); index++)
    {
        if(candidate_secondary_path[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::has_operation() const
{
    for (std::size_t index=0; index<candidate_secondary_path.size(); index++)
    {
        if(candidate_secondary_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-secondary-paths";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::get_entity_path(Entity* ancestor) const
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

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-secondary-path")
    {
        for(auto const & c : candidate_secondary_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath>();
        c->parent = this;
        candidate_secondary_path.push_back(std::move(c));
        children[segment_path] = candidate_secondary_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::get_children()
{
    for (auto const & c : candidate_secondary_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::Config()
    :
    	exclude_group{YType::str, "exclude-group"},
	 include_all_group{YType::str, "include-all-group"},
	 include_any_group{YType::str, "include-any-group"}
{
    yang_name = "config"; yang_parent_name = "admin-groups";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::has_data() const
{
    for (auto const & leaf : exclude_group.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_all_group.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_any_group.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::has_operation() const
{
    for (auto const & leaf : exclude_group.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : include_all_group.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : include_any_group.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::get_entity_path(Entity* ancestor) const
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


    auto exclude_group_name_datas = exclude_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exclude_group_name_datas.begin(), exclude_group_name_datas.end());
    auto include_all_group_name_datas = include_all_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_all_group_name_datas.begin(), include_all_group_name_datas.end());
    auto include_any_group_name_datas = include_any_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_any_group_name_datas.begin(), include_any_group_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclude-group")
    {
        exclude_group.append(value);
    }
    if(value_path == "include-all-group")
    {
        include_all_group.append(value);
    }
    if(value_path == "include-any-group")
    {
        include_any_group.append(value);
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::State()
    :
    	exclude_group{YType::str, "exclude-group"},
	 include_all_group{YType::str, "include-all-group"},
	 include_any_group{YType::str, "include-any-group"}
{
    yang_name = "state"; yang_parent_name = "admin-groups";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::has_data() const
{
    for (auto const & leaf : exclude_group.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_all_group.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_any_group.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::has_operation() const
{
    for (auto const & leaf : exclude_group.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : include_all_group.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : include_any_group.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::get_entity_path(Entity* ancestor) const
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


    auto exclude_group_name_datas = exclude_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exclude_group_name_datas.begin(), exclude_group_name_datas.end());
    auto include_all_group_name_datas = include_all_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_all_group_name_datas.begin(), include_all_group_name_datas.end());
    auto include_any_group_name_datas = include_any_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_any_group_name_datas.begin(), include_any_group_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclude-group")
    {
        exclude_group.append(value);
    }
    if(value_path == "include-all-group")
    {
        include_all_group.append(value);
    }
    if(value_path == "include-any-group")
    {
        include_any_group.append(value);
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::AdminGroups()
    :
    config(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config>())
	,state(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "admin-groups"; yang_parent_name = "p2p-primary-paths";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::~AdminGroups()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-groups";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::get_entity_path(Entity* ancestor) const
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

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::P2PPrimaryPaths()
    :
    	name{YType::str, "name"}
    	,
    admin_groups(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups>())
	,candidate_secondary_paths(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths>())
	,config(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config>())
	,state(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State>())
{
    admin_groups->parent = this;
    children["admin-groups"] = admin_groups.get();

    candidate_secondary_paths->parent = this;
    children["candidate-secondary-paths"] = candidate_secondary_paths.get();

    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "p2p-primary-paths"; yang_parent_name = "p2p-tunnel-attributes";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::~P2PPrimaryPaths()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::has_data() const
{
    return name.is_set
	|| (admin_groups !=  nullptr && admin_groups->has_data())
	|| (candidate_secondary_paths !=  nullptr && candidate_secondary_paths->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (admin_groups !=  nullptr && is_set(admin_groups->operation))
	|| (candidate_secondary_paths !=  nullptr && is_set(candidate_secondary_paths->operation))
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-primary-paths" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admin-groups")
    {
        if(admin_groups != nullptr)
        {
            children["admin-groups"] = admin_groups.get();
        }
        else
        {
            admin_groups = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups>();
            admin_groups->parent = this;
            children["admin-groups"] = admin_groups.get();
        }
        return children.at("admin-groups");
    }

    if(child_yang_name == "candidate-secondary-paths")
    {
        if(candidate_secondary_paths != nullptr)
        {
            children["candidate-secondary-paths"] = candidate_secondary_paths.get();
        }
        else
        {
            candidate_secondary_paths = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths>();
            candidate_secondary_paths->parent = this;
            children["candidate-secondary-paths"] = candidate_secondary_paths.get();
        }
        return children.at("candidate-secondary-paths");
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::get_children()
{
    if(children.find("admin-groups") == children.end())
    {
        if(admin_groups != nullptr)
        {
            children["admin-groups"] = admin_groups.get();
        }
    }

    if(children.find("candidate-secondary-paths") == children.end())
    {
        if(candidate_secondary_paths != nullptr)
        {
            children["candidate-secondary-paths"] = candidate_secondary_paths.get();
        }
    }

    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::Config()
    :
    	cspf_tiebreaker{YType::enumeration, "cspf-tiebreaker"},
	 explicit_path_name{YType::str, "explicit-path-name"},
	 hold_priority{YType::uint8, "hold-priority"},
	 name{YType::str, "name"},
	 path_computation_method{YType::identityref, "path-computation-method"},
	 path_computation_server{YType::str, "path-computation-server"},
	 preference{YType::uint8, "preference"},
	 retry_timer{YType::uint16, "retry-timer"},
	 setup_priority{YType::uint8, "setup-priority"},
	 use_cspf{YType::boolean, "use-cspf"}
{
    yang_name = "config"; yang_parent_name = "p2p-secondary-paths";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::has_data() const
{
    return cspf_tiebreaker.is_set
	|| explicit_path_name.is_set
	|| hold_priority.is_set
	|| name.is_set
	|| path_computation_method.is_set
	|| path_computation_server.is_set
	|| preference.is_set
	|| retry_timer.is_set
	|| setup_priority.is_set
	|| use_cspf.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(cspf_tiebreaker.operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(hold_priority.operation)
	|| is_set(name.operation)
	|| is_set(path_computation_method.operation)
	|| is_set(path_computation_server.operation)
	|| is_set(preference.operation)
	|| is_set(retry_timer.operation)
	|| is_set(setup_priority.operation)
	|| is_set(use_cspf.operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::get_entity_path(Entity* ancestor) const
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

    if (cspf_tiebreaker.is_set || is_set(cspf_tiebreaker.operation)) leaf_name_data.push_back(cspf_tiebreaker.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path_computation_method.is_set || is_set(path_computation_method.operation)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.operation)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());
    if (preference.is_set || is_set(preference.operation)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.operation)) leaf_name_data.push_back(retry_timer.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (use_cspf.is_set || is_set(use_cspf.operation)) leaf_name_data.push_back(use_cspf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker = value;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method = value;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
    }
    if(value_path == "preference")
    {
        preference = value;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "use-cspf")
    {
        use_cspf = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::State()
    :
    	cspf_tiebreaker{YType::enumeration, "cspf-tiebreaker"},
	 explicit_path_name{YType::str, "explicit-path-name"},
	 hold_priority{YType::uint8, "hold-priority"},
	 name{YType::str, "name"},
	 path_computation_method{YType::identityref, "path-computation-method"},
	 path_computation_server{YType::str, "path-computation-server"},
	 preference{YType::uint8, "preference"},
	 retry_timer{YType::uint16, "retry-timer"},
	 setup_priority{YType::uint8, "setup-priority"},
	 use_cspf{YType::boolean, "use-cspf"}
{
    yang_name = "state"; yang_parent_name = "p2p-secondary-paths";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::has_data() const
{
    return cspf_tiebreaker.is_set
	|| explicit_path_name.is_set
	|| hold_priority.is_set
	|| name.is_set
	|| path_computation_method.is_set
	|| path_computation_server.is_set
	|| preference.is_set
	|| retry_timer.is_set
	|| setup_priority.is_set
	|| use_cspf.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::has_operation() const
{
    return is_set(operation)
	|| is_set(cspf_tiebreaker.operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(hold_priority.operation)
	|| is_set(name.operation)
	|| is_set(path_computation_method.operation)
	|| is_set(path_computation_server.operation)
	|| is_set(preference.operation)
	|| is_set(retry_timer.operation)
	|| is_set(setup_priority.operation)
	|| is_set(use_cspf.operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::get_entity_path(Entity* ancestor) const
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

    if (cspf_tiebreaker.is_set || is_set(cspf_tiebreaker.operation)) leaf_name_data.push_back(cspf_tiebreaker.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path_computation_method.is_set || is_set(path_computation_method.operation)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.operation)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());
    if (preference.is_set || is_set(preference.operation)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.operation)) leaf_name_data.push_back(retry_timer.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (use_cspf.is_set || is_set(use_cspf.operation)) leaf_name_data.push_back(use_cspf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker = value;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method = value;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
    }
    if(value_path == "preference")
    {
        preference = value;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "use-cspf")
    {
        use_cspf = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::Config()
    :
    	exclude_group{YType::str, "exclude-group"},
	 include_all_group{YType::str, "include-all-group"},
	 include_any_group{YType::str, "include-any-group"}
{
    yang_name = "config"; yang_parent_name = "admin-groups";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::has_data() const
{
    for (auto const & leaf : exclude_group.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_all_group.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_any_group.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::has_operation() const
{
    for (auto const & leaf : exclude_group.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : include_all_group.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : include_any_group.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::get_entity_path(Entity* ancestor) const
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


    auto exclude_group_name_datas = exclude_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exclude_group_name_datas.begin(), exclude_group_name_datas.end());
    auto include_all_group_name_datas = include_all_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_all_group_name_datas.begin(), include_all_group_name_datas.end());
    auto include_any_group_name_datas = include_any_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_any_group_name_datas.begin(), include_any_group_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclude-group")
    {
        exclude_group.append(value);
    }
    if(value_path == "include-all-group")
    {
        include_all_group.append(value);
    }
    if(value_path == "include-any-group")
    {
        include_any_group.append(value);
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::State()
    :
    	exclude_group{YType::str, "exclude-group"},
	 include_all_group{YType::str, "include-all-group"},
	 include_any_group{YType::str, "include-any-group"}
{
    yang_name = "state"; yang_parent_name = "admin-groups";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::has_data() const
{
    for (auto const & leaf : exclude_group.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_all_group.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_any_group.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::has_operation() const
{
    for (auto const & leaf : exclude_group.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : include_all_group.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : include_any_group.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::get_entity_path(Entity* ancestor) const
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


    auto exclude_group_name_datas = exclude_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exclude_group_name_datas.begin(), exclude_group_name_datas.end());
    auto include_all_group_name_datas = include_all_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_all_group_name_datas.begin(), include_all_group_name_datas.end());
    auto include_any_group_name_datas = include_any_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_any_group_name_datas.begin(), include_any_group_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::get_children()
{
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclude-group")
    {
        exclude_group.append(value);
    }
    if(value_path == "include-all-group")
    {
        include_all_group.append(value);
    }
    if(value_path == "include-any-group")
    {
        include_any_group.append(value);
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::AdminGroups()
    :
    config(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config>())
	,state(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "admin-groups"; yang_parent_name = "p2p-secondary-paths";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::~AdminGroups()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-groups";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::get_entity_path(Entity* ancestor) const
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

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::P2PSecondaryPaths()
    :
    	name{YType::str, "name"}
    	,
    admin_groups(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups>())
	,config(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config>())
	,state(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State>())
{
    admin_groups->parent = this;
    children["admin-groups"] = admin_groups.get();

    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "p2p-secondary-paths"; yang_parent_name = "p2p-tunnel-attributes";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::~P2PSecondaryPaths()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::has_data() const
{
    return name.is_set
	|| (admin_groups !=  nullptr && admin_groups->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (admin_groups !=  nullptr && is_set(admin_groups->operation))
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-secondary-paths" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admin-groups")
    {
        if(admin_groups != nullptr)
        {
            children["admin-groups"] = admin_groups.get();
        }
        else
        {
            admin_groups = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups>();
            admin_groups->parent = this;
            children["admin-groups"] = admin_groups.get();
        }
        return children.at("admin-groups");
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::get_children()
{
    if(children.find("admin-groups") == children.end())
    {
        if(admin_groups != nullptr)
        {
            children["admin-groups"] = admin_groups.get();
        }
    }

    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PTunnelAttributes()
    :
    config(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config>())
	,state(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "p2p-tunnel-attributes"; yang_parent_name = "tunnel";
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::~P2PTunnelAttributes()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::has_data() const
{
    for (std::size_t index=0; index<p2p_primary_paths.size(); index++)
    {
        if(p2p_primary_paths[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<p2p_secondary_paths.size(); index++)
    {
        if(p2p_secondary_paths[index]->has_data())
            return true;
    }
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::has_operation() const
{
    for (std::size_t index=0; index<p2p_primary_paths.size(); index++)
    {
        if(p2p_primary_paths[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<p2p_secondary_paths.size(); index++)
    {
        if(p2p_secondary_paths[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-tunnel-attributes";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::get_entity_path(Entity* ancestor) const
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

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "p2p-primary-paths")
    {
        for(auto const & c : p2p_primary_paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths>();
        c->parent = this;
        p2p_primary_paths.push_back(std::move(c));
        children[segment_path] = p2p_primary_paths.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "p2p-secondary-paths")
    {
        for(auto const & c : p2p_secondary_paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths>();
        c->parent = this;
        p2p_secondary_paths.push_back(std::move(c));
        children[segment_path] = p2p_secondary_paths.back().get();
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
            state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    for (auto const & c : p2p_primary_paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : p2p_secondary_paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::ConstrainedPath::Tunnel::Tunnel()
    :
    	name{YType::str, "name"},
	 type{YType::identityref, "type"}
    	,
    bandwidth(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth>())
	,config(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Config>())
	,p2p_tunnel_attributes(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes>())
	,state(std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::State>())
{
    bandwidth->parent = this;
    children["bandwidth"] = bandwidth.get();

    config->parent = this;
    children["config"] = config.get();

    p2p_tunnel_attributes->parent = this;
    children["p2p-tunnel-attributes"] = p2p_tunnel_attributes.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "tunnel"; yang_parent_name = "constrained-path";
}

Mpls::Lsps::ConstrainedPath::Tunnel::~Tunnel()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::has_data() const
{
    return name.is_set
	|| type.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (p2p_tunnel_attributes !=  nullptr && p2p_tunnel_attributes->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(type.operation)
	|| (bandwidth !=  nullptr && is_set(bandwidth->operation))
	|| (config !=  nullptr && is_set(config->operation))
	|| (p2p_tunnel_attributes !=  nullptr && is_set(p2p_tunnel_attributes->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[name='" <<name.get() <<"']" <<"[type='" <<type.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/lsps/constrained-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
        else
        {
            bandwidth = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth.get();
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "p2p-tunnel-attributes")
    {
        if(p2p_tunnel_attributes != nullptr)
        {
            children["p2p-tunnel-attributes"] = p2p_tunnel_attributes.get();
        }
        else
        {
            p2p_tunnel_attributes = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes>();
            p2p_tunnel_attributes->parent = this;
            children["p2p-tunnel-attributes"] = p2p_tunnel_attributes.get();
        }
        return children.at("p2p-tunnel-attributes");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::Tunnel::get_children()
{
    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
    }

    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("p2p-tunnel-attributes") == children.end())
    {
        if(p2p_tunnel_attributes != nullptr)
        {
            children["p2p-tunnel-attributes"] = p2p_tunnel_attributes.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Mpls::Lsps::ConstrainedPath::ConstrainedPath()
{
    yang_name = "constrained-path"; yang_parent_name = "lsps";
}

Mpls::Lsps::ConstrainedPath::~ConstrainedPath()
{
}

bool Mpls::Lsps::ConstrainedPath::has_data() const
{
    for (std::size_t index=0; index<named_explicit_paths.size(); index++)
    {
        if(named_explicit_paths[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::has_operation() const
{
    for (std::size_t index=0; index<named_explicit_paths.size(); index++)
    {
        if(named_explicit_paths[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mpls::Lsps::ConstrainedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constrained-path";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::ConstrainedPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/lsps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::ConstrainedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-explicit-paths")
    {
        for(auto const & c : named_explicit_paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths>();
        c->parent = this;
        named_explicit_paths.push_back(std::move(c));
        children[segment_path] = named_explicit_paths.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel>();
        c->parent = this;
        tunnel.push_back(std::move(c));
        children[segment_path] = tunnel.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::ConstrainedPath::get_children()
{
    for (auto const & c : named_explicit_paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::P2PLsp()
    :
    	fec_address{YType::str, "fec-address"}
{
    yang_name = "p2p-lsp"; yang_parent_name = "tunnel";
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::~P2PLsp()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::has_data() const
{
    for (auto const & leaf : fec_address.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::has_operation() const
{
    for (auto const & leaf : fec_address.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation);
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-lsp";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/ldp/tunnel/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto fec_address_name_datas = fec_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fec_address_name_datas.begin(), fec_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::get_children()
{
    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-address")
    {
        fec_address.append(value);
    }
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::P2MpLsp()
{
    yang_name = "p2mp-lsp"; yang_parent_name = "tunnel";
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::~P2MpLsp()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::has_data() const
{
    return false;
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::has_operation() const
{
    return is_set(operation);
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-lsp";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/ldp/tunnel/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::get_children()
{
    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::Mp2MpLsp()
{
    yang_name = "mp2mp-lsp"; yang_parent_name = "tunnel";
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::~Mp2MpLsp()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::has_data() const
{
    return false;
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::has_operation() const
{
    return is_set(operation);
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-lsp";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/ldp/tunnel/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::get_children()
{
    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Tunnel()
    :
    	ldp_type{YType::enumeration, "ldp-type"},
	 tunnel_type{YType::enumeration, "tunnel-type"}
    	,
    mp2mp_lsp(std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp>())
	,p2mp_lsp(std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp>())
	,p2p_lsp(std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp>())
{
    mp2mp_lsp->parent = this;
    children["mp2mp-lsp"] = mp2mp_lsp.get();

    p2mp_lsp->parent = this;
    children["p2mp-lsp"] = p2mp_lsp.get();

    p2p_lsp->parent = this;
    children["p2p-lsp"] = p2p_lsp.get();

    yang_name = "tunnel"; yang_parent_name = "ldp";
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::~Tunnel()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::has_data() const
{
    return ldp_type.is_set
	|| tunnel_type.is_set
	|| (mp2mp_lsp !=  nullptr && mp2mp_lsp->has_data())
	|| (p2mp_lsp !=  nullptr && p2mp_lsp->has_data())
	|| (p2p_lsp !=  nullptr && p2p_lsp->has_data());
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(ldp_type.operation)
	|| is_set(tunnel_type.operation)
	|| (mp2mp_lsp !=  nullptr && is_set(mp2mp_lsp->operation))
	|| (p2mp_lsp !=  nullptr && is_set(p2mp_lsp->operation))
	|| (p2p_lsp !=  nullptr && is_set(p2p_lsp->operation));
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/ldp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp_type.is_set || is_set(ldp_type.operation)) leaf_name_data.push_back(ldp_type.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.operation)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mp2mp-lsp")
    {
        if(mp2mp_lsp != nullptr)
        {
            children["mp2mp-lsp"] = mp2mp_lsp.get();
        }
        else
        {
            mp2mp_lsp = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp>();
            mp2mp_lsp->parent = this;
            children["mp2mp-lsp"] = mp2mp_lsp.get();
        }
        return children.at("mp2mp-lsp");
    }

    if(child_yang_name == "p2mp-lsp")
    {
        if(p2mp_lsp != nullptr)
        {
            children["p2mp-lsp"] = p2mp_lsp.get();
        }
        else
        {
            p2mp_lsp = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp>();
            p2mp_lsp->parent = this;
            children["p2mp-lsp"] = p2mp_lsp.get();
        }
        return children.at("p2mp-lsp");
    }

    if(child_yang_name == "p2p-lsp")
    {
        if(p2p_lsp != nullptr)
        {
            children["p2p-lsp"] = p2p_lsp.get();
        }
        else
        {
            p2p_lsp = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp>();
            p2p_lsp->parent = this;
            children["p2p-lsp"] = p2p_lsp.get();
        }
        return children.at("p2p-lsp");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::get_children()
{
    if(children.find("mp2mp-lsp") == children.end())
    {
        if(mp2mp_lsp != nullptr)
        {
            children["mp2mp-lsp"] = mp2mp_lsp.get();
        }
    }

    if(children.find("p2mp-lsp") == children.end())
    {
        if(p2mp_lsp != nullptr)
        {
            children["p2mp-lsp"] = p2mp_lsp.get();
        }
    }

    if(children.find("p2p-lsp") == children.end())
    {
        if(p2p_lsp != nullptr)
        {
            children["p2p-lsp"] = p2p_lsp.get();
        }
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ldp-type")
    {
        ldp_type = value;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
    }
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Ldp()
    :
    tunnel(std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel>())
{
    tunnel->parent = this;
    children["tunnel"] = tunnel.get();

    yang_name = "ldp"; yang_parent_name = "path-setup-protocol";
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::~Ldp()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::has_data() const
{
    return (tunnel !=  nullptr && tunnel->has_data());
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::has_operation() const
{
    return is_set(operation)
	|| (tunnel !=  nullptr && is_set(tunnel->operation));
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel != nullptr)
        {
            children["tunnel"] = tunnel.get();
        }
        else
        {
            tunnel = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel>();
            tunnel->parent = this;
            children["tunnel"] = tunnel.get();
        }
        return children.at("tunnel");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::get_children()
{
    if(children.find("tunnel") == children.end())
    {
        if(tunnel != nullptr)
        {
            children["tunnel"] = tunnel.get();
        }
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::Config()
    :
    	fec_address{YType::str, "fec-address"}
{
    yang_name = "config"; yang_parent_name = "fec";
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::~Config()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::has_data() const
{
    return fec_address.is_set;
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_address.operation);
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::get_entity_path(Entity* ancestor) const
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

    if (fec_address.is_set || is_set(fec_address.operation)) leaf_name_data.push_back(fec_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::get_children()
{
    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-address")
    {
        fec_address = value;
    }
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::State()
    :
    	fec_address{YType::str, "fec-address"}
{
    yang_name = "state"; yang_parent_name = "fec";
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::~State()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::has_data() const
{
    return fec_address.is_set;
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_address.operation);
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::get_entity_path(Entity* ancestor) const
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

    if (fec_address.is_set || is_set(fec_address.operation)) leaf_name_data.push_back(fec_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::get_children()
{
    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-address")
    {
        fec_address = value;
    }
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::Config()
    :
    	last_hop_behavior{YType::enumeration, "last-hop-behavior"},
	 node_flag{YType::boolean, "node-flag"},
	 type{YType::enumeration, "type"}
{
    yang_name = "config"; yang_parent_name = "prefix-sid";
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::~Config()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::has_data() const
{
    return last_hop_behavior.is_set
	|| node_flag.is_set
	|| type.is_set;
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(last_hop_behavior.operation)
	|| is_set(node_flag.operation)
	|| is_set(type.operation);
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::get_entity_path(Entity* ancestor) const
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

    if (last_hop_behavior.is_set || is_set(last_hop_behavior.operation)) leaf_name_data.push_back(last_hop_behavior.get_name_leafdata());
    if (node_flag.is_set || is_set(node_flag.operation)) leaf_name_data.push_back(node_flag.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::get_children()
{
    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-hop-behavior")
    {
        last_hop_behavior = value;
    }
    if(value_path == "node-flag")
    {
        node_flag = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::State()
    :
    	last_hop_behavior{YType::enumeration, "last-hop-behavior"},
	 node_flag{YType::boolean, "node-flag"},
	 type{YType::enumeration, "type"}
{
    yang_name = "state"; yang_parent_name = "prefix-sid";
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::~State()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::has_data() const
{
    return last_hop_behavior.is_set
	|| node_flag.is_set
	|| type.is_set;
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::has_operation() const
{
    return is_set(operation)
	|| is_set(last_hop_behavior.operation)
	|| is_set(node_flag.operation)
	|| is_set(type.operation);
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::get_entity_path(Entity* ancestor) const
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

    if (last_hop_behavior.is_set || is_set(last_hop_behavior.operation)) leaf_name_data.push_back(last_hop_behavior.get_name_leafdata());
    if (node_flag.is_set || is_set(node_flag.operation)) leaf_name_data.push_back(node_flag.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::get_children()
{
    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-hop-behavior")
    {
        last_hop_behavior = value;
    }
    if(value_path == "node-flag")
    {
        node_flag = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::PrefixSid()
    :
    config(std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config>())
	,state(std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "prefix-sid"; yang_parent_name = "fec";
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::~PrefixSid()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::get_entity_path(Entity* ancestor) const
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

Entity* Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Fec()
    :
    	fec_address{YType::str, "fec-address"}
    	,
    config(std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config>())
	,prefix_sid(std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid>())
	,state(std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State>())
{
    config->parent = this;
    children["config"] = config.get();

    prefix_sid->parent = this;
    children["prefix-sid"] = prefix_sid.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "fec"; yang_parent_name = "p2p-lsp";
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::~Fec()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::has_data() const
{
    return fec_address.is_set
	|| (config !=  nullptr && config->has_data())
	|| (prefix_sid !=  nullptr && prefix_sid->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_address.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (prefix_sid !=  nullptr && is_set(prefix_sid->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec" <<"[fec-address='" <<fec_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/segment-routing/tunnel/p2p-lsp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_address.is_set || is_set(fec_address.operation)) leaf_name_data.push_back(fec_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "prefix-sid")
    {
        if(prefix_sid != nullptr)
        {
            children["prefix-sid"] = prefix_sid.get();
        }
        else
        {
            prefix_sid = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid>();
            prefix_sid->parent = this;
            children["prefix-sid"] = prefix_sid.get();
        }
        return children.at("prefix-sid");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("prefix-sid") == children.end())
    {
        if(prefix_sid != nullptr)
        {
            children["prefix-sid"] = prefix_sid.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-address")
    {
        fec_address = value;
    }
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::P2PLsp()
{
    yang_name = "p2p-lsp"; yang_parent_name = "tunnel";
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::~P2PLsp()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::has_data() const
{
    for (std::size_t index=0; index<fec.size(); index++)
    {
        if(fec[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::has_operation() const
{
    for (std::size_t index=0; index<fec.size(); index++)
    {
        if(fec[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-lsp";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/segment-routing/tunnel/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec")
    {
        for(auto const & c : fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec>();
        c->parent = this;
        fec.push_back(std::move(c));
        children[segment_path] = fec.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::get_children()
{
    for (auto const & c : fec)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::Tunnel()
    :
    	tunnel_type{YType::enumeration, "tunnel-type"}
    	,
    p2p_lsp(std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp>())
{
    p2p_lsp->parent = this;
    children["p2p-lsp"] = p2p_lsp.get();

    yang_name = "tunnel"; yang_parent_name = "segment-routing";
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::~Tunnel()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::has_data() const
{
    return tunnel_type.is_set
	|| (p2p_lsp !=  nullptr && p2p_lsp->has_data());
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_type.operation)
	|| (p2p_lsp !=  nullptr && is_set(p2p_lsp->operation));
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/segment-routing/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_type.is_set || is_set(tunnel_type.operation)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "p2p-lsp")
    {
        if(p2p_lsp != nullptr)
        {
            children["p2p-lsp"] = p2p_lsp.get();
        }
        else
        {
            p2p_lsp = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp>();
            p2p_lsp->parent = this;
            children["p2p-lsp"] = p2p_lsp.get();
        }
        return children.at("p2p-lsp");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::get_children()
{
    if(children.find("p2p-lsp") == children.end())
    {
        if(p2p_lsp != nullptr)
        {
            children["p2p-lsp"] = p2p_lsp.get();
        }
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
    }
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::SegmentRouting()
    :
    tunnel(std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel>())
{
    tunnel->parent = this;
    children["tunnel"] = tunnel.get();

    yang_name = "segment-routing"; yang_parent_name = "path-setup-protocol";
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::~SegmentRouting()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::has_data() const
{
    return (tunnel !=  nullptr && tunnel->has_data());
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::has_operation() const
{
    return is_set(operation)
	|| (tunnel !=  nullptr && is_set(tunnel->operation));
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel != nullptr)
        {
            children["tunnel"] = tunnel.get();
        }
        else
        {
            tunnel = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel>();
            tunnel->parent = this;
            children["tunnel"] = tunnel.get();
        }
        return children.at("tunnel");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::get_children()
{
    if(children.find("tunnel") == children.end())
    {
        if(tunnel != nullptr)
        {
            children["tunnel"] = tunnel.get();
        }
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::PathSetupProtocol()
    :
    ldp(nullptr) // presence node
	,segment_routing(nullptr) // presence node
{
    yang_name = "path-setup-protocol"; yang_parent_name = "unconstrained-path";
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::~PathSetupProtocol()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::has_data() const
{
    return (ldp !=  nullptr && ldp->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::has_operation() const
{
    return is_set(operation)
	|| (ldp !=  nullptr && is_set(ldp->operation))
	|| (segment_routing !=  nullptr && is_set(segment_routing->operation));
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-setup-protocol";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ldp")
    {
        if(ldp != nullptr)
        {
            children["ldp"] = ldp.get();
        }
        else
        {
            ldp = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp>();
            ldp->parent = this;
            children["ldp"] = ldp.get();
        }
        return children.at("ldp");
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing != nullptr)
        {
            children["segment-routing"] = segment_routing.get();
        }
        else
        {
            segment_routing = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting>();
            segment_routing->parent = this;
            children["segment-routing"] = segment_routing.get();
        }
        return children.at("segment-routing");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::get_children()
{
    if(children.find("ldp") == children.end())
    {
        if(ldp != nullptr)
        {
            children["ldp"] = ldp.get();
        }
    }

    if(children.find("segment-routing") == children.end())
    {
        if(segment_routing != nullptr)
        {
            children["segment-routing"] = segment_routing.get();
        }
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::UnconstrainedPath::UnconstrainedPath()
    :
    path_setup_protocol(std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol>())
{
    path_setup_protocol->parent = this;
    children["path-setup-protocol"] = path_setup_protocol.get();

    yang_name = "unconstrained-path"; yang_parent_name = "lsps";
}

Mpls::Lsps::UnconstrainedPath::~UnconstrainedPath()
{
}

bool Mpls::Lsps::UnconstrainedPath::has_data() const
{
    return (path_setup_protocol !=  nullptr && path_setup_protocol->has_data());
}

bool Mpls::Lsps::UnconstrainedPath::has_operation() const
{
    return is_set(operation)
	|| (path_setup_protocol !=  nullptr && is_set(path_setup_protocol->operation));
}

std::string Mpls::Lsps::UnconstrainedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unconstrained-path";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::UnconstrainedPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/lsps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::UnconstrainedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-setup-protocol")
    {
        if(path_setup_protocol != nullptr)
        {
            children["path-setup-protocol"] = path_setup_protocol.get();
        }
        else
        {
            path_setup_protocol = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol>();
            path_setup_protocol->parent = this;
            children["path-setup-protocol"] = path_setup_protocol.get();
        }
        return children.at("path-setup-protocol");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::UnconstrainedPath::get_children()
{
    if(children.find("path-setup-protocol") == children.end())
    {
        if(path_setup_protocol != nullptr)
        {
            children["path-setup-protocol"] = path_setup_protocol.get();
        }
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::Ingress()
    :
    	incoming_label{YType::str, "incoming-label"},
	 next_hop{YType::str, "next-hop"},
	 push_label{YType::str, "push-label"}
{
    yang_name = "ingress"; yang_parent_name = "label-switched-path";
}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::~Ingress()
{
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::has_data() const
{
    return incoming_label.is_set
	|| next_hop.is_set
	|| push_label.is_set;
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::has_operation() const
{
    return is_set(operation)
	|| is_set(incoming_label.operation)
	|| is_set(next_hop.operation)
	|| is_set(push_label.operation);
}

std::string Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::get_entity_path(Entity* ancestor) const
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

    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (push_label.is_set || is_set(push_label.operation)) leaf_name_data.push_back(push_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::get_children()
{
    return children;
}

void Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "push-label")
    {
        push_label = value;
    }
}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::Transit()
    :
    	incoming_label{YType::str, "incoming-label"},
	 next_hop{YType::str, "next-hop"},
	 push_label{YType::str, "push-label"}
{
    yang_name = "transit"; yang_parent_name = "label-switched-path";
}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::~Transit()
{
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::has_data() const
{
    return incoming_label.is_set
	|| next_hop.is_set
	|| push_label.is_set;
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::has_operation() const
{
    return is_set(operation)
	|| is_set(incoming_label.operation)
	|| is_set(next_hop.operation)
	|| is_set(push_label.operation);
}

std::string Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transit";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::get_entity_path(Entity* ancestor) const
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

    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (push_label.is_set || is_set(push_label.operation)) leaf_name_data.push_back(push_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::get_children()
{
    return children;
}

void Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "push-label")
    {
        push_label = value;
    }
}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::Egress()
    :
    	incoming_label{YType::str, "incoming-label"},
	 next_hop{YType::str, "next-hop"},
	 push_label{YType::str, "push-label"}
{
    yang_name = "egress"; yang_parent_name = "label-switched-path";
}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::~Egress()
{
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::has_data() const
{
    return incoming_label.is_set
	|| next_hop.is_set
	|| push_label.is_set;
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::has_operation() const
{
    return is_set(operation)
	|| is_set(incoming_label.operation)
	|| is_set(next_hop.operation)
	|| is_set(push_label.operation);
}

std::string Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::get_entity_path(Entity* ancestor) const
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

    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (push_label.is_set || is_set(push_label.operation)) leaf_name_data.push_back(push_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::get_children()
{
    return children;
}

void Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "push-label")
    {
        push_label = value;
    }
}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::LabelSwitchedPath()
    :
    	name{YType::str, "name"}
    	,
    egress(std::make_unique<Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress>())
	,ingress(std::make_unique<Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress>())
	,transit(std::make_unique<Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit>())
{
    egress->parent = this;
    children["egress"] = egress.get();

    ingress->parent = this;
    children["ingress"] = ingress.get();

    transit->parent = this;
    children["transit"] = transit.get();

    yang_name = "label-switched-path"; yang_parent_name = "static-lsps";
}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::~LabelSwitchedPath()
{
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::has_data() const
{
    return name.is_set
	|| (egress !=  nullptr && egress->has_data())
	|| (ingress !=  nullptr && ingress->has_data())
	|| (transit !=  nullptr && transit->has_data());
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (egress !=  nullptr && is_set(egress->operation))
	|| (ingress !=  nullptr && is_set(ingress->operation))
	|| (transit !=  nullptr && is_set(transit->operation));
}

std::string Mpls::Lsps::StaticLsps::LabelSwitchedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-switched-path" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::StaticLsps::LabelSwitchedPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/lsps/static-lsps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::StaticLsps::LabelSwitchedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "egress")
    {
        if(egress != nullptr)
        {
            children["egress"] = egress.get();
        }
        else
        {
            egress = std::make_unique<Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress>();
            egress->parent = this;
            children["egress"] = egress.get();
        }
        return children.at("egress");
    }

    if(child_yang_name == "ingress")
    {
        if(ingress != nullptr)
        {
            children["ingress"] = ingress.get();
        }
        else
        {
            ingress = std::make_unique<Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress>();
            ingress->parent = this;
            children["ingress"] = ingress.get();
        }
        return children.at("ingress");
    }

    if(child_yang_name == "transit")
    {
        if(transit != nullptr)
        {
            children["transit"] = transit.get();
        }
        else
        {
            transit = std::make_unique<Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit>();
            transit->parent = this;
            children["transit"] = transit.get();
        }
        return children.at("transit");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::StaticLsps::LabelSwitchedPath::get_children()
{
    if(children.find("egress") == children.end())
    {
        if(egress != nullptr)
        {
            children["egress"] = egress.get();
        }
    }

    if(children.find("ingress") == children.end())
    {
        if(ingress != nullptr)
        {
            children["ingress"] = ingress.get();
        }
    }

    if(children.find("transit") == children.end())
    {
        if(transit != nullptr)
        {
            children["transit"] = transit.get();
        }
    }

    return children;
}

void Mpls::Lsps::StaticLsps::LabelSwitchedPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Mpls::Lsps::StaticLsps::StaticLsps()
{
    yang_name = "static-lsps"; yang_parent_name = "lsps";
}

Mpls::Lsps::StaticLsps::~StaticLsps()
{
}

bool Mpls::Lsps::StaticLsps::has_data() const
{
    for (std::size_t index=0; index<label_switched_path.size(); index++)
    {
        if(label_switched_path[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Lsps::StaticLsps::has_operation() const
{
    for (std::size_t index=0; index<label_switched_path.size(); index++)
    {
        if(label_switched_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mpls::Lsps::StaticLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-lsps";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::StaticLsps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/lsps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::StaticLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-switched-path")
    {
        for(auto const & c : label_switched_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mpls::Lsps::StaticLsps::LabelSwitchedPath>();
        c->parent = this;
        label_switched_path.push_back(std::move(c));
        children[segment_path] = label_switched_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::StaticLsps::get_children()
{
    for (auto const & c : label_switched_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Mpls::Lsps::StaticLsps::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Lsps::Lsps()
    :
    constrained_path(std::make_unique<Mpls::Lsps::ConstrainedPath>())
	,static_lsps(std::make_unique<Mpls::Lsps::StaticLsps>())
	,unconstrained_path(std::make_unique<Mpls::Lsps::UnconstrainedPath>())
{
    constrained_path->parent = this;
    children["constrained-path"] = constrained_path.get();

    static_lsps->parent = this;
    children["static-lsps"] = static_lsps.get();

    unconstrained_path->parent = this;
    children["unconstrained-path"] = unconstrained_path.get();

    yang_name = "lsps"; yang_parent_name = "mpls";
}

Mpls::Lsps::~Lsps()
{
}

bool Mpls::Lsps::has_data() const
{
    return (constrained_path !=  nullptr && constrained_path->has_data())
	|| (static_lsps !=  nullptr && static_lsps->has_data())
	|| (unconstrained_path !=  nullptr && unconstrained_path->has_data());
}

bool Mpls::Lsps::has_operation() const
{
    return is_set(operation)
	|| (constrained_path !=  nullptr && is_set(constrained_path->operation))
	|| (static_lsps !=  nullptr && is_set(static_lsps->operation))
	|| (unconstrained_path !=  nullptr && is_set(unconstrained_path->operation));
}

std::string Mpls::Lsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsps";

    return path_buffer.str();

}

EntityPath Mpls::Lsps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-mpls:mpls/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mpls::Lsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "constrained-path")
    {
        if(constrained_path != nullptr)
        {
            children["constrained-path"] = constrained_path.get();
        }
        else
        {
            constrained_path = std::make_unique<Mpls::Lsps::ConstrainedPath>();
            constrained_path->parent = this;
            children["constrained-path"] = constrained_path.get();
        }
        return children.at("constrained-path");
    }

    if(child_yang_name == "static-lsps")
    {
        if(static_lsps != nullptr)
        {
            children["static-lsps"] = static_lsps.get();
        }
        else
        {
            static_lsps = std::make_unique<Mpls::Lsps::StaticLsps>();
            static_lsps->parent = this;
            children["static-lsps"] = static_lsps.get();
        }
        return children.at("static-lsps");
    }

    if(child_yang_name == "unconstrained-path")
    {
        if(unconstrained_path != nullptr)
        {
            children["unconstrained-path"] = unconstrained_path.get();
        }
        else
        {
            unconstrained_path = std::make_unique<Mpls::Lsps::UnconstrainedPath>();
            unconstrained_path->parent = this;
            children["unconstrained-path"] = unconstrained_path.get();
        }
        return children.at("unconstrained-path");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::Lsps::get_children()
{
    if(children.find("constrained-path") == children.end())
    {
        if(constrained_path != nullptr)
        {
            children["constrained-path"] = constrained_path.get();
        }
    }

    if(children.find("static-lsps") == children.end())
    {
        if(static_lsps != nullptr)
        {
            children["static-lsps"] = static_lsps.get();
        }
    }

    if(children.find("unconstrained-path") == children.end())
    {
        if(unconstrained_path != nullptr)
        {
            children["unconstrained-path"] = unconstrained_path.get();
        }
    }

    return children;
}

void Mpls::Lsps::set_value(const std::string & value_path, std::string value)
{
}

Mpls::Mpls()
    :
    global(std::make_unique<Mpls::Global>())
	,lsps(std::make_unique<Mpls::Lsps>())
	,signaling_protocols(std::make_unique<Mpls::SignalingProtocols>())
	,te_global_attributes(std::make_unique<Mpls::TeGlobalAttributes>())
	,te_interface_attributes(std::make_unique<Mpls::TeInterfaceAttributes>())
{
    global->parent = this;
    children["global"] = global.get();

    lsps->parent = this;
    children["lsps"] = lsps.get();

    signaling_protocols->parent = this;
    children["signaling-protocols"] = signaling_protocols.get();

    te_global_attributes->parent = this;
    children["te-global-attributes"] = te_global_attributes.get();

    te_interface_attributes->parent = this;
    children["te-interface-attributes"] = te_interface_attributes.get();

    yang_name = "mpls"; yang_parent_name = "openconfig-mpls";
}

Mpls::~Mpls()
{
}

bool Mpls::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (lsps !=  nullptr && lsps->has_data())
	|| (signaling_protocols !=  nullptr && signaling_protocols->has_data())
	|| (te_global_attributes !=  nullptr && te_global_attributes->has_data())
	|| (te_interface_attributes !=  nullptr && te_interface_attributes->has_data());
}

bool Mpls::has_operation() const
{
    return is_set(operation)
	|| (global !=  nullptr && is_set(global->operation))
	|| (lsps !=  nullptr && is_set(lsps->operation))
	|| (signaling_protocols !=  nullptr && is_set(signaling_protocols->operation))
	|| (te_global_attributes !=  nullptr && is_set(te_global_attributes->operation))
	|| (te_interface_attributes !=  nullptr && is_set(te_interface_attributes->operation));
}

std::string Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls";

    return path_buffer.str();

}

EntityPath Mpls::get_entity_path(Entity* ancestor) const
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

Entity* Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global.get();
        }
        else
        {
            global = std::make_unique<Mpls::Global>();
            global->parent = this;
            children["global"] = global.get();
        }
        return children.at("global");
    }

    if(child_yang_name == "lsps")
    {
        if(lsps != nullptr)
        {
            children["lsps"] = lsps.get();
        }
        else
        {
            lsps = std::make_unique<Mpls::Lsps>();
            lsps->parent = this;
            children["lsps"] = lsps.get();
        }
        return children.at("lsps");
    }

    if(child_yang_name == "signaling-protocols")
    {
        if(signaling_protocols != nullptr)
        {
            children["signaling-protocols"] = signaling_protocols.get();
        }
        else
        {
            signaling_protocols = std::make_unique<Mpls::SignalingProtocols>();
            signaling_protocols->parent = this;
            children["signaling-protocols"] = signaling_protocols.get();
        }
        return children.at("signaling-protocols");
    }

    if(child_yang_name == "te-global-attributes")
    {
        if(te_global_attributes != nullptr)
        {
            children["te-global-attributes"] = te_global_attributes.get();
        }
        else
        {
            te_global_attributes = std::make_unique<Mpls::TeGlobalAttributes>();
            te_global_attributes->parent = this;
            children["te-global-attributes"] = te_global_attributes.get();
        }
        return children.at("te-global-attributes");
    }

    if(child_yang_name == "te-interface-attributes")
    {
        if(te_interface_attributes != nullptr)
        {
            children["te-interface-attributes"] = te_interface_attributes.get();
        }
        else
        {
            te_interface_attributes = std::make_unique<Mpls::TeInterfaceAttributes>();
            te_interface_attributes->parent = this;
            children["te-interface-attributes"] = te_interface_attributes.get();
        }
        return children.at("te-interface-attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mpls::get_children()
{
    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global.get();
        }
    }

    if(children.find("lsps") == children.end())
    {
        if(lsps != nullptr)
        {
            children["lsps"] = lsps.get();
        }
    }

    if(children.find("signaling-protocols") == children.end())
    {
        if(signaling_protocols != nullptr)
        {
            children["signaling-protocols"] = signaling_protocols.get();
        }
    }

    if(children.find("te-global-attributes") == children.end())
    {
        if(te_global_attributes != nullptr)
        {
            children["te-global-attributes"] = te_global_attributes.get();
        }
    }

    if(children.find("te-interface-attributes") == children.end())
    {
        if(te_interface_attributes != nullptr)
        {
            children["te-interface-attributes"] = te_interface_attributes.get();
        }
    }

    return children;
}

void Mpls::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Mpls::clone_ptr()
{
    return std::make_unique<Mpls>();
}
LocallyComputedIdentity::LocallyComputedIdentity()
     : Identity("openconfig-mpls-te:locally-computed")
{
}

LocallyComputedIdentity::~LocallyComputedIdentity()
{
}

ExplicitlyDefinedIdentity::ExplicitlyDefinedIdentity()
     : Identity("openconfig-mpls-te:explicitly-defined")
{
}

ExplicitlyDefinedIdentity::~ExplicitlyDefinedIdentity()
{
}

ExternallyQueriedIdentity::ExternallyQueriedIdentity()
     : Identity("openconfig-mpls-te:externally-queried")
{
}

ExternallyQueriedIdentity::~ExternallyQueriedIdentity()
{
}


const Enum::Value MplsSrlgFloodingTypeEnum::FLOODED_SRLG {0, "FLOODED-SRLG"};
const Enum::Value MplsSrlgFloodingTypeEnum::STATIC_SRLG {1, "STATIC-SRLG"};

const Enum::Value MplsHopTypeEnum::LOOSE {0, "LOOSE"};
const Enum::Value MplsHopTypeEnum::STRICT {1, "STRICT"};

const Enum::Value CspfTieBreakingEnum::RANDOM {0, "RANDOM"};
const Enum::Value CspfTieBreakingEnum::LEAST_FILL {1, "LEAST_FILL"};
const Enum::Value CspfTieBreakingEnum::MOST_FILL {2, "MOST_FILL"};

const Enum::Value TeMetricTypeEnum::IGP {0, "IGP"};

const Enum::Value TeBandwidthTypeEnum::SPECIFIED {0, "SPECIFIED"};
const Enum::Value TeBandwidthTypeEnum::AUTO {1, "AUTO"};

const Enum::Value Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::ThresholdTypeEnum::DELTA {0, "DELTA"};
const Enum::Value Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::ThresholdTypeEnum::THRESHOLD_CROSSED {1, "THRESHOLD-CROSSED"};

const Enum::Value Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::ThresholdSpecificationEnum::MIRRORED_UP_DOWN {0, "MIRRORED-UP-DOWN"};
const Enum::Value Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::ThresholdSpecificationEnum::SEPARATE_UP_DOWN {1, "SEPARATE-UP-DOWN"};

const Enum::Value Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::ThresholdTypeEnum::DELTA {0, "DELTA"};
const Enum::Value Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::ThresholdTypeEnum::THRESHOLD_CROSSED {1, "THRESHOLD-CROSSED"};

const Enum::Value Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::ThresholdSpecificationEnum::MIRRORED_UP_DOWN {0, "MIRRORED-UP-DOWN"};
const Enum::Value Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::ThresholdSpecificationEnum::SEPARATE_UP_DOWN {1, "SEPARATE-UP-DOWN"};

const Enum::Value Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdTypeEnum::DELTA {0, "DELTA"};
const Enum::Value Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdTypeEnum::THRESHOLD_CROSSED {1, "THRESHOLD-CROSSED"};

const Enum::Value Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdSpecificationEnum::MIRRORED_UP_DOWN {0, "MIRRORED-UP-DOWN"};
const Enum::Value Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdSpecificationEnum::SEPARATE_UP_DOWN {1, "SEPARATE-UP-DOWN"};

const Enum::Value Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdTypeEnum::DELTA {0, "DELTA"};
const Enum::Value Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdTypeEnum::THRESHOLD_CROSSED {1, "THRESHOLD-CROSSED"};

const Enum::Value Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdSpecificationEnum::MIRRORED_UP_DOWN {0, "MIRRORED-UP-DOWN"};
const Enum::Value Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdSpecificationEnum::SEPARATE_UP_DOWN {1, "SEPARATE-UP-DOWN"};

const Enum::Value Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::StatusEnum::UP {0, "UP"};
const Enum::Value Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::StatusEnum::DOWN {1, "DOWN"};

const Enum::Value Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::TypeEnum::SOURCE {0, "SOURCE"};
const Enum::Value Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::TypeEnum::TRANSIT {1, "TRANSIT"};
const Enum::Value Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::TypeEnum::DESTINATION {2, "DESTINATION"};

const Enum::Value Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::NeighborStatusEnum::UP {0, "UP"};
const Enum::Value Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::NeighborStatusEnum::DOWN {1, "DOWN"};

const Enum::Value Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::AdvertiseEnum::PROTECTED {0, "PROTECTED"};
const Enum::Value Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::AdvertiseEnum::UNPROTECTED {1, "UNPROTECTED"};

const Enum::Value Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::AdvertiseEnum::PROTECTED {0, "PROTECTED"};
const Enum::Value Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::AdvertiseEnum::UNPROTECTED {1, "UNPROTECTED"};

const Enum::Value Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::LdpTypeEnum::BASIC {0, "BASIC"};
const Enum::Value Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::LdpTypeEnum::TARGETED {1, "TARGETED"};

const Enum::Value Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::TypeEnum::INDEX {0, "INDEX"};
const Enum::Value Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::TypeEnum::ABSOLUTE {1, "ABSOLUTE"};

const Enum::Value Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::LastHopBehaviorEnum::EXPLICIT_NULL {0, "EXPLICIT-NULL"};
const Enum::Value Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::LastHopBehaviorEnum::UNCHANGED {1, "UNCHANGED"};
const Enum::Value Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::LastHopBehaviorEnum::PHP {2, "PHP"};

const Enum::Value Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::TypeEnum::INDEX {0, "INDEX"};
const Enum::Value Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::TypeEnum::ABSOLUTE {1, "ABSOLUTE"};

const Enum::Value Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::LastHopBehaviorEnum::EXPLICIT_NULL {0, "EXPLICIT-NULL"};
const Enum::Value Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::LastHopBehaviorEnum::UNCHANGED {1, "UNCHANGED"};
const Enum::Value Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::LastHopBehaviorEnum::PHP {2, "PHP"};


}
}

