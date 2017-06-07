
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_correlator_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_correlator_oper {

Suppression::Suppression()
    :
    rule_details(std::make_shared<Suppression::RuleDetails>())
	,rule_summaries(std::make_shared<Suppression::RuleSummaries>())
{
    rule_details->parent = this;

    rule_summaries->parent = this;

    yang_name = "suppression"; yang_parent_name = "Cisco-IOS-XR-infra-correlator-oper";
}

Suppression::~Suppression()
{
}

bool Suppression::has_data() const
{
    return (rule_details !=  nullptr && rule_details->has_data())
	|| (rule_summaries !=  nullptr && rule_summaries->has_data());
}

bool Suppression::has_operation() const
{
    return is_set(operation)
	|| (rule_details !=  nullptr && rule_details->has_operation())
	|| (rule_summaries !=  nullptr && rule_summaries->has_operation());
}

std::string Suppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:suppression";

    return path_buffer.str();

}

const EntityPath Suppression::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Suppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-details")
    {
        if(rule_details == nullptr)
        {
            rule_details = std::make_shared<Suppression::RuleDetails>();
        }
        return rule_details;
    }

    if(child_yang_name == "rule-summaries")
    {
        if(rule_summaries == nullptr)
        {
            rule_summaries = std::make_shared<Suppression::RuleSummaries>();
        }
        return rule_summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Suppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Suppression::set_value(const std::string & value_path, std::string value)
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

Suppression::RuleSummaries::RuleSummaries()
{
    yang_name = "rule-summaries"; yang_parent_name = "suppression";
}

Suppression::RuleSummaries::~RuleSummaries()
{
}

bool Suppression::RuleSummaries::has_data() const
{
    for (std::size_t index=0; index<rule_summary.size(); index++)
    {
        if(rule_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Suppression::RuleSummaries::has_operation() const
{
    for (std::size_t index=0; index<rule_summary.size(); index++)
    {
        if(rule_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Suppression::RuleSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-summaries";

    return path_buffer.str();

}

const EntityPath Suppression::RuleSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:suppression/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Suppression::RuleSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-summary")
    {
        for(auto const & c : rule_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Suppression::RuleSummaries::RuleSummary>();
        c->parent = this;
        rule_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Suppression::RuleSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rule_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Suppression::RuleSummaries::set_value(const std::string & value_path, std::string value)
{
}

Suppression::RuleSummaries::RuleSummary::RuleSummary()
    :
    rule_name{YType::str, "rule-name"},
    rule_name_xr{YType::str, "rule-name-xr"},
    rule_state{YType::enumeration, "rule-state"},
    suppressed_alarms_count{YType::uint32, "suppressed-alarms-count"}
{
    yang_name = "rule-summary"; yang_parent_name = "rule-summaries";
}

Suppression::RuleSummaries::RuleSummary::~RuleSummary()
{
}

bool Suppression::RuleSummaries::RuleSummary::has_data() const
{
    return rule_name.is_set
	|| rule_name_xr.is_set
	|| rule_state.is_set
	|| suppressed_alarms_count.is_set;
}

bool Suppression::RuleSummaries::RuleSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(rule_name.operation)
	|| is_set(rule_name_xr.operation)
	|| is_set(rule_state.operation)
	|| is_set(suppressed_alarms_count.operation);
}

std::string Suppression::RuleSummaries::RuleSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-summary" <<"[rule-name='" <<rule_name <<"']";

    return path_buffer.str();

}

const EntityPath Suppression::RuleSummaries::RuleSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:suppression/rule-summaries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name.is_set || is_set(rule_name.operation)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (rule_name_xr.is_set || is_set(rule_name_xr.operation)) leaf_name_data.push_back(rule_name_xr.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.operation)) leaf_name_data.push_back(rule_state.get_name_leafdata());
    if (suppressed_alarms_count.is_set || is_set(suppressed_alarms_count.operation)) leaf_name_data.push_back(suppressed_alarms_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Suppression::RuleSummaries::RuleSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Suppression::RuleSummaries::RuleSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Suppression::RuleSummaries::RuleSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rule-name")
    {
        rule_name = value;
    }
    if(value_path == "rule-name-xr")
    {
        rule_name_xr = value;
    }
    if(value_path == "rule-state")
    {
        rule_state = value;
    }
    if(value_path == "suppressed-alarms-count")
    {
        suppressed_alarms_count = value;
    }
}

Suppression::RuleDetails::RuleDetails()
{
    yang_name = "rule-details"; yang_parent_name = "suppression";
}

Suppression::RuleDetails::~RuleDetails()
{
}

bool Suppression::RuleDetails::has_data() const
{
    for (std::size_t index=0; index<rule_detail.size(); index++)
    {
        if(rule_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Suppression::RuleDetails::has_operation() const
{
    for (std::size_t index=0; index<rule_detail.size(); index++)
    {
        if(rule_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Suppression::RuleDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-details";

    return path_buffer.str();

}

const EntityPath Suppression::RuleDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:suppression/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Suppression::RuleDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-detail")
    {
        for(auto const & c : rule_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Suppression::RuleDetails::RuleDetail>();
        c->parent = this;
        rule_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Suppression::RuleDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rule_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Suppression::RuleDetails::set_value(const std::string & value_path, std::string value)
{
}

Suppression::RuleDetails::RuleDetail::RuleDetail()
    :
    rule_name{YType::str, "rule-name"},
    alarm_severity{YType::enumeration, "alarm-severity"},
    all_alarms{YType::boolean, "all-alarms"},
    apply_source{YType::str, "apply-source"}
    	,
    rule_summary(std::make_shared<Suppression::RuleDetails::RuleDetail::RuleSummary>())
{
    rule_summary->parent = this;

    yang_name = "rule-detail"; yang_parent_name = "rule-details";
}

Suppression::RuleDetails::RuleDetail::~RuleDetail()
{
}

bool Suppression::RuleDetails::RuleDetail::has_data() const
{
    for (std::size_t index=0; index<codes.size(); index++)
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
	|| alarm_severity.is_set
	|| all_alarms.is_set
	|| (rule_summary !=  nullptr && rule_summary->has_data());
}

bool Suppression::RuleDetails::RuleDetail::has_operation() const
{
    for (std::size_t index=0; index<codes.size(); index++)
    {
        if(codes[index]->has_operation())
            return true;
    }
    for (auto const & leaf : apply_source.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(rule_name.operation)
	|| is_set(alarm_severity.operation)
	|| is_set(all_alarms.operation)
	|| is_set(apply_source.operation)
	|| (rule_summary !=  nullptr && rule_summary->has_operation());
}

std::string Suppression::RuleDetails::RuleDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-detail" <<"[rule-name='" <<rule_name <<"']";

    return path_buffer.str();

}

const EntityPath Suppression::RuleDetails::RuleDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:suppression/rule-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name.is_set || is_set(rule_name.operation)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (alarm_severity.is_set || is_set(alarm_severity.operation)) leaf_name_data.push_back(alarm_severity.get_name_leafdata());
    if (all_alarms.is_set || is_set(all_alarms.operation)) leaf_name_data.push_back(all_alarms.get_name_leafdata());

    auto apply_source_name_datas = apply_source.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), apply_source_name_datas.begin(), apply_source_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Suppression::RuleDetails::RuleDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "codes")
    {
        for(auto const & c : codes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Suppression::RuleDetails::RuleDetail::Codes>();
        c->parent = this;
        codes.push_back(c);
        return c;
    }

    if(child_yang_name == "rule-summary")
    {
        if(rule_summary == nullptr)
        {
            rule_summary = std::make_shared<Suppression::RuleDetails::RuleDetail::RuleSummary>();
        }
        return rule_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Suppression::RuleDetails::RuleDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : codes)
    {
        children[c->get_segment_path()] = c;
    }

    if(rule_summary != nullptr)
    {
        children["rule-summary"] = rule_summary;
    }

    return children;
}

void Suppression::RuleDetails::RuleDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rule-name")
    {
        rule_name = value;
    }
    if(value_path == "alarm-severity")
    {
        alarm_severity = value;
    }
    if(value_path == "all-alarms")
    {
        all_alarms = value;
    }
    if(value_path == "apply-source")
    {
        apply_source.append(value);
    }
}

Suppression::RuleDetails::RuleDetail::RuleSummary::RuleSummary()
    :
    rule_name_xr{YType::str, "rule-name-xr"},
    rule_state{YType::enumeration, "rule-state"},
    suppressed_alarms_count{YType::uint32, "suppressed-alarms-count"}
{
    yang_name = "rule-summary"; yang_parent_name = "rule-detail";
}

Suppression::RuleDetails::RuleDetail::RuleSummary::~RuleSummary()
{
}

bool Suppression::RuleDetails::RuleDetail::RuleSummary::has_data() const
{
    return rule_name_xr.is_set
	|| rule_state.is_set
	|| suppressed_alarms_count.is_set;
}

bool Suppression::RuleDetails::RuleDetail::RuleSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(rule_name_xr.operation)
	|| is_set(rule_state.operation)
	|| is_set(suppressed_alarms_count.operation);
}

std::string Suppression::RuleDetails::RuleDetail::RuleSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-summary";

    return path_buffer.str();

}

const EntityPath Suppression::RuleDetails::RuleDetail::RuleSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RuleSummary' in Cisco_IOS_XR_infra_correlator_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name_xr.is_set || is_set(rule_name_xr.operation)) leaf_name_data.push_back(rule_name_xr.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.operation)) leaf_name_data.push_back(rule_state.get_name_leafdata());
    if (suppressed_alarms_count.is_set || is_set(suppressed_alarms_count.operation)) leaf_name_data.push_back(suppressed_alarms_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Suppression::RuleDetails::RuleDetail::RuleSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Suppression::RuleDetails::RuleDetail::RuleSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Suppression::RuleDetails::RuleDetail::RuleSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rule-name-xr")
    {
        rule_name_xr = value;
    }
    if(value_path == "rule-state")
    {
        rule_state = value;
    }
    if(value_path == "suppressed-alarms-count")
    {
        suppressed_alarms_count = value;
    }
}

Suppression::RuleDetails::RuleDetail::Codes::Codes()
    :
    category{YType::str, "category"},
    code{YType::str, "code"},
    group{YType::str, "group"}
{
    yang_name = "codes"; yang_parent_name = "rule-detail";
}

Suppression::RuleDetails::RuleDetail::Codes::~Codes()
{
}

bool Suppression::RuleDetails::RuleDetail::Codes::has_data() const
{
    return category.is_set
	|| code.is_set
	|| group.is_set;
}

bool Suppression::RuleDetails::RuleDetail::Codes::has_operation() const
{
    return is_set(operation)
	|| is_set(category.operation)
	|| is_set(code.operation)
	|| is_set(group.operation);
}

std::string Suppression::RuleDetails::RuleDetail::Codes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "codes";

    return path_buffer.str();

}

const EntityPath Suppression::RuleDetails::RuleDetail::Codes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Codes' in Cisco_IOS_XR_infra_correlator_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Suppression::RuleDetails::RuleDetail::Codes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Suppression::RuleDetails::RuleDetail::Codes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Suppression::RuleDetails::RuleDetail::Codes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "code")
    {
        code = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
}

Correlator::Correlator()
    :
    alarms(std::make_shared<Correlator::Alarms>())
	,buffer_status(std::make_shared<Correlator::BufferStatus>())
	,rule_details(std::make_shared<Correlator::RuleDetails>())
	,rule_set_details(std::make_shared<Correlator::RuleSetDetails>())
	,rule_set_summaries(std::make_shared<Correlator::RuleSetSummaries>())
	,rule_summaries(std::make_shared<Correlator::RuleSummaries>())
	,rules(std::make_shared<Correlator::Rules>())
{
    alarms->parent = this;

    buffer_status->parent = this;

    rule_details->parent = this;

    rule_set_details->parent = this;

    rule_set_summaries->parent = this;

    rule_summaries->parent = this;

    rules->parent = this;

    yang_name = "correlator"; yang_parent_name = "Cisco-IOS-XR-infra-correlator-oper";
}

Correlator::~Correlator()
{
}

bool Correlator::has_data() const
{
    return (alarms !=  nullptr && alarms->has_data())
	|| (buffer_status !=  nullptr && buffer_status->has_data())
	|| (rule_details !=  nullptr && rule_details->has_data())
	|| (rule_set_details !=  nullptr && rule_set_details->has_data())
	|| (rule_set_summaries !=  nullptr && rule_set_summaries->has_data())
	|| (rule_summaries !=  nullptr && rule_summaries->has_data())
	|| (rules !=  nullptr && rules->has_data());
}

bool Correlator::has_operation() const
{
    return is_set(operation)
	|| (alarms !=  nullptr && alarms->has_operation())
	|| (buffer_status !=  nullptr && buffer_status->has_operation())
	|| (rule_details !=  nullptr && rule_details->has_operation())
	|| (rule_set_details !=  nullptr && rule_set_details->has_operation())
	|| (rule_set_summaries !=  nullptr && rule_set_summaries->has_operation())
	|| (rule_summaries !=  nullptr && rule_summaries->has_operation())
	|| (rules !=  nullptr && rules->has_operation());
}

std::string Correlator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator";

    return path_buffer.str();

}

const EntityPath Correlator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Correlator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarms")
    {
        if(alarms == nullptr)
        {
            alarms = std::make_shared<Correlator::Alarms>();
        }
        return alarms;
    }

    if(child_yang_name == "buffer-status")
    {
        if(buffer_status == nullptr)
        {
            buffer_status = std::make_shared<Correlator::BufferStatus>();
        }
        return buffer_status;
    }

    if(child_yang_name == "rule-details")
    {
        if(rule_details == nullptr)
        {
            rule_details = std::make_shared<Correlator::RuleDetails>();
        }
        return rule_details;
    }

    if(child_yang_name == "rule-set-details")
    {
        if(rule_set_details == nullptr)
        {
            rule_set_details = std::make_shared<Correlator::RuleSetDetails>();
        }
        return rule_set_details;
    }

    if(child_yang_name == "rule-set-summaries")
    {
        if(rule_set_summaries == nullptr)
        {
            rule_set_summaries = std::make_shared<Correlator::RuleSetSummaries>();
        }
        return rule_set_summaries;
    }

    if(child_yang_name == "rule-summaries")
    {
        if(rule_summaries == nullptr)
        {
            rule_summaries = std::make_shared<Correlator::RuleSummaries>();
        }
        return rule_summaries;
    }

    if(child_yang_name == "rules")
    {
        if(rules == nullptr)
        {
            rules = std::make_shared<Correlator::Rules>();
        }
        return rules;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alarms != nullptr)
    {
        children["alarms"] = alarms;
    }

    if(buffer_status != nullptr)
    {
        children["buffer-status"] = buffer_status;
    }

    if(rule_details != nullptr)
    {
        children["rule-details"] = rule_details;
    }

    if(rule_set_details != nullptr)
    {
        children["rule-set-details"] = rule_set_details;
    }

    if(rule_set_summaries != nullptr)
    {
        children["rule-set-summaries"] = rule_set_summaries;
    }

    if(rule_summaries != nullptr)
    {
        children["rule-summaries"] = rule_summaries;
    }

    if(rules != nullptr)
    {
        children["rules"] = rules;
    }

    return children;
}

void Correlator::set_value(const std::string & value_path, std::string value)
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

Correlator::Rules::Rules()
{
    yang_name = "rules"; yang_parent_name = "correlator";
}

Correlator::Rules::~Rules()
{
}

bool Correlator::Rules::has_data() const
{
    for (std::size_t index=0; index<rule.size(); index++)
    {
        if(rule[index]->has_data())
            return true;
    }
    return false;
}

bool Correlator::Rules::has_operation() const
{
    for (std::size_t index=0; index<rule.size(); index++)
    {
        if(rule[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Correlator::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";

    return path_buffer.str();

}

const EntityPath Correlator::Rules::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Correlator::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Correlator::Rules::Rule>();
        c->parent = this;
        rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Correlator::Rules::set_value(const std::string & value_path, std::string value)
{
}

Correlator::Rules::Rule::Rule()
    :
    rule_name{YType::str, "rule-name"},
    apply_context{YType::str, "apply-context"},
    apply_location{YType::str, "apply-location"},
    rule_name_xr{YType::str, "rule-name-xr"},
    rule_state{YType::enumeration, "rule-state"},
    timeout{YType::uint32, "timeout"}
{
    yang_name = "rule"; yang_parent_name = "rules";
}

Correlator::Rules::Rule::~Rule()
{
}

bool Correlator::Rules::Rule::has_data() const
{
    for (std::size_t index=0; index<codes.size(); index++)
    {
        if(codes[index]->has_data())
            return true;
    }
    for (auto const & leaf : apply_context.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : apply_location.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return rule_name.is_set
	|| rule_name_xr.is_set
	|| rule_state.is_set
	|| timeout.is_set;
}

bool Correlator::Rules::Rule::has_operation() const
{
    for (std::size_t index=0; index<codes.size(); index++)
    {
        if(codes[index]->has_operation())
            return true;
    }
    for (auto const & leaf : apply_context.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : apply_location.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(rule_name.operation)
	|| is_set(apply_context.operation)
	|| is_set(apply_location.operation)
	|| is_set(rule_name_xr.operation)
	|| is_set(rule_state.operation)
	|| is_set(timeout.operation);
}

std::string Correlator::Rules::Rule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule" <<"[rule-name='" <<rule_name <<"']";

    return path_buffer.str();

}

const EntityPath Correlator::Rules::Rule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/rules/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name.is_set || is_set(rule_name.operation)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (rule_name_xr.is_set || is_set(rule_name_xr.operation)) leaf_name_data.push_back(rule_name_xr.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.operation)) leaf_name_data.push_back(rule_state.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());

    auto apply_context_name_datas = apply_context.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), apply_context_name_datas.begin(), apply_context_name_datas.end());
    auto apply_location_name_datas = apply_location.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), apply_location_name_datas.begin(), apply_location_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Correlator::Rules::Rule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "codes")
    {
        for(auto const & c : codes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Correlator::Rules::Rule::Codes>();
        c->parent = this;
        codes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::Rules::Rule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : codes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Correlator::Rules::Rule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rule-name")
    {
        rule_name = value;
    }
    if(value_path == "apply-context")
    {
        apply_context.append(value);
    }
    if(value_path == "apply-location")
    {
        apply_location.append(value);
    }
    if(value_path == "rule-name-xr")
    {
        rule_name_xr = value;
    }
    if(value_path == "rule-state")
    {
        rule_state = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Correlator::Rules::Rule::Codes::Codes()
    :
    category{YType::str, "category"},
    code{YType::str, "code"},
    group{YType::str, "group"}
{
    yang_name = "codes"; yang_parent_name = "rule";
}

Correlator::Rules::Rule::Codes::~Codes()
{
}

bool Correlator::Rules::Rule::Codes::has_data() const
{
    return category.is_set
	|| code.is_set
	|| group.is_set;
}

bool Correlator::Rules::Rule::Codes::has_operation() const
{
    return is_set(operation)
	|| is_set(category.operation)
	|| is_set(code.operation)
	|| is_set(group.operation);
}

std::string Correlator::Rules::Rule::Codes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "codes";

    return path_buffer.str();

}

const EntityPath Correlator::Rules::Rule::Codes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Codes' in Cisco_IOS_XR_infra_correlator_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Correlator::Rules::Rule::Codes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::Rules::Rule::Codes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Correlator::Rules::Rule::Codes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "code")
    {
        code = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
}

Correlator::BufferStatus::BufferStatus()
    :
    configured_size{YType::uint32, "configured-size"},
    current_size{YType::uint32, "current-size"}
{
    yang_name = "buffer-status"; yang_parent_name = "correlator";
}

Correlator::BufferStatus::~BufferStatus()
{
}

bool Correlator::BufferStatus::has_data() const
{
    return configured_size.is_set
	|| current_size.is_set;
}

bool Correlator::BufferStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(configured_size.operation)
	|| is_set(current_size.operation);
}

std::string Correlator::BufferStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-status";

    return path_buffer.str();

}

const EntityPath Correlator::BufferStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_size.is_set || is_set(configured_size.operation)) leaf_name_data.push_back(configured_size.get_name_leafdata());
    if (current_size.is_set || is_set(current_size.operation)) leaf_name_data.push_back(current_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Correlator::BufferStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::BufferStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Correlator::BufferStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-size")
    {
        configured_size = value;
    }
    if(value_path == "current-size")
    {
        current_size = value;
    }
}

Correlator::Alarms::Alarms()
{
    yang_name = "alarms"; yang_parent_name = "correlator";
}

Correlator::Alarms::~Alarms()
{
}

bool Correlator::Alarms::has_data() const
{
    for (std::size_t index=0; index<alarm.size(); index++)
    {
        if(alarm[index]->has_data())
            return true;
    }
    return false;
}

bool Correlator::Alarms::has_operation() const
{
    for (std::size_t index=0; index<alarm.size(); index++)
    {
        if(alarm[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Correlator::Alarms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarms";

    return path_buffer.str();

}

const EntityPath Correlator::Alarms::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Correlator::Alarms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm")
    {
        for(auto const & c : alarm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Correlator::Alarms::Alarm>();
        c->parent = this;
        alarm.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::Alarms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : alarm)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Correlator::Alarms::set_value(const std::string & value_path, std::string value)
{
}

Correlator::Alarms::Alarm::Alarm()
    :
    alarm_id{YType::int32, "alarm-id"},
    context{YType::str, "context"},
    rule_name{YType::str, "rule-name"}
    	,
    alarm_info(std::make_shared<Correlator::Alarms::Alarm::AlarmInfo>())
{
    alarm_info->parent = this;

    yang_name = "alarm"; yang_parent_name = "alarms";
}

Correlator::Alarms::Alarm::~Alarm()
{
}

bool Correlator::Alarms::Alarm::has_data() const
{
    return alarm_id.is_set
	|| context.is_set
	|| rule_name.is_set
	|| (alarm_info !=  nullptr && alarm_info->has_data());
}

bool Correlator::Alarms::Alarm::has_operation() const
{
    return is_set(operation)
	|| is_set(alarm_id.operation)
	|| is_set(context.operation)
	|| is_set(rule_name.operation)
	|| (alarm_info !=  nullptr && alarm_info->has_operation());
}

std::string Correlator::Alarms::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm" <<"[alarm-id='" <<alarm_id <<"']";

    return path_buffer.str();

}

const EntityPath Correlator::Alarms::Alarm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/alarms/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_id.is_set || is_set(alarm_id.operation)) leaf_name_data.push_back(alarm_id.get_name_leafdata());
    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (rule_name.is_set || is_set(rule_name.operation)) leaf_name_data.push_back(rule_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(alarm_info != nullptr)
    {
        children["alarm-info"] = alarm_info;
    }

    return children;
}

void Correlator::Alarms::Alarm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-id")
    {
        alarm_id = value;
    }
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "rule-name")
    {
        rule_name = value;
    }
}

Correlator::Alarms::Alarm::AlarmInfo::AlarmInfo()
    :
    additional_text{YType::str, "additional-text"},
    category{YType::str, "category"},
    code{YType::str, "code"},
    correlation_id{YType::uint32, "correlation-id"},
    group{YType::str, "group"},
    is_admin{YType::boolean, "is-admin"},
    severity{YType::enumeration, "severity"},
    source_id{YType::str, "source-id"},
    state{YType::enumeration, "state"},
    timestamp{YType::uint64, "timestamp"}
{
    yang_name = "alarm-info"; yang_parent_name = "alarm";
}

Correlator::Alarms::Alarm::AlarmInfo::~AlarmInfo()
{
}

bool Correlator::Alarms::Alarm::AlarmInfo::has_data() const
{
    return additional_text.is_set
	|| category.is_set
	|| code.is_set
	|| correlation_id.is_set
	|| group.is_set
	|| is_admin.is_set
	|| severity.is_set
	|| source_id.is_set
	|| state.is_set
	|| timestamp.is_set;
}

bool Correlator::Alarms::Alarm::AlarmInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(additional_text.operation)
	|| is_set(category.operation)
	|| is_set(code.operation)
	|| is_set(correlation_id.operation)
	|| is_set(group.operation)
	|| is_set(is_admin.operation)
	|| is_set(severity.operation)
	|| is_set(source_id.operation)
	|| is_set(state.operation)
	|| is_set(timestamp.operation);
}

std::string Correlator::Alarms::Alarm::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";

    return path_buffer.str();

}

const EntityPath Correlator::Alarms::Alarm::AlarmInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AlarmInfo' in Cisco_IOS_XR_infra_correlator_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (additional_text.is_set || is_set(additional_text.operation)) leaf_name_data.push_back(additional_text.get_name_leafdata());
    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (correlation_id.is_set || is_set(correlation_id.operation)) leaf_name_data.push_back(correlation_id.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (is_admin.is_set || is_set(is_admin.operation)) leaf_name_data.push_back(is_admin.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (source_id.is_set || is_set(source_id.operation)) leaf_name_data.push_back(source_id.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Correlator::Alarms::Alarm::AlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::Alarms::Alarm::AlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Correlator::Alarms::Alarm::AlarmInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "additional-text")
    {
        additional_text = value;
    }
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "code")
    {
        code = value;
    }
    if(value_path == "correlation-id")
    {
        correlation_id = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "is-admin")
    {
        is_admin = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
    if(value_path == "source-id")
    {
        source_id = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
}

Correlator::RuleSetSummaries::RuleSetSummaries()
{
    yang_name = "rule-set-summaries"; yang_parent_name = "correlator";
}

Correlator::RuleSetSummaries::~RuleSetSummaries()
{
}

bool Correlator::RuleSetSummaries::has_data() const
{
    for (std::size_t index=0; index<rule_set_summary.size(); index++)
    {
        if(rule_set_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Correlator::RuleSetSummaries::has_operation() const
{
    for (std::size_t index=0; index<rule_set_summary.size(); index++)
    {
        if(rule_set_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Correlator::RuleSetSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-set-summaries";

    return path_buffer.str();

}

const EntityPath Correlator::RuleSetSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Correlator::RuleSetSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-set-summary")
    {
        for(auto const & c : rule_set_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Correlator::RuleSetSummaries::RuleSetSummary>();
        c->parent = this;
        rule_set_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleSetSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rule_set_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Correlator::RuleSetSummaries::set_value(const std::string & value_path, std::string value)
{
}

Correlator::RuleSetSummaries::RuleSetSummary::RuleSetSummary()
    :
    rule_set_name{YType::str, "rule-set-name"},
    rule_set_name_xr{YType::str, "rule-set-name-xr"}
{
    yang_name = "rule-set-summary"; yang_parent_name = "rule-set-summaries";
}

Correlator::RuleSetSummaries::RuleSetSummary::~RuleSetSummary()
{
}

bool Correlator::RuleSetSummaries::RuleSetSummary::has_data() const
{
    return rule_set_name.is_set
	|| rule_set_name_xr.is_set;
}

bool Correlator::RuleSetSummaries::RuleSetSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(rule_set_name.operation)
	|| is_set(rule_set_name_xr.operation);
}

std::string Correlator::RuleSetSummaries::RuleSetSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-set-summary" <<"[rule-set-name='" <<rule_set_name <<"']";

    return path_buffer.str();

}

const EntityPath Correlator::RuleSetSummaries::RuleSetSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/rule-set-summaries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_set_name.is_set || is_set(rule_set_name.operation)) leaf_name_data.push_back(rule_set_name.get_name_leafdata());
    if (rule_set_name_xr.is_set || is_set(rule_set_name_xr.operation)) leaf_name_data.push_back(rule_set_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Correlator::RuleSetSummaries::RuleSetSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleSetSummaries::RuleSetSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Correlator::RuleSetSummaries::RuleSetSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rule-set-name")
    {
        rule_set_name = value;
    }
    if(value_path == "rule-set-name-xr")
    {
        rule_set_name_xr = value;
    }
}

Correlator::RuleSetDetails::RuleSetDetails()
{
    yang_name = "rule-set-details"; yang_parent_name = "correlator";
}

Correlator::RuleSetDetails::~RuleSetDetails()
{
}

bool Correlator::RuleSetDetails::has_data() const
{
    for (std::size_t index=0; index<rule_set_detail.size(); index++)
    {
        if(rule_set_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Correlator::RuleSetDetails::has_operation() const
{
    for (std::size_t index=0; index<rule_set_detail.size(); index++)
    {
        if(rule_set_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Correlator::RuleSetDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-set-details";

    return path_buffer.str();

}

const EntityPath Correlator::RuleSetDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Correlator::RuleSetDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-set-detail")
    {
        for(auto const & c : rule_set_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Correlator::RuleSetDetails::RuleSetDetail>();
        c->parent = this;
        rule_set_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleSetDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rule_set_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Correlator::RuleSetDetails::set_value(const std::string & value_path, std::string value)
{
}

Correlator::RuleSetDetails::RuleSetDetail::RuleSetDetail()
    :
    rule_set_name{YType::str, "rule-set-name"},
    rule_set_name_xr{YType::str, "rule-set-name-xr"}
{
    yang_name = "rule-set-detail"; yang_parent_name = "rule-set-details";
}

Correlator::RuleSetDetails::RuleSetDetail::~RuleSetDetail()
{
}

bool Correlator::RuleSetDetails::RuleSetDetail::has_data() const
{
    for (std::size_t index=0; index<rules.size(); index++)
    {
        if(rules[index]->has_data())
            return true;
    }
    return rule_set_name.is_set
	|| rule_set_name_xr.is_set;
}

bool Correlator::RuleSetDetails::RuleSetDetail::has_operation() const
{
    for (std::size_t index=0; index<rules.size(); index++)
    {
        if(rules[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(rule_set_name.operation)
	|| is_set(rule_set_name_xr.operation);
}

std::string Correlator::RuleSetDetails::RuleSetDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-set-detail" <<"[rule-set-name='" <<rule_set_name <<"']";

    return path_buffer.str();

}

const EntityPath Correlator::RuleSetDetails::RuleSetDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/rule-set-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_set_name.is_set || is_set(rule_set_name.operation)) leaf_name_data.push_back(rule_set_name.get_name_leafdata());
    if (rule_set_name_xr.is_set || is_set(rule_set_name_xr.operation)) leaf_name_data.push_back(rule_set_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Correlator::RuleSetDetails::RuleSetDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rules")
    {
        for(auto const & c : rules)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Correlator::RuleSetDetails::RuleSetDetail::Rules>();
        c->parent = this;
        rules.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleSetDetails::RuleSetDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rules)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Correlator::RuleSetDetails::RuleSetDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rule-set-name")
    {
        rule_set_name = value;
    }
    if(value_path == "rule-set-name-xr")
    {
        rule_set_name_xr = value;
    }
}

Correlator::RuleSetDetails::RuleSetDetail::Rules::Rules()
    :
    buffered_alarms_count{YType::uint32, "buffered-alarms-count"},
    rule_name_xr{YType::str, "rule-name-xr"},
    rule_state{YType::enumeration, "rule-state"},
    stateful{YType::boolean, "stateful"}
{
    yang_name = "rules"; yang_parent_name = "rule-set-detail";
}

Correlator::RuleSetDetails::RuleSetDetail::Rules::~Rules()
{
}

bool Correlator::RuleSetDetails::RuleSetDetail::Rules::has_data() const
{
    return buffered_alarms_count.is_set
	|| rule_name_xr.is_set
	|| rule_state.is_set
	|| stateful.is_set;
}

bool Correlator::RuleSetDetails::RuleSetDetail::Rules::has_operation() const
{
    return is_set(operation)
	|| is_set(buffered_alarms_count.operation)
	|| is_set(rule_name_xr.operation)
	|| is_set(rule_state.operation)
	|| is_set(stateful.operation);
}

std::string Correlator::RuleSetDetails::RuleSetDetail::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";

    return path_buffer.str();

}

const EntityPath Correlator::RuleSetDetails::RuleSetDetail::Rules::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rules' in Cisco_IOS_XR_infra_correlator_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffered_alarms_count.is_set || is_set(buffered_alarms_count.operation)) leaf_name_data.push_back(buffered_alarms_count.get_name_leafdata());
    if (rule_name_xr.is_set || is_set(rule_name_xr.operation)) leaf_name_data.push_back(rule_name_xr.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.operation)) leaf_name_data.push_back(rule_state.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.operation)) leaf_name_data.push_back(stateful.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Correlator::RuleSetDetails::RuleSetDetail::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleSetDetails::RuleSetDetail::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Correlator::RuleSetDetails::RuleSetDetail::Rules::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buffered-alarms-count")
    {
        buffered_alarms_count = value;
    }
    if(value_path == "rule-name-xr")
    {
        rule_name_xr = value;
    }
    if(value_path == "rule-state")
    {
        rule_state = value;
    }
    if(value_path == "stateful")
    {
        stateful = value;
    }
}

Correlator::RuleDetails::RuleDetails()
{
    yang_name = "rule-details"; yang_parent_name = "correlator";
}

Correlator::RuleDetails::~RuleDetails()
{
}

bool Correlator::RuleDetails::has_data() const
{
    for (std::size_t index=0; index<rule_detail.size(); index++)
    {
        if(rule_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Correlator::RuleDetails::has_operation() const
{
    for (std::size_t index=0; index<rule_detail.size(); index++)
    {
        if(rule_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Correlator::RuleDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-details";

    return path_buffer.str();

}

const EntityPath Correlator::RuleDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Correlator::RuleDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-detail")
    {
        for(auto const & c : rule_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Correlator::RuleDetails::RuleDetail>();
        c->parent = this;
        rule_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rule_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Correlator::RuleDetails::set_value(const std::string & value_path, std::string value)
{
}

Correlator::RuleDetails::RuleDetail::RuleDetail()
    :
    rule_name{YType::str, "rule-name"},
    apply_context{YType::str, "apply-context"},
    apply_location{YType::str, "apply-location"},
    context_correlation{YType::boolean, "context-correlation"},
    internal{YType::boolean, "internal"},
    reissue_non_bistate{YType::boolean, "reissue-non-bistate"},
    reparent{YType::boolean, "reparent"},
    root_cause_timeout{YType::uint32, "root-cause-timeout"},
    timeout{YType::uint32, "timeout"}
    	,
    rule_summary(std::make_shared<Correlator::RuleDetails::RuleDetail::RuleSummary>())
{
    rule_summary->parent = this;

    yang_name = "rule-detail"; yang_parent_name = "rule-details";
}

Correlator::RuleDetails::RuleDetail::~RuleDetail()
{
}

bool Correlator::RuleDetails::RuleDetail::has_data() const
{
    for (std::size_t index=0; index<codes.size(); index++)
    {
        if(codes[index]->has_data())
            return true;
    }
    for (auto const & leaf : apply_context.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : apply_location.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return rule_name.is_set
	|| context_correlation.is_set
	|| internal.is_set
	|| reissue_non_bistate.is_set
	|| reparent.is_set
	|| root_cause_timeout.is_set
	|| timeout.is_set
	|| (rule_summary !=  nullptr && rule_summary->has_data());
}

bool Correlator::RuleDetails::RuleDetail::has_operation() const
{
    for (std::size_t index=0; index<codes.size(); index++)
    {
        if(codes[index]->has_operation())
            return true;
    }
    for (auto const & leaf : apply_context.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : apply_location.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(rule_name.operation)
	|| is_set(apply_context.operation)
	|| is_set(apply_location.operation)
	|| is_set(context_correlation.operation)
	|| is_set(internal.operation)
	|| is_set(reissue_non_bistate.operation)
	|| is_set(reparent.operation)
	|| is_set(root_cause_timeout.operation)
	|| is_set(timeout.operation)
	|| (rule_summary !=  nullptr && rule_summary->has_operation());
}

std::string Correlator::RuleDetails::RuleDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-detail" <<"[rule-name='" <<rule_name <<"']";

    return path_buffer.str();

}

const EntityPath Correlator::RuleDetails::RuleDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/rule-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name.is_set || is_set(rule_name.operation)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (context_correlation.is_set || is_set(context_correlation.operation)) leaf_name_data.push_back(context_correlation.get_name_leafdata());
    if (internal.is_set || is_set(internal.operation)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (reissue_non_bistate.is_set || is_set(reissue_non_bistate.operation)) leaf_name_data.push_back(reissue_non_bistate.get_name_leafdata());
    if (reparent.is_set || is_set(reparent.operation)) leaf_name_data.push_back(reparent.get_name_leafdata());
    if (root_cause_timeout.is_set || is_set(root_cause_timeout.operation)) leaf_name_data.push_back(root_cause_timeout.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());

    auto apply_context_name_datas = apply_context.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), apply_context_name_datas.begin(), apply_context_name_datas.end());
    auto apply_location_name_datas = apply_location.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), apply_location_name_datas.begin(), apply_location_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Correlator::RuleDetails::RuleDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "codes")
    {
        for(auto const & c : codes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Correlator::RuleDetails::RuleDetail::Codes>();
        c->parent = this;
        codes.push_back(c);
        return c;
    }

    if(child_yang_name == "rule-summary")
    {
        if(rule_summary == nullptr)
        {
            rule_summary = std::make_shared<Correlator::RuleDetails::RuleDetail::RuleSummary>();
        }
        return rule_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleDetails::RuleDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : codes)
    {
        children[c->get_segment_path()] = c;
    }

    if(rule_summary != nullptr)
    {
        children["rule-summary"] = rule_summary;
    }

    return children;
}

void Correlator::RuleDetails::RuleDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rule-name")
    {
        rule_name = value;
    }
    if(value_path == "apply-context")
    {
        apply_context.append(value);
    }
    if(value_path == "apply-location")
    {
        apply_location.append(value);
    }
    if(value_path == "context-correlation")
    {
        context_correlation = value;
    }
    if(value_path == "internal")
    {
        internal = value;
    }
    if(value_path == "reissue-non-bistate")
    {
        reissue_non_bistate = value;
    }
    if(value_path == "reparent")
    {
        reparent = value;
    }
    if(value_path == "root-cause-timeout")
    {
        root_cause_timeout = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Correlator::RuleDetails::RuleDetail::RuleSummary::RuleSummary()
    :
    buffered_alarms_count{YType::uint32, "buffered-alarms-count"},
    rule_name_xr{YType::str, "rule-name-xr"},
    rule_state{YType::enumeration, "rule-state"},
    stateful{YType::boolean, "stateful"}
{
    yang_name = "rule-summary"; yang_parent_name = "rule-detail";
}

Correlator::RuleDetails::RuleDetail::RuleSummary::~RuleSummary()
{
}

bool Correlator::RuleDetails::RuleDetail::RuleSummary::has_data() const
{
    return buffered_alarms_count.is_set
	|| rule_name_xr.is_set
	|| rule_state.is_set
	|| stateful.is_set;
}

bool Correlator::RuleDetails::RuleDetail::RuleSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(buffered_alarms_count.operation)
	|| is_set(rule_name_xr.operation)
	|| is_set(rule_state.operation)
	|| is_set(stateful.operation);
}

std::string Correlator::RuleDetails::RuleDetail::RuleSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-summary";

    return path_buffer.str();

}

const EntityPath Correlator::RuleDetails::RuleDetail::RuleSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RuleSummary' in Cisco_IOS_XR_infra_correlator_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffered_alarms_count.is_set || is_set(buffered_alarms_count.operation)) leaf_name_data.push_back(buffered_alarms_count.get_name_leafdata());
    if (rule_name_xr.is_set || is_set(rule_name_xr.operation)) leaf_name_data.push_back(rule_name_xr.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.operation)) leaf_name_data.push_back(rule_state.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.operation)) leaf_name_data.push_back(stateful.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Correlator::RuleDetails::RuleDetail::RuleSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleDetails::RuleDetail::RuleSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Correlator::RuleDetails::RuleDetail::RuleSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buffered-alarms-count")
    {
        buffered_alarms_count = value;
    }
    if(value_path == "rule-name-xr")
    {
        rule_name_xr = value;
    }
    if(value_path == "rule-state")
    {
        rule_state = value;
    }
    if(value_path == "stateful")
    {
        stateful = value;
    }
}

Correlator::RuleDetails::RuleDetail::Codes::Codes()
    :
    category{YType::str, "category"},
    code{YType::str, "code"},
    group{YType::str, "group"}
{
    yang_name = "codes"; yang_parent_name = "rule-detail";
}

Correlator::RuleDetails::RuleDetail::Codes::~Codes()
{
}

bool Correlator::RuleDetails::RuleDetail::Codes::has_data() const
{
    return category.is_set
	|| code.is_set
	|| group.is_set;
}

bool Correlator::RuleDetails::RuleDetail::Codes::has_operation() const
{
    return is_set(operation)
	|| is_set(category.operation)
	|| is_set(code.operation)
	|| is_set(group.operation);
}

std::string Correlator::RuleDetails::RuleDetail::Codes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "codes";

    return path_buffer.str();

}

const EntityPath Correlator::RuleDetails::RuleDetail::Codes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Codes' in Cisco_IOS_XR_infra_correlator_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Correlator::RuleDetails::RuleDetail::Codes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleDetails::RuleDetail::Codes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Correlator::RuleDetails::RuleDetail::Codes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "code")
    {
        code = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
}

Correlator::RuleSummaries::RuleSummaries()
{
    yang_name = "rule-summaries"; yang_parent_name = "correlator";
}

Correlator::RuleSummaries::~RuleSummaries()
{
}

bool Correlator::RuleSummaries::has_data() const
{
    for (std::size_t index=0; index<rule_summary.size(); index++)
    {
        if(rule_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Correlator::RuleSummaries::has_operation() const
{
    for (std::size_t index=0; index<rule_summary.size(); index++)
    {
        if(rule_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Correlator::RuleSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-summaries";

    return path_buffer.str();

}

const EntityPath Correlator::RuleSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Correlator::RuleSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-summary")
    {
        for(auto const & c : rule_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Correlator::RuleSummaries::RuleSummary>();
        c->parent = this;
        rule_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rule_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Correlator::RuleSummaries::set_value(const std::string & value_path, std::string value)
{
}

Correlator::RuleSummaries::RuleSummary::RuleSummary()
    :
    rule_name{YType::str, "rule-name"},
    buffered_alarms_count{YType::uint32, "buffered-alarms-count"},
    rule_name_xr{YType::str, "rule-name-xr"},
    rule_state{YType::enumeration, "rule-state"},
    stateful{YType::boolean, "stateful"}
{
    yang_name = "rule-summary"; yang_parent_name = "rule-summaries";
}

Correlator::RuleSummaries::RuleSummary::~RuleSummary()
{
}

bool Correlator::RuleSummaries::RuleSummary::has_data() const
{
    return rule_name.is_set
	|| buffered_alarms_count.is_set
	|| rule_name_xr.is_set
	|| rule_state.is_set
	|| stateful.is_set;
}

bool Correlator::RuleSummaries::RuleSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(rule_name.operation)
	|| is_set(buffered_alarms_count.operation)
	|| is_set(rule_name_xr.operation)
	|| is_set(rule_state.operation)
	|| is_set(stateful.operation);
}

std::string Correlator::RuleSummaries::RuleSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-summary" <<"[rule-name='" <<rule_name <<"']";

    return path_buffer.str();

}

const EntityPath Correlator::RuleSummaries::RuleSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/rule-summaries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name.is_set || is_set(rule_name.operation)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (buffered_alarms_count.is_set || is_set(buffered_alarms_count.operation)) leaf_name_data.push_back(buffered_alarms_count.get_name_leafdata());
    if (rule_name_xr.is_set || is_set(rule_name_xr.operation)) leaf_name_data.push_back(rule_name_xr.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.operation)) leaf_name_data.push_back(rule_state.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.operation)) leaf_name_data.push_back(stateful.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Correlator::RuleSummaries::RuleSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Correlator::RuleSummaries::RuleSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Correlator::RuleSummaries::RuleSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rule-name")
    {
        rule_name = value;
    }
    if(value_path == "buffered-alarms-count")
    {
        buffered_alarms_count = value;
    }
    if(value_path == "rule-name-xr")
    {
        rule_name_xr = value;
    }
    if(value_path == "rule-state")
    {
        rule_state = value;
    }
    if(value_path == "stateful")
    {
        stateful = value;
    }
}

const Enum::YLeaf AlAlarmBistateEnum::not_available {0, "not-available"};
const Enum::YLeaf AlAlarmBistateEnum::active {1, "active"};
const Enum::YLeaf AlAlarmBistateEnum::clear {2, "clear"};

const Enum::YLeaf AlAlarmSeverityEnum::unknown {-1, "unknown"};
const Enum::YLeaf AlAlarmSeverityEnum::emergency {0, "emergency"};
const Enum::YLeaf AlAlarmSeverityEnum::alert {1, "alert"};
const Enum::YLeaf AlAlarmSeverityEnum::critical {2, "critical"};
const Enum::YLeaf AlAlarmSeverityEnum::error {3, "error"};
const Enum::YLeaf AlAlarmSeverityEnum::warning {4, "warning"};
const Enum::YLeaf AlAlarmSeverityEnum::notice {5, "notice"};
const Enum::YLeaf AlAlarmSeverityEnum::informational {6, "informational"};
const Enum::YLeaf AlAlarmSeverityEnum::debugging {7, "debugging"};

const Enum::YLeaf AcRuleStateEnum::rule_unapplied {0, "rule-unapplied"};
const Enum::YLeaf AcRuleStateEnum::rule_applied {1, "rule-applied"};
const Enum::YLeaf AcRuleStateEnum::rule_applied_all {2, "rule-applied-all"};


}
}

