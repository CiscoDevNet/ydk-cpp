
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_snmp_agent_cfg_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_snmp_agent_cfg {

Mib::InterfaceMib::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    index_persistence{YType::boolean, "index-persistence"},
    link_up_down{YType::boolean, "link-up-down"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Mib::InterfaceMib::Interfaces::Interface::~Interface()
{
}

bool Mib::InterfaceMib::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| index_persistence.is_set
	|| link_up_down.is_set;
}

bool Mib::InterfaceMib::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(index_persistence.operation)
	|| is_set(link_up_down.operation);
}

std::string Mib::InterfaceMib::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Mib::InterfaceMib::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (index_persistence.is_set || is_set(index_persistence.operation)) leaf_name_data.push_back(index_persistence.get_name_leafdata());
    if (link_up_down.is_set || is_set(link_up_down.operation)) leaf_name_data.push_back(link_up_down.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::InterfaceMib::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mib::InterfaceMib::Interfaces::Interface::get_children()
{
    return children;
}

void Mib::InterfaceMib::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "index-persistence")
    {
        index_persistence = value;
    }
    if(value_path == "link-up-down")
    {
        link_up_down = value;
    }
}

Mib::InterfaceMib::Notification::Notification()
    :
    link_ietf{YType::empty, "link-ietf"}
{
    yang_name = "notification"; yang_parent_name = "interface-mib";
}

Mib::InterfaceMib::Notification::~Notification()
{
}

bool Mib::InterfaceMib::Notification::has_data() const
{
    return link_ietf.is_set;
}

bool Mib::InterfaceMib::Notification::has_operation() const
{
    return is_set(operation)
	|| is_set(link_ietf.operation);
}

std::string Mib::InterfaceMib::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";

    return path_buffer.str();

}

EntityPath Mib::InterfaceMib::Notification::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_ietf.is_set || is_set(link_ietf.operation)) leaf_name_data.push_back(link_ietf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::InterfaceMib::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mib::InterfaceMib::Notification::get_children()
{
    return children;
}

void Mib::InterfaceMib::Notification::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-ietf")
    {
        link_ietf = value;
    }
}

Mib::InterfaceMib::Subsets::Subsets()
{
    yang_name = "subsets"; yang_parent_name = "interface-mib";
}

Mib::InterfaceMib::Subsets::~Subsets()
{
}

bool Mib::InterfaceMib::Subsets::has_data() const
{
    for (std::size_t index=0; index<subset.size(); index++)
    {
        if(subset[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::InterfaceMib::Subsets::has_operation() const
{
    for (std::size_t index=0; index<subset.size(); index++)
    {
        if(subset[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mib::InterfaceMib::Subsets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subsets";

    return path_buffer.str();

}

EntityPath Mib::InterfaceMib::Subsets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::InterfaceMib::Subsets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subset")
    {
        for(auto const & c : subset)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Mib::InterfaceMib::Subsets::Subset>();
        c->parent = this;
        subset.push_back(std::move(c));
        children[segment_path] = subset.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mib::InterfaceMib::Subsets::get_children()
{
    for (auto const & c : subset)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Mib::InterfaceMib::Subsets::set_value(const std::string & value_path, std::string value)
{
}

Mib::InterfaceMib::Subsets::Subset::Subset()
    :
    subset_id{YType::uint32, "subset-id"}
    	,
    link_up_down(std::make_shared<Mib::InterfaceMib::Subsets::Subset::LinkUpDown>())
{
    link_up_down->parent = this;
    children["link-up-down"] = link_up_down;

    yang_name = "subset"; yang_parent_name = "subsets";
}

Mib::InterfaceMib::Subsets::Subset::~Subset()
{
}

bool Mib::InterfaceMib::Subsets::Subset::has_data() const
{
    return subset_id.is_set
	|| (link_up_down !=  nullptr && link_up_down->has_data());
}

bool Mib::InterfaceMib::Subsets::Subset::has_operation() const
{
    return is_set(operation)
	|| is_set(subset_id.operation)
	|| (link_up_down !=  nullptr && link_up_down->has_operation());
}

std::string Mib::InterfaceMib::Subsets::Subset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subset" <<"[subset-id='" <<subset_id <<"']";

    return path_buffer.str();

}

EntityPath Mib::InterfaceMib::Subsets::Subset::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/subsets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subset_id.is_set || is_set(subset_id.operation)) leaf_name_data.push_back(subset_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::InterfaceMib::Subsets::Subset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-up-down")
    {
        if(link_up_down != nullptr)
        {
            children["link-up-down"] = link_up_down;
        }
        else
        {
            link_up_down = std::make_shared<Mib::InterfaceMib::Subsets::Subset::LinkUpDown>();
            link_up_down->parent = this;
            children["link-up-down"] = link_up_down;
        }
        return children.at("link-up-down");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mib::InterfaceMib::Subsets::Subset::get_children()
{
    if(children.find("link-up-down") == children.end())
    {
        if(link_up_down != nullptr)
        {
            children["link-up-down"] = link_up_down;
        }
    }

    return children;
}

void Mib::InterfaceMib::Subsets::Subset::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subset-id")
    {
        subset_id = value;
    }
}

Mib::InterfaceMib::Subsets::Subset::LinkUpDown::LinkUpDown()
    :
    enable{YType::boolean, "enable"},
    regular_expression{YType::str, "regular-expression"}
{
    yang_name = "link-up-down"; yang_parent_name = "subset";
}

Mib::InterfaceMib::Subsets::Subset::LinkUpDown::~LinkUpDown()
{
}

bool Mib::InterfaceMib::Subsets::Subset::LinkUpDown::has_data() const
{
    return enable.is_set
	|| regular_expression.is_set;
}

bool Mib::InterfaceMib::Subsets::Subset::LinkUpDown::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(regular_expression.operation);
}

std::string Mib::InterfaceMib::Subsets::Subset::LinkUpDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-up-down";

    return path_buffer.str();

}

EntityPath Mib::InterfaceMib::Subsets::Subset::LinkUpDown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkUpDown' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (regular_expression.is_set || is_set(regular_expression.operation)) leaf_name_data.push_back(regular_expression.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::InterfaceMib::Subsets::Subset::LinkUpDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mib::InterfaceMib::Subsets::Subset::LinkUpDown::get_children()
{
    return children;
}

void Mib::InterfaceMib::Subsets::Subset::LinkUpDown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "regular-expression")
    {
        regular_expression = value;
    }
}

Mib::MplsTeMib::MplsTeMib()
    :
    cache_garbage_collect_timer{YType::uint32, "cache-garbage-collect-timer"},
    cache_timer{YType::uint32, "cache-timer"}
{
    yang_name = "mpls-te-mib"; yang_parent_name = "mib";
}

Mib::MplsTeMib::~MplsTeMib()
{
}

bool Mib::MplsTeMib::has_data() const
{
    return cache_garbage_collect_timer.is_set
	|| cache_timer.is_set;
}

bool Mib::MplsTeMib::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_garbage_collect_timer.operation)
	|| is_set(cache_timer.operation);
}

std::string Mib::MplsTeMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te-mib";

    return path_buffer.str();

}

EntityPath Mib::MplsTeMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_garbage_collect_timer.is_set || is_set(cache_garbage_collect_timer.operation)) leaf_name_data.push_back(cache_garbage_collect_timer.get_name_leafdata());
    if (cache_timer.is_set || is_set(cache_timer.operation)) leaf_name_data.push_back(cache_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::MplsTeMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mib::MplsTeMib::get_children()
{
    return children;
}

void Mib::MplsTeMib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-garbage-collect-timer")
    {
        cache_garbage_collect_timer = value;
    }
    if(value_path == "cache-timer")
    {
        cache_timer = value;
    }
}

Mib::MplsP2MpMib::MplsP2MpMib()
    :
    cache_timer{YType::uint32, "cache-timer"}
{
    yang_name = "mpls-p2mp-mib"; yang_parent_name = "mib";
}

Mib::MplsP2MpMib::~MplsP2MpMib()
{
}

bool Mib::MplsP2MpMib::has_data() const
{
    return cache_timer.is_set;
}

bool Mib::MplsP2MpMib::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_timer.operation);
}

std::string Mib::MplsP2MpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-p2mp-mib";

    return path_buffer.str();

}

EntityPath Mib::MplsP2MpMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_timer.is_set || is_set(cache_timer.operation)) leaf_name_data.push_back(cache_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::MplsP2MpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mib::MplsP2MpMib::get_children()
{
    return children;
}

void Mib::MplsP2MpMib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-timer")
    {
        cache_timer = value;
    }
}

Mib::MplsTeExtStdMib::MplsTeExtStdMib()
    :
    cache_timer{YType::uint32, "cache-timer"}
{
    yang_name = "mpls-te-ext-std-mib"; yang_parent_name = "mib";
}

Mib::MplsTeExtStdMib::~MplsTeExtStdMib()
{
}

bool Mib::MplsTeExtStdMib::has_data() const
{
    return cache_timer.is_set;
}

bool Mib::MplsTeExtStdMib::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_timer.operation);
}

std::string Mib::MplsTeExtStdMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te-ext-std-mib";

    return path_buffer.str();

}

EntityPath Mib::MplsTeExtStdMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_timer.is_set || is_set(cache_timer.operation)) leaf_name_data.push_back(cache_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::MplsTeExtStdMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mib::MplsTeExtStdMib::get_children()
{
    return children;
}

void Mib::MplsTeExtStdMib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-timer")
    {
        cache_timer = value;
    }
}

Mib::MplsTeExtMib::MplsTeExtMib()
    :
    cache_timer{YType::uint32, "cache-timer"}
{
    yang_name = "mpls-te-ext-mib"; yang_parent_name = "mib";
}

Mib::MplsTeExtMib::~MplsTeExtMib()
{
}

bool Mib::MplsTeExtMib::has_data() const
{
    return cache_timer.is_set;
}

bool Mib::MplsTeExtMib::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_timer.operation);
}

std::string Mib::MplsTeExtMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te-ext-mib";

    return path_buffer.str();

}

EntityPath Mib::MplsTeExtMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_timer.is_set || is_set(cache_timer.operation)) leaf_name_data.push_back(cache_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::MplsTeExtMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mib::MplsTeExtMib::get_children()
{
    return children;
}

void Mib::MplsTeExtMib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-timer")
    {
        cache_timer = value;
    }
}

Mib::MplsFrrMib::MplsFrrMib()
    :
    cache_timer{YType::uint32, "cache-timer"}
{
    yang_name = "mpls-frr-mib"; yang_parent_name = "mib";
}

Mib::MplsFrrMib::~MplsFrrMib()
{
}

bool Mib::MplsFrrMib::has_data() const
{
    return cache_timer.is_set;
}

bool Mib::MplsFrrMib::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_timer.operation);
}

std::string Mib::MplsFrrMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-frr-mib";

    return path_buffer.str();

}

EntityPath Mib::MplsFrrMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_timer.is_set || is_set(cache_timer.operation)) leaf_name_data.push_back(cache_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::MplsFrrMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mib::MplsFrrMib::get_children()
{
    return children;
}

void Mib::MplsFrrMib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-timer")
    {
        cache_timer = value;
    }
}

Mib::CbQosmib::CbQosmib()
    :
    member_interface_stats{YType::empty, "member-interface-stats"},
    persist{YType::empty, "persist"}
    	,
    cache(std::make_shared<Mib::CbQosmib::Cache>())
{
    cache->parent = this;
    children["cache"] = cache;

    yang_name = "cb-qosmib"; yang_parent_name = "mib";
}

Mib::CbQosmib::~CbQosmib()
{
}

bool Mib::CbQosmib::has_data() const
{
    return member_interface_stats.is_set
	|| persist.is_set
	|| (cache !=  nullptr && cache->has_data());
}

bool Mib::CbQosmib::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface_stats.operation)
	|| is_set(persist.operation)
	|| (cache !=  nullptr && cache->has_operation());
}

std::string Mib::CbQosmib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-mibs-cfg:cb-qosmib";

    return path_buffer.str();

}

EntityPath Mib::CbQosmib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface_stats.is_set || is_set(member_interface_stats.operation)) leaf_name_data.push_back(member_interface_stats.get_name_leafdata());
    if (persist.is_set || is_set(persist.operation)) leaf_name_data.push_back(persist.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::CbQosmib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cache")
    {
        if(cache != nullptr)
        {
            children["cache"] = cache;
        }
        else
        {
            cache = std::make_shared<Mib::CbQosmib::Cache>();
            cache->parent = this;
            children["cache"] = cache;
        }
        return children.at("cache");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mib::CbQosmib::get_children()
{
    if(children.find("cache") == children.end())
    {
        if(cache != nullptr)
        {
            children["cache"] = cache;
        }
    }

    return children;
}

void Mib::CbQosmib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface-stats")
    {
        member_interface_stats = value;
    }
    if(value_path == "persist")
    {
        persist = value;
    }
}

Mib::CbQosmib::Cache::Cache()
    :
    enable{YType::empty, "enable"},
    refresh_time{YType::uint32, "refresh-time"},
    service_policy_count{YType::uint32, "service-policy-count"}
{
    yang_name = "cache"; yang_parent_name = "cb-qosmib";
}

Mib::CbQosmib::Cache::~Cache()
{
}

bool Mib::CbQosmib::Cache::has_data() const
{
    return enable.is_set
	|| refresh_time.is_set
	|| service_policy_count.is_set;
}

bool Mib::CbQosmib::Cache::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(refresh_time.operation)
	|| is_set(service_policy_count.operation);
}

std::string Mib::CbQosmib::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";

    return path_buffer.str();

}

EntityPath Mib::CbQosmib::Cache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-qos-mibs-cfg:cb-qosmib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (refresh_time.is_set || is_set(refresh_time.operation)) leaf_name_data.push_back(refresh_time.get_name_leafdata());
    if (service_policy_count.is_set || is_set(service_policy_count.operation)) leaf_name_data.push_back(service_policy_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::CbQosmib::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mib::CbQosmib::Cache::get_children()
{
    return children;
}

void Mib::CbQosmib::Cache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "refresh-time")
    {
        refresh_time = value;
    }
    if(value_path == "service-policy-count")
    {
        service_policy_count = value;
    }
}

Mib::EntityMib::EntityMib()
    :
    entity_index_persistence{YType::empty, "entity-index-persistence"}
{
    yang_name = "entity-mib"; yang_parent_name = "mib";
}

Mib::EntityMib::~EntityMib()
{
}

bool Mib::EntityMib::has_data() const
{
    return entity_index_persistence.is_set;
}

bool Mib::EntityMib::has_operation() const
{
    return is_set(operation)
	|| is_set(entity_index_persistence.operation);
}

std::string Mib::EntityMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-entitymib-cfg:entity-mib";

    return path_buffer.str();

}

EntityPath Mib::EntityMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entity_index_persistence.is_set || is_set(entity_index_persistence.operation)) leaf_name_data.push_back(entity_index_persistence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::EntityMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mib::EntityMib::get_children()
{
    return children;
}

void Mib::EntityMib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entity-index-persistence")
    {
        entity_index_persistence = value;
    }
}


}
}

