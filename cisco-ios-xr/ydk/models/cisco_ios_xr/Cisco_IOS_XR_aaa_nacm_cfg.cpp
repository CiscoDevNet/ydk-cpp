
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_aaa_nacm_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_nacm_cfg {

Nacm::Nacm()
    :
    enable_nacm{YType::boolean, "enable-nacm"},
    write_default{YType::enumeration, "write-default"},
    exec_default{YType::enumeration, "exec-default"},
    enable_external_groups{YType::boolean, "enable-external-groups"},
    read_default{YType::enumeration, "read-default"}
        ,
    groups(std::make_shared<Nacm::Groups>())
    , rulelist_classes(std::make_shared<Nacm::RulelistClasses>())
{
    groups->parent = this;
    rulelist_classes->parent = this;

    yang_name = "nacm"; yang_parent_name = "Cisco-IOS-XR-aaa-nacm-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Nacm::~Nacm()
{
}

bool Nacm::has_data() const
{
    if (is_presence_container) return true;
    return enable_nacm.is_set
	|| write_default.is_set
	|| exec_default.is_set
	|| enable_external_groups.is_set
	|| read_default.is_set
	|| (groups !=  nullptr && groups->has_data())
	|| (rulelist_classes !=  nullptr && rulelist_classes->has_data());
}

bool Nacm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_nacm.yfilter)
	|| ydk::is_set(write_default.yfilter)
	|| ydk::is_set(exec_default.yfilter)
	|| ydk::is_set(enable_external_groups.yfilter)
	|| ydk::is_set(read_default.yfilter)
	|| (groups !=  nullptr && groups->has_operation())
	|| (rulelist_classes !=  nullptr && rulelist_classes->has_operation());
}

std::string Nacm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-nacm-cfg:nacm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nacm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_nacm.is_set || is_set(enable_nacm.yfilter)) leaf_name_data.push_back(enable_nacm.get_name_leafdata());
    if (write_default.is_set || is_set(write_default.yfilter)) leaf_name_data.push_back(write_default.get_name_leafdata());
    if (exec_default.is_set || is_set(exec_default.yfilter)) leaf_name_data.push_back(exec_default.get_name_leafdata());
    if (enable_external_groups.is_set || is_set(enable_external_groups.yfilter)) leaf_name_data.push_back(enable_external_groups.get_name_leafdata());
    if (read_default.is_set || is_set(read_default.yfilter)) leaf_name_data.push_back(read_default.get_name_leafdata());

    return leaf_name_data;

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

    if(child_yang_name == "rulelist-classes")
    {
        if(rulelist_classes == nullptr)
        {
            rulelist_classes = std::make_shared<Nacm::RulelistClasses>();
        }
        return rulelist_classes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nacm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    if(rulelist_classes != nullptr)
    {
        children["rulelist-classes"] = rulelist_classes;
    }

    return children;
}

void Nacm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-nacm")
    {
        enable_nacm = value;
        enable_nacm.value_namespace = name_space;
        enable_nacm.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "read-default")
    {
        read_default = value;
        read_default.value_namespace = name_space;
        read_default.value_namespace_prefix = name_space_prefix;
    }
}

void Nacm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-nacm")
    {
        enable_nacm.yfilter = yfilter;
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
    if(value_path == "read-default")
    {
        read_default.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Nacm::clone_ptr() const
{
    return std::make_shared<Nacm>();
}

std::string Nacm::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Nacm::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Nacm::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Nacm::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Nacm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "rulelist-classes" || name == "enable-nacm" || name == "write-default" || name == "exec-default" || name == "enable-external-groups" || name == "read-default")
        return true;
    return false;
}

Nacm::Groups::Groups()
    :
    group(this, {"group_name"})
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
    path_buffer << "Cisco-IOS-XR-aaa-nacm-cfg:nacm/" << get_segment_path();
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

std::shared_ptr<Entity> Nacm::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto c = std::make_shared<Nacm::Groups::Group>();
        c->parent = this;
        group.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nacm::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    group_name{YType::str, "group-name"},
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
    return group_name.is_set;
}

bool Nacm::Groups::Group::has_operation() const
{
    for (auto const & leaf : user_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(user_name.yfilter);
}

std::string Nacm::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-nacm-cfg:nacm/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Nacm::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(group_name, "group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nacm::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    auto user_name_name_datas = user_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), user_name_name_datas.begin(), user_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Nacm::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nacm::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Nacm::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-name")
    {
        user_name.append(value);
    }
}

void Nacm::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "user-name")
    {
        user_name.yfilter = yfilter;
    }
}

bool Nacm::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name" || name == "user-name")
        return true;
    return false;
}

Nacm::RulelistClasses::RulelistClasses()
    :
    rulelist_class(this, {"ordering_index", "rulelist_name"})
{

    yang_name = "rulelist-classes"; yang_parent_name = "nacm"; is_top_level_class = false; has_list_ancestor = false; 
}

Nacm::RulelistClasses::~RulelistClasses()
{
}

bool Nacm::RulelistClasses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rulelist_class.len(); index++)
    {
        if(rulelist_class[index]->has_data())
            return true;
    }
    return false;
}

bool Nacm::RulelistClasses::has_operation() const
{
    for (std::size_t index=0; index<rulelist_class.len(); index++)
    {
        if(rulelist_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Nacm::RulelistClasses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-nacm-cfg:nacm/" << get_segment_path();
    return path_buffer.str();
}

std::string Nacm::RulelistClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rulelist-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nacm::RulelistClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Nacm::RulelistClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rulelist-class")
    {
        auto c = std::make_shared<Nacm::RulelistClasses::RulelistClass>();
        c->parent = this;
        rulelist_class.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nacm::RulelistClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rulelist_class.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Nacm::RulelistClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Nacm::RulelistClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Nacm::RulelistClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rulelist-class")
        return true;
    return false;
}

Nacm::RulelistClasses::RulelistClass::RulelistClass()
    :
    ordering_index{YType::str, "ordering-index"},
    rulelist_name{YType::str, "rulelist-name"}
        ,
    group_names(std::make_shared<Nacm::RulelistClasses::RulelistClass::GroupNames>())
    , rules(std::make_shared<Nacm::RulelistClasses::RulelistClass::Rules>())
{
    group_names->parent = this;
    rules->parent = this;

    yang_name = "rulelist-class"; yang_parent_name = "rulelist-classes"; is_top_level_class = false; has_list_ancestor = false; 
}

Nacm::RulelistClasses::RulelistClass::~RulelistClass()
{
}

bool Nacm::RulelistClasses::RulelistClass::has_data() const
{
    if (is_presence_container) return true;
    return ordering_index.is_set
	|| rulelist_name.is_set
	|| (group_names !=  nullptr && group_names->has_data())
	|| (rules !=  nullptr && rules->has_data());
}

bool Nacm::RulelistClasses::RulelistClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ordering_index.yfilter)
	|| ydk::is_set(rulelist_name.yfilter)
	|| (group_names !=  nullptr && group_names->has_operation())
	|| (rules !=  nullptr && rules->has_operation());
}

std::string Nacm::RulelistClasses::RulelistClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-nacm-cfg:nacm/rulelist-classes/" << get_segment_path();
    return path_buffer.str();
}

std::string Nacm::RulelistClasses::RulelistClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rulelist-class";
    ADD_KEY_TOKEN(ordering_index, "ordering-index");
    ADD_KEY_TOKEN(rulelist_name, "rulelist-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nacm::RulelistClasses::RulelistClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ordering_index.is_set || is_set(ordering_index.yfilter)) leaf_name_data.push_back(ordering_index.get_name_leafdata());
    if (rulelist_name.is_set || is_set(rulelist_name.yfilter)) leaf_name_data.push_back(rulelist_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Nacm::RulelistClasses::RulelistClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-names")
    {
        if(group_names == nullptr)
        {
            group_names = std::make_shared<Nacm::RulelistClasses::RulelistClass::GroupNames>();
        }
        return group_names;
    }

    if(child_yang_name == "rules")
    {
        if(rules == nullptr)
        {
            rules = std::make_shared<Nacm::RulelistClasses::RulelistClass::Rules>();
        }
        return rules;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nacm::RulelistClasses::RulelistClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(group_names != nullptr)
    {
        children["group-names"] = group_names;
    }

    if(rules != nullptr)
    {
        children["rules"] = rules;
    }

    return children;
}

void Nacm::RulelistClasses::RulelistClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ordering-index")
    {
        ordering_index = value;
        ordering_index.value_namespace = name_space;
        ordering_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rulelist-name")
    {
        rulelist_name = value;
        rulelist_name.value_namespace = name_space;
        rulelist_name.value_namespace_prefix = name_space_prefix;
    }
}

void Nacm::RulelistClasses::RulelistClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ordering-index")
    {
        ordering_index.yfilter = yfilter;
    }
    if(value_path == "rulelist-name")
    {
        rulelist_name.yfilter = yfilter;
    }
}

bool Nacm::RulelistClasses::RulelistClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-names" || name == "rules" || name == "ordering-index" || name == "rulelist-name")
        return true;
    return false;
}

Nacm::RulelistClasses::RulelistClass::GroupNames::GroupNames()
    :
    group_name{YType::str, "group-name"}
{

    yang_name = "group-names"; yang_parent_name = "rulelist-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Nacm::RulelistClasses::RulelistClass::GroupNames::~GroupNames()
{
}

bool Nacm::RulelistClasses::RulelistClass::GroupNames::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : group_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Nacm::RulelistClasses::RulelistClass::GroupNames::has_operation() const
{
    for (auto const & leaf : group_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter);
}

std::string Nacm::RulelistClasses::RulelistClass::GroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nacm::RulelistClasses::RulelistClass::GroupNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto group_name_name_datas = group_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), group_name_name_datas.begin(), group_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Nacm::RulelistClasses::RulelistClass::GroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nacm::RulelistClasses::RulelistClass::GroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Nacm::RulelistClasses::RulelistClass::GroupNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name.append(value);
    }
}

void Nacm::RulelistClasses::RulelistClass::GroupNames::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Nacm::RulelistClasses::RulelistClass::GroupNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name")
        return true;
    return false;
}

Nacm::RulelistClasses::RulelistClass::Rules::Rules()
    :
    rule(this, {"ordering_index", "rule_name"})
{

    yang_name = "rules"; yang_parent_name = "rulelist-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Nacm::RulelistClasses::RulelistClass::Rules::~Rules()
{
}

bool Nacm::RulelistClasses::RulelistClass::Rules::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule.len(); index++)
    {
        if(rule[index]->has_data())
            return true;
    }
    return false;
}

bool Nacm::RulelistClasses::RulelistClass::Rules::has_operation() const
{
    for (std::size_t index=0; index<rule.len(); index++)
    {
        if(rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Nacm::RulelistClasses::RulelistClass::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nacm::RulelistClasses::RulelistClass::Rules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Nacm::RulelistClasses::RulelistClass::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule")
    {
        auto c = std::make_shared<Nacm::RulelistClasses::RulelistClass::Rules::Rule>();
        c->parent = this;
        rule.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nacm::RulelistClasses::RulelistClass::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Nacm::RulelistClasses::RulelistClass::Rules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Nacm::RulelistClasses::RulelistClass::Rules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Nacm::RulelistClasses::RulelistClass::Rules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule")
        return true;
    return false;
}

Nacm::RulelistClasses::RulelistClass::Rules::Rule::Rule()
    :
    ordering_index{YType::str, "ordering-index"},
    rule_name{YType::str, "rule-name"},
    module_name{YType::str, "module-name"},
    action{YType::enumeration, "action"},
    comment{YType::str, "comment"}
        ,
    rule_type(std::make_shared<Nacm::RulelistClasses::RulelistClass::Rules::Rule::RuleType>())
    , access_operations(std::make_shared<Nacm::RulelistClasses::RulelistClass::Rules::Rule::AccessOperations>())
{
    rule_type->parent = this;
    access_operations->parent = this;

    yang_name = "rule"; yang_parent_name = "rules"; is_top_level_class = false; has_list_ancestor = true; 
}

Nacm::RulelistClasses::RulelistClass::Rules::Rule::~Rule()
{
}

bool Nacm::RulelistClasses::RulelistClass::Rules::Rule::has_data() const
{
    if (is_presence_container) return true;
    return ordering_index.is_set
	|| rule_name.is_set
	|| module_name.is_set
	|| action.is_set
	|| comment.is_set
	|| (rule_type !=  nullptr && rule_type->has_data())
	|| (access_operations !=  nullptr && access_operations->has_data());
}

bool Nacm::RulelistClasses::RulelistClass::Rules::Rule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ordering_index.yfilter)
	|| ydk::is_set(rule_name.yfilter)
	|| ydk::is_set(module_name.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(comment.yfilter)
	|| (rule_type !=  nullptr && rule_type->has_operation())
	|| (access_operations !=  nullptr && access_operations->has_operation());
}

std::string Nacm::RulelistClasses::RulelistClass::Rules::Rule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule";
    ADD_KEY_TOKEN(ordering_index, "ordering-index");
    ADD_KEY_TOKEN(rule_name, "rule-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nacm::RulelistClasses::RulelistClass::Rules::Rule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ordering_index.is_set || is_set(ordering_index.yfilter)) leaf_name_data.push_back(ordering_index.get_name_leafdata());
    if (rule_name.is_set || is_set(rule_name.yfilter)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (module_name.is_set || is_set(module_name.yfilter)) leaf_name_data.push_back(module_name.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Nacm::RulelistClasses::RulelistClass::Rules::Rule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-type")
    {
        if(rule_type == nullptr)
        {
            rule_type = std::make_shared<Nacm::RulelistClasses::RulelistClass::Rules::Rule::RuleType>();
        }
        return rule_type;
    }

    if(child_yang_name == "access-operations")
    {
        if(access_operations == nullptr)
        {
            access_operations = std::make_shared<Nacm::RulelistClasses::RulelistClass::Rules::Rule::AccessOperations>();
        }
        return access_operations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nacm::RulelistClasses::RulelistClass::Rules::Rule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rule_type != nullptr)
    {
        children["rule-type"] = rule_type;
    }

    if(access_operations != nullptr)
    {
        children["access-operations"] = access_operations;
    }

    return children;
}

void Nacm::RulelistClasses::RulelistClass::Rules::Rule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ordering-index")
    {
        ordering_index = value;
        ordering_index.value_namespace = name_space;
        ordering_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-name")
    {
        rule_name = value;
        rule_name.value_namespace = name_space;
        rule_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-name")
    {
        module_name = value;
        module_name.value_namespace = name_space;
        module_name.value_namespace_prefix = name_space_prefix;
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

void Nacm::RulelistClasses::RulelistClass::Rules::Rule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ordering-index")
    {
        ordering_index.yfilter = yfilter;
    }
    if(value_path == "rule-name")
    {
        rule_name.yfilter = yfilter;
    }
    if(value_path == "module-name")
    {
        module_name.yfilter = yfilter;
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

bool Nacm::RulelistClasses::RulelistClass::Rules::Rule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-type" || name == "access-operations" || name == "ordering-index" || name == "rule-name" || name == "module-name" || name == "action" || name == "comment")
        return true;
    return false;
}

Nacm::RulelistClasses::RulelistClass::Rules::Rule::RuleType::RuleType()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{

    yang_name = "rule-type"; yang_parent_name = "rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Nacm::RulelistClasses::RulelistClass::Rules::Rule::RuleType::~RuleType()
{
}

bool Nacm::RulelistClasses::RulelistClass::Rules::Rule::RuleType::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| value_.is_set;
}

bool Nacm::RulelistClasses::RulelistClass::Rules::Rule::RuleType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Nacm::RulelistClasses::RulelistClass::Rules::Rule::RuleType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nacm::RulelistClasses::RulelistClass::Rules::Rule::RuleType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Nacm::RulelistClasses::RulelistClass::Rules::Rule::RuleType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nacm::RulelistClasses::RulelistClass::Rules::Rule::RuleType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Nacm::RulelistClasses::RulelistClass::Rules::Rule::RuleType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Nacm::RulelistClasses::RulelistClass::Rules::Rule::RuleType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Nacm::RulelistClasses::RulelistClass::Rules::Rule::RuleType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value")
        return true;
    return false;
}

Nacm::RulelistClasses::RulelistClass::Rules::Rule::AccessOperations::AccessOperations()
    :
    create{YType::uint32, "create"},
    read{YType::uint32, "read"},
    update{YType::uint32, "update"},
    delete_{YType::uint32, "delete"},
    exec{YType::uint32, "exec"},
    all{YType::uint32, "all"}
{

    yang_name = "access-operations"; yang_parent_name = "rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Nacm::RulelistClasses::RulelistClass::Rules::Rule::AccessOperations::~AccessOperations()
{
}

bool Nacm::RulelistClasses::RulelistClass::Rules::Rule::AccessOperations::has_data() const
{
    if (is_presence_container) return true;
    return create.is_set
	|| read.is_set
	|| update.is_set
	|| delete_.is_set
	|| exec.is_set
	|| all.is_set;
}

bool Nacm::RulelistClasses::RulelistClass::Rules::Rule::AccessOperations::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(read.yfilter)
	|| ydk::is_set(update.yfilter)
	|| ydk::is_set(delete_.yfilter)
	|| ydk::is_set(exec.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Nacm::RulelistClasses::RulelistClass::Rules::Rule::AccessOperations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-operations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nacm::RulelistClasses::RulelistClass::Rules::Rule::AccessOperations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (read.is_set || is_set(read.yfilter)) leaf_name_data.push_back(read.get_name_leafdata());
    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());
    if (exec.is_set || is_set(exec.yfilter)) leaf_name_data.push_back(exec.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Nacm::RulelistClasses::RulelistClass::Rules::Rule::AccessOperations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nacm::RulelistClasses::RulelistClass::Rules::Rule::AccessOperations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Nacm::RulelistClasses::RulelistClass::Rules::Rule::AccessOperations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read")
    {
        read = value;
        read.value_namespace = name_space;
        read.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec")
    {
        exec = value;
        exec.value_namespace = name_space;
        exec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Nacm::RulelistClasses::RulelistClass::Rules::Rule::AccessOperations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "read")
    {
        read.yfilter = yfilter;
    }
    if(value_path == "update")
    {
        update.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
    if(value_path == "exec")
    {
        exec.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Nacm::RulelistClasses::RulelistClass::Rules::Rule::AccessOperations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "create" || name == "read" || name == "update" || name == "delete" || name == "exec" || name == "all")
        return true;
    return false;
}

const Enum::YLeaf NacmAction::permit {0, "permit"};
const Enum::YLeaf NacmAction::deny {1, "deny"};

const Enum::YLeaf NacmRule::protocol_operation {0, "protocol-operation"};
const Enum::YLeaf NacmRule::data_node {1, "data-node"};
const Enum::YLeaf NacmRule::notification {2, "notification"};


}
}

