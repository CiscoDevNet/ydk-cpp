
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_es_acl_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_es_acl_oper {

EsAcl::EsAcl()
    :
    active(std::make_shared<EsAcl::Active>())
{
    active->parent = this;

    yang_name = "es-acl"; yang_parent_name = "Cisco-IOS-XR-es-acl-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

EsAcl::~EsAcl()
{
}

bool EsAcl::has_data() const
{
    if (is_presence_container) return true;
    return (active !=  nullptr && active->has_data());
}

bool EsAcl::has_operation() const
{
    return is_set(yfilter)
	|| (active !=  nullptr && active->has_operation());
}

std::string EsAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<EsAcl::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(active != nullptr)
    {
        children["active"] = active;
    }

    return children;
}

void EsAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EsAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EsAcl::clone_ptr() const
{
    return std::make_shared<EsAcl>();
}

std::string EsAcl::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EsAcl::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EsAcl::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EsAcl::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool EsAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active")
        return true;
    return false;
}

EsAcl::Active::Active()
    :
    oor(std::make_shared<EsAcl::Active::Oor>())
    , list(std::make_shared<EsAcl::Active::List>())
    , oor_acls(std::make_shared<EsAcl::Active::OorAcls>())
    , usages(std::make_shared<EsAcl::Active::Usages>())
{
    oor->parent = this;
    list->parent = this;
    oor_acls->parent = this;
    usages->parent = this;

    yang_name = "active"; yang_parent_name = "es-acl"; is_top_level_class = false; has_list_ancestor = false; 
}

EsAcl::Active::~Active()
{
}

bool EsAcl::Active::has_data() const
{
    if (is_presence_container) return true;
    return (oor !=  nullptr && oor->has_data())
	|| (list !=  nullptr && list->has_data())
	|| (oor_acls !=  nullptr && oor_acls->has_data())
	|| (usages !=  nullptr && usages->has_data());
}

bool EsAcl::Active::has_operation() const
{
    return is_set(yfilter)
	|| (oor !=  nullptr && oor->has_operation())
	|| (list !=  nullptr && list->has_operation())
	|| (oor_acls !=  nullptr && oor_acls->has_operation())
	|| (usages !=  nullptr && usages->has_operation());
}

std::string EsAcl::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/" << get_segment_path();
    return path_buffer.str();
}

std::string EsAcl::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oor")
    {
        if(oor == nullptr)
        {
            oor = std::make_shared<EsAcl::Active::Oor>();
        }
        return oor;
    }

    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<EsAcl::Active::List>();
        }
        return list;
    }

    if(child_yang_name == "oor-acls")
    {
        if(oor_acls == nullptr)
        {
            oor_acls = std::make_shared<EsAcl::Active::OorAcls>();
        }
        return oor_acls;
    }

    if(child_yang_name == "usages")
    {
        if(usages == nullptr)
        {
            usages = std::make_shared<EsAcl::Active::Usages>();
        }
        return usages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oor != nullptr)
    {
        children["oor"] = oor;
    }

    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(oor_acls != nullptr)
    {
        children["oor-acls"] = oor_acls;
    }

    if(usages != nullptr)
    {
        children["usages"] = usages;
    }

    return children;
}

void EsAcl::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EsAcl::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EsAcl::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oor" || name == "list" || name == "oor-acls" || name == "usages")
        return true;
    return false;
}

EsAcl::Active::Oor::Oor()
    :
    acl_summary(std::make_shared<EsAcl::Active::Oor::AclSummary>())
{
    acl_summary->parent = this;

    yang_name = "oor"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

EsAcl::Active::Oor::~Oor()
{
}

bool EsAcl::Active::Oor::has_data() const
{
    if (is_presence_container) return true;
    return (acl_summary !=  nullptr && acl_summary->has_data());
}

bool EsAcl::Active::Oor::has_operation() const
{
    return is_set(yfilter)
	|| (acl_summary !=  nullptr && acl_summary->has_operation());
}

std::string EsAcl::Active::Oor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/" << get_segment_path();
    return path_buffer.str();
}

std::string EsAcl::Active::Oor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Active::Oor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Active::Oor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-summary")
    {
        if(acl_summary == nullptr)
        {
            acl_summary = std::make_shared<EsAcl::Active::Oor::AclSummary>();
        }
        return acl_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Active::Oor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_summary != nullptr)
    {
        children["acl-summary"] = acl_summary;
    }

    return children;
}

void EsAcl::Active::Oor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EsAcl::Active::Oor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EsAcl::Active::Oor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-summary")
        return true;
    return false;
}

EsAcl::Active::Oor::AclSummary::AclSummary()
    :
    details(std::make_shared<EsAcl::Active::Oor::AclSummary::Details>())
{
    details->parent = this;

    yang_name = "acl-summary"; yang_parent_name = "oor"; is_top_level_class = false; has_list_ancestor = false; 
}

EsAcl::Active::Oor::AclSummary::~AclSummary()
{
}

bool EsAcl::Active::Oor::AclSummary::has_data() const
{
    if (is_presence_container) return true;
    return (details !=  nullptr && details->has_data());
}

bool EsAcl::Active::Oor::AclSummary::has_operation() const
{
    return is_set(yfilter)
	|| (details !=  nullptr && details->has_operation());
}

std::string EsAcl::Active::Oor::AclSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/oor/" << get_segment_path();
    return path_buffer.str();
}

std::string EsAcl::Active::Oor::AclSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Active::Oor::AclSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Active::Oor::AclSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<EsAcl::Active::Oor::AclSummary::Details>();
        }
        return details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Active::Oor::AclSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(details != nullptr)
    {
        children["details"] = details;
    }

    return children;
}

void EsAcl::Active::Oor::AclSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EsAcl::Active::Oor::AclSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EsAcl::Active::Oor::AclSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

EsAcl::Active::Oor::AclSummary::Details::Details()
    :
    current_configured_ac_ls{YType::uint32, "current-configured-ac-ls"},
    current_configured_ac_es{YType::uint32, "current-configured-ac-es"},
    maximum_configurable_ac_ls{YType::uint32, "maximum-configurable-ac-ls"},
    maximum_configurable_ac_es{YType::uint32, "maximum-configurable-ac-es"}
{

    yang_name = "details"; yang_parent_name = "acl-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

EsAcl::Active::Oor::AclSummary::Details::~Details()
{
}

bool EsAcl::Active::Oor::AclSummary::Details::has_data() const
{
    if (is_presence_container) return true;
    return current_configured_ac_ls.is_set
	|| current_configured_ac_es.is_set
	|| maximum_configurable_ac_ls.is_set
	|| maximum_configurable_ac_es.is_set;
}

bool EsAcl::Active::Oor::AclSummary::Details::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_configured_ac_ls.yfilter)
	|| ydk::is_set(current_configured_ac_es.yfilter)
	|| ydk::is_set(maximum_configurable_ac_ls.yfilter)
	|| ydk::is_set(maximum_configurable_ac_es.yfilter);
}

std::string EsAcl::Active::Oor::AclSummary::Details::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/oor/acl-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string EsAcl::Active::Oor::AclSummary::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Active::Oor::AclSummary::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_configured_ac_ls.is_set || is_set(current_configured_ac_ls.yfilter)) leaf_name_data.push_back(current_configured_ac_ls.get_name_leafdata());
    if (current_configured_ac_es.is_set || is_set(current_configured_ac_es.yfilter)) leaf_name_data.push_back(current_configured_ac_es.get_name_leafdata());
    if (maximum_configurable_ac_ls.is_set || is_set(maximum_configurable_ac_ls.yfilter)) leaf_name_data.push_back(maximum_configurable_ac_ls.get_name_leafdata());
    if (maximum_configurable_ac_es.is_set || is_set(maximum_configurable_ac_es.yfilter)) leaf_name_data.push_back(maximum_configurable_ac_es.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Active::Oor::AclSummary::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Active::Oor::AclSummary::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EsAcl::Active::Oor::AclSummary::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls = value;
        current_configured_ac_ls.value_namespace = name_space;
        current_configured_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es = value;
        current_configured_ac_es.value_namespace = name_space;
        current_configured_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-configurable-ac-ls")
    {
        maximum_configurable_ac_ls = value;
        maximum_configurable_ac_ls.value_namespace = name_space;
        maximum_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-configurable-ac-es")
    {
        maximum_configurable_ac_es = value;
        maximum_configurable_ac_es.value_namespace = name_space;
        maximum_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
}

void EsAcl::Active::Oor::AclSummary::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls.yfilter = yfilter;
    }
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es.yfilter = yfilter;
    }
    if(value_path == "maximum-configurable-ac-ls")
    {
        maximum_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "maximum-configurable-ac-es")
    {
        maximum_configurable_ac_es.yfilter = yfilter;
    }
}

bool EsAcl::Active::Oor::AclSummary::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-configured-ac-ls" || name == "current-configured-ac-es" || name == "maximum-configurable-ac-ls" || name == "maximum-configurable-ac-es")
        return true;
    return false;
}

EsAcl::Active::List::List()
    :
    acls(std::make_shared<EsAcl::Active::List::Acls>())
{
    acls->parent = this;

    yang_name = "list"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

EsAcl::Active::List::~List()
{
}

bool EsAcl::Active::List::has_data() const
{
    if (is_presence_container) return true;
    return (acls !=  nullptr && acls->has_data());
}

bool EsAcl::Active::List::has_operation() const
{
    return is_set(yfilter)
	|| (acls !=  nullptr && acls->has_operation());
}

std::string EsAcl::Active::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/" << get_segment_path();
    return path_buffer.str();
}

std::string EsAcl::Active::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Active::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Active::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acls")
    {
        if(acls == nullptr)
        {
            acls = std::make_shared<EsAcl::Active::List::Acls>();
        }
        return acls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Active::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acls != nullptr)
    {
        children["acls"] = acls;
    }

    return children;
}

void EsAcl::Active::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EsAcl::Active::List::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EsAcl::Active::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acls")
        return true;
    return false;
}

EsAcl::Active::List::Acls::Acls()
    :
    acl(this, {"name"})
{

    yang_name = "acls"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = false; 
}

EsAcl::Active::List::Acls::~Acls()
{
}

bool EsAcl::Active::List::Acls::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acl.len(); index++)
    {
        if(acl[index]->has_data())
            return true;
    }
    return false;
}

bool EsAcl::Active::List::Acls::has_operation() const
{
    for (std::size_t index=0; index<acl.len(); index++)
    {
        if(acl[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EsAcl::Active::List::Acls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/list/" << get_segment_path();
    return path_buffer.str();
}

std::string EsAcl::Active::List::Acls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Active::List::Acls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Active::List::Acls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        auto c = std::make_shared<EsAcl::Active::List::Acls::Acl>();
        c->parent = this;
        acl.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Active::List::Acls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : acl.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void EsAcl::Active::List::Acls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EsAcl::Active::List::Acls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EsAcl::Active::List::Acls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl")
        return true;
    return false;
}

EsAcl::Active::List::Acls::Acl::Acl()
    :
    name{YType::str, "name"}
        ,
    acl_sequence_numbers(std::make_shared<EsAcl::Active::List::Acls::Acl::AclSequenceNumbers>())
{
    acl_sequence_numbers->parent = this;

    yang_name = "acl"; yang_parent_name = "acls"; is_top_level_class = false; has_list_ancestor = false; 
}

EsAcl::Active::List::Acls::Acl::~Acl()
{
}

bool EsAcl::Active::List::Acls::Acl::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (acl_sequence_numbers !=  nullptr && acl_sequence_numbers->has_data());
}

bool EsAcl::Active::List::Acls::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (acl_sequence_numbers !=  nullptr && acl_sequence_numbers->has_operation());
}

std::string EsAcl::Active::List::Acls::Acl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/list/acls/" << get_segment_path();
    return path_buffer.str();
}

std::string EsAcl::Active::List::Acls::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Active::List::Acls::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Active::List::Acls::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-sequence-numbers")
    {
        if(acl_sequence_numbers == nullptr)
        {
            acl_sequence_numbers = std::make_shared<EsAcl::Active::List::Acls::Acl::AclSequenceNumbers>();
        }
        return acl_sequence_numbers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Active::List::Acls::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_sequence_numbers != nullptr)
    {
        children["acl-sequence-numbers"] = acl_sequence_numbers;
    }

    return children;
}

void EsAcl::Active::List::Acls::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void EsAcl::Active::List::Acls::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool EsAcl::Active::List::Acls::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-sequence-numbers" || name == "name")
        return true;
    return false;
}

EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumbers()
    :
    acl_sequence_number(this, {"sequence_number"})
{

    yang_name = "acl-sequence-numbers"; yang_parent_name = "acl"; is_top_level_class = false; has_list_ancestor = true; 
}

EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::~AclSequenceNumbers()
{
}

bool EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acl_sequence_number.len(); index++)
    {
        if(acl_sequence_number[index]->has_data())
            return true;
    }
    return false;
}

bool EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::has_operation() const
{
    for (std::size_t index=0; index<acl_sequence_number.len(); index++)
    {
        if(acl_sequence_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-sequence-numbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-sequence-number")
    {
        auto c = std::make_shared<EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber>();
        c->parent = this;
        acl_sequence_number.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : acl_sequence_number.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-sequence-number")
        return true;
    return false;
}

EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::AclSequenceNumber()
    :
    sequence_number{YType::uint32, "sequence-number"},
    ace_type{YType::enumeration, "ace-type"},
    ace_sequence_number{YType::uint32, "ace-sequence-number"},
    hits{YType::uint64, "hits"},
    grant{YType::enumeration, "grant"},
    source_address{YType::str, "source-address"},
    source_wild_card_bits{YType::str, "source-wild-card-bits"},
    destination_address{YType::str, "destination-address"},
    destination_wild_card_bits{YType::str, "destination-wild-card-bits"},
    ether_type_number{YType::uint16, "ether-type-number"},
    vlan1{YType::uint16, "vlan1"},
    vlan2{YType::uint16, "vlan2"},
    cos{YType::uint8, "cos"},
    dei{YType::uint8, "dei"},
    inner_header_vlan1{YType::uint16, "inner-header-vlan1"},
    inner_header_vlan2{YType::uint16, "inner-header-vlan2"},
    inner_header_cos{YType::uint8, "inner-header-cos"},
    inner_header_dei{YType::uint8, "inner-header-dei"},
    capture{YType::boolean, "capture"},
    log_option{YType::uint8, "log-option"},
    remark{YType::str, "remark"},
    acl_name{YType::str, "acl-name"},
    sequence_string{YType::str, "sequence-string"}
{

    yang_name = "acl-sequence-number"; yang_parent_name = "acl-sequence-numbers"; is_top_level_class = false; has_list_ancestor = true; 
}

EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::~AclSequenceNumber()
{
}

bool EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::has_data() const
{
    if (is_presence_container) return true;
    return sequence_number.is_set
	|| ace_type.is_set
	|| ace_sequence_number.is_set
	|| hits.is_set
	|| grant.is_set
	|| source_address.is_set
	|| source_wild_card_bits.is_set
	|| destination_address.is_set
	|| destination_wild_card_bits.is_set
	|| ether_type_number.is_set
	|| vlan1.is_set
	|| vlan2.is_set
	|| cos.is_set
	|| dei.is_set
	|| inner_header_vlan1.is_set
	|| inner_header_vlan2.is_set
	|| inner_header_cos.is_set
	|| inner_header_dei.is_set
	|| capture.is_set
	|| log_option.is_set
	|| remark.is_set
	|| acl_name.is_set
	|| sequence_string.is_set;
}

bool EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(ace_type.yfilter)
	|| ydk::is_set(ace_sequence_number.yfilter)
	|| ydk::is_set(hits.yfilter)
	|| ydk::is_set(grant.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_wild_card_bits.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_wild_card_bits.yfilter)
	|| ydk::is_set(ether_type_number.yfilter)
	|| ydk::is_set(vlan1.yfilter)
	|| ydk::is_set(vlan2.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(dei.yfilter)
	|| ydk::is_set(inner_header_vlan1.yfilter)
	|| ydk::is_set(inner_header_vlan2.yfilter)
	|| ydk::is_set(inner_header_cos.yfilter)
	|| ydk::is_set(inner_header_dei.yfilter)
	|| ydk::is_set(capture.yfilter)
	|| ydk::is_set(log_option.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(sequence_string.yfilter);
}

std::string EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-sequence-number";
    ADD_KEY_TOKEN(sequence_number, "sequence-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (ace_type.is_set || is_set(ace_type.yfilter)) leaf_name_data.push_back(ace_type.get_name_leafdata());
    if (ace_sequence_number.is_set || is_set(ace_sequence_number.yfilter)) leaf_name_data.push_back(ace_sequence_number.get_name_leafdata());
    if (hits.is_set || is_set(hits.yfilter)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (grant.is_set || is_set(grant.yfilter)) leaf_name_data.push_back(grant.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_wild_card_bits.is_set || is_set(source_wild_card_bits.yfilter)) leaf_name_data.push_back(source_wild_card_bits.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_wild_card_bits.is_set || is_set(destination_wild_card_bits.yfilter)) leaf_name_data.push_back(destination_wild_card_bits.get_name_leafdata());
    if (ether_type_number.is_set || is_set(ether_type_number.yfilter)) leaf_name_data.push_back(ether_type_number.get_name_leafdata());
    if (vlan1.is_set || is_set(vlan1.yfilter)) leaf_name_data.push_back(vlan1.get_name_leafdata());
    if (vlan2.is_set || is_set(vlan2.yfilter)) leaf_name_data.push_back(vlan2.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dei.is_set || is_set(dei.yfilter)) leaf_name_data.push_back(dei.get_name_leafdata());
    if (inner_header_vlan1.is_set || is_set(inner_header_vlan1.yfilter)) leaf_name_data.push_back(inner_header_vlan1.get_name_leafdata());
    if (inner_header_vlan2.is_set || is_set(inner_header_vlan2.yfilter)) leaf_name_data.push_back(inner_header_vlan2.get_name_leafdata());
    if (inner_header_cos.is_set || is_set(inner_header_cos.yfilter)) leaf_name_data.push_back(inner_header_cos.get_name_leafdata());
    if (inner_header_dei.is_set || is_set(inner_header_dei.yfilter)) leaf_name_data.push_back(inner_header_dei.get_name_leafdata());
    if (capture.is_set || is_set(capture.yfilter)) leaf_name_data.push_back(capture.get_name_leafdata());
    if (log_option.is_set || is_set(log_option.yfilter)) leaf_name_data.push_back(log_option.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (sequence_string.is_set || is_set(sequence_string.yfilter)) leaf_name_data.push_back(sequence_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ace-type")
    {
        ace_type = value;
        ace_type.value_namespace = name_space;
        ace_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ace-sequence-number")
    {
        ace_sequence_number = value;
        ace_sequence_number.value_namespace = name_space;
        ace_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hits")
    {
        hits = value;
        hits.value_namespace = name_space;
        hits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant")
    {
        grant = value;
        grant.value_namespace = name_space;
        grant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-wild-card-bits")
    {
        source_wild_card_bits = value;
        source_wild_card_bits.value_namespace = name_space;
        source_wild_card_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wild-card-bits")
    {
        destination_wild_card_bits = value;
        destination_wild_card_bits.value_namespace = name_space;
        destination_wild_card_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ether-type-number")
    {
        ether_type_number = value;
        ether_type_number.value_namespace = name_space;
        ether_type_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan1")
    {
        vlan1 = value;
        vlan1.value_namespace = name_space;
        vlan1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan2")
    {
        vlan2 = value;
        vlan2.value_namespace = name_space;
        vlan2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dei")
    {
        dei = value;
        dei.value_namespace = name_space;
        dei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-header-vlan1")
    {
        inner_header_vlan1 = value;
        inner_header_vlan1.value_namespace = name_space;
        inner_header_vlan1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-header-vlan2")
    {
        inner_header_vlan2 = value;
        inner_header_vlan2.value_namespace = name_space;
        inner_header_vlan2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-header-cos")
    {
        inner_header_cos = value;
        inner_header_cos.value_namespace = name_space;
        inner_header_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-header-dei")
    {
        inner_header_dei = value;
        inner_header_dei.value_namespace = name_space;
        inner_header_dei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capture")
    {
        capture = value;
        capture.value_namespace = name_space;
        capture.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-option")
    {
        log_option = value;
        log_option.value_namespace = name_space;
        log_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-string")
    {
        sequence_string = value;
        sequence_string.value_namespace = name_space;
        sequence_string.value_namespace_prefix = name_space_prefix;
    }
}

void EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "ace-type")
    {
        ace_type.yfilter = yfilter;
    }
    if(value_path == "ace-sequence-number")
    {
        ace_sequence_number.yfilter = yfilter;
    }
    if(value_path == "hits")
    {
        hits.yfilter = yfilter;
    }
    if(value_path == "grant")
    {
        grant.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-wild-card-bits")
    {
        source_wild_card_bits.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-wild-card-bits")
    {
        destination_wild_card_bits.yfilter = yfilter;
    }
    if(value_path == "ether-type-number")
    {
        ether_type_number.yfilter = yfilter;
    }
    if(value_path == "vlan1")
    {
        vlan1.yfilter = yfilter;
    }
    if(value_path == "vlan2")
    {
        vlan2.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "dei")
    {
        dei.yfilter = yfilter;
    }
    if(value_path == "inner-header-vlan1")
    {
        inner_header_vlan1.yfilter = yfilter;
    }
    if(value_path == "inner-header-vlan2")
    {
        inner_header_vlan2.yfilter = yfilter;
    }
    if(value_path == "inner-header-cos")
    {
        inner_header_cos.yfilter = yfilter;
    }
    if(value_path == "inner-header-dei")
    {
        inner_header_dei.yfilter = yfilter;
    }
    if(value_path == "capture")
    {
        capture.yfilter = yfilter;
    }
    if(value_path == "log-option")
    {
        log_option.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "sequence-string")
    {
        sequence_string.yfilter = yfilter;
    }
}

bool EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-number" || name == "ace-type" || name == "ace-sequence-number" || name == "hits" || name == "grant" || name == "source-address" || name == "source-wild-card-bits" || name == "destination-address" || name == "destination-wild-card-bits" || name == "ether-type-number" || name == "vlan1" || name == "vlan2" || name == "cos" || name == "dei" || name == "inner-header-vlan1" || name == "inner-header-vlan2" || name == "inner-header-cos" || name == "inner-header-dei" || name == "capture" || name == "log-option" || name == "remark" || name == "acl-name" || name == "sequence-string")
        return true;
    return false;
}

EsAcl::Active::OorAcls::OorAcls()
    :
    oor_acl(this, {"name"})
{

    yang_name = "oor-acls"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

EsAcl::Active::OorAcls::~OorAcls()
{
}

bool EsAcl::Active::OorAcls::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oor_acl.len(); index++)
    {
        if(oor_acl[index]->has_data())
            return true;
    }
    return false;
}

bool EsAcl::Active::OorAcls::has_operation() const
{
    for (std::size_t index=0; index<oor_acl.len(); index++)
    {
        if(oor_acl[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EsAcl::Active::OorAcls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/" << get_segment_path();
    return path_buffer.str();
}

std::string EsAcl::Active::OorAcls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-acls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Active::OorAcls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Active::OorAcls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oor-acl")
    {
        auto c = std::make_shared<EsAcl::Active::OorAcls::OorAcl>();
        c->parent = this;
        oor_acl.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Active::OorAcls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oor_acl.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void EsAcl::Active::OorAcls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EsAcl::Active::OorAcls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EsAcl::Active::OorAcls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oor-acl")
        return true;
    return false;
}

EsAcl::Active::OorAcls::OorAcl::OorAcl()
    :
    name{YType::str, "name"},
    current_configured_ac_ls{YType::uint32, "current-configured-ac-ls"},
    current_configured_ac_es{YType::uint32, "current-configured-ac-es"},
    maximum_configurable_ac_ls{YType::uint32, "maximum-configurable-ac-ls"},
    maximum_configurable_ac_es{YType::uint32, "maximum-configurable-ac-es"}
{

    yang_name = "oor-acl"; yang_parent_name = "oor-acls"; is_top_level_class = false; has_list_ancestor = false; 
}

EsAcl::Active::OorAcls::OorAcl::~OorAcl()
{
}

bool EsAcl::Active::OorAcls::OorAcl::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| current_configured_ac_ls.is_set
	|| current_configured_ac_es.is_set
	|| maximum_configurable_ac_ls.is_set
	|| maximum_configurable_ac_es.is_set;
}

bool EsAcl::Active::OorAcls::OorAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(current_configured_ac_ls.yfilter)
	|| ydk::is_set(current_configured_ac_es.yfilter)
	|| ydk::is_set(maximum_configurable_ac_ls.yfilter)
	|| ydk::is_set(maximum_configurable_ac_es.yfilter);
}

std::string EsAcl::Active::OorAcls::OorAcl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/oor-acls/" << get_segment_path();
    return path_buffer.str();
}

std::string EsAcl::Active::OorAcls::OorAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-acl";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Active::OorAcls::OorAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (current_configured_ac_ls.is_set || is_set(current_configured_ac_ls.yfilter)) leaf_name_data.push_back(current_configured_ac_ls.get_name_leafdata());
    if (current_configured_ac_es.is_set || is_set(current_configured_ac_es.yfilter)) leaf_name_data.push_back(current_configured_ac_es.get_name_leafdata());
    if (maximum_configurable_ac_ls.is_set || is_set(maximum_configurable_ac_ls.yfilter)) leaf_name_data.push_back(maximum_configurable_ac_ls.get_name_leafdata());
    if (maximum_configurable_ac_es.is_set || is_set(maximum_configurable_ac_es.yfilter)) leaf_name_data.push_back(maximum_configurable_ac_es.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Active::OorAcls::OorAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Active::OorAcls::OorAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EsAcl::Active::OorAcls::OorAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls = value;
        current_configured_ac_ls.value_namespace = name_space;
        current_configured_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es = value;
        current_configured_ac_es.value_namespace = name_space;
        current_configured_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-configurable-ac-ls")
    {
        maximum_configurable_ac_ls = value;
        maximum_configurable_ac_ls.value_namespace = name_space;
        maximum_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-configurable-ac-es")
    {
        maximum_configurable_ac_es = value;
        maximum_configurable_ac_es.value_namespace = name_space;
        maximum_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
}

void EsAcl::Active::OorAcls::OorAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls.yfilter = yfilter;
    }
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es.yfilter = yfilter;
    }
    if(value_path == "maximum-configurable-ac-ls")
    {
        maximum_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "maximum-configurable-ac-es")
    {
        maximum_configurable_ac_es.yfilter = yfilter;
    }
}

bool EsAcl::Active::OorAcls::OorAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "current-configured-ac-ls" || name == "current-configured-ac-es" || name == "maximum-configurable-ac-ls" || name == "maximum-configurable-ac-es")
        return true;
    return false;
}

EsAcl::Active::Usages::Usages()
    :
    usage(this, {})
{

    yang_name = "usages"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

EsAcl::Active::Usages::~Usages()
{
}

bool EsAcl::Active::Usages::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usage.len(); index++)
    {
        if(usage[index]->has_data())
            return true;
    }
    return false;
}

bool EsAcl::Active::Usages::has_operation() const
{
    for (std::size_t index=0; index<usage.len(); index++)
    {
        if(usage[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EsAcl::Active::Usages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/" << get_segment_path();
    return path_buffer.str();
}

std::string EsAcl::Active::Usages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Active::Usages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Active::Usages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usage")
    {
        auto c = std::make_shared<EsAcl::Active::Usages::Usage>();
        c->parent = this;
        usage.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Active::Usages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : usage.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void EsAcl::Active::Usages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EsAcl::Active::Usages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EsAcl::Active::Usages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usage")
        return true;
    return false;
}

EsAcl::Active::Usages::Usage::Usage()
    :
    location{YType::str, "location"},
    application_id{YType::enumeration, "application-id"},
    name{YType::str, "name"},
    usage_details{YType::str, "usage-details"}
{

    yang_name = "usage"; yang_parent_name = "usages"; is_top_level_class = false; has_list_ancestor = false; 
}

EsAcl::Active::Usages::Usage::~Usage()
{
}

bool EsAcl::Active::Usages::Usage::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| application_id.is_set
	|| name.is_set
	|| usage_details.is_set;
}

bool EsAcl::Active::Usages::Usage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(application_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(usage_details.yfilter);
}

std::string EsAcl::Active::Usages::Usage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/usages/" << get_segment_path();
    return path_buffer.str();
}

std::string EsAcl::Active::Usages::Usage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usage";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Active::Usages::Usage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (application_id.is_set || is_set(application_id.yfilter)) leaf_name_data.push_back(application_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (usage_details.is_set || is_set(usage_details.yfilter)) leaf_name_data.push_back(usage_details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Active::Usages::Usage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Active::Usages::Usage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EsAcl::Active::Usages::Usage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-id")
    {
        application_id = value;
        application_id.value_namespace = name_space;
        application_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage-details")
    {
        usage_details = value;
        usage_details.value_namespace = name_space;
        usage_details.value_namespace_prefix = name_space_prefix;
    }
}

void EsAcl::Active::Usages::Usage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "application-id")
    {
        application_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "usage-details")
    {
        usage_details.yfilter = yfilter;
    }
}

bool EsAcl::Active::Usages::Usage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "application-id" || name == "name" || name == "usage-details")
        return true;
    return false;
}

const Enum::YLeaf AclAction::deny {0, "deny"};
const Enum::YLeaf AclAction::permit {1, "permit"};
const Enum::YLeaf AclAction::encrypt {2, "encrypt"};
const Enum::YLeaf AclAction::bypass {3, "bypass"};
const Enum::YLeaf AclAction::fallthrough {4, "fallthrough"};
const Enum::YLeaf AclAction::invalid {5, "invalid"};

const Enum::YLeaf AclAce1::normal {0, "normal"};
const Enum::YLeaf AclAce1::remark {1, "remark"};
const Enum::YLeaf AclAce1::abf {2, "abf"};

const Enum::YLeaf AclAce1_::normal {0, "normal"};
const Enum::YLeaf AclAce1_::remark {1, "remark"};
const Enum::YLeaf AclAce1_::abf {2, "abf"};


}
}

