
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_correlator_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_correlator_oper {

Suppression::Suppression()
    :
    rule_summaries(std::make_shared<Suppression::RuleSummaries>())
    , rule_details(std::make_shared<Suppression::RuleDetails>())
{
    rule_summaries->parent = this;
    rule_details->parent = this;

    yang_name = "suppression"; yang_parent_name = "Cisco-IOS-XR-infra-correlator-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Suppression::~Suppression()
{
}

bool Suppression::has_data() const
{
    if (is_presence_container) return true;
    return (rule_summaries !=  nullptr && rule_summaries->has_data())
	|| (rule_details !=  nullptr && rule_details->has_data());
}

bool Suppression::has_operation() const
{
    return is_set(yfilter)
	|| (rule_summaries !=  nullptr && rule_summaries->has_operation())
	|| (rule_details !=  nullptr && rule_details->has_operation());
}

std::string Suppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Suppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Suppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-summaries")
    {
        if(rule_summaries == nullptr)
        {
            rule_summaries = std::make_shared<Suppression::RuleSummaries>();
        }
        return rule_summaries;
    }

    if(child_yang_name == "rule-details")
    {
        if(rule_details == nullptr)
        {
            rule_details = std::make_shared<Suppression::RuleDetails>();
        }
        return rule_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Suppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rule_summaries != nullptr)
    {
        children["rule-summaries"] = rule_summaries;
    }

    if(rule_details != nullptr)
    {
        children["rule-details"] = rule_details;
    }

    return children;
}

void Suppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Suppression::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Suppression::clone_ptr() const
{
    return std::make_shared<Suppression>();
}

std::string Suppression::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Suppression::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Suppression::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Suppression::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Suppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-summaries" || name == "rule-details")
        return true;
    return false;
}

Suppression::RuleSummaries::RuleSummaries()
    :
    rule_summary(this, {"rule_name"})
{

    yang_name = "rule-summaries"; yang_parent_name = "suppression"; is_top_level_class = false; has_list_ancestor = false; 
}

Suppression::RuleSummaries::~RuleSummaries()
{
}

bool Suppression::RuleSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_summary.len(); index++)
    {
        if(rule_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Suppression::RuleSummaries::has_operation() const
{
    for (std::size_t index=0; index<rule_summary.len(); index++)
    {
        if(rule_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Suppression::RuleSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:suppression/" << get_segment_path();
    return path_buffer.str();
}

std::string Suppression::RuleSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Suppression::RuleSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Suppression::RuleSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-summary")
    {
        auto c = std::make_shared<Suppression::RuleSummaries::RuleSummary>();
        c->parent = this;
        rule_summary.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Suppression::RuleSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_summary.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Suppression::RuleSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Suppression::RuleSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Suppression::RuleSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-summary")
        return true;
    return false;
}

Suppression::RuleSummaries::RuleSummary::RuleSummary()
    :
    rule_name{YType::str, "rule-name"},
    rule_name_xr{YType::str, "rule-name-xr"},
    rule_state{YType::enumeration, "rule-state"},
    suppressed_alarms_count{YType::uint32, "suppressed-alarms-count"}
{

    yang_name = "rule-summary"; yang_parent_name = "rule-summaries"; is_top_level_class = false; has_list_ancestor = false; 
}

Suppression::RuleSummaries::RuleSummary::~RuleSummary()
{
}

bool Suppression::RuleSummaries::RuleSummary::has_data() const
{
    if (is_presence_container) return true;
    return rule_name.is_set
	|| rule_name_xr.is_set
	|| rule_state.is_set
	|| suppressed_alarms_count.is_set;
}

bool Suppression::RuleSummaries::RuleSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rule_name.yfilter)
	|| ydk::is_set(rule_name_xr.yfilter)
	|| ydk::is_set(rule_state.yfilter)
	|| ydk::is_set(suppressed_alarms_count.yfilter);
}

std::string Suppression::RuleSummaries::RuleSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:suppression/rule-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Suppression::RuleSummaries::RuleSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-summary";
    ADD_KEY_TOKEN(rule_name, "rule-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Suppression::RuleSummaries::RuleSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name.is_set || is_set(rule_name.yfilter)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (rule_name_xr.is_set || is_set(rule_name_xr.yfilter)) leaf_name_data.push_back(rule_name_xr.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.yfilter)) leaf_name_data.push_back(rule_state.get_name_leafdata());
    if (suppressed_alarms_count.is_set || is_set(suppressed_alarms_count.yfilter)) leaf_name_data.push_back(suppressed_alarms_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Suppression::RuleSummaries::RuleSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Suppression::RuleSummaries::RuleSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Suppression::RuleSummaries::RuleSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule-name")
    {
        rule_name = value;
        rule_name.value_namespace = name_space;
        rule_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-name-xr")
    {
        rule_name_xr = value;
        rule_name_xr.value_namespace = name_space;
        rule_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-state")
    {
        rule_state = value;
        rule_state.value_namespace = name_space;
        rule_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed-alarms-count")
    {
        suppressed_alarms_count = value;
        suppressed_alarms_count.value_namespace = name_space;
        suppressed_alarms_count.value_namespace_prefix = name_space_prefix;
    }
}

void Suppression::RuleSummaries::RuleSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule-name")
    {
        rule_name.yfilter = yfilter;
    }
    if(value_path == "rule-name-xr")
    {
        rule_name_xr.yfilter = yfilter;
    }
    if(value_path == "rule-state")
    {
        rule_state.yfilter = yfilter;
    }
    if(value_path == "suppressed-alarms-count")
    {
        suppressed_alarms_count.yfilter = yfilter;
    }
}

bool Suppression::RuleSummaries::RuleSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-name" || name == "rule-name-xr" || name == "rule-state" || name == "suppressed-alarms-count")
        return true;
    return false;
}

Suppression::RuleDetails::RuleDetails()
    :
    rule_detail(this, {"rule_name"})
{

    yang_name = "rule-details"; yang_parent_name = "suppression"; is_top_level_class = false; has_list_ancestor = false; 
}

Suppression::RuleDetails::~RuleDetails()
{
}

bool Suppression::RuleDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_detail.len(); index++)
    {
        if(rule_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Suppression::RuleDetails::has_operation() const
{
    for (std::size_t index=0; index<rule_detail.len(); index++)
    {
        if(rule_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Suppression::RuleDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:suppression/" << get_segment_path();
    return path_buffer.str();
}

std::string Suppression::RuleDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Suppression::RuleDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Suppression::RuleDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-detail")
    {
        auto c = std::make_shared<Suppression::RuleDetails::RuleDetail>();
        c->parent = this;
        rule_detail.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Suppression::RuleDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_detail.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Suppression::RuleDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Suppression::RuleDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Suppression::RuleDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-detail")
        return true;
    return false;
}

Suppression::RuleDetails::RuleDetail::RuleDetail()
    :
    rule_name{YType::str, "rule-name"},
    all_alarms{YType::boolean, "all-alarms"},
    alarm_severity{YType::enumeration, "alarm-severity"},
    apply_source{YType::str, "apply-source"}
        ,
    rule_summary(std::make_shared<Suppression::RuleDetails::RuleDetail::RuleSummary>())
    , codes(this, {})
{
    rule_summary->parent = this;

    yang_name = "rule-detail"; yang_parent_name = "rule-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Suppression::RuleDetails::RuleDetail::~RuleDetail()
{
}

bool Suppression::RuleDetails::RuleDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<codes.len(); index++)
    {
        if(codes[index]->has_data())
            return true;
    }
    for (auto const & leaf : apply_source.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return rule_name.is_set
	|| all_alarms.is_set
	|| alarm_severity.is_set
	|| (rule_summary !=  nullptr && rule_summary->has_data());
}

bool Suppression::RuleDetails::RuleDetail::has_operation() const
{
    for (std::size_t index=0; index<codes.len(); index++)
    {
        if(codes[index]->has_operation())
            return true;
    }
    for (auto const & leaf : apply_source.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rule_name.yfilter)
	|| ydk::is_set(all_alarms.yfilter)
	|| ydk::is_set(alarm_severity.yfilter)
	|| ydk::is_set(apply_source.yfilter)
	|| (rule_summary !=  nullptr && rule_summary->has_operation());
}

std::string Suppression::RuleDetails::RuleDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:suppression/rule-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Suppression::RuleDetails::RuleDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-detail";
    ADD_KEY_TOKEN(rule_name, "rule-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Suppression::RuleDetails::RuleDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name.is_set || is_set(rule_name.yfilter)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (all_alarms.is_set || is_set(all_alarms.yfilter)) leaf_name_data.push_back(all_alarms.get_name_leafdata());
    if (alarm_severity.is_set || is_set(alarm_severity.yfilter)) leaf_name_data.push_back(alarm_severity.get_name_leafdata());

    auto apply_source_name_datas = apply_source.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), apply_source_name_datas.begin(), apply_source_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Suppression::RuleDetails::RuleDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-summary")
    {
        if(rule_summary == nullptr)
        {
            rule_summary = std::make_shared<Suppression::RuleDetails::RuleDetail::RuleSummary>();
        }
        return rule_summary;
    }

    if(child_yang_name == "codes")
    {
        auto c = std::make_shared<Suppression::RuleDetails::RuleDetail::Codes>();
        c->parent = this;
        codes.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Suppression::RuleDetails::RuleDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rule_summary != nullptr)
    {
        children["rule-summary"] = rule_summary;
    }

    count = 0;
    for (auto c : codes.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Suppression::RuleDetails::RuleDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule-name")
    {
        rule_name = value;
        rule_name.value_namespace = name_space;
        rule_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-alarms")
    {
        all_alarms = value;
        all_alarms.value_namespace = name_space;
        all_alarms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-severity")
    {
        alarm_severity = value;
        alarm_severity.value_namespace = name_space;
        alarm_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "apply-source")
    {
        apply_source.append(value);
    }
}

void Suppression::RuleDetails::RuleDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule-name")
    {
        rule_name.yfilter = yfilter;
    }
    if(value_path == "all-alarms")
    {
        all_alarms.yfilter = yfilter;
    }
    if(value_path == "alarm-severity")
    {
        alarm_severity.yfilter = yfilter;
    }
    if(value_path == "apply-source")
    {
        apply_source.yfilter = yfilter;
    }
}

bool Suppression::RuleDetails::RuleDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-summary" || name == "codes" || name == "rule-name" || name == "all-alarms" || name == "alarm-severity" || name == "apply-source")
        return true;
    return false;
}

Suppression::RuleDetails::RuleDetail::RuleSummary::RuleSummary()
    :
    rule_name_xr{YType::str, "rule-name-xr"},
    rule_state{YType::enumeration, "rule-state"},
    suppressed_alarms_count{YType::uint32, "suppressed-alarms-count"}
{

    yang_name = "rule-summary"; yang_parent_name = "rule-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Suppression::RuleDetails::RuleDetail::RuleSummary::~RuleSummary()
{
}

bool Suppression::RuleDetails::RuleDetail::RuleSummary::has_data() const
{
    if (is_presence_container) return true;
    return rule_name_xr.is_set
	|| rule_state.is_set
	|| suppressed_alarms_count.is_set;
}

bool Suppression::RuleDetails::RuleDetail::RuleSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rule_name_xr.yfilter)
	|| ydk::is_set(rule_state.yfilter)
	|| ydk::is_set(suppressed_alarms_count.yfilter);
}

std::string Suppression::RuleDetails::RuleDetail::RuleSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Suppression::RuleDetails::RuleDetail::RuleSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name_xr.is_set || is_set(rule_name_xr.yfilter)) leaf_name_data.push_back(rule_name_xr.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.yfilter)) leaf_name_data.push_back(rule_state.get_name_leafdata());
    if (suppressed_alarms_count.is_set || is_set(suppressed_alarms_count.yfilter)) leaf_name_data.push_back(suppressed_alarms_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Suppression::RuleDetails::RuleDetail::RuleSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Suppression::RuleDetails::RuleDetail::RuleSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Suppression::RuleDetails::RuleDetail::RuleSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule-name-xr")
    {
        rule_name_xr = value;
        rule_name_xr.value_namespace = name_space;
        rule_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-state")
    {
        rule_state = value;
        rule_state.value_namespace = name_space;
        rule_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed-alarms-count")
    {
        suppressed_alarms_count = value;
        suppressed_alarms_count.value_namespace = name_space;
        suppressed_alarms_count.value_namespace_prefix = name_space_prefix;
    }
}

void Suppression::RuleDetails::RuleDetail::RuleSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule-name-xr")
    {
        rule_name_xr.yfilter = yfilter;
    }
    if(value_path == "rule-state")
    {
        rule_state.yfilter = yfilter;
    }
    if(value_path == "suppressed-alarms-count")
    {
        suppressed_alarms_count.yfilter = yfilter;
    }
}

bool Suppression::RuleDetails::RuleDetail::RuleSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-name-xr" || name == "rule-state" || name == "suppressed-alarms-count")
        return true;
    return false;
}

Suppression::RuleDetails::RuleDetail::Codes::Codes()
    :
    category{YType::str, "category"},
    group{YType::str, "group"},
    code{YType::str, "code"}
{

    yang_name = "codes"; yang_parent_name = "rule-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Suppression::RuleDetails::RuleDetail::Codes::~Codes()
{
}

bool Suppression::RuleDetails::RuleDetail::Codes::has_data() const
{
    if (is_presence_container) return true;
    return category.is_set
	|| group.is_set
	|| code.is_set;
}

bool Suppression::RuleDetails::RuleDetail::Codes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(code.yfilter);
}

std::string Suppression::RuleDetails::RuleDetail::Codes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "codes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Suppression::RuleDetails::RuleDetail::Codes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Suppression::RuleDetails::RuleDetail::Codes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Suppression::RuleDetails::RuleDetail::Codes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Suppression::RuleDetails::RuleDetail::Codes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
}

void Suppression::RuleDetails::RuleDetail::Codes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
}

bool Suppression::RuleDetails::RuleDetail::Codes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "category" || name == "group" || name == "code")
        return true;
    return false;
}

Correlator::Correlator()
    :
    rules(std::make_shared<Correlator::Rules>())
    , buffer_status(std::make_shared<Correlator::BufferStatus>())
    , alarms(std::make_shared<Correlator::Alarms>())
    , rule_set_summaries(std::make_shared<Correlator::RuleSetSummaries>())
    , rule_set_details(std::make_shared<Correlator::RuleSetDetails>())
    , rule_details(std::make_shared<Correlator::RuleDetails>())
    , rule_summaries(std::make_shared<Correlator::RuleSummaries>())
{
    rules->parent = this;
    buffer_status->parent = this;
    alarms->parent = this;
    rule_set_summaries->parent = this;
    rule_set_details->parent = this;
    rule_details->parent = this;
    rule_summaries->parent = this;

    yang_name = "correlator"; yang_parent_name = "Cisco-IOS-XR-infra-correlator-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Correlator::~Correlator()
{
}

bool Correlator::has_data() const
{
    if (is_presence_container) return true;
    return (rules !=  nullptr && rules->has_data())
	|| (buffer_status !=  nullptr && buffer_status->has_data())
	|| (alarms !=  nullptr && alarms->has_data())
	|| (rule_set_summaries !=  nullptr && rule_set_summaries->has_data())
	|| (rule_set_details !=  nullptr && rule_set_details->has_data())
	|| (rule_details !=  nullptr && rule_details->has_data())
	|| (rule_summaries !=  nullptr && rule_summaries->has_data());
}

bool Correlator::has_operation() const
{
    return is_set(yfilter)
	|| (rules !=  nullptr && rules->has_operation())
	|| (buffer_status !=  nullptr && buffer_status->has_operation())
	|| (alarms !=  nullptr && alarms->has_operation())
	|| (rule_set_summaries !=  nullptr && rule_set_summaries->has_operation())
	|| (rule_set_details !=  nullptr && rule_set_details->has_operation())
	|| (rule_details !=  nullptr && rule_details->has_operation())
	|| (rule_summaries !=  nullptr && rule_summaries->has_operation());
}

std::string Correlator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rules")
    {
        if(rules == nullptr)
        {
            rules = std::make_shared<Correlator::Rules>();
        }
        return rules;
    }

    if(child_yang_name == "buffer-status")
    {
        if(buffer_status == nullptr)
        {
            buffer_status = std::make_shared<Correlator::BufferStatus>();
        }
        return buffer_status;
    }

    if(child_yang_name == "alarms")
    {
        if(alarms == nullptr)
        {
            alarms = std::make_shared<Correlator::Alarms>();
        }
        return alarms;
    }

    if(child_yang_name == "rule-set-summaries")
    {
        if(rule_set_summaries == nullptr)
        {
            rule_set_summaries = std::make_shared<Correlator::RuleSetSummaries>();
        }
        return rule_set_summaries;
    }

    if(child_yang_name == "rule-set-details")
    {
        if(rule_set_details == nullptr)
        {
            rule_set_details = std::make_shared<Correlator::RuleSetDetails>();
        }
        return rule_set_details;
    }

    if(child_yang_name == "rule-details")
    {
        if(rule_details == nullptr)
        {
            rule_details = std::make_shared<Correlator::RuleDetails>();
        }
        return rule_details;
    }

    if(child_yang_name == "rule-summaries")
    {
        if(rule_summaries == nullptr)
        {
            rule_summaries = std::make_shared<Correlator::RuleSummaries>();
        }
        return rule_summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rules != nullptr)
    {
        children["rules"] = rules;
    }

    if(buffer_status != nullptr)
    {
        children["buffer-status"] = buffer_status;
    }

    if(alarms != nullptr)
    {
        children["alarms"] = alarms;
    }

    if(rule_set_summaries != nullptr)
    {
        children["rule-set-summaries"] = rule_set_summaries;
    }

    if(rule_set_details != nullptr)
    {
        children["rule-set-details"] = rule_set_details;
    }

    if(rule_details != nullptr)
    {
        children["rule-details"] = rule_details;
    }

    if(rule_summaries != nullptr)
    {
        children["rule-summaries"] = rule_summaries;
    }

    return children;
}

void Correlator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Correlator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Correlator::clone_ptr() const
{
    return std::make_shared<Correlator>();
}

std::string Correlator::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Correlator::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Correlator::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Correlator::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Correlator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rules" || name == "buffer-status" || name == "alarms" || name == "rule-set-summaries" || name == "rule-set-details" || name == "rule-details" || name == "rule-summaries")
        return true;
    return false;
}

Correlator::Rules::Rules()
    :
    rule(this, {"rule_name"})
{

    yang_name = "rules"; yang_parent_name = "correlator"; is_top_level_class = false; has_list_ancestor = false; 
}

Correlator::Rules::~Rules()
{
}

bool Correlator::Rules::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule.len(); index++)
    {
        if(rule[index]->has_data())
            return true;
    }
    return false;
}

bool Correlator::Rules::has_operation() const
{
    for (std::size_t index=0; index<rule.len(); index++)
    {
        if(rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Correlator::Rules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    return path_buffer.str();
}

std::string Correlator::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::Rules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule")
    {
        auto c = std::make_shared<Correlator::Rules::Rule>();
        c->parent = this;
        rule.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::Rules::get_children() const
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

void Correlator::Rules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Correlator::Rules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Correlator::Rules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule")
        return true;
    return false;
}

Correlator::Rules::Rule::Rule()
    :
    rule_name{YType::str, "rule-name"},
    rule_name_xr{YType::str, "rule-name-xr"},
    timeout{YType::uint32, "timeout"},
    rule_state{YType::enumeration, "rule-state"},
    apply_location{YType::str, "apply-location"},
    apply_context{YType::str, "apply-context"}
        ,
    codes(this, {})
{

    yang_name = "rule"; yang_parent_name = "rules"; is_top_level_class = false; has_list_ancestor = false; 
}

Correlator::Rules::Rule::~Rule()
{
}

bool Correlator::Rules::Rule::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<codes.len(); index++)
    {
        if(codes[index]->has_data())
            return true;
    }
    for (auto const & leaf : apply_location.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : apply_context.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return rule_name.is_set
	|| rule_name_xr.is_set
	|| timeout.is_set
	|| rule_state.is_set;
}

bool Correlator::Rules::Rule::has_operation() const
{
    for (std::size_t index=0; index<codes.len(); index++)
    {
        if(codes[index]->has_operation())
            return true;
    }
    for (auto const & leaf : apply_location.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : apply_context.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rule_name.yfilter)
	|| ydk::is_set(rule_name_xr.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(rule_state.yfilter)
	|| ydk::is_set(apply_location.yfilter)
	|| ydk::is_set(apply_context.yfilter);
}

std::string Correlator::Rules::Rule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/rules/" << get_segment_path();
    return path_buffer.str();
}

std::string Correlator::Rules::Rule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule";
    ADD_KEY_TOKEN(rule_name, "rule-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::Rules::Rule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name.is_set || is_set(rule_name.yfilter)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (rule_name_xr.is_set || is_set(rule_name_xr.yfilter)) leaf_name_data.push_back(rule_name_xr.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.yfilter)) leaf_name_data.push_back(rule_state.get_name_leafdata());

    auto apply_location_name_datas = apply_location.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), apply_location_name_datas.begin(), apply_location_name_datas.end());
    auto apply_context_name_datas = apply_context.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), apply_context_name_datas.begin(), apply_context_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::Rules::Rule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "codes")
    {
        auto c = std::make_shared<Correlator::Rules::Rule::Codes>();
        c->parent = this;
        codes.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::Rules::Rule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : codes.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Correlator::Rules::Rule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule-name")
    {
        rule_name = value;
        rule_name.value_namespace = name_space;
        rule_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-name-xr")
    {
        rule_name_xr = value;
        rule_name_xr.value_namespace = name_space;
        rule_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-state")
    {
        rule_state = value;
        rule_state.value_namespace = name_space;
        rule_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "apply-location")
    {
        apply_location.append(value);
    }
    if(value_path == "apply-context")
    {
        apply_context.append(value);
    }
}

void Correlator::Rules::Rule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule-name")
    {
        rule_name.yfilter = yfilter;
    }
    if(value_path == "rule-name-xr")
    {
        rule_name_xr.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "rule-state")
    {
        rule_state.yfilter = yfilter;
    }
    if(value_path == "apply-location")
    {
        apply_location.yfilter = yfilter;
    }
    if(value_path == "apply-context")
    {
        apply_context.yfilter = yfilter;
    }
}

bool Correlator::Rules::Rule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "codes" || name == "rule-name" || name == "rule-name-xr" || name == "timeout" || name == "rule-state" || name == "apply-location" || name == "apply-context")
        return true;
    return false;
}

Correlator::Rules::Rule::Codes::Codes()
    :
    category{YType::str, "category"},
    group{YType::str, "group"},
    code{YType::str, "code"}
{

    yang_name = "codes"; yang_parent_name = "rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Correlator::Rules::Rule::Codes::~Codes()
{
}

bool Correlator::Rules::Rule::Codes::has_data() const
{
    if (is_presence_container) return true;
    return category.is_set
	|| group.is_set
	|| code.is_set;
}

bool Correlator::Rules::Rule::Codes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(code.yfilter);
}

std::string Correlator::Rules::Rule::Codes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "codes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::Rules::Rule::Codes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::Rules::Rule::Codes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::Rules::Rule::Codes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Correlator::Rules::Rule::Codes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
}

void Correlator::Rules::Rule::Codes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
}

bool Correlator::Rules::Rule::Codes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "category" || name == "group" || name == "code")
        return true;
    return false;
}

Correlator::BufferStatus::BufferStatus()
    :
    current_size{YType::uint32, "current-size"},
    configured_size{YType::uint32, "configured-size"}
{

    yang_name = "buffer-status"; yang_parent_name = "correlator"; is_top_level_class = false; has_list_ancestor = false; 
}

Correlator::BufferStatus::~BufferStatus()
{
}

bool Correlator::BufferStatus::has_data() const
{
    if (is_presence_container) return true;
    return current_size.is_set
	|| configured_size.is_set;
}

bool Correlator::BufferStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_size.yfilter)
	|| ydk::is_set(configured_size.yfilter);
}

std::string Correlator::BufferStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    return path_buffer.str();
}

std::string Correlator::BufferStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::BufferStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_size.is_set || is_set(current_size.yfilter)) leaf_name_data.push_back(current_size.get_name_leafdata());
    if (configured_size.is_set || is_set(configured_size.yfilter)) leaf_name_data.push_back(configured_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::BufferStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::BufferStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Correlator::BufferStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-size")
    {
        current_size = value;
        current_size.value_namespace = name_space;
        current_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-size")
    {
        configured_size = value;
        configured_size.value_namespace = name_space;
        configured_size.value_namespace_prefix = name_space_prefix;
    }
}

void Correlator::BufferStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-size")
    {
        current_size.yfilter = yfilter;
    }
    if(value_path == "configured-size")
    {
        configured_size.yfilter = yfilter;
    }
}

bool Correlator::BufferStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-size" || name == "configured-size")
        return true;
    return false;
}

Correlator::Alarms::Alarms()
    :
    alarm(this, {"alarm_id"})
{

    yang_name = "alarms"; yang_parent_name = "correlator"; is_top_level_class = false; has_list_ancestor = false; 
}

Correlator::Alarms::~Alarms()
{
}

bool Correlator::Alarms::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alarm.len(); index++)
    {
        if(alarm[index]->has_data())
            return true;
    }
    return false;
}

bool Correlator::Alarms::has_operation() const
{
    for (std::size_t index=0; index<alarm.len(); index++)
    {
        if(alarm[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Correlator::Alarms::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    return path_buffer.str();
}

std::string Correlator::Alarms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::Alarms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::Alarms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm")
    {
        auto c = std::make_shared<Correlator::Alarms::Alarm>();
        c->parent = this;
        alarm.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::Alarms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : alarm.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Correlator::Alarms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Correlator::Alarms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Correlator::Alarms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm")
        return true;
    return false;
}

Correlator::Alarms::Alarm::Alarm()
    :
    alarm_id{YType::uint32, "alarm-id"},
    rule_name{YType::str, "rule-name"},
    context{YType::str, "context"}
        ,
    alarm_info(std::make_shared<Correlator::Alarms::Alarm::AlarmInfo>())
{
    alarm_info->parent = this;

    yang_name = "alarm"; yang_parent_name = "alarms"; is_top_level_class = false; has_list_ancestor = false; 
}

Correlator::Alarms::Alarm::~Alarm()
{
}

bool Correlator::Alarms::Alarm::has_data() const
{
    if (is_presence_container) return true;
    return alarm_id.is_set
	|| rule_name.is_set
	|| context.is_set
	|| (alarm_info !=  nullptr && alarm_info->has_data());
}

bool Correlator::Alarms::Alarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm_id.yfilter)
	|| ydk::is_set(rule_name.yfilter)
	|| ydk::is_set(context.yfilter)
	|| (alarm_info !=  nullptr && alarm_info->has_operation());
}

std::string Correlator::Alarms::Alarm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/alarms/" << get_segment_path();
    return path_buffer.str();
}

std::string Correlator::Alarms::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";
    ADD_KEY_TOKEN(alarm_id, "alarm-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::Alarms::Alarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_id.is_set || is_set(alarm_id.yfilter)) leaf_name_data.push_back(alarm_id.get_name_leafdata());
    if (rule_name.is_set || is_set(rule_name.yfilter)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::Alarms::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        if(alarm_info == nullptr)
        {
            alarm_info = std::make_shared<Correlator::Alarms::Alarm::AlarmInfo>();
        }
        return alarm_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::Alarms::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(alarm_info != nullptr)
    {
        children["alarm-info"] = alarm_info;
    }

    return children;
}

void Correlator::Alarms::Alarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-id")
    {
        alarm_id = value;
        alarm_id.value_namespace = name_space;
        alarm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-name")
    {
        rule_name = value;
        rule_name.value_namespace = name_space;
        rule_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
}

void Correlator::Alarms::Alarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-id")
    {
        alarm_id.yfilter = yfilter;
    }
    if(value_path == "rule-name")
    {
        rule_name.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
}

bool Correlator::Alarms::Alarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-info" || name == "alarm-id" || name == "rule-name" || name == "context")
        return true;
    return false;
}

Correlator::Alarms::Alarm::AlarmInfo::AlarmInfo()
    :
    source_id{YType::str, "source-id"},
    timestamp{YType::uint64, "timestamp"},
    category{YType::str, "category"},
    group{YType::str, "group"},
    code{YType::str, "code"},
    severity{YType::enumeration, "severity"},
    state{YType::enumeration, "state"},
    correlation_id{YType::uint32, "correlation-id"},
    is_admin{YType::boolean, "is-admin"},
    additional_text{YType::str, "additional-text"}
{

    yang_name = "alarm-info"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Correlator::Alarms::Alarm::AlarmInfo::~AlarmInfo()
{
}

bool Correlator::Alarms::Alarm::AlarmInfo::has_data() const
{
    if (is_presence_container) return true;
    return source_id.is_set
	|| timestamp.is_set
	|| category.is_set
	|| group.is_set
	|| code.is_set
	|| severity.is_set
	|| state.is_set
	|| correlation_id.is_set
	|| is_admin.is_set
	|| additional_text.is_set;
}

bool Correlator::Alarms::Alarm::AlarmInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_id.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(correlation_id.yfilter)
	|| ydk::is_set(is_admin.yfilter)
	|| ydk::is_set(additional_text.yfilter);
}

std::string Correlator::Alarms::Alarm::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::Alarms::Alarm::AlarmInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_id.is_set || is_set(source_id.yfilter)) leaf_name_data.push_back(source_id.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (correlation_id.is_set || is_set(correlation_id.yfilter)) leaf_name_data.push_back(correlation_id.get_name_leafdata());
    if (is_admin.is_set || is_set(is_admin.yfilter)) leaf_name_data.push_back(is_admin.get_name_leafdata());
    if (additional_text.is_set || is_set(additional_text.yfilter)) leaf_name_data.push_back(additional_text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::Alarms::Alarm::AlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::Alarms::Alarm::AlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Correlator::Alarms::Alarm::AlarmInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-id")
    {
        source_id = value;
        source_id.value_namespace = name_space;
        source_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "correlation-id")
    {
        correlation_id = value;
        correlation_id.value_namespace = name_space;
        correlation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-admin")
    {
        is_admin = value;
        is_admin.value_namespace = name_space;
        is_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-text")
    {
        additional_text = value;
        additional_text.value_namespace = name_space;
        additional_text.value_namespace_prefix = name_space_prefix;
    }
}

void Correlator::Alarms::Alarm::AlarmInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-id")
    {
        source_id.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "correlation-id")
    {
        correlation_id.yfilter = yfilter;
    }
    if(value_path == "is-admin")
    {
        is_admin.yfilter = yfilter;
    }
    if(value_path == "additional-text")
    {
        additional_text.yfilter = yfilter;
    }
}

bool Correlator::Alarms::Alarm::AlarmInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-id" || name == "timestamp" || name == "category" || name == "group" || name == "code" || name == "severity" || name == "state" || name == "correlation-id" || name == "is-admin" || name == "additional-text")
        return true;
    return false;
}

Correlator::RuleSetSummaries::RuleSetSummaries()
    :
    rule_set_summary(this, {"rule_set_name"})
{

    yang_name = "rule-set-summaries"; yang_parent_name = "correlator"; is_top_level_class = false; has_list_ancestor = false; 
}

Correlator::RuleSetSummaries::~RuleSetSummaries()
{
}

bool Correlator::RuleSetSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_set_summary.len(); index++)
    {
        if(rule_set_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Correlator::RuleSetSummaries::has_operation() const
{
    for (std::size_t index=0; index<rule_set_summary.len(); index++)
    {
        if(rule_set_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Correlator::RuleSetSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    return path_buffer.str();
}

std::string Correlator::RuleSetSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-set-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::RuleSetSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::RuleSetSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-set-summary")
    {
        auto c = std::make_shared<Correlator::RuleSetSummaries::RuleSetSummary>();
        c->parent = this;
        rule_set_summary.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleSetSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_set_summary.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Correlator::RuleSetSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Correlator::RuleSetSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Correlator::RuleSetSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-set-summary")
        return true;
    return false;
}

Correlator::RuleSetSummaries::RuleSetSummary::RuleSetSummary()
    :
    rule_set_name{YType::str, "rule-set-name"},
    rule_set_name_xr{YType::str, "rule-set-name-xr"}
{

    yang_name = "rule-set-summary"; yang_parent_name = "rule-set-summaries"; is_top_level_class = false; has_list_ancestor = false; 
}

Correlator::RuleSetSummaries::RuleSetSummary::~RuleSetSummary()
{
}

bool Correlator::RuleSetSummaries::RuleSetSummary::has_data() const
{
    if (is_presence_container) return true;
    return rule_set_name.is_set
	|| rule_set_name_xr.is_set;
}

bool Correlator::RuleSetSummaries::RuleSetSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rule_set_name.yfilter)
	|| ydk::is_set(rule_set_name_xr.yfilter);
}

std::string Correlator::RuleSetSummaries::RuleSetSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/rule-set-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Correlator::RuleSetSummaries::RuleSetSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-set-summary";
    ADD_KEY_TOKEN(rule_set_name, "rule-set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::RuleSetSummaries::RuleSetSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_set_name.is_set || is_set(rule_set_name.yfilter)) leaf_name_data.push_back(rule_set_name.get_name_leafdata());
    if (rule_set_name_xr.is_set || is_set(rule_set_name_xr.yfilter)) leaf_name_data.push_back(rule_set_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::RuleSetSummaries::RuleSetSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleSetSummaries::RuleSetSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Correlator::RuleSetSummaries::RuleSetSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule-set-name")
    {
        rule_set_name = value;
        rule_set_name.value_namespace = name_space;
        rule_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-set-name-xr")
    {
        rule_set_name_xr = value;
        rule_set_name_xr.value_namespace = name_space;
        rule_set_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Correlator::RuleSetSummaries::RuleSetSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule-set-name")
    {
        rule_set_name.yfilter = yfilter;
    }
    if(value_path == "rule-set-name-xr")
    {
        rule_set_name_xr.yfilter = yfilter;
    }
}

bool Correlator::RuleSetSummaries::RuleSetSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-set-name" || name == "rule-set-name-xr")
        return true;
    return false;
}

Correlator::RuleSetDetails::RuleSetDetails()
    :
    rule_set_detail(this, {"rule_set_name"})
{

    yang_name = "rule-set-details"; yang_parent_name = "correlator"; is_top_level_class = false; has_list_ancestor = false; 
}

Correlator::RuleSetDetails::~RuleSetDetails()
{
}

bool Correlator::RuleSetDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_set_detail.len(); index++)
    {
        if(rule_set_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Correlator::RuleSetDetails::has_operation() const
{
    for (std::size_t index=0; index<rule_set_detail.len(); index++)
    {
        if(rule_set_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Correlator::RuleSetDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    return path_buffer.str();
}

std::string Correlator::RuleSetDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-set-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::RuleSetDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::RuleSetDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-set-detail")
    {
        auto c = std::make_shared<Correlator::RuleSetDetails::RuleSetDetail>();
        c->parent = this;
        rule_set_detail.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleSetDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_set_detail.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Correlator::RuleSetDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Correlator::RuleSetDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Correlator::RuleSetDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-set-detail")
        return true;
    return false;
}

Correlator::RuleSetDetails::RuleSetDetail::RuleSetDetail()
    :
    rule_set_name{YType::str, "rule-set-name"},
    rule_set_name_xr{YType::str, "rule-set-name-xr"}
        ,
    rules(this, {})
{

    yang_name = "rule-set-detail"; yang_parent_name = "rule-set-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Correlator::RuleSetDetails::RuleSetDetail::~RuleSetDetail()
{
}

bool Correlator::RuleSetDetails::RuleSetDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rules.len(); index++)
    {
        if(rules[index]->has_data())
            return true;
    }
    return rule_set_name.is_set
	|| rule_set_name_xr.is_set;
}

bool Correlator::RuleSetDetails::RuleSetDetail::has_operation() const
{
    for (std::size_t index=0; index<rules.len(); index++)
    {
        if(rules[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rule_set_name.yfilter)
	|| ydk::is_set(rule_set_name_xr.yfilter);
}

std::string Correlator::RuleSetDetails::RuleSetDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/rule-set-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Correlator::RuleSetDetails::RuleSetDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-set-detail";
    ADD_KEY_TOKEN(rule_set_name, "rule-set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::RuleSetDetails::RuleSetDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_set_name.is_set || is_set(rule_set_name.yfilter)) leaf_name_data.push_back(rule_set_name.get_name_leafdata());
    if (rule_set_name_xr.is_set || is_set(rule_set_name_xr.yfilter)) leaf_name_data.push_back(rule_set_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::RuleSetDetails::RuleSetDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rules")
    {
        auto c = std::make_shared<Correlator::RuleSetDetails::RuleSetDetail::Rules>();
        c->parent = this;
        rules.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleSetDetails::RuleSetDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rules.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Correlator::RuleSetDetails::RuleSetDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule-set-name")
    {
        rule_set_name = value;
        rule_set_name.value_namespace = name_space;
        rule_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-set-name-xr")
    {
        rule_set_name_xr = value;
        rule_set_name_xr.value_namespace = name_space;
        rule_set_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Correlator::RuleSetDetails::RuleSetDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule-set-name")
    {
        rule_set_name.yfilter = yfilter;
    }
    if(value_path == "rule-set-name-xr")
    {
        rule_set_name_xr.yfilter = yfilter;
    }
}

bool Correlator::RuleSetDetails::RuleSetDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rules" || name == "rule-set-name" || name == "rule-set-name-xr")
        return true;
    return false;
}

Correlator::RuleSetDetails::RuleSetDetail::Rules::Rules()
    :
    rule_name_xr{YType::str, "rule-name-xr"},
    stateful{YType::boolean, "stateful"},
    rule_state{YType::enumeration, "rule-state"},
    buffered_alarms_count{YType::uint32, "buffered-alarms-count"}
{

    yang_name = "rules"; yang_parent_name = "rule-set-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Correlator::RuleSetDetails::RuleSetDetail::Rules::~Rules()
{
}

bool Correlator::RuleSetDetails::RuleSetDetail::Rules::has_data() const
{
    if (is_presence_container) return true;
    return rule_name_xr.is_set
	|| stateful.is_set
	|| rule_state.is_set
	|| buffered_alarms_count.is_set;
}

bool Correlator::RuleSetDetails::RuleSetDetail::Rules::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rule_name_xr.yfilter)
	|| ydk::is_set(stateful.yfilter)
	|| ydk::is_set(rule_state.yfilter)
	|| ydk::is_set(buffered_alarms_count.yfilter);
}

std::string Correlator::RuleSetDetails::RuleSetDetail::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::RuleSetDetails::RuleSetDetail::Rules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name_xr.is_set || is_set(rule_name_xr.yfilter)) leaf_name_data.push_back(rule_name_xr.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.yfilter)) leaf_name_data.push_back(rule_state.get_name_leafdata());
    if (buffered_alarms_count.is_set || is_set(buffered_alarms_count.yfilter)) leaf_name_data.push_back(buffered_alarms_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::RuleSetDetails::RuleSetDetail::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleSetDetails::RuleSetDetail::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Correlator::RuleSetDetails::RuleSetDetail::Rules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule-name-xr")
    {
        rule_name_xr = value;
        rule_name_xr.value_namespace = name_space;
        rule_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-state")
    {
        rule_state = value;
        rule_state.value_namespace = name_space;
        rule_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffered-alarms-count")
    {
        buffered_alarms_count = value;
        buffered_alarms_count.value_namespace = name_space;
        buffered_alarms_count.value_namespace_prefix = name_space_prefix;
    }
}

void Correlator::RuleSetDetails::RuleSetDetail::Rules::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule-name-xr")
    {
        rule_name_xr.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
    if(value_path == "rule-state")
    {
        rule_state.yfilter = yfilter;
    }
    if(value_path == "buffered-alarms-count")
    {
        buffered_alarms_count.yfilter = yfilter;
    }
}

bool Correlator::RuleSetDetails::RuleSetDetail::Rules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-name-xr" || name == "stateful" || name == "rule-state" || name == "buffered-alarms-count")
        return true;
    return false;
}

Correlator::RuleDetails::RuleDetails()
    :
    rule_detail(this, {"rule_name"})
{

    yang_name = "rule-details"; yang_parent_name = "correlator"; is_top_level_class = false; has_list_ancestor = false; 
}

Correlator::RuleDetails::~RuleDetails()
{
}

bool Correlator::RuleDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_detail.len(); index++)
    {
        if(rule_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Correlator::RuleDetails::has_operation() const
{
    for (std::size_t index=0; index<rule_detail.len(); index++)
    {
        if(rule_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Correlator::RuleDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    return path_buffer.str();
}

std::string Correlator::RuleDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::RuleDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::RuleDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-detail")
    {
        auto c = std::make_shared<Correlator::RuleDetails::RuleDetail>();
        c->parent = this;
        rule_detail.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_detail.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Correlator::RuleDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Correlator::RuleDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Correlator::RuleDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-detail")
        return true;
    return false;
}

Correlator::RuleDetails::RuleDetail::RuleDetail()
    :
    rule_name{YType::str, "rule-name"},
    timeout{YType::uint32, "timeout"},
    root_cause_timeout{YType::uint32, "root-cause-timeout"},
    internal{YType::boolean, "internal"},
    reissue_non_bistate{YType::boolean, "reissue-non-bistate"},
    reparent{YType::boolean, "reparent"},
    context_correlation{YType::boolean, "context-correlation"},
    apply_location{YType::str, "apply-location"},
    apply_context{YType::str, "apply-context"}
        ,
    rule_summary(std::make_shared<Correlator::RuleDetails::RuleDetail::RuleSummary>())
    , codes(this, {})
{
    rule_summary->parent = this;

    yang_name = "rule-detail"; yang_parent_name = "rule-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Correlator::RuleDetails::RuleDetail::~RuleDetail()
{
}

bool Correlator::RuleDetails::RuleDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<codes.len(); index++)
    {
        if(codes[index]->has_data())
            return true;
    }
    for (auto const & leaf : apply_location.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : apply_context.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return rule_name.is_set
	|| timeout.is_set
	|| root_cause_timeout.is_set
	|| internal.is_set
	|| reissue_non_bistate.is_set
	|| reparent.is_set
	|| context_correlation.is_set
	|| (rule_summary !=  nullptr && rule_summary->has_data());
}

bool Correlator::RuleDetails::RuleDetail::has_operation() const
{
    for (std::size_t index=0; index<codes.len(); index++)
    {
        if(codes[index]->has_operation())
            return true;
    }
    for (auto const & leaf : apply_location.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : apply_context.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rule_name.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(root_cause_timeout.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(reissue_non_bistate.yfilter)
	|| ydk::is_set(reparent.yfilter)
	|| ydk::is_set(context_correlation.yfilter)
	|| ydk::is_set(apply_location.yfilter)
	|| ydk::is_set(apply_context.yfilter)
	|| (rule_summary !=  nullptr && rule_summary->has_operation());
}

std::string Correlator::RuleDetails::RuleDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/rule-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Correlator::RuleDetails::RuleDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-detail";
    ADD_KEY_TOKEN(rule_name, "rule-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::RuleDetails::RuleDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name.is_set || is_set(rule_name.yfilter)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (root_cause_timeout.is_set || is_set(root_cause_timeout.yfilter)) leaf_name_data.push_back(root_cause_timeout.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (reissue_non_bistate.is_set || is_set(reissue_non_bistate.yfilter)) leaf_name_data.push_back(reissue_non_bistate.get_name_leafdata());
    if (reparent.is_set || is_set(reparent.yfilter)) leaf_name_data.push_back(reparent.get_name_leafdata());
    if (context_correlation.is_set || is_set(context_correlation.yfilter)) leaf_name_data.push_back(context_correlation.get_name_leafdata());

    auto apply_location_name_datas = apply_location.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), apply_location_name_datas.begin(), apply_location_name_datas.end());
    auto apply_context_name_datas = apply_context.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), apply_context_name_datas.begin(), apply_context_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::RuleDetails::RuleDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-summary")
    {
        if(rule_summary == nullptr)
        {
            rule_summary = std::make_shared<Correlator::RuleDetails::RuleDetail::RuleSummary>();
        }
        return rule_summary;
    }

    if(child_yang_name == "codes")
    {
        auto c = std::make_shared<Correlator::RuleDetails::RuleDetail::Codes>();
        c->parent = this;
        codes.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleDetails::RuleDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rule_summary != nullptr)
    {
        children["rule-summary"] = rule_summary;
    }

    count = 0;
    for (auto c : codes.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Correlator::RuleDetails::RuleDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule-name")
    {
        rule_name = value;
        rule_name.value_namespace = name_space;
        rule_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root-cause-timeout")
    {
        root_cause_timeout = value;
        root_cause_timeout.value_namespace = name_space;
        root_cause_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reissue-non-bistate")
    {
        reissue_non_bistate = value;
        reissue_non_bistate.value_namespace = name_space;
        reissue_non_bistate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reparent")
    {
        reparent = value;
        reparent.value_namespace = name_space;
        reparent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context-correlation")
    {
        context_correlation = value;
        context_correlation.value_namespace = name_space;
        context_correlation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "apply-location")
    {
        apply_location.append(value);
    }
    if(value_path == "apply-context")
    {
        apply_context.append(value);
    }
}

void Correlator::RuleDetails::RuleDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule-name")
    {
        rule_name.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "root-cause-timeout")
    {
        root_cause_timeout.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "reissue-non-bistate")
    {
        reissue_non_bistate.yfilter = yfilter;
    }
    if(value_path == "reparent")
    {
        reparent.yfilter = yfilter;
    }
    if(value_path == "context-correlation")
    {
        context_correlation.yfilter = yfilter;
    }
    if(value_path == "apply-location")
    {
        apply_location.yfilter = yfilter;
    }
    if(value_path == "apply-context")
    {
        apply_context.yfilter = yfilter;
    }
}

bool Correlator::RuleDetails::RuleDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-summary" || name == "codes" || name == "rule-name" || name == "timeout" || name == "root-cause-timeout" || name == "internal" || name == "reissue-non-bistate" || name == "reparent" || name == "context-correlation" || name == "apply-location" || name == "apply-context")
        return true;
    return false;
}

Correlator::RuleDetails::RuleDetail::RuleSummary::RuleSummary()
    :
    rule_name_xr{YType::str, "rule-name-xr"},
    stateful{YType::boolean, "stateful"},
    rule_state{YType::enumeration, "rule-state"},
    buffered_alarms_count{YType::uint32, "buffered-alarms-count"}
{

    yang_name = "rule-summary"; yang_parent_name = "rule-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Correlator::RuleDetails::RuleDetail::RuleSummary::~RuleSummary()
{
}

bool Correlator::RuleDetails::RuleDetail::RuleSummary::has_data() const
{
    if (is_presence_container) return true;
    return rule_name_xr.is_set
	|| stateful.is_set
	|| rule_state.is_set
	|| buffered_alarms_count.is_set;
}

bool Correlator::RuleDetails::RuleDetail::RuleSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rule_name_xr.yfilter)
	|| ydk::is_set(stateful.yfilter)
	|| ydk::is_set(rule_state.yfilter)
	|| ydk::is_set(buffered_alarms_count.yfilter);
}

std::string Correlator::RuleDetails::RuleDetail::RuleSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::RuleDetails::RuleDetail::RuleSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name_xr.is_set || is_set(rule_name_xr.yfilter)) leaf_name_data.push_back(rule_name_xr.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.yfilter)) leaf_name_data.push_back(rule_state.get_name_leafdata());
    if (buffered_alarms_count.is_set || is_set(buffered_alarms_count.yfilter)) leaf_name_data.push_back(buffered_alarms_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::RuleDetails::RuleDetail::RuleSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleDetails::RuleDetail::RuleSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Correlator::RuleDetails::RuleDetail::RuleSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule-name-xr")
    {
        rule_name_xr = value;
        rule_name_xr.value_namespace = name_space;
        rule_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-state")
    {
        rule_state = value;
        rule_state.value_namespace = name_space;
        rule_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffered-alarms-count")
    {
        buffered_alarms_count = value;
        buffered_alarms_count.value_namespace = name_space;
        buffered_alarms_count.value_namespace_prefix = name_space_prefix;
    }
}

void Correlator::RuleDetails::RuleDetail::RuleSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule-name-xr")
    {
        rule_name_xr.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
    if(value_path == "rule-state")
    {
        rule_state.yfilter = yfilter;
    }
    if(value_path == "buffered-alarms-count")
    {
        buffered_alarms_count.yfilter = yfilter;
    }
}

bool Correlator::RuleDetails::RuleDetail::RuleSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-name-xr" || name == "stateful" || name == "rule-state" || name == "buffered-alarms-count")
        return true;
    return false;
}

Correlator::RuleDetails::RuleDetail::Codes::Codes()
    :
    category{YType::str, "category"},
    group{YType::str, "group"},
    code{YType::str, "code"}
{

    yang_name = "codes"; yang_parent_name = "rule-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Correlator::RuleDetails::RuleDetail::Codes::~Codes()
{
}

bool Correlator::RuleDetails::RuleDetail::Codes::has_data() const
{
    if (is_presence_container) return true;
    return category.is_set
	|| group.is_set
	|| code.is_set;
}

bool Correlator::RuleDetails::RuleDetail::Codes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(code.yfilter);
}

std::string Correlator::RuleDetails::RuleDetail::Codes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "codes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::RuleDetails::RuleDetail::Codes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::RuleDetails::RuleDetail::Codes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleDetails::RuleDetail::Codes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Correlator::RuleDetails::RuleDetail::Codes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
}

void Correlator::RuleDetails::RuleDetail::Codes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
}

bool Correlator::RuleDetails::RuleDetail::Codes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "category" || name == "group" || name == "code")
        return true;
    return false;
}

Correlator::RuleSummaries::RuleSummaries()
    :
    rule_summary(this, {"rule_name"})
{

    yang_name = "rule-summaries"; yang_parent_name = "correlator"; is_top_level_class = false; has_list_ancestor = false; 
}

Correlator::RuleSummaries::~RuleSummaries()
{
}

bool Correlator::RuleSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_summary.len(); index++)
    {
        if(rule_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Correlator::RuleSummaries::has_operation() const
{
    for (std::size_t index=0; index<rule_summary.len(); index++)
    {
        if(rule_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Correlator::RuleSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    return path_buffer.str();
}

std::string Correlator::RuleSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::RuleSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::RuleSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-summary")
    {
        auto c = std::make_shared<Correlator::RuleSummaries::RuleSummary>();
        c->parent = this;
        rule_summary.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_summary.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Correlator::RuleSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Correlator::RuleSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Correlator::RuleSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-summary")
        return true;
    return false;
}

Correlator::RuleSummaries::RuleSummary::RuleSummary()
    :
    rule_name{YType::str, "rule-name"},
    rule_name_xr{YType::str, "rule-name-xr"},
    stateful{YType::boolean, "stateful"},
    rule_state{YType::enumeration, "rule-state"},
    buffered_alarms_count{YType::uint32, "buffered-alarms-count"}
{

    yang_name = "rule-summary"; yang_parent_name = "rule-summaries"; is_top_level_class = false; has_list_ancestor = false; 
}

Correlator::RuleSummaries::RuleSummary::~RuleSummary()
{
}

bool Correlator::RuleSummaries::RuleSummary::has_data() const
{
    if (is_presence_container) return true;
    return rule_name.is_set
	|| rule_name_xr.is_set
	|| stateful.is_set
	|| rule_state.is_set
	|| buffered_alarms_count.is_set;
}

bool Correlator::RuleSummaries::RuleSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rule_name.yfilter)
	|| ydk::is_set(rule_name_xr.yfilter)
	|| ydk::is_set(stateful.yfilter)
	|| ydk::is_set(rule_state.yfilter)
	|| ydk::is_set(buffered_alarms_count.yfilter);
}

std::string Correlator::RuleSummaries::RuleSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/rule-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Correlator::RuleSummaries::RuleSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-summary";
    ADD_KEY_TOKEN(rule_name, "rule-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Correlator::RuleSummaries::RuleSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name.is_set || is_set(rule_name.yfilter)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (rule_name_xr.is_set || is_set(rule_name_xr.yfilter)) leaf_name_data.push_back(rule_name_xr.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.yfilter)) leaf_name_data.push_back(rule_state.get_name_leafdata());
    if (buffered_alarms_count.is_set || is_set(buffered_alarms_count.yfilter)) leaf_name_data.push_back(buffered_alarms_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Correlator::RuleSummaries::RuleSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleSummaries::RuleSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Correlator::RuleSummaries::RuleSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule-name")
    {
        rule_name = value;
        rule_name.value_namespace = name_space;
        rule_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-name-xr")
    {
        rule_name_xr = value;
        rule_name_xr.value_namespace = name_space;
        rule_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-state")
    {
        rule_state = value;
        rule_state.value_namespace = name_space;
        rule_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffered-alarms-count")
    {
        buffered_alarms_count = value;
        buffered_alarms_count.value_namespace = name_space;
        buffered_alarms_count.value_namespace_prefix = name_space_prefix;
    }
}

void Correlator::RuleSummaries::RuleSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule-name")
    {
        rule_name.yfilter = yfilter;
    }
    if(value_path == "rule-name-xr")
    {
        rule_name_xr.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
    if(value_path == "rule-state")
    {
        rule_state.yfilter = yfilter;
    }
    if(value_path == "buffered-alarms-count")
    {
        buffered_alarms_count.yfilter = yfilter;
    }
}

bool Correlator::RuleSummaries::RuleSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-name" || name == "rule-name-xr" || name == "stateful" || name == "rule-state" || name == "buffered-alarms-count")
        return true;
    return false;
}

const Enum::YLeaf AlAlarmBistate::not_available {0, "not-available"};
const Enum::YLeaf AlAlarmBistate::active {1, "active"};
const Enum::YLeaf AlAlarmBistate::clear {2, "clear"};

const Enum::YLeaf AlAlarmSeverity::unknown {-1, "unknown"};
const Enum::YLeaf AlAlarmSeverity::emergency {0, "emergency"};
const Enum::YLeaf AlAlarmSeverity::alert {1, "alert"};
const Enum::YLeaf AlAlarmSeverity::critical {2, "critical"};
const Enum::YLeaf AlAlarmSeverity::error {3, "error"};
const Enum::YLeaf AlAlarmSeverity::warning {4, "warning"};
const Enum::YLeaf AlAlarmSeverity::notice {5, "notice"};
const Enum::YLeaf AlAlarmSeverity::informational {6, "informational"};
const Enum::YLeaf AlAlarmSeverity::debugging {7, "debugging"};

const Enum::YLeaf AcRuleState::rule_unapplied {0, "rule-unapplied"};
const Enum::YLeaf AcRuleState::rule_applied {1, "rule-applied"};
const Enum::YLeaf AcRuleState::rule_applied_all {2, "rule-applied-all"};


}
}

