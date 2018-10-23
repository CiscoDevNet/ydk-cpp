
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_netconf_acm.hpp"

using namespace ydk;

namespace ietf {
namespace ietf_netconf_acm {

Nacm::Nacm()
    :
    enable_nacm{YType::boolean, "enable-nacm"},
    read_default{YType::enumeration, "read-default"},
    write_default{YType::enumeration, "write-default"},
    exec_default{YType::enumeration, "exec-default"},
    enable_external_groups{YType::boolean, "enable-external-groups"},
    denied_operations{YType::uint32, "denied-operations"},
    denied_data_writes{YType::uint32, "denied-data-writes"},
    denied_notifications{YType::uint32, "denied-notifications"}
        ,
    groups(std::make_shared<Nacm::Groups>())
    , rule_list(this, {"name"})
{
    groups->parent = this;

    yang_name = "nacm"; yang_parent_name = "ietf-netconf-acm"; is_top_level_class = true; has_list_ancestor = false; 
}

Nacm::~Nacm()
{
}

bool Nacm::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return enable_nacm.is_set
	|| read_default.is_set
	|| write_default.is_set
	|| exec_default.is_set
	|| enable_external_groups.is_set
	|| denied_operations.is_set
	|| denied_data_writes.is_set
	|| denied_notifications.is_set
	|| (groups !=  nullptr && groups->has_data());
}

bool Nacm::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enable_nacm.yfilter)
	|| ydk::is_set(read_default.yfilter)
	|| ydk::is_set(write_default.yfilter)
	|| ydk::is_set(exec_default.yfilter)
	|| ydk::is_set(enable_external_groups.yfilter)
	|| ydk::is_set(denied_operations.yfilter)
	|| ydk::is_set(denied_data_writes.yfilter)
	|| ydk::is_set(denied_notifications.yfilter)
	|| (groups !=  nullptr && groups->has_operation());
}

std::string Nacm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-acm:nacm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nacm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_nacm.is_set || is_set(enable_nacm.yfilter)) leaf_name_data.push_back(enable_nacm.get_name_leafdata());
    if (read_default.is_set || is_set(read_default.yfilter)) leaf_name_data.push_back(read_default.get_name_leafdata());
    if (write_default.is_set || is_set(write_default.yfilter)) leaf_name_data.push_back(write_default.get_name_leafdata());
    if (exec_default.is_set || is_set(exec_default.yfilter)) leaf_name_data.push_back(exec_default.get_name_leafdata());
    if (enable_external_groups.is_set || is_set(enable_external_groups.yfilter)) leaf_name_data.push_back(enable_external_groups.get_name_leafdata());
    if (denied_operations.is_set || is_set(denied_operations.yfilter)) leaf_name_data.push_back(denied_operations.get_name_leafdata());
    if (denied_data_writes.is_set || is_set(denied_data_writes.yfilter)) leaf_name_data.push_back(denied_data_writes.get_name_leafdata());
    if (denied_notifications.is_set || is_set(denied_notifications.yfilter)) leaf_name_data.push_back(denied_notifications.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Nacm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto ent_ = std::make_shared<Nacm::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Nacm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(groups != nullptr)
    {
        _children["groups"] = groups;
    }

    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Nacm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-nacm")
    {
        enable_nacm = value;
        enable_nacm.value_namespace = name_space;
        enable_nacm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-default")
    {
        read_default = value;
        read_default.value_namespace = name_space;
        read_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-default")
    {
        write_default = value;
        write_default.value_namespace = name_space;
        write_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-default")
    {
        exec_default = value;
        exec_default.value_namespace = name_space;
        exec_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-external-groups")
    {
        enable_external_groups = value;
        enable_external_groups.value_namespace = name_space;
        enable_external_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denied-operations")
    {
        denied_operations = value;
        denied_operations.value_namespace = name_space;
        denied_operations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denied-data-writes")
    {
        denied_data_writes = value;
        denied_data_writes.value_namespace = name_space;
        denied_data_writes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denied-notifications")
    {
        denied_notifications = value;
        denied_notifications.value_namespace = name_space;
        denied_notifications.value_namespace_prefix = name_space_prefix;
    }
}

void Nacm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-nacm")
    {
        enable_nacm.yfilter = yfilter;
    }
    if(value_path == "read-default")
    {
        read_default.yfilter = yfilter;
    }
    if(value_path == "write-default")
    {
        write_default.yfilter = yfilter;
    }
    if(value_path == "exec-default")
    {
        exec_default.yfilter = yfilter;
    }
    if(value_path == "enable-external-groups")
    {
        enable_external_groups.yfilter = yfilter;
    }
    if(value_path == "denied-operations")
    {
        denied_operations.yfilter = yfilter;
    }
    if(value_path == "denied-data-writes")
    {
        denied_data_writes.yfilter = yfilter;
    }
    if(value_path == "denied-notifications")
    {
        denied_notifications.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Nacm::clone_ptr() const
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

std::map<std::pair<std::string, std::string>, std::string> Nacm::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool Nacm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "rule-list" || name == "enable-nacm" || name == "read-default" || name == "write-default" || name == "exec-default" || name == "enable-external-groups" || name == "denied-operations" || name == "denied-data-writes" || name == "denied-notifications")
        return true;
    return false;
}

Nacm::Groups::Groups()
    :
    group(this, {"name"})
{

    yang_name = "groups"; yang_parent_name = "nacm"; is_top_level_class = false; has_list_ancestor = false; 
}

Nacm::Groups::~Groups()
{
}

bool Nacm::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Nacm::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Nacm::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-acm:nacm/" << get_segment_path();
    return path_buffer.str();
}

std::string Nacm::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nacm::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Nacm::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<Nacm::Groups::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Nacm::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Nacm::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Nacm::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Nacm::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Nacm::Groups::Group::Group()
    :
    name{YType::str, "name"},
    user_name{YType::str, "user-name"}
{

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Nacm::Groups::Group::~Group()
{
}

bool Nacm::Groups::Group::has_data() const
{
    if (is_presence_container) return true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(user_name.yfilter);
}

std::string Nacm::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-acm:nacm/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Nacm::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nacm::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    auto user_name_name_datas = user_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), user_name_name_datas.begin(), user_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Nacm::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Nacm::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Nacm::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-name")
    {
        user_name.append(value);
    }
}

void Nacm::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "user-name")
    {
        user_name.yfilter = yfilter;
    }
}

bool Nacm::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "user-name")
        return true;
    return false;
}

Nacm::RuleList::RuleList()
    :
    name{YType::str, "name"},
    group{YType::str, "group"}
        ,
    rule(this, {"name"})
{

    yang_name = "rule-list"; yang_parent_name = "nacm"; is_top_level_class = false; has_list_ancestor = false; 
}

Nacm::RuleList::~RuleList()
{
}

bool Nacm::RuleList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule.len(); index++)
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
    for (std::size_t index=0; index<rule.len(); index++)
    {
        if(rule[index]->has_operation())
            return true;
    }
    for (auto const & leaf : group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Nacm::RuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-acm:nacm/" << get_segment_path();
    return path_buffer.str();
}

std::string Nacm::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nacm::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    auto group_name_datas = group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), group_name_datas.begin(), group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Nacm::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule")
    {
        auto ent_ = std::make_shared<Nacm::RuleList::Rule>();
        ent_->parent = this;
        rule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Nacm::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Nacm::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group.append(value);
    }
}

void Nacm::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Nacm::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule" || name == "name" || name == "group")
        return true;
    return false;
}

Nacm::RuleList::Rule::Rule()
    :
    name{YType::str, "name"},
    module_name{YType::str, "module-name"},
    rpc_name{YType::str, "rpc-name"},
    notification_name{YType::str, "notification-name"},
    path{YType::str, "path"},
    access_operations{YType::str, "access-operations"},
    action{YType::enumeration, "action"},
    comment{YType::str, "comment"}
{

    yang_name = "rule"; yang_parent_name = "rule-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Nacm::RuleList::Rule::~Rule()
{
}

bool Nacm::RuleList::Rule::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| module_name.is_set
	|| rpc_name.is_set
	|| notification_name.is_set
	|| path.is_set
	|| access_operations.is_set
	|| action.is_set
	|| comment.is_set;
}

bool Nacm::RuleList::Rule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(module_name.yfilter)
	|| ydk::is_set(rpc_name.yfilter)
	|| ydk::is_set(notification_name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(access_operations.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(comment.yfilter);
}

std::string Nacm::RuleList::Rule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nacm::RuleList::Rule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (module_name.is_set || is_set(module_name.yfilter)) leaf_name_data.push_back(module_name.get_name_leafdata());
    if (rpc_name.is_set || is_set(rpc_name.yfilter)) leaf_name_data.push_back(rpc_name.get_name_leafdata());
    if (notification_name.is_set || is_set(notification_name.yfilter)) leaf_name_data.push_back(notification_name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (access_operations.is_set || is_set(access_operations.yfilter)) leaf_name_data.push_back(access_operations.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Nacm::RuleList::Rule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Nacm::RuleList::Rule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Nacm::RuleList::Rule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-name")
    {
        module_name = value;
        module_name.value_namespace = name_space;
        module_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpc-name")
    {
        rpc_name = value;
        rpc_name.value_namespace = name_space;
        rpc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-name")
    {
        notification_name = value;
        notification_name.value_namespace = name_space;
        notification_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-operations")
    {
        access_operations = value;
        access_operations.value_namespace = name_space;
        access_operations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comment")
    {
        comment = value;
        comment.value_namespace = name_space;
        comment.value_namespace_prefix = name_space_prefix;
    }
}

void Nacm::RuleList::Rule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "module-name")
    {
        module_name.yfilter = yfilter;
    }
    if(value_path == "rpc-name")
    {
        rpc_name.yfilter = yfilter;
    }
    if(value_path == "notification-name")
    {
        notification_name.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "access-operations")
    {
        access_operations.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "comment")
    {
        comment.yfilter = yfilter;
    }
}

bool Nacm::RuleList::Rule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "module-name" || name == "rpc-name" || name == "notification-name" || name == "path" || name == "access-operations" || name == "action" || name == "comment")
        return true;
    return false;
}

const Enum::YLeaf ActionType::permit {0, "permit"};
const Enum::YLeaf ActionType::deny {1, "deny"};


}
}

