
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_infra_correlator_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_correlator_oper {

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
    path_buffer << "rule-summary" <<"[rule-name='" <<rule_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Suppression::RuleSummaries::RuleSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:suppression/rule-summaries/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name.is_set || is_set(rule_name.operation)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (rule_name_xr.is_set || is_set(rule_name_xr.operation)) leaf_name_data.push_back(rule_name_xr.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.operation)) leaf_name_data.push_back(rule_state.get_name_leafdata());
    if (suppressed_alarms_count.is_set || is_set(suppressed_alarms_count.operation)) leaf_name_data.push_back(suppressed_alarms_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Suppression::RuleSummaries::RuleSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Suppression::RuleSummaries::RuleSummary::get_children()
{
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

EntityPath Suppression::RuleSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:suppression/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Suppression::RuleSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rule-summary")
    {
        for(auto const & c : rule_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Suppression::RuleSummaries::RuleSummary>();
        c->parent = this;
        rule_summary.push_back(std::move(c));
        children[segment_path] = rule_summary.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Suppression::RuleSummaries::get_children()
{
    for (auto const & c : rule_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Suppression::RuleSummaries::set_value(const std::string & value_path, std::string value)
{
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

EntityPath Suppression::RuleDetails::RuleDetail::RuleSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name_xr.is_set || is_set(rule_name_xr.operation)) leaf_name_data.push_back(rule_name_xr.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.operation)) leaf_name_data.push_back(rule_state.get_name_leafdata());
    if (suppressed_alarms_count.is_set || is_set(suppressed_alarms_count.operation)) leaf_name_data.push_back(suppressed_alarms_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Suppression::RuleDetails::RuleDetail::RuleSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Suppression::RuleDetails::RuleDetail::RuleSummary::get_children()
{
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

EntityPath Suppression::RuleDetails::RuleDetail::Codes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Suppression::RuleDetails::RuleDetail::Codes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Suppression::RuleDetails::RuleDetail::Codes::get_children()
{
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

Suppression::RuleDetails::RuleDetail::RuleDetail()
    :
    	rule_name{YType::str, "rule-name"},
	 alarm_severity{YType::enumeration, "alarm-severity"},
	 all_alarms{YType::boolean, "all-alarms"},
	 apply_source{YType::str, "apply-source"}
    	,
    rule_summary(std::make_unique<Suppression::RuleDetails::RuleDetail::RuleSummary>())
{
    rule_summary->parent = this;
    children["rule-summary"] = rule_summary.get();

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
    path_buffer << "rule-detail" <<"[rule-name='" <<rule_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Suppression::RuleDetails::RuleDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:suppression/rule-details/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* Suppression::RuleDetails::RuleDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "codes")
    {
        for(auto const & c : codes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Suppression::RuleDetails::RuleDetail::Codes>();
        c->parent = this;
        codes.push_back(std::move(c));
        children[segment_path] = codes.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "rule-summary")
    {
        if(rule_summary != nullptr)
        {
            children["rule-summary"] = rule_summary.get();
        }
        else
        {
            rule_summary = std::make_unique<Suppression::RuleDetails::RuleDetail::RuleSummary>();
            rule_summary->parent = this;
            children["rule-summary"] = rule_summary.get();
        }
        return children.at("rule-summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Suppression::RuleDetails::RuleDetail::get_children()
{
    for (auto const & c : codes)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("rule-summary") == children.end())
    {
        if(rule_summary != nullptr)
        {
            children["rule-summary"] = rule_summary.get();
        }
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

EntityPath Suppression::RuleDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:suppression/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Suppression::RuleDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rule-detail")
    {
        for(auto const & c : rule_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Suppression::RuleDetails::RuleDetail>();
        c->parent = this;
        rule_detail.push_back(std::move(c));
        children[segment_path] = rule_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Suppression::RuleDetails::get_children()
{
    for (auto const & c : rule_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Suppression::RuleDetails::set_value(const std::string & value_path, std::string value)
{
}

Suppression::Suppression()
    :
    rule_details(std::make_unique<Suppression::RuleDetails>())
	,rule_summaries(std::make_unique<Suppression::RuleSummaries>())
{
    rule_details->parent = this;
    children["rule-details"] = rule_details.get();

    rule_summaries->parent = this;
    children["rule-summaries"] = rule_summaries.get();

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

EntityPath Suppression::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Suppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rule-details")
    {
        if(rule_details != nullptr)
        {
            children["rule-details"] = rule_details.get();
        }
        else
        {
            rule_details = std::make_unique<Suppression::RuleDetails>();
            rule_details->parent = this;
            children["rule-details"] = rule_details.get();
        }
        return children.at("rule-details");
    }

    if(child_yang_name == "rule-summaries")
    {
        if(rule_summaries != nullptr)
        {
            children["rule-summaries"] = rule_summaries.get();
        }
        else
        {
            rule_summaries = std::make_unique<Suppression::RuleSummaries>();
            rule_summaries->parent = this;
            children["rule-summaries"] = rule_summaries.get();
        }
        return children.at("rule-summaries");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Suppression::get_children()
{
    if(children.find("rule-details") == children.end())
    {
        if(rule_details != nullptr)
        {
            children["rule-details"] = rule_details.get();
        }
    }

    if(children.find("rule-summaries") == children.end())
    {
        if(rule_summaries != nullptr)
        {
            children["rule-summaries"] = rule_summaries.get();
        }
    }

    return children;
}

void Suppression::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Suppression::clone_ptr()
{
    return std::make_unique<Suppression>();
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

EntityPath Correlator::Rules::Rule::Codes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Correlator::Rules::Rule::Codes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Correlator::Rules::Rule::Codes::get_children()
{
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
    path_buffer << "rule" <<"[rule-name='" <<rule_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Correlator::Rules::Rule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/rules/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* Correlator::Rules::Rule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "codes")
    {
        for(auto const & c : codes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Correlator::Rules::Rule::Codes>();
        c->parent = this;
        codes.push_back(std::move(c));
        children[segment_path] = codes.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Correlator::Rules::Rule::get_children()
{
    for (auto const & c : codes)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
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

EntityPath Correlator::Rules::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Correlator::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rule")
    {
        for(auto const & c : rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Correlator::Rules::Rule>();
        c->parent = this;
        rule.push_back(std::move(c));
        children[segment_path] = rule.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Correlator::Rules::get_children()
{
    for (auto const & c : rule)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Correlator::Rules::set_value(const std::string & value_path, std::string value)
{
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

EntityPath Correlator::BufferStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_size.is_set || is_set(configured_size.operation)) leaf_name_data.push_back(configured_size.get_name_leafdata());
    if (current_size.is_set || is_set(current_size.operation)) leaf_name_data.push_back(current_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Correlator::BufferStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Correlator::BufferStatus::get_children()
{
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

EntityPath Correlator::Alarms::Alarm::AlarmInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* Correlator::Alarms::Alarm::AlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Correlator::Alarms::Alarm::AlarmInfo::get_children()
{
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

Correlator::Alarms::Alarm::Alarm()
    :
    	alarm_id{YType::int32, "alarm-id"},
	 context{YType::str, "context"},
	 rule_name{YType::str, "rule-name"}
    	,
    alarm_info(std::make_unique<Correlator::Alarms::Alarm::AlarmInfo>())
{
    alarm_info->parent = this;
    children["alarm-info"] = alarm_info.get();

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
    path_buffer << "alarm" <<"[alarm-id='" <<alarm_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Correlator::Alarms::Alarm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/alarms/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_id.is_set || is_set(alarm_id.operation)) leaf_name_data.push_back(alarm_id.get_name_leafdata());
    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (rule_name.is_set || is_set(rule_name.operation)) leaf_name_data.push_back(rule_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Correlator::Alarms::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "alarm-info")
    {
        if(alarm_info != nullptr)
        {
            children["alarm-info"] = alarm_info.get();
        }
        else
        {
            alarm_info = std::make_unique<Correlator::Alarms::Alarm::AlarmInfo>();
            alarm_info->parent = this;
            children["alarm-info"] = alarm_info.get();
        }
        return children.at("alarm-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Correlator::Alarms::Alarm::get_children()
{
    if(children.find("alarm-info") == children.end())
    {
        if(alarm_info != nullptr)
        {
            children["alarm-info"] = alarm_info.get();
        }
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

EntityPath Correlator::Alarms::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Correlator::Alarms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "alarm")
    {
        for(auto const & c : alarm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Correlator::Alarms::Alarm>();
        c->parent = this;
        alarm.push_back(std::move(c));
        children[segment_path] = alarm.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Correlator::Alarms::get_children()
{
    for (auto const & c : alarm)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Correlator::Alarms::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "rule-set-summary" <<"[rule-set-name='" <<rule_set_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Correlator::RuleSetSummaries::RuleSetSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/rule-set-summaries/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_set_name.is_set || is_set(rule_set_name.operation)) leaf_name_data.push_back(rule_set_name.get_name_leafdata());
    if (rule_set_name_xr.is_set || is_set(rule_set_name_xr.operation)) leaf_name_data.push_back(rule_set_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Correlator::RuleSetSummaries::RuleSetSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Correlator::RuleSetSummaries::RuleSetSummary::get_children()
{
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

EntityPath Correlator::RuleSetSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Correlator::RuleSetSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rule-set-summary")
    {
        for(auto const & c : rule_set_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Correlator::RuleSetSummaries::RuleSetSummary>();
        c->parent = this;
        rule_set_summary.push_back(std::move(c));
        children[segment_path] = rule_set_summary.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Correlator::RuleSetSummaries::get_children()
{
    for (auto const & c : rule_set_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Correlator::RuleSetSummaries::set_value(const std::string & value_path, std::string value)
{
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

EntityPath Correlator::RuleSetDetails::RuleSetDetail::Rules::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffered_alarms_count.is_set || is_set(buffered_alarms_count.operation)) leaf_name_data.push_back(buffered_alarms_count.get_name_leafdata());
    if (rule_name_xr.is_set || is_set(rule_name_xr.operation)) leaf_name_data.push_back(rule_name_xr.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.operation)) leaf_name_data.push_back(rule_state.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.operation)) leaf_name_data.push_back(stateful.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Correlator::RuleSetDetails::RuleSetDetail::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Correlator::RuleSetDetails::RuleSetDetail::Rules::get_children()
{
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
    path_buffer << "rule-set-detail" <<"[rule-set-name='" <<rule_set_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Correlator::RuleSetDetails::RuleSetDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/rule-set-details/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_set_name.is_set || is_set(rule_set_name.operation)) leaf_name_data.push_back(rule_set_name.get_name_leafdata());
    if (rule_set_name_xr.is_set || is_set(rule_set_name_xr.operation)) leaf_name_data.push_back(rule_set_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Correlator::RuleSetDetails::RuleSetDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rules")
    {
        for(auto const & c : rules)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Correlator::RuleSetDetails::RuleSetDetail::Rules>();
        c->parent = this;
        rules.push_back(std::move(c));
        children[segment_path] = rules.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Correlator::RuleSetDetails::RuleSetDetail::get_children()
{
    for (auto const & c : rules)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
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

EntityPath Correlator::RuleSetDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Correlator::RuleSetDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rule-set-detail")
    {
        for(auto const & c : rule_set_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Correlator::RuleSetDetails::RuleSetDetail>();
        c->parent = this;
        rule_set_detail.push_back(std::move(c));
        children[segment_path] = rule_set_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Correlator::RuleSetDetails::get_children()
{
    for (auto const & c : rule_set_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Correlator::RuleSetDetails::set_value(const std::string & value_path, std::string value)
{
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

EntityPath Correlator::RuleDetails::RuleDetail::RuleSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffered_alarms_count.is_set || is_set(buffered_alarms_count.operation)) leaf_name_data.push_back(buffered_alarms_count.get_name_leafdata());
    if (rule_name_xr.is_set || is_set(rule_name_xr.operation)) leaf_name_data.push_back(rule_name_xr.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.operation)) leaf_name_data.push_back(rule_state.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.operation)) leaf_name_data.push_back(stateful.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Correlator::RuleDetails::RuleDetail::RuleSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Correlator::RuleDetails::RuleDetail::RuleSummary::get_children()
{
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

EntityPath Correlator::RuleDetails::RuleDetail::Codes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Correlator::RuleDetails::RuleDetail::Codes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Correlator::RuleDetails::RuleDetail::Codes::get_children()
{
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
    rule_summary(std::make_unique<Correlator::RuleDetails::RuleDetail::RuleSummary>())
{
    rule_summary->parent = this;
    children["rule-summary"] = rule_summary.get();

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
    path_buffer << "rule-detail" <<"[rule-name='" <<rule_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Correlator::RuleDetails::RuleDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/rule-details/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* Correlator::RuleDetails::RuleDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "codes")
    {
        for(auto const & c : codes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Correlator::RuleDetails::RuleDetail::Codes>();
        c->parent = this;
        codes.push_back(std::move(c));
        children[segment_path] = codes.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "rule-summary")
    {
        if(rule_summary != nullptr)
        {
            children["rule-summary"] = rule_summary.get();
        }
        else
        {
            rule_summary = std::make_unique<Correlator::RuleDetails::RuleDetail::RuleSummary>();
            rule_summary->parent = this;
            children["rule-summary"] = rule_summary.get();
        }
        return children.at("rule-summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Correlator::RuleDetails::RuleDetail::get_children()
{
    for (auto const & c : codes)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("rule-summary") == children.end())
    {
        if(rule_summary != nullptr)
        {
            children["rule-summary"] = rule_summary.get();
        }
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

EntityPath Correlator::RuleDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Correlator::RuleDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rule-detail")
    {
        for(auto const & c : rule_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Correlator::RuleDetails::RuleDetail>();
        c->parent = this;
        rule_detail.push_back(std::move(c));
        children[segment_path] = rule_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Correlator::RuleDetails::get_children()
{
    for (auto const & c : rule_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Correlator::RuleDetails::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "rule-summary" <<"[rule-name='" <<rule_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Correlator::RuleSummaries::RuleSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/rule-summaries/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* Correlator::RuleSummaries::RuleSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Correlator::RuleSummaries::RuleSummary::get_children()
{
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

EntityPath Correlator::RuleSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-correlator-oper:correlator/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Correlator::RuleSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rule-summary")
    {
        for(auto const & c : rule_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Correlator::RuleSummaries::RuleSummary>();
        c->parent = this;
        rule_summary.push_back(std::move(c));
        children[segment_path] = rule_summary.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Correlator::RuleSummaries::get_children()
{
    for (auto const & c : rule_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Correlator::RuleSummaries::set_value(const std::string & value_path, std::string value)
{
}

Correlator::Correlator()
    :
    alarms(std::make_unique<Correlator::Alarms>())
	,buffer_status(std::make_unique<Correlator::BufferStatus>())
	,rule_details(std::make_unique<Correlator::RuleDetails>())
	,rule_set_details(std::make_unique<Correlator::RuleSetDetails>())
	,rule_set_summaries(std::make_unique<Correlator::RuleSetSummaries>())
	,rule_summaries(std::make_unique<Correlator::RuleSummaries>())
	,rules(std::make_unique<Correlator::Rules>())
{
    alarms->parent = this;
    children["alarms"] = alarms.get();

    buffer_status->parent = this;
    children["buffer-status"] = buffer_status.get();

    rule_details->parent = this;
    children["rule-details"] = rule_details.get();

    rule_set_details->parent = this;
    children["rule-set-details"] = rule_set_details.get();

    rule_set_summaries->parent = this;
    children["rule-set-summaries"] = rule_set_summaries.get();

    rule_summaries->parent = this;
    children["rule-summaries"] = rule_summaries.get();

    rules->parent = this;
    children["rules"] = rules.get();

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

EntityPath Correlator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Correlator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "alarms")
    {
        if(alarms != nullptr)
        {
            children["alarms"] = alarms.get();
        }
        else
        {
            alarms = std::make_unique<Correlator::Alarms>();
            alarms->parent = this;
            children["alarms"] = alarms.get();
        }
        return children.at("alarms");
    }

    if(child_yang_name == "buffer-status")
    {
        if(buffer_status != nullptr)
        {
            children["buffer-status"] = buffer_status.get();
        }
        else
        {
            buffer_status = std::make_unique<Correlator::BufferStatus>();
            buffer_status->parent = this;
            children["buffer-status"] = buffer_status.get();
        }
        return children.at("buffer-status");
    }

    if(child_yang_name == "rule-details")
    {
        if(rule_details != nullptr)
        {
            children["rule-details"] = rule_details.get();
        }
        else
        {
            rule_details = std::make_unique<Correlator::RuleDetails>();
            rule_details->parent = this;
            children["rule-details"] = rule_details.get();
        }
        return children.at("rule-details");
    }

    if(child_yang_name == "rule-set-details")
    {
        if(rule_set_details != nullptr)
        {
            children["rule-set-details"] = rule_set_details.get();
        }
        else
        {
            rule_set_details = std::make_unique<Correlator::RuleSetDetails>();
            rule_set_details->parent = this;
            children["rule-set-details"] = rule_set_details.get();
        }
        return children.at("rule-set-details");
    }

    if(child_yang_name == "rule-set-summaries")
    {
        if(rule_set_summaries != nullptr)
        {
            children["rule-set-summaries"] = rule_set_summaries.get();
        }
        else
        {
            rule_set_summaries = std::make_unique<Correlator::RuleSetSummaries>();
            rule_set_summaries->parent = this;
            children["rule-set-summaries"] = rule_set_summaries.get();
        }
        return children.at("rule-set-summaries");
    }

    if(child_yang_name == "rule-summaries")
    {
        if(rule_summaries != nullptr)
        {
            children["rule-summaries"] = rule_summaries.get();
        }
        else
        {
            rule_summaries = std::make_unique<Correlator::RuleSummaries>();
            rule_summaries->parent = this;
            children["rule-summaries"] = rule_summaries.get();
        }
        return children.at("rule-summaries");
    }

    if(child_yang_name == "rules")
    {
        if(rules != nullptr)
        {
            children["rules"] = rules.get();
        }
        else
        {
            rules = std::make_unique<Correlator::Rules>();
            rules->parent = this;
            children["rules"] = rules.get();
        }
        return children.at("rules");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Correlator::get_children()
{
    if(children.find("alarms") == children.end())
    {
        if(alarms != nullptr)
        {
            children["alarms"] = alarms.get();
        }
    }

    if(children.find("buffer-status") == children.end())
    {
        if(buffer_status != nullptr)
        {
            children["buffer-status"] = buffer_status.get();
        }
    }

    if(children.find("rule-details") == children.end())
    {
        if(rule_details != nullptr)
        {
            children["rule-details"] = rule_details.get();
        }
    }

    if(children.find("rule-set-details") == children.end())
    {
        if(rule_set_details != nullptr)
        {
            children["rule-set-details"] = rule_set_details.get();
        }
    }

    if(children.find("rule-set-summaries") == children.end())
    {
        if(rule_set_summaries != nullptr)
        {
            children["rule-set-summaries"] = rule_set_summaries.get();
        }
    }

    if(children.find("rule-summaries") == children.end())
    {
        if(rule_summaries != nullptr)
        {
            children["rule-summaries"] = rule_summaries.get();
        }
    }

    if(children.find("rules") == children.end())
    {
        if(rules != nullptr)
        {
            children["rules"] = rules.get();
        }
    }

    return children;
}

void Correlator::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Correlator::clone_ptr()
{
    return std::make_unique<Correlator>();
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

