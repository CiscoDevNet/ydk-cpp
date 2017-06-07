
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_netconf_acm.hpp"

namespace ydk {
namespace ietf_netconf_acm {

Nacm::Nacm()
    :
    denied_data_writes{YType::uint32, "denied-data-writes"},
    denied_notifications{YType::uint32, "denied-notifications"},
    denied_operations{YType::uint32, "denied-operations"},
    enable_external_groups{YType::boolean, "enable-external-groups"},
    enable_nacm{YType::boolean, "enable-nacm"},
    exec_default{YType::enumeration, "exec-default"},
    read_default{YType::enumeration, "read-default"},
    write_default{YType::enumeration, "write-default"}
    	,
    groups(std::make_shared<Nacm::Groups>())
{
    groups->parent = this;

    yang_name = "nacm"; yang_parent_name = "ietf-netconf-acm";
}

Nacm::~Nacm()
{
}

bool Nacm::has_data() const
{
    for (std::size_t index=0; index<rule_list.size(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return denied_data_writes.is_set
	|| denied_notifications.is_set
	|| denied_operations.is_set
	|| enable_external_groups.is_set
	|| enable_nacm.is_set
	|| exec_default.is_set
	|| read_default.is_set
	|| write_default.is_set
	|| (groups !=  nullptr && groups->has_data());
}

bool Nacm::has_operation() const
{
    for (std::size_t index=0; index<rule_list.size(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(denied_data_writes.operation)
	|| is_set(denied_notifications.operation)
	|| is_set(denied_operations.operation)
	|| is_set(enable_external_groups.operation)
	|| is_set(enable_nacm.operation)
	|| is_set(exec_default.operation)
	|| is_set(read_default.operation)
	|| is_set(write_default.operation)
	|| (groups !=  nullptr && groups->has_operation());
}

std::string Nacm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-acm:nacm";

    return path_buffer.str();

}

const EntityPath Nacm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (denied_data_writes.is_set || is_set(denied_data_writes.operation)) leaf_name_data.push_back(denied_data_writes.get_name_leafdata());
    if (denied_notifications.is_set || is_set(denied_notifications.operation)) leaf_name_data.push_back(denied_notifications.get_name_leafdata());
    if (denied_operations.is_set || is_set(denied_operations.operation)) leaf_name_data.push_back(denied_operations.get_name_leafdata());
    if (enable_external_groups.is_set || is_set(enable_external_groups.operation)) leaf_name_data.push_back(enable_external_groups.get_name_leafdata());
    if (enable_nacm.is_set || is_set(enable_nacm.operation)) leaf_name_data.push_back(enable_nacm.get_name_leafdata());
    if (exec_default.is_set || is_set(exec_default.operation)) leaf_name_data.push_back(exec_default.get_name_leafdata());
    if (read_default.is_set || is_set(read_default.operation)) leaf_name_data.push_back(read_default.get_name_leafdata());
    if (write_default.is_set || is_set(write_default.operation)) leaf_name_data.push_back(write_default.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Nacm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Nacm::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "rule-list")
    {
        for(auto const & c : rule_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Nacm::RuleList>();
        c->parent = this;
        rule_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nacm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    for (auto const & c : rule_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Nacm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "denied-data-writes")
    {
        denied_data_writes = value;
    }
    if(value_path == "denied-notifications")
    {
        denied_notifications = value;
    }
    if(value_path == "denied-operations")
    {
        denied_operations = value;
    }
    if(value_path == "enable-external-groups")
    {
        enable_external_groups = value;
    }
    if(value_path == "enable-nacm")
    {
        enable_nacm = value;
    }
    if(value_path == "exec-default")
    {
        exec_default = value;
    }
    if(value_path == "read-default")
    {
        read_default = value;
    }
    if(value_path == "write-default")
    {
        write_default = value;
    }
}

std::shared_ptr<Entity> Nacm::clone_ptr() const
{
    return std::make_shared<Nacm>();
}

std::string Nacm::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string Nacm::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function Nacm::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

Nacm::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "nacm";
}

Nacm::Groups::~Groups()
{
}

bool Nacm::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Nacm::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Nacm::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

const EntityPath Nacm::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-acm:nacm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Nacm::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Nacm::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nacm::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Nacm::Groups::set_value(const std::string & value_path, std::string value)
{
}

Nacm::Groups::Group::Group()
    :
    name{YType::str, "name"},
    user_name{YType::str, "user-name"}
{
    yang_name = "group"; yang_parent_name = "groups";
}

Nacm::Groups::Group::~Group()
{
}

bool Nacm::Groups::Group::has_data() const
{
    for (auto const & leaf : user_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set;
}

bool Nacm::Groups::Group::has_operation() const
{
    for (auto const & leaf : user_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(user_name.operation);
}

std::string Nacm::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Nacm::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-acm:nacm/groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto user_name_name_datas = user_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), user_name_name_datas.begin(), user_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Nacm::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nacm::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Nacm::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "user-name")
    {
        user_name.append(value);
    }
}

Nacm::RuleList::RuleList()
    :
    name{YType::str, "name"},
    group{YType::str, "group"}
{
    yang_name = "rule-list"; yang_parent_name = "nacm";
}

Nacm::RuleList::~RuleList()
{
}

bool Nacm::RuleList::has_data() const
{
    for (std::size_t index=0; index<rule.size(); index++)
    {
        if(rule[index]->has_data())
            return true;
    }
    for (auto const & leaf : group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set;
}

bool Nacm::RuleList::has_operation() const
{
    for (std::size_t index=0; index<rule.size(); index++)
    {
        if(rule[index]->has_operation())
            return true;
    }
    for (auto const & leaf : group.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(group.operation);
}

std::string Nacm::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Nacm::RuleList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-acm:nacm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto group_name_datas = group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), group_name_datas.begin(), group_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Nacm::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule")
    {
        for(auto const & c : rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Nacm::RuleList::Rule>();
        c->parent = this;
        rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nacm::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Nacm::RuleList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "group")
    {
        group.append(value);
    }
}

Nacm::RuleList::Rule::Rule()
    :
    name{YType::str, "name"},
    access_operations{YType::str, "access-operations"},
    action{YType::enumeration, "action"},
    comment{YType::str, "comment"},
    module_name{YType::str, "module-name"},
    notification_name{YType::str, "notification-name"},
    path{YType::str, "path"},
    rpc_name{YType::str, "rpc-name"}
{
    yang_name = "rule"; yang_parent_name = "rule-list";
}

Nacm::RuleList::Rule::~Rule()
{
}

bool Nacm::RuleList::Rule::has_data() const
{
    return name.is_set
	|| access_operations.is_set
	|| action.is_set
	|| comment.is_set
	|| module_name.is_set
	|| notification_name.is_set
	|| path.is_set
	|| rpc_name.is_set;
}

bool Nacm::RuleList::Rule::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(access_operations.operation)
	|| is_set(action.operation)
	|| is_set(comment.operation)
	|| is_set(module_name.operation)
	|| is_set(notification_name.operation)
	|| is_set(path.operation)
	|| is_set(rpc_name.operation);
}

std::string Nacm::RuleList::Rule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Nacm::RuleList::Rule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rule' in ietf_netconf_acm cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (access_operations.is_set || is_set(access_operations.operation)) leaf_name_data.push_back(access_operations.get_name_leafdata());
    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (comment.is_set || is_set(comment.operation)) leaf_name_data.push_back(comment.get_name_leafdata());
    if (module_name.is_set || is_set(module_name.operation)) leaf_name_data.push_back(module_name.get_name_leafdata());
    if (notification_name.is_set || is_set(notification_name.operation)) leaf_name_data.push_back(notification_name.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (rpc_name.is_set || is_set(rpc_name.operation)) leaf_name_data.push_back(rpc_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Nacm::RuleList::Rule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nacm::RuleList::Rule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Nacm::RuleList::Rule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "access-operations")
    {
        access_operations = value;
    }
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "comment")
    {
        comment = value;
    }
    if(value_path == "module-name")
    {
        module_name = value;
    }
    if(value_path == "notification-name")
    {
        notification_name = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "rpc-name")
    {
        rpc_name = value;
    }
}

const Enum::YLeaf ActionTypeEnum::permit {0, "permit"};
const Enum::YLeaf ActionTypeEnum::deny {1, "deny"};


}
}

