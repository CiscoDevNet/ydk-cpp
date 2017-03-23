
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_lc_fca_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_lc_fca_oper {

MpaInternal::MpaInternal()
    :
    nodes(std::make_shared<MpaInternal::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "mpa-internal"; yang_parent_name = "Cisco-IOS-XR-asr9k-lc-fca-oper";
}

MpaInternal::~MpaInternal()
{
}

bool MpaInternal::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool MpaInternal::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string MpaInternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lc-fca-oper:mpa-internal";

    return path_buffer.str();

}

EntityPath MpaInternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MpaInternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<MpaInternal::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MpaInternal::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    return children;
}

void MpaInternal::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> MpaInternal::clone_ptr() const
{
    return std::make_shared<MpaInternal>();
}

std::string MpaInternal::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MpaInternal::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MpaInternal::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

MpaInternal::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "mpa-internal";
}

MpaInternal::Nodes::~Nodes()
{
}

bool MpaInternal::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool MpaInternal::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MpaInternal::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath MpaInternal::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-lc-fca-oper:mpa-internal/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MpaInternal::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MpaInternal::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MpaInternal::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MpaInternal::Nodes::set_value(const std::string & value_path, std::string value)
{
}

MpaInternal::Nodes::Node::Node()
    :
    node{YType::str, "node"}
{
    yang_name = "node"; yang_parent_name = "nodes";
}

MpaInternal::Nodes::Node::~Node()
{
}

bool MpaInternal::Nodes::Node::has_data() const
{
    for (std::size_t index=0; index<bay.size(); index++)
    {
        if(bay[index]->has_data())
            return true;
    }
    return node.is_set;
}

bool MpaInternal::Nodes::Node::has_operation() const
{
    for (std::size_t index=0; index<bay.size(); index++)
    {
        if(bay[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(node.operation);
}

std::string MpaInternal::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node='" <<node <<"']";

    return path_buffer.str();

}

EntityPath MpaInternal::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-lc-fca-oper:mpa-internal/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.operation)) leaf_name_data.push_back(node.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MpaInternal::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bay")
    {
        for(auto const & c : bay)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MpaInternal::Nodes::Node::Bay>();
        c->parent = this;
        bay.push_back(std::move(c));
        children[segment_path] = bay.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MpaInternal::Nodes::Node::get_children()
{
    for (auto const & c : bay)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MpaInternal::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node")
    {
        node = value;
    }
}

MpaInternal::Nodes::Node::Bay::Bay()
    :
    number{YType::int32, "number"}
    	,
    ifsubsies(std::make_shared<MpaInternal::Nodes::Node::Bay::Ifsubsies>())
{
    ifsubsies->parent = this;
    children["ifsubsies"] = ifsubsies;

    yang_name = "bay"; yang_parent_name = "node";
}

MpaInternal::Nodes::Node::Bay::~Bay()
{
}

bool MpaInternal::Nodes::Node::Bay::has_data() const
{
    return number.is_set
	|| (ifsubsies !=  nullptr && ifsubsies->has_data());
}

bool MpaInternal::Nodes::Node::Bay::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (ifsubsies !=  nullptr && ifsubsies->has_operation());
}

std::string MpaInternal::Nodes::Node::Bay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bay" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath MpaInternal::Nodes::Node::Bay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bay' in Cisco_IOS_XR_asr9k_lc_fca_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MpaInternal::Nodes::Node::Bay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ifsubsies")
    {
        if(ifsubsies != nullptr)
        {
            children["ifsubsies"] = ifsubsies;
        }
        else
        {
            ifsubsies = std::make_shared<MpaInternal::Nodes::Node::Bay::Ifsubsies>();
            ifsubsies->parent = this;
            children["ifsubsies"] = ifsubsies;
        }
        return children.at("ifsubsies");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MpaInternal::Nodes::Node::Bay::get_children()
{
    if(children.find("ifsubsies") == children.end())
    {
        if(ifsubsies != nullptr)
        {
            children["ifsubsies"] = ifsubsies;
        }
    }

    return children;
}

void MpaInternal::Nodes::Node::Bay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsies()
{
    yang_name = "ifsubsies"; yang_parent_name = "bay";
}

MpaInternal::Nodes::Node::Bay::Ifsubsies::~Ifsubsies()
{
}

bool MpaInternal::Nodes::Node::Bay::Ifsubsies::has_data() const
{
    for (std::size_t index=0; index<ifsubsy.size(); index++)
    {
        if(ifsubsy[index]->has_data())
            return true;
    }
    return false;
}

bool MpaInternal::Nodes::Node::Bay::Ifsubsies::has_operation() const
{
    for (std::size_t index=0; index<ifsubsy.size(); index++)
    {
        if(ifsubsy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MpaInternal::Nodes::Node::Bay::Ifsubsies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifsubsies";

    return path_buffer.str();

}

EntityPath MpaInternal::Nodes::Node::Bay::Ifsubsies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ifsubsies' in Cisco_IOS_XR_asr9k_lc_fca_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MpaInternal::Nodes::Node::Bay::Ifsubsies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ifsubsy")
    {
        for(auto const & c : ifsubsy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy>();
        c->parent = this;
        ifsubsy.push_back(std::move(c));
        children[segment_path] = ifsubsy.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MpaInternal::Nodes::Node::Bay::Ifsubsies::get_children()
{
    for (auto const & c : ifsubsy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MpaInternal::Nodes::Node::Bay::Ifsubsies::set_value(const std::string & value_path, std::string value)
{
}

MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::Ifsubsy()
    :
    number{YType::str, "number"}
    	,
    mpa_internal_info(std::make_shared<MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo>())
{
    mpa_internal_info->parent = this;
    children["mpa-internal-info"] = mpa_internal_info;

    yang_name = "ifsubsy"; yang_parent_name = "ifsubsies";
}

MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::~Ifsubsy()
{
}

bool MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::has_data() const
{
    return number.is_set
	|| (mpa_internal_info !=  nullptr && mpa_internal_info->has_data());
}

bool MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (mpa_internal_info !=  nullptr && mpa_internal_info->has_operation());
}

std::string MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifsubsy" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ifsubsy' in Cisco_IOS_XR_asr9k_lc_fca_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpa-internal-info")
    {
        if(mpa_internal_info != nullptr)
        {
            children["mpa-internal-info"] = mpa_internal_info;
        }
        else
        {
            mpa_internal_info = std::make_shared<MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo>();
            mpa_internal_info->parent = this;
            children["mpa-internal-info"] = mpa_internal_info;
        }
        return children.at("mpa-internal-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::get_children()
{
    if(children.find("mpa-internal-info") == children.end())
    {
        if(mpa_internal_info != nullptr)
        {
            children["mpa-internal-info"] = mpa_internal_info;
        }
    }

    return children;
}

void MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::MpaInternalInfo()
    :
    bay{YType::uint32, "bay"},
    ep_idprom_data{YType::str, "ep-idprom-data"},
    ep_idprom_major{YType::uint8, "ep-idprom-major"},
    ep_idprom_minor{YType::uint8, "ep-idprom-minor"},
    ep_presence{YType::uint8, "ep-presence"},
    ep_state{YType::uint8, "ep-state"},
    ep_type{YType::uint32, "ep-type"},
    if_event{YType::uint8, "if-event"},
    if_state{YType::uint8, "if-state"},
    ifsubsys{YType::uint32, "ifsubsys"}
{
    yang_name = "mpa-internal-info"; yang_parent_name = "ifsubsy";
}

MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::~MpaInternalInfo()
{
}

bool MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::has_data() const
{
    return bay.is_set
	|| ep_idprom_data.is_set
	|| ep_idprom_major.is_set
	|| ep_idprom_minor.is_set
	|| ep_presence.is_set
	|| ep_state.is_set
	|| ep_type.is_set
	|| if_event.is_set
	|| if_state.is_set
	|| ifsubsys.is_set;
}

bool MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bay.operation)
	|| is_set(ep_idprom_data.operation)
	|| is_set(ep_idprom_major.operation)
	|| is_set(ep_idprom_minor.operation)
	|| is_set(ep_presence.operation)
	|| is_set(ep_state.operation)
	|| is_set(ep_type.operation)
	|| is_set(if_event.operation)
	|| is_set(if_state.operation)
	|| is_set(ifsubsys.operation);
}

std::string MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpa-internal-info";

    return path_buffer.str();

}

EntityPath MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MpaInternalInfo' in Cisco_IOS_XR_asr9k_lc_fca_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bay.is_set || is_set(bay.operation)) leaf_name_data.push_back(bay.get_name_leafdata());
    if (ep_idprom_data.is_set || is_set(ep_idprom_data.operation)) leaf_name_data.push_back(ep_idprom_data.get_name_leafdata());
    if (ep_idprom_major.is_set || is_set(ep_idprom_major.operation)) leaf_name_data.push_back(ep_idprom_major.get_name_leafdata());
    if (ep_idprom_minor.is_set || is_set(ep_idprom_minor.operation)) leaf_name_data.push_back(ep_idprom_minor.get_name_leafdata());
    if (ep_presence.is_set || is_set(ep_presence.operation)) leaf_name_data.push_back(ep_presence.get_name_leafdata());
    if (ep_state.is_set || is_set(ep_state.operation)) leaf_name_data.push_back(ep_state.get_name_leafdata());
    if (ep_type.is_set || is_set(ep_type.operation)) leaf_name_data.push_back(ep_type.get_name_leafdata());
    if (if_event.is_set || is_set(if_event.operation)) leaf_name_data.push_back(if_event.get_name_leafdata());
    if (if_state.is_set || is_set(if_state.operation)) leaf_name_data.push_back(if_state.get_name_leafdata());
    if (ifsubsys.is_set || is_set(ifsubsys.operation)) leaf_name_data.push_back(ifsubsys.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::get_children()
{
    return children;
}

void MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bay")
    {
        bay = value;
    }
    if(value_path == "ep-idprom-data")
    {
        ep_idprom_data = value;
    }
    if(value_path == "ep-idprom-major")
    {
        ep_idprom_major = value;
    }
    if(value_path == "ep-idprom-minor")
    {
        ep_idprom_minor = value;
    }
    if(value_path == "ep-presence")
    {
        ep_presence = value;
    }
    if(value_path == "ep-state")
    {
        ep_state = value;
    }
    if(value_path == "ep-type")
    {
        ep_type = value;
    }
    if(value_path == "if-event")
    {
        if_event = value;
    }
    if(value_path == "if-state")
    {
        if_state = value;
    }
    if(value_path == "ifsubsys")
    {
        ifsubsys = value;
    }
}

Mpa::Mpa()
    :
    nodes(std::make_shared<Mpa::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "mpa"; yang_parent_name = "Cisco-IOS-XR-asr9k-lc-fca-oper";
}

Mpa::~Mpa()
{
}

bool Mpa::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Mpa::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Mpa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lc-fca-oper:mpa";

    return path_buffer.str();

}

EntityPath Mpa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mpa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<Mpa::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mpa::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    return children;
}

void Mpa::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Mpa::clone_ptr() const
{
    return std::make_shared<Mpa>();
}

std::string Mpa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Mpa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Mpa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Mpa::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "mpa";
}

Mpa::Nodes::~Nodes()
{
}

bool Mpa::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Mpa::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mpa::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Mpa::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-lc-fca-oper:mpa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mpa::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Mpa::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mpa::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Mpa::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Mpa::Nodes::Node::Node()
    :
    node{YType::str, "node"}
{
    yang_name = "node"; yang_parent_name = "nodes";
}

Mpa::Nodes::Node::~Node()
{
}

bool Mpa::Nodes::Node::has_data() const
{
    for (std::size_t index=0; index<bay.size(); index++)
    {
        if(bay[index]->has_data())
            return true;
    }
    return node.is_set;
}

bool Mpa::Nodes::Node::has_operation() const
{
    for (std::size_t index=0; index<bay.size(); index++)
    {
        if(bay[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(node.operation);
}

std::string Mpa::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node='" <<node <<"']";

    return path_buffer.str();

}

EntityPath Mpa::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-lc-fca-oper:mpa/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.operation)) leaf_name_data.push_back(node.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mpa::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bay")
    {
        for(auto const & c : bay)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Mpa::Nodes::Node::Bay>();
        c->parent = this;
        bay.push_back(std::move(c));
        children[segment_path] = bay.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mpa::Nodes::Node::get_children()
{
    for (auto const & c : bay)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Mpa::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node")
    {
        node = value;
    }
}

Mpa::Nodes::Node::Bay::Bay()
    :
    number{YType::int32, "number"}
    	,
    mpa_detail_table(std::make_shared<Mpa::Nodes::Node::Bay::MpaDetailTable>())
{
    mpa_detail_table->parent = this;
    children["mpa-detail-table"] = mpa_detail_table;

    yang_name = "bay"; yang_parent_name = "node";
}

Mpa::Nodes::Node::Bay::~Bay()
{
}

bool Mpa::Nodes::Node::Bay::has_data() const
{
    return number.is_set
	|| (mpa_detail_table !=  nullptr && mpa_detail_table->has_data());
}

bool Mpa::Nodes::Node::Bay::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (mpa_detail_table !=  nullptr && mpa_detail_table->has_operation());
}

std::string Mpa::Nodes::Node::Bay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bay" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath Mpa::Nodes::Node::Bay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bay' in Cisco_IOS_XR_asr9k_lc_fca_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mpa::Nodes::Node::Bay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpa-detail-table")
    {
        if(mpa_detail_table != nullptr)
        {
            children["mpa-detail-table"] = mpa_detail_table;
        }
        else
        {
            mpa_detail_table = std::make_shared<Mpa::Nodes::Node::Bay::MpaDetailTable>();
            mpa_detail_table->parent = this;
            children["mpa-detail-table"] = mpa_detail_table;
        }
        return children.at("mpa-detail-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mpa::Nodes::Node::Bay::get_children()
{
    if(children.find("mpa-detail-table") == children.end())
    {
        if(mpa_detail_table != nullptr)
        {
            children["mpa-detail-table"] = mpa_detail_table;
        }
    }

    return children;
}

void Mpa::Nodes::Node::Bay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetailTable()
    :
    mpa_detail(std::make_shared<Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail>())
{
    mpa_detail->parent = this;
    children["mpa-detail"] = mpa_detail;

    yang_name = "mpa-detail-table"; yang_parent_name = "bay";
}

Mpa::Nodes::Node::Bay::MpaDetailTable::~MpaDetailTable()
{
}

bool Mpa::Nodes::Node::Bay::MpaDetailTable::has_data() const
{
    return (mpa_detail !=  nullptr && mpa_detail->has_data());
}

bool Mpa::Nodes::Node::Bay::MpaDetailTable::has_operation() const
{
    return is_set(operation)
	|| (mpa_detail !=  nullptr && mpa_detail->has_operation());
}

std::string Mpa::Nodes::Node::Bay::MpaDetailTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpa-detail-table";

    return path_buffer.str();

}

EntityPath Mpa::Nodes::Node::Bay::MpaDetailTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MpaDetailTable' in Cisco_IOS_XR_asr9k_lc_fca_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mpa::Nodes::Node::Bay::MpaDetailTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpa-detail")
    {
        if(mpa_detail != nullptr)
        {
            children["mpa-detail"] = mpa_detail;
        }
        else
        {
            mpa_detail = std::make_shared<Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail>();
            mpa_detail->parent = this;
            children["mpa-detail"] = mpa_detail;
        }
        return children.at("mpa-detail");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mpa::Nodes::Node::Bay::MpaDetailTable::get_children()
{
    if(children.find("mpa-detail") == children.end())
    {
        if(mpa_detail != nullptr)
        {
            children["mpa-detail"] = mpa_detail;
        }
    }

    return children;
}

void Mpa::Nodes::Node::Bay::MpaDetailTable::set_value(const std::string & value_path, std::string value)
{
}

Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::MpaDetail()
    :
    bay_number{YType::uint16, "bay-number"},
    insertion_time{YType::uint32, "insertion-time"},
    is_spa_admin_up{YType::boolean, "is-spa-admin-up"},
    is_spa_in_reset{YType::boolean, "is-spa-in-reset"},
    is_spa_inserted{YType::boolean, "is-spa-inserted"},
    is_spa_power_admin_up{YType::boolean, "is-spa-power-admin-up"},
    is_spa_powered{YType::boolean, "is-spa-powered"},
    last_failure_reason{YType::enumeration, "last-failure-reason"},
    last_ready_time{YType::uint32, "last-ready-time"},
    last_reset_reason{YType::enumeration, "last-reset-reason"},
    spa_oper_state{YType::enumeration, "spa-oper-state"},
    spa_type{YType::uint16, "spa-type"},
    up_time{YType::uint32, "up-time"}
{
    yang_name = "mpa-detail"; yang_parent_name = "mpa-detail-table";
}

Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::~MpaDetail()
{
}

bool Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::has_data() const
{
    return bay_number.is_set
	|| insertion_time.is_set
	|| is_spa_admin_up.is_set
	|| is_spa_in_reset.is_set
	|| is_spa_inserted.is_set
	|| is_spa_power_admin_up.is_set
	|| is_spa_powered.is_set
	|| last_failure_reason.is_set
	|| last_ready_time.is_set
	|| last_reset_reason.is_set
	|| spa_oper_state.is_set
	|| spa_type.is_set
	|| up_time.is_set;
}

bool Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(bay_number.operation)
	|| is_set(insertion_time.operation)
	|| is_set(is_spa_admin_up.operation)
	|| is_set(is_spa_in_reset.operation)
	|| is_set(is_spa_inserted.operation)
	|| is_set(is_spa_power_admin_up.operation)
	|| is_set(is_spa_powered.operation)
	|| is_set(last_failure_reason.operation)
	|| is_set(last_ready_time.operation)
	|| is_set(last_reset_reason.operation)
	|| is_set(spa_oper_state.operation)
	|| is_set(spa_type.operation)
	|| is_set(up_time.operation);
}

std::string Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpa-detail";

    return path_buffer.str();

}

EntityPath Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MpaDetail' in Cisco_IOS_XR_asr9k_lc_fca_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bay_number.is_set || is_set(bay_number.operation)) leaf_name_data.push_back(bay_number.get_name_leafdata());
    if (insertion_time.is_set || is_set(insertion_time.operation)) leaf_name_data.push_back(insertion_time.get_name_leafdata());
    if (is_spa_admin_up.is_set || is_set(is_spa_admin_up.operation)) leaf_name_data.push_back(is_spa_admin_up.get_name_leafdata());
    if (is_spa_in_reset.is_set || is_set(is_spa_in_reset.operation)) leaf_name_data.push_back(is_spa_in_reset.get_name_leafdata());
    if (is_spa_inserted.is_set || is_set(is_spa_inserted.operation)) leaf_name_data.push_back(is_spa_inserted.get_name_leafdata());
    if (is_spa_power_admin_up.is_set || is_set(is_spa_power_admin_up.operation)) leaf_name_data.push_back(is_spa_power_admin_up.get_name_leafdata());
    if (is_spa_powered.is_set || is_set(is_spa_powered.operation)) leaf_name_data.push_back(is_spa_powered.get_name_leafdata());
    if (last_failure_reason.is_set || is_set(last_failure_reason.operation)) leaf_name_data.push_back(last_failure_reason.get_name_leafdata());
    if (last_ready_time.is_set || is_set(last_ready_time.operation)) leaf_name_data.push_back(last_ready_time.get_name_leafdata());
    if (last_reset_reason.is_set || is_set(last_reset_reason.operation)) leaf_name_data.push_back(last_reset_reason.get_name_leafdata());
    if (spa_oper_state.is_set || is_set(spa_oper_state.operation)) leaf_name_data.push_back(spa_oper_state.get_name_leafdata());
    if (spa_type.is_set || is_set(spa_type.operation)) leaf_name_data.push_back(spa_type.get_name_leafdata());
    if (up_time.is_set || is_set(up_time.operation)) leaf_name_data.push_back(up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::get_children()
{
    return children;
}

void Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bay-number")
    {
        bay_number = value;
    }
    if(value_path == "insertion-time")
    {
        insertion_time = value;
    }
    if(value_path == "is-spa-admin-up")
    {
        is_spa_admin_up = value;
    }
    if(value_path == "is-spa-in-reset")
    {
        is_spa_in_reset = value;
    }
    if(value_path == "is-spa-inserted")
    {
        is_spa_inserted = value;
    }
    if(value_path == "is-spa-power-admin-up")
    {
        is_spa_power_admin_up = value;
    }
    if(value_path == "is-spa-powered")
    {
        is_spa_powered = value;
    }
    if(value_path == "last-failure-reason")
    {
        last_failure_reason = value;
    }
    if(value_path == "last-ready-time")
    {
        last_ready_time = value;
    }
    if(value_path == "last-reset-reason")
    {
        last_reset_reason = value;
    }
    if(value_path == "spa-oper-state")
    {
        spa_oper_state = value;
    }
    if(value_path == "spa-type")
    {
        spa_type = value;
    }
    if(value_path == "up-time")
    {
        up_time = value;
    }
}

const Enum::YLeaf SpaResetReasonEnum::spa_reset_reason_unknown {1, "spa-reset-reason-unknown"};
const Enum::YLeaf SpaResetReasonEnum::spa_reset_reason_manual {2, "spa-reset-reason-manual"};
const Enum::YLeaf SpaResetReasonEnum::spa_reset_reason_fpd_upgrade {3, "spa-reset-reason-fpd-upgrade"};
const Enum::YLeaf SpaResetReasonEnum::spa_reset_reason_audit_fail {4, "spa-reset-reason-audit-fail"};
const Enum::YLeaf SpaResetReasonEnum::spa_reset_reason_failure {5, "spa-reset-reason-failure"};

const Enum::YLeaf SpaFailureReasonEnum::spa_failure_reason_unknown {1, "spa-failure-reason-unknown"};
const Enum::YLeaf SpaFailureReasonEnum::spa_failure_reason_spi_failure {2, "spa-failure-reason-spi-failure"};
const Enum::YLeaf SpaFailureReasonEnum::spa_failure_reason_boot {3, "spa-failure-reason-boot"};
const Enum::YLeaf SpaFailureReasonEnum::spa_failure_reason_hw_failed {4, "spa-failure-reason-hw-failed"};
const Enum::YLeaf SpaFailureReasonEnum::spa_failure_reason_sw_failed {5, "spa-failure-reason-sw-failed"};
const Enum::YLeaf SpaFailureReasonEnum::spa_failure_reason_sw_restart {6, "spa-failure-reason-sw-restart"};
const Enum::YLeaf SpaFailureReasonEnum::spa_failure_reason_check_fpd {7, "spa-failure-reason-check-fpd"};
const Enum::YLeaf SpaFailureReasonEnum::spa_failure_reason_read_type {8, "spa-failure-reason-read-type"};

const Enum::YLeaf SpaOperStateEnum::spa_state_reset {1, "spa-state-reset"};
const Enum::YLeaf SpaOperStateEnum::spa_state_failed {2, "spa-state-failed"};
const Enum::YLeaf SpaOperStateEnum::spa_state_booting {3, "spa-state-booting"};
const Enum::YLeaf SpaOperStateEnum::spa_state_ready {4, "spa-state-ready"};


}
}

