
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "tailf_netconf_query.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace tailf_netconf_query {

StartQuery::StartQuery()
    :
    input(std::make_shared<StartQuery::Input>())
    , output(std::make_shared<StartQuery::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "start-query"; yang_parent_name = "tailf-netconf-query"; is_top_level_class = true; has_list_ancestor = false; 
}

StartQuery::~StartQuery()
{
}

bool StartQuery::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool StartQuery::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string StartQuery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:start-query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StartQuery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StartQuery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<StartQuery::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<StartQuery::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StartQuery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void StartQuery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void StartQuery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> StartQuery::clone_ptr() const
{
    return std::make_shared<StartQuery>();
}

std::string StartQuery::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string StartQuery::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function StartQuery::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> StartQuery::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool StartQuery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

StartQuery::Input::Input()
    :
    foreach{YType::str, "foreach"},
    sort_by{YType::str, "sort-by"},
    limit{YType::uint32, "limit"},
    offset{YType::uint32, "offset"},
    timeout{YType::uint32, "timeout"}
        ,
    select(this, {})
{

    yang_name = "input"; yang_parent_name = "start-query"; is_top_level_class = false; has_list_ancestor = false; 
}

StartQuery::Input::~Input()
{
}

bool StartQuery::Input::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<select.len(); index++)
    {
        if(select[index]->has_data())
            return true;
    }
    for (auto const & leaf : sort_by.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return foreach.is_set
	|| limit.is_set
	|| offset.is_set
	|| timeout.is_set;
}

bool StartQuery::Input::has_operation() const
{
    for (std::size_t index=0; index<select.len(); index++)
    {
        if(select[index]->has_operation())
            return true;
    }
    for (auto const & leaf : sort_by.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(foreach.yfilter)
	|| ydk::is_set(sort_by.yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string StartQuery::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:start-query/" << get_segment_path();
    return path_buffer.str();
}

std::string StartQuery::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StartQuery::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (foreach.is_set || is_set(foreach.yfilter)) leaf_name_data.push_back(foreach.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    auto sort_by_name_datas = sort_by.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sort_by_name_datas.begin(), sort_by_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StartQuery::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "select")
    {
        auto ent_ = std::make_shared<StartQuery::Input::Select>();
        ent_->parent = this;
        select.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StartQuery::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : select.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void StartQuery::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "foreach")
    {
        foreach = value;
        foreach.value_namespace = name_space;
        foreach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sort-by")
    {
        sort_by.append(value);
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void StartQuery::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "foreach")
    {
        foreach.yfilter = yfilter;
    }
    if(value_path == "sort-by")
    {
        sort_by.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool StartQuery::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select" || name == "foreach" || name == "sort-by" || name == "limit" || name == "offset" || name == "timeout")
        return true;
    return false;
}

StartQuery::Input::Select::Select()
    :
    label{YType::str, "label"},
    expression{YType::str, "expression"},
    result_type{YType::enumeration, "result-type"}
{

    yang_name = "select"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

StartQuery::Input::Select::~Select()
{
}

bool StartQuery::Input::Select::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : result_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return label.is_set
	|| expression.is_set;
}

bool StartQuery::Input::Select::has_operation() const
{
    for (auto const & leaf : result_type.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(expression.yfilter)
	|| ydk::is_set(result_type.yfilter);
}

std::string StartQuery::Input::Select::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:start-query/input/" << get_segment_path();
    return path_buffer.str();
}

std::string StartQuery::Input::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StartQuery::Input::Select::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (expression.is_set || is_set(expression.yfilter)) leaf_name_data.push_back(expression.get_name_leafdata());

    auto result_type_name_datas = result_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), result_type_name_datas.begin(), result_type_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StartQuery::Input::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StartQuery::Input::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void StartQuery::Input::Select::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expression")
    {
        expression = value;
        expression.value_namespace = name_space;
        expression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "result-type")
    {
        result_type.append(value);
    }
}

void StartQuery::Input::Select::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "expression")
    {
        expression.yfilter = yfilter;
    }
    if(value_path == "result-type")
    {
        result_type.yfilter = yfilter;
    }
}

bool StartQuery::Input::Select::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "expression" || name == "result-type")
        return true;
    return false;
}

StartQuery::Output::Output()
    :
    query_handle{YType::uint32, "query-handle"}
{

    yang_name = "output"; yang_parent_name = "start-query"; is_top_level_class = false; has_list_ancestor = false; 
}

StartQuery::Output::~Output()
{
}

bool StartQuery::Output::has_data() const
{
    if (is_presence_container) return true;
    return query_handle.is_set;
}

bool StartQuery::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_handle.yfilter);
}

std::string StartQuery::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:start-query/" << get_segment_path();
    return path_buffer.str();
}

std::string StartQuery::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StartQuery::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_handle.is_set || is_set(query_handle.yfilter)) leaf_name_data.push_back(query_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StartQuery::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StartQuery::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void StartQuery::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-handle")
    {
        query_handle = value;
        query_handle.value_namespace = name_space;
        query_handle.value_namespace_prefix = name_space_prefix;
    }
}

void StartQuery::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-handle")
    {
        query_handle.yfilter = yfilter;
    }
}

bool StartQuery::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-handle")
        return true;
    return false;
}

FetchQueryResult::FetchQueryResult()
    :
    input(std::make_shared<FetchQueryResult::Input>())
    , output(std::make_shared<FetchQueryResult::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "fetch-query-result"; yang_parent_name = "tailf-netconf-query"; is_top_level_class = true; has_list_ancestor = false; 
}

FetchQueryResult::~FetchQueryResult()
{
}

bool FetchQueryResult::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool FetchQueryResult::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string FetchQueryResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:fetch-query-result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FetchQueryResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FetchQueryResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<FetchQueryResult::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<FetchQueryResult::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FetchQueryResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void FetchQueryResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FetchQueryResult::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> FetchQueryResult::clone_ptr() const
{
    return std::make_shared<FetchQueryResult>();
}

std::string FetchQueryResult::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string FetchQueryResult::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function FetchQueryResult::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> FetchQueryResult::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool FetchQueryResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

FetchQueryResult::Input::Input()
    :
    query_handle{YType::uint32, "query-handle"}
{

    yang_name = "input"; yang_parent_name = "fetch-query-result"; is_top_level_class = false; has_list_ancestor = false; 
}

FetchQueryResult::Input::~Input()
{
}

bool FetchQueryResult::Input::has_data() const
{
    if (is_presence_container) return true;
    return query_handle.is_set;
}

bool FetchQueryResult::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_handle.yfilter);
}

std::string FetchQueryResult::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:fetch-query-result/" << get_segment_path();
    return path_buffer.str();
}

std::string FetchQueryResult::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FetchQueryResult::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_handle.is_set || is_set(query_handle.yfilter)) leaf_name_data.push_back(query_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FetchQueryResult::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FetchQueryResult::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FetchQueryResult::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-handle")
    {
        query_handle = value;
        query_handle.value_namespace = name_space;
        query_handle.value_namespace_prefix = name_space_prefix;
    }
}

void FetchQueryResult::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-handle")
    {
        query_handle.yfilter = yfilter;
    }
}

bool FetchQueryResult::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-handle")
        return true;
    return false;
}

FetchQueryResult::Output::Output()
    :
    query_result(std::make_shared<FetchQueryResult::Output::QueryResult>())
{
    query_result->parent = this;

    yang_name = "output"; yang_parent_name = "fetch-query-result"; is_top_level_class = false; has_list_ancestor = false; 
}

FetchQueryResult::Output::~Output()
{
}

bool FetchQueryResult::Output::has_data() const
{
    if (is_presence_container) return true;
    return (query_result !=  nullptr && query_result->has_data());
}

bool FetchQueryResult::Output::has_operation() const
{
    return is_set(yfilter)
	|| (query_result !=  nullptr && query_result->has_operation());
}

std::string FetchQueryResult::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:fetch-query-result/" << get_segment_path();
    return path_buffer.str();
}

std::string FetchQueryResult::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FetchQueryResult::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FetchQueryResult::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query-result")
    {
        if(query_result == nullptr)
        {
            query_result = std::make_shared<FetchQueryResult::Output::QueryResult>();
        }
        return query_result;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FetchQueryResult::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(query_result != nullptr)
    {
        _children["query-result"] = query_result;
    }

    return _children;
}

void FetchQueryResult::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FetchQueryResult::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FetchQueryResult::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-result")
        return true;
    return false;
}

FetchQueryResult::Output::QueryResult::QueryResult()
    :
    result(this, {})
{

    yang_name = "query-result"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = false; 
}

FetchQueryResult::Output::QueryResult::~QueryResult()
{
}

bool FetchQueryResult::Output::QueryResult::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<result.len(); index++)
    {
        if(result[index]->has_data())
            return true;
    }
    return false;
}

bool FetchQueryResult::Output::QueryResult::has_operation() const
{
    for (std::size_t index=0; index<result.len(); index++)
    {
        if(result[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FetchQueryResult::Output::QueryResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:fetch-query-result/output/" << get_segment_path();
    return path_buffer.str();
}

std::string FetchQueryResult::Output::QueryResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query-result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FetchQueryResult::Output::QueryResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FetchQueryResult::Output::QueryResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "result")
    {
        auto ent_ = std::make_shared<FetchQueryResult::Output::QueryResult::Result>();
        ent_->parent = this;
        result.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FetchQueryResult::Output::QueryResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void FetchQueryResult::Output::QueryResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FetchQueryResult::Output::QueryResult::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FetchQueryResult::Output::QueryResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

FetchQueryResult::Output::QueryResult::Result::Result()
    :
    select(this, {})
{

    yang_name = "result"; yang_parent_name = "query-result"; is_top_level_class = false; has_list_ancestor = false; 
}

FetchQueryResult::Output::QueryResult::Result::~Result()
{
}

bool FetchQueryResult::Output::QueryResult::Result::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<select.len(); index++)
    {
        if(select[index]->has_data())
            return true;
    }
    return false;
}

bool FetchQueryResult::Output::QueryResult::Result::has_operation() const
{
    for (std::size_t index=0; index<select.len(); index++)
    {
        if(select[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FetchQueryResult::Output::QueryResult::Result::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:fetch-query-result/output/query-result/" << get_segment_path();
    return path_buffer.str();
}

std::string FetchQueryResult::Output::QueryResult::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FetchQueryResult::Output::QueryResult::Result::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FetchQueryResult::Output::QueryResult::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "select")
    {
        auto ent_ = std::make_shared<FetchQueryResult::Output::QueryResult::Result::Select>();
        ent_->parent = this;
        select.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FetchQueryResult::Output::QueryResult::Result::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : select.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void FetchQueryResult::Output::QueryResult::Result::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FetchQueryResult::Output::QueryResult::Result::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FetchQueryResult::Output::QueryResult::Result::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select")
        return true;
    return false;
}

FetchQueryResult::Output::QueryResult::Result::Select::Select()
    :
    label{YType::str, "label"},
    path{YType::str, "path"},
    value_{YType::str, "value"},
    data{YType::str, "data"}
{

    yang_name = "select"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = false; 
}

FetchQueryResult::Output::QueryResult::Result::Select::~Select()
{
}

bool FetchQueryResult::Output::QueryResult::Result::Select::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| path.is_set
	|| value_.is_set
	|| data.is_set;
}

bool FetchQueryResult::Output::QueryResult::Result::Select::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string FetchQueryResult::Output::QueryResult::Result::Select::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:fetch-query-result/output/query-result/result/" << get_segment_path();
    return path_buffer.str();
}

std::string FetchQueryResult::Output::QueryResult::Result::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FetchQueryResult::Output::QueryResult::Result::Select::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FetchQueryResult::Output::QueryResult::Result::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FetchQueryResult::Output::QueryResult::Result::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FetchQueryResult::Output::QueryResult::Result::Select::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void FetchQueryResult::Output::QueryResult::Result::Select::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool FetchQueryResult::Output::QueryResult::Result::Select::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "path" || name == "value" || name == "data")
        return true;
    return false;
}

ImmediateQuery::ImmediateQuery()
    :
    input(std::make_shared<ImmediateQuery::Input>())
    , output(std::make_shared<ImmediateQuery::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "immediate-query"; yang_parent_name = "tailf-netconf-query"; is_top_level_class = true; has_list_ancestor = false; 
}

ImmediateQuery::~ImmediateQuery()
{
}

bool ImmediateQuery::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool ImmediateQuery::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string ImmediateQuery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:immediate-query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ImmediateQuery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ImmediateQuery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ImmediateQuery::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<ImmediateQuery::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ImmediateQuery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void ImmediateQuery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ImmediateQuery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ImmediateQuery::clone_ptr() const
{
    return std::make_shared<ImmediateQuery>();
}

std::string ImmediateQuery::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ImmediateQuery::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ImmediateQuery::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ImmediateQuery::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool ImmediateQuery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

ImmediateQuery::Input::Input()
    :
    foreach{YType::str, "foreach"},
    sort_by{YType::str, "sort-by"},
    limit{YType::uint32, "limit"},
    offset{YType::uint32, "offset"},
    timeout{YType::uint32, "timeout"}
        ,
    select(this, {})
{

    yang_name = "input"; yang_parent_name = "immediate-query"; is_top_level_class = false; has_list_ancestor = false; 
}

ImmediateQuery::Input::~Input()
{
}

bool ImmediateQuery::Input::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<select.len(); index++)
    {
        if(select[index]->has_data())
            return true;
    }
    for (auto const & leaf : sort_by.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return foreach.is_set
	|| limit.is_set
	|| offset.is_set
	|| timeout.is_set;
}

bool ImmediateQuery::Input::has_operation() const
{
    for (std::size_t index=0; index<select.len(); index++)
    {
        if(select[index]->has_operation())
            return true;
    }
    for (auto const & leaf : sort_by.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(foreach.yfilter)
	|| ydk::is_set(sort_by.yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string ImmediateQuery::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:immediate-query/" << get_segment_path();
    return path_buffer.str();
}

std::string ImmediateQuery::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ImmediateQuery::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (foreach.is_set || is_set(foreach.yfilter)) leaf_name_data.push_back(foreach.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    auto sort_by_name_datas = sort_by.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sort_by_name_datas.begin(), sort_by_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ImmediateQuery::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "select")
    {
        auto ent_ = std::make_shared<ImmediateQuery::Input::Select>();
        ent_->parent = this;
        select.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ImmediateQuery::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : select.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ImmediateQuery::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "foreach")
    {
        foreach = value;
        foreach.value_namespace = name_space;
        foreach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sort-by")
    {
        sort_by.append(value);
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void ImmediateQuery::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "foreach")
    {
        foreach.yfilter = yfilter;
    }
    if(value_path == "sort-by")
    {
        sort_by.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool ImmediateQuery::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select" || name == "foreach" || name == "sort-by" || name == "limit" || name == "offset" || name == "timeout")
        return true;
    return false;
}

ImmediateQuery::Input::Select::Select()
    :
    label{YType::str, "label"},
    expression{YType::str, "expression"},
    result_type{YType::enumeration, "result-type"}
{

    yang_name = "select"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

ImmediateQuery::Input::Select::~Select()
{
}

bool ImmediateQuery::Input::Select::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : result_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return label.is_set
	|| expression.is_set;
}

bool ImmediateQuery::Input::Select::has_operation() const
{
    for (auto const & leaf : result_type.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(expression.yfilter)
	|| ydk::is_set(result_type.yfilter);
}

std::string ImmediateQuery::Input::Select::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:immediate-query/input/" << get_segment_path();
    return path_buffer.str();
}

std::string ImmediateQuery::Input::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ImmediateQuery::Input::Select::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (expression.is_set || is_set(expression.yfilter)) leaf_name_data.push_back(expression.get_name_leafdata());

    auto result_type_name_datas = result_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), result_type_name_datas.begin(), result_type_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ImmediateQuery::Input::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ImmediateQuery::Input::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ImmediateQuery::Input::Select::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expression")
    {
        expression = value;
        expression.value_namespace = name_space;
        expression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "result-type")
    {
        result_type.append(value);
    }
}

void ImmediateQuery::Input::Select::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "expression")
    {
        expression.yfilter = yfilter;
    }
    if(value_path == "result-type")
    {
        result_type.yfilter = yfilter;
    }
}

bool ImmediateQuery::Input::Select::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "expression" || name == "result-type")
        return true;
    return false;
}

ImmediateQuery::Output::Output()
    :
    query_result(std::make_shared<ImmediateQuery::Output::QueryResult>())
{
    query_result->parent = this;

    yang_name = "output"; yang_parent_name = "immediate-query"; is_top_level_class = false; has_list_ancestor = false; 
}

ImmediateQuery::Output::~Output()
{
}

bool ImmediateQuery::Output::has_data() const
{
    if (is_presence_container) return true;
    return (query_result !=  nullptr && query_result->has_data());
}

bool ImmediateQuery::Output::has_operation() const
{
    return is_set(yfilter)
	|| (query_result !=  nullptr && query_result->has_operation());
}

std::string ImmediateQuery::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:immediate-query/" << get_segment_path();
    return path_buffer.str();
}

std::string ImmediateQuery::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ImmediateQuery::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ImmediateQuery::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query-result")
    {
        if(query_result == nullptr)
        {
            query_result = std::make_shared<ImmediateQuery::Output::QueryResult>();
        }
        return query_result;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ImmediateQuery::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(query_result != nullptr)
    {
        _children["query-result"] = query_result;
    }

    return _children;
}

void ImmediateQuery::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ImmediateQuery::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ImmediateQuery::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-result")
        return true;
    return false;
}

ImmediateQuery::Output::QueryResult::QueryResult()
    :
    result(this, {})
{

    yang_name = "query-result"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = false; 
}

ImmediateQuery::Output::QueryResult::~QueryResult()
{
}

bool ImmediateQuery::Output::QueryResult::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<result.len(); index++)
    {
        if(result[index]->has_data())
            return true;
    }
    return false;
}

bool ImmediateQuery::Output::QueryResult::has_operation() const
{
    for (std::size_t index=0; index<result.len(); index++)
    {
        if(result[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ImmediateQuery::Output::QueryResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:immediate-query/output/" << get_segment_path();
    return path_buffer.str();
}

std::string ImmediateQuery::Output::QueryResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query-result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ImmediateQuery::Output::QueryResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ImmediateQuery::Output::QueryResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "result")
    {
        auto ent_ = std::make_shared<ImmediateQuery::Output::QueryResult::Result>();
        ent_->parent = this;
        result.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ImmediateQuery::Output::QueryResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ImmediateQuery::Output::QueryResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ImmediateQuery::Output::QueryResult::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ImmediateQuery::Output::QueryResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

ImmediateQuery::Output::QueryResult::Result::Result()
    :
    select(this, {})
{

    yang_name = "result"; yang_parent_name = "query-result"; is_top_level_class = false; has_list_ancestor = false; 
}

ImmediateQuery::Output::QueryResult::Result::~Result()
{
}

bool ImmediateQuery::Output::QueryResult::Result::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<select.len(); index++)
    {
        if(select[index]->has_data())
            return true;
    }
    return false;
}

bool ImmediateQuery::Output::QueryResult::Result::has_operation() const
{
    for (std::size_t index=0; index<select.len(); index++)
    {
        if(select[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ImmediateQuery::Output::QueryResult::Result::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:immediate-query/output/query-result/" << get_segment_path();
    return path_buffer.str();
}

std::string ImmediateQuery::Output::QueryResult::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ImmediateQuery::Output::QueryResult::Result::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ImmediateQuery::Output::QueryResult::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "select")
    {
        auto ent_ = std::make_shared<ImmediateQuery::Output::QueryResult::Result::Select>();
        ent_->parent = this;
        select.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ImmediateQuery::Output::QueryResult::Result::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : select.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ImmediateQuery::Output::QueryResult::Result::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ImmediateQuery::Output::QueryResult::Result::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ImmediateQuery::Output::QueryResult::Result::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select")
        return true;
    return false;
}

ImmediateQuery::Output::QueryResult::Result::Select::Select()
    :
    label{YType::str, "label"},
    path{YType::str, "path"},
    value_{YType::str, "value"},
    data{YType::str, "data"}
{

    yang_name = "select"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = false; 
}

ImmediateQuery::Output::QueryResult::Result::Select::~Select()
{
}

bool ImmediateQuery::Output::QueryResult::Result::Select::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| path.is_set
	|| value_.is_set
	|| data.is_set;
}

bool ImmediateQuery::Output::QueryResult::Result::Select::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string ImmediateQuery::Output::QueryResult::Result::Select::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:immediate-query/output/query-result/result/" << get_segment_path();
    return path_buffer.str();
}

std::string ImmediateQuery::Output::QueryResult::Result::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ImmediateQuery::Output::QueryResult::Result::Select::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ImmediateQuery::Output::QueryResult::Result::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ImmediateQuery::Output::QueryResult::Result::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ImmediateQuery::Output::QueryResult::Result::Select::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void ImmediateQuery::Output::QueryResult::Result::Select::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool ImmediateQuery::Output::QueryResult::Result::Select::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "path" || name == "value" || name == "data")
        return true;
    return false;
}

ResetQuery::ResetQuery()
    :
    input(std::make_shared<ResetQuery::Input>())
{
    input->parent = this;

    yang_name = "reset-query"; yang_parent_name = "tailf-netconf-query"; is_top_level_class = true; has_list_ancestor = false; 
}

ResetQuery::~ResetQuery()
{
}

bool ResetQuery::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ResetQuery::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ResetQuery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:reset-query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ResetQuery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ResetQuery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ResetQuery::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ResetQuery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ResetQuery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ResetQuery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ResetQuery::clone_ptr() const
{
    return std::make_shared<ResetQuery>();
}

std::string ResetQuery::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ResetQuery::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ResetQuery::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ResetQuery::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool ResetQuery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ResetQuery::Input::Input()
    :
    query_handle{YType::uint32, "query-handle"},
    offset{YType::uint32, "offset"},
    timeout{YType::uint32, "timeout"}
{

    yang_name = "input"; yang_parent_name = "reset-query"; is_top_level_class = false; has_list_ancestor = false; 
}

ResetQuery::Input::~Input()
{
}

bool ResetQuery::Input::has_data() const
{
    if (is_presence_container) return true;
    return query_handle.is_set
	|| offset.is_set
	|| timeout.is_set;
}

bool ResetQuery::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_handle.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string ResetQuery::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:reset-query/" << get_segment_path();
    return path_buffer.str();
}

std::string ResetQuery::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ResetQuery::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_handle.is_set || is_set(query_handle.yfilter)) leaf_name_data.push_back(query_handle.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ResetQuery::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ResetQuery::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ResetQuery::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-handle")
    {
        query_handle = value;
        query_handle.value_namespace = name_space;
        query_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void ResetQuery::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-handle")
    {
        query_handle.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool ResetQuery::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-handle" || name == "offset" || name == "timeout")
        return true;
    return false;
}

StopQuery::StopQuery()
    :
    input(std::make_shared<StopQuery::Input>())
{
    input->parent = this;

    yang_name = "stop-query"; yang_parent_name = "tailf-netconf-query"; is_top_level_class = true; has_list_ancestor = false; 
}

StopQuery::~StopQuery()
{
}

bool StopQuery::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool StopQuery::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string StopQuery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:stop-query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StopQuery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StopQuery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<StopQuery::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StopQuery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void StopQuery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void StopQuery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> StopQuery::clone_ptr() const
{
    return std::make_shared<StopQuery>();
}

std::string StopQuery::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string StopQuery::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function StopQuery::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> StopQuery::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool StopQuery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

StopQuery::Input::Input()
    :
    query_handle{YType::uint32, "query-handle"}
{

    yang_name = "input"; yang_parent_name = "stop-query"; is_top_level_class = false; has_list_ancestor = false; 
}

StopQuery::Input::~Input()
{
}

bool StopQuery::Input::has_data() const
{
    if (is_presence_container) return true;
    return query_handle.is_set;
}

bool StopQuery::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_handle.yfilter);
}

std::string StopQuery::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:stop-query/" << get_segment_path();
    return path_buffer.str();
}

std::string StopQuery::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StopQuery::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_handle.is_set || is_set(query_handle.yfilter)) leaf_name_data.push_back(query_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StopQuery::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StopQuery::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void StopQuery::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-handle")
    {
        query_handle = value;
        query_handle.value_namespace = name_space;
        query_handle.value_namespace_prefix = name_space_prefix;
    }
}

void StopQuery::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-handle")
    {
        query_handle.yfilter = yfilter;
    }
}

bool StopQuery::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-handle")
        return true;
    return false;
}

const Enum::YLeaf StartQuery::Input::Select::ResultType::string {0, "string"};
const Enum::YLeaf StartQuery::Input::Select::ResultType::path {1, "path"};
const Enum::YLeaf StartQuery::Input::Select::ResultType::leaf_value {2, "leaf-value"};
const Enum::YLeaf StartQuery::Input::Select::ResultType::inline_ {3, "inline"};

const Enum::YLeaf ImmediateQuery::Input::Select::ResultType::string {0, "string"};
const Enum::YLeaf ImmediateQuery::Input::Select::ResultType::path {1, "path"};
const Enum::YLeaf ImmediateQuery::Input::Select::ResultType::leaf_value {2, "leaf-value"};
const Enum::YLeaf ImmediateQuery::Input::Select::ResultType::inline_ {3, "inline"};


}
}

