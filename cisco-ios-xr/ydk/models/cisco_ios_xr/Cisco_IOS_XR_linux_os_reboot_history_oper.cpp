
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_linux_os_reboot_history_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_linux_os_reboot_history_oper {

RebootHistory::RebootHistory()
{
    yang_name = "reboot-history"; yang_parent_name = "Cisco-IOS-XR-linux-os-reboot-history-oper";
}

RebootHistory::~RebootHistory()
{
}

bool RebootHistory::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool RebootHistory::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RebootHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-linux-os-reboot-history-oper:reboot-history";

    return path_buffer.str();

}

EntityPath RebootHistory::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RebootHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RebootHistory::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RebootHistory::get_children()
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

void RebootHistory::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RebootHistory::clone_ptr() const
{
    return std::make_shared<RebootHistory>();
}

std::string RebootHistory::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RebootHistory::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RebootHistory::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RebootHistory::Node::Node()
    :
    node_name{YType::str, "node-name"}
{
    yang_name = "node"; yang_parent_name = "reboot-history";
}

RebootHistory::Node::~Node()
{
}

bool RebootHistory::Node::has_data() const
{
    for (std::size_t index=0; index<reboot_history.size(); index++)
    {
        if(reboot_history[index]->has_data())
            return true;
    }
    return node_name.is_set;
}

bool RebootHistory::Node::has_operation() const
{
    for (std::size_t index=0; index<reboot_history.size(); index++)
    {
        if(reboot_history[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(node_name.operation);
}

std::string RebootHistory::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath RebootHistory::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-linux-os-reboot-history-oper:reboot-history/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RebootHistory::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "reboot-history")
    {
        for(auto const & c : reboot_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RebootHistory::Node::RebootHistory_>();
        c->parent = this;
        reboot_history.push_back(std::move(c));
        children[segment_path] = reboot_history.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RebootHistory::Node::get_children()
{
    for (auto const & c : reboot_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RebootHistory::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

RebootHistory::Node::RebootHistory_::RebootHistory_()
    :
    cause_code{YType::uint32, "cause-code"},
    no{YType::uint32, "no"},
    reason{YType::str, "reason"},
    time{YType::str, "time"}
{
    yang_name = "reboot-history"; yang_parent_name = "node";
}

RebootHistory::Node::RebootHistory_::~RebootHistory_()
{
}

bool RebootHistory::Node::RebootHistory_::has_data() const
{
    return cause_code.is_set
	|| no.is_set
	|| reason.is_set
	|| time.is_set;
}

bool RebootHistory::Node::RebootHistory_::has_operation() const
{
    return is_set(operation)
	|| is_set(cause_code.operation)
	|| is_set(no.operation)
	|| is_set(reason.operation)
	|| is_set(time.operation);
}

std::string RebootHistory::Node::RebootHistory_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reboot-history";

    return path_buffer.str();

}

EntityPath RebootHistory::Node::RebootHistory_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RebootHistory_' in Cisco_IOS_XR_linux_os_reboot_history_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cause_code.is_set || is_set(cause_code.operation)) leaf_name_data.push_back(cause_code.get_name_leafdata());
    if (no.is_set || is_set(no.operation)) leaf_name_data.push_back(no.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RebootHistory::Node::RebootHistory_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RebootHistory::Node::RebootHistory_::get_children()
{
    return children;
}

void RebootHistory::Node::RebootHistory_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cause-code")
    {
        cause_code = value;
    }
    if(value_path == "no")
    {
        no = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
}


}
}

