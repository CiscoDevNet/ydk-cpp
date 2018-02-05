
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "EXPRESSION_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace EXPRESSION_MIB {

EXPRESSIONMIB::EXPRESSIONMIB()
    :
    expresource(std::make_shared<EXPRESSIONMIB::Expresource>())
	,expnames(std::make_shared<EXPRESSIONMIB::Expnames>())
	,expnametable(std::make_shared<EXPRESSIONMIB::Expnametable>())
	,expexpressiontable(std::make_shared<EXPRESSIONMIB::Expexpressiontable>())
	,expobjecttable(std::make_shared<EXPRESSIONMIB::Expobjecttable>())
	,expvaluetable(std::make_shared<EXPRESSIONMIB::Expvaluetable>())
{
    expresource->parent = this;
    expnames->parent = this;
    expnametable->parent = this;
    expexpressiontable->parent = this;
    expobjecttable->parent = this;
    expvaluetable->parent = this;

    yang_name = "EXPRESSION-MIB"; yang_parent_name = "EXPRESSION-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

EXPRESSIONMIB::~EXPRESSIONMIB()
{
}

bool EXPRESSIONMIB::has_data() const
{
    return (expresource !=  nullptr && expresource->has_data())
	|| (expnames !=  nullptr && expnames->has_data())
	|| (expnametable !=  nullptr && expnametable->has_data())
	|| (expexpressiontable !=  nullptr && expexpressiontable->has_data())
	|| (expobjecttable !=  nullptr && expobjecttable->has_data())
	|| (expvaluetable !=  nullptr && expvaluetable->has_data());
}

bool EXPRESSIONMIB::has_operation() const
{
    return is_set(yfilter)
	|| (expresource !=  nullptr && expresource->has_operation())
	|| (expnames !=  nullptr && expnames->has_operation())
	|| (expnametable !=  nullptr && expnametable->has_operation())
	|| (expexpressiontable !=  nullptr && expexpressiontable->has_operation())
	|| (expobjecttable !=  nullptr && expobjecttable->has_operation())
	|| (expvaluetable !=  nullptr && expvaluetable->has_operation());
}

std::string EXPRESSIONMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EXPRESSIONMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EXPRESSIONMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expResource")
    {
        if(expresource == nullptr)
        {
            expresource = std::make_shared<EXPRESSIONMIB::Expresource>();
        }
        return expresource;
    }

    if(child_yang_name == "expNames")
    {
        if(expnames == nullptr)
        {
            expnames = std::make_shared<EXPRESSIONMIB::Expnames>();
        }
        return expnames;
    }

    if(child_yang_name == "expNameTable")
    {
        if(expnametable == nullptr)
        {
            expnametable = std::make_shared<EXPRESSIONMIB::Expnametable>();
        }
        return expnametable;
    }

    if(child_yang_name == "expExpressionTable")
    {
        if(expexpressiontable == nullptr)
        {
            expexpressiontable = std::make_shared<EXPRESSIONMIB::Expexpressiontable>();
        }
        return expexpressiontable;
    }

    if(child_yang_name == "expObjectTable")
    {
        if(expobjecttable == nullptr)
        {
            expobjecttable = std::make_shared<EXPRESSIONMIB::Expobjecttable>();
        }
        return expobjecttable;
    }

    if(child_yang_name == "expValueTable")
    {
        if(expvaluetable == nullptr)
        {
            expvaluetable = std::make_shared<EXPRESSIONMIB::Expvaluetable>();
        }
        return expvaluetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EXPRESSIONMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(expresource != nullptr)
    {
        children["expResource"] = expresource;
    }

    if(expnames != nullptr)
    {
        children["expNames"] = expnames;
    }

    if(expnametable != nullptr)
    {
        children["expNameTable"] = expnametable;
    }

    if(expexpressiontable != nullptr)
    {
        children["expExpressionTable"] = expexpressiontable;
    }

    if(expobjecttable != nullptr)
    {
        children["expObjectTable"] = expobjecttable;
    }

    if(expvaluetable != nullptr)
    {
        children["expValueTable"] = expvaluetable;
    }

    return children;
}

void EXPRESSIONMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EXPRESSIONMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EXPRESSIONMIB::clone_ptr() const
{
    return std::make_shared<EXPRESSIONMIB>();
}

std::string EXPRESSIONMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string EXPRESSIONMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function EXPRESSIONMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EXPRESSIONMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool EXPRESSIONMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expResource" || name == "expNames" || name == "expNameTable" || name == "expExpressionTable" || name == "expObjectTable" || name == "expValueTable")
        return true;
    return false;
}

EXPRESSIONMIB::Expresource::Expresource()
    :
    expresourcedeltaminimum{YType::int32, "expResourceDeltaMinimum"},
    expresourcedeltawildcardinstancemaximum{YType::uint32, "expResourceDeltaWildcardInstanceMaximum"},
    expresourcedeltawildcardinstances{YType::uint32, "expResourceDeltaWildcardInstances"},
    expresourcedeltawildcardinstanceshigh{YType::uint32, "expResourceDeltaWildcardInstancesHigh"},
    expresourcedeltawildcardinstanceresourcelacks{YType::uint32, "expResourceDeltaWildcardInstanceResourceLacks"}
{

    yang_name = "expResource"; yang_parent_name = "EXPRESSION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

EXPRESSIONMIB::Expresource::~Expresource()
{
}

bool EXPRESSIONMIB::Expresource::has_data() const
{
    return expresourcedeltaminimum.is_set
	|| expresourcedeltawildcardinstancemaximum.is_set
	|| expresourcedeltawildcardinstances.is_set
	|| expresourcedeltawildcardinstanceshigh.is_set
	|| expresourcedeltawildcardinstanceresourcelacks.is_set;
}

bool EXPRESSIONMIB::Expresource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expresourcedeltaminimum.yfilter)
	|| ydk::is_set(expresourcedeltawildcardinstancemaximum.yfilter)
	|| ydk::is_set(expresourcedeltawildcardinstances.yfilter)
	|| ydk::is_set(expresourcedeltawildcardinstanceshigh.yfilter)
	|| ydk::is_set(expresourcedeltawildcardinstanceresourcelacks.yfilter);
}

std::string EXPRESSIONMIB::Expresource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string EXPRESSIONMIB::Expresource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expResource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EXPRESSIONMIB::Expresource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expresourcedeltaminimum.is_set || is_set(expresourcedeltaminimum.yfilter)) leaf_name_data.push_back(expresourcedeltaminimum.get_name_leafdata());
    if (expresourcedeltawildcardinstancemaximum.is_set || is_set(expresourcedeltawildcardinstancemaximum.yfilter)) leaf_name_data.push_back(expresourcedeltawildcardinstancemaximum.get_name_leafdata());
    if (expresourcedeltawildcardinstances.is_set || is_set(expresourcedeltawildcardinstances.yfilter)) leaf_name_data.push_back(expresourcedeltawildcardinstances.get_name_leafdata());
    if (expresourcedeltawildcardinstanceshigh.is_set || is_set(expresourcedeltawildcardinstanceshigh.yfilter)) leaf_name_data.push_back(expresourcedeltawildcardinstanceshigh.get_name_leafdata());
    if (expresourcedeltawildcardinstanceresourcelacks.is_set || is_set(expresourcedeltawildcardinstanceresourcelacks.yfilter)) leaf_name_data.push_back(expresourcedeltawildcardinstanceresourcelacks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EXPRESSIONMIB::Expresource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EXPRESSIONMIB::Expresource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EXPRESSIONMIB::Expresource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expResourceDeltaMinimum")
    {
        expresourcedeltaminimum = value;
        expresourcedeltaminimum.value_namespace = name_space;
        expresourcedeltaminimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expResourceDeltaWildcardInstanceMaximum")
    {
        expresourcedeltawildcardinstancemaximum = value;
        expresourcedeltawildcardinstancemaximum.value_namespace = name_space;
        expresourcedeltawildcardinstancemaximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expResourceDeltaWildcardInstances")
    {
        expresourcedeltawildcardinstances = value;
        expresourcedeltawildcardinstances.value_namespace = name_space;
        expresourcedeltawildcardinstances.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expResourceDeltaWildcardInstancesHigh")
    {
        expresourcedeltawildcardinstanceshigh = value;
        expresourcedeltawildcardinstanceshigh.value_namespace = name_space;
        expresourcedeltawildcardinstanceshigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expResourceDeltaWildcardInstanceResourceLacks")
    {
        expresourcedeltawildcardinstanceresourcelacks = value;
        expresourcedeltawildcardinstanceresourcelacks.value_namespace = name_space;
        expresourcedeltawildcardinstanceresourcelacks.value_namespace_prefix = name_space_prefix;
    }
}

void EXPRESSIONMIB::Expresource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expResourceDeltaMinimum")
    {
        expresourcedeltaminimum.yfilter = yfilter;
    }
    if(value_path == "expResourceDeltaWildcardInstanceMaximum")
    {
        expresourcedeltawildcardinstancemaximum.yfilter = yfilter;
    }
    if(value_path == "expResourceDeltaWildcardInstances")
    {
        expresourcedeltawildcardinstances.yfilter = yfilter;
    }
    if(value_path == "expResourceDeltaWildcardInstancesHigh")
    {
        expresourcedeltawildcardinstanceshigh.yfilter = yfilter;
    }
    if(value_path == "expResourceDeltaWildcardInstanceResourceLacks")
    {
        expresourcedeltawildcardinstanceresourcelacks.yfilter = yfilter;
    }
}

bool EXPRESSIONMIB::Expresource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expResourceDeltaMinimum" || name == "expResourceDeltaWildcardInstanceMaximum" || name == "expResourceDeltaWildcardInstances" || name == "expResourceDeltaWildcardInstancesHigh" || name == "expResourceDeltaWildcardInstanceResourceLacks")
        return true;
    return false;
}

EXPRESSIONMIB::Expnames::Expnames()
    :
    expnamelastchange{YType::uint32, "expNameLastChange"},
    expnamehighestindex{YType::uint32, "expNameHighestIndex"}
{

    yang_name = "expNames"; yang_parent_name = "EXPRESSION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

EXPRESSIONMIB::Expnames::~Expnames()
{
}

bool EXPRESSIONMIB::Expnames::has_data() const
{
    return expnamelastchange.is_set
	|| expnamehighestindex.is_set;
}

bool EXPRESSIONMIB::Expnames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expnamelastchange.yfilter)
	|| ydk::is_set(expnamehighestindex.yfilter);
}

std::string EXPRESSIONMIB::Expnames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string EXPRESSIONMIB::Expnames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expNames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EXPRESSIONMIB::Expnames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expnamelastchange.is_set || is_set(expnamelastchange.yfilter)) leaf_name_data.push_back(expnamelastchange.get_name_leafdata());
    if (expnamehighestindex.is_set || is_set(expnamehighestindex.yfilter)) leaf_name_data.push_back(expnamehighestindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EXPRESSIONMIB::Expnames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EXPRESSIONMIB::Expnames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EXPRESSIONMIB::Expnames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expNameLastChange")
    {
        expnamelastchange = value;
        expnamelastchange.value_namespace = name_space;
        expnamelastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expNameHighestIndex")
    {
        expnamehighestindex = value;
        expnamehighestindex.value_namespace = name_space;
        expnamehighestindex.value_namespace_prefix = name_space_prefix;
    }
}

void EXPRESSIONMIB::Expnames::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expNameLastChange")
    {
        expnamelastchange.yfilter = yfilter;
    }
    if(value_path == "expNameHighestIndex")
    {
        expnamehighestindex.yfilter = yfilter;
    }
}

bool EXPRESSIONMIB::Expnames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expNameLastChange" || name == "expNameHighestIndex")
        return true;
    return false;
}

EXPRESSIONMIB::Expnametable::Expnametable()
{

    yang_name = "expNameTable"; yang_parent_name = "EXPRESSION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

EXPRESSIONMIB::Expnametable::~Expnametable()
{
}

bool EXPRESSIONMIB::Expnametable::has_data() const
{
    for (std::size_t index=0; index<expnameentry.size(); index++)
    {
        if(expnameentry[index]->has_data())
            return true;
    }
    return false;
}

bool EXPRESSIONMIB::Expnametable::has_operation() const
{
    for (std::size_t index=0; index<expnameentry.size(); index++)
    {
        if(expnameentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EXPRESSIONMIB::Expnametable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string EXPRESSIONMIB::Expnametable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expNameTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EXPRESSIONMIB::Expnametable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EXPRESSIONMIB::Expnametable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expNameEntry")
    {
        auto c = std::make_shared<EXPRESSIONMIB::Expnametable::Expnameentry>();
        c->parent = this;
        expnameentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EXPRESSIONMIB::Expnametable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : expnameentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void EXPRESSIONMIB::Expnametable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EXPRESSIONMIB::Expnametable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EXPRESSIONMIB::Expnametable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expNameEntry")
        return true;
    return false;
}

EXPRESSIONMIB::Expnametable::Expnameentry::Expnameentry()
    :
    expname{YType::str, "expName"},
    expexpressionindex{YType::uint32, "expExpressionIndex"},
    expnamestatus{YType::enumeration, "expNameStatus"}
{

    yang_name = "expNameEntry"; yang_parent_name = "expNameTable"; is_top_level_class = false; has_list_ancestor = false;
}

EXPRESSIONMIB::Expnametable::Expnameentry::~Expnameentry()
{
}

bool EXPRESSIONMIB::Expnametable::Expnameentry::has_data() const
{
    return expname.is_set
	|| expexpressionindex.is_set
	|| expnamestatus.is_set;
}

bool EXPRESSIONMIB::Expnametable::Expnameentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expname.yfilter)
	|| ydk::is_set(expexpressionindex.yfilter)
	|| ydk::is_set(expnamestatus.yfilter);
}

std::string EXPRESSIONMIB::Expnametable::Expnameentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/expNameTable/" << get_segment_path();
    return path_buffer.str();
}

std::string EXPRESSIONMIB::Expnametable::Expnameentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expNameEntry" <<"[expName='" <<expname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EXPRESSIONMIB::Expnametable::Expnameentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expname.is_set || is_set(expname.yfilter)) leaf_name_data.push_back(expname.get_name_leafdata());
    if (expexpressionindex.is_set || is_set(expexpressionindex.yfilter)) leaf_name_data.push_back(expexpressionindex.get_name_leafdata());
    if (expnamestatus.is_set || is_set(expnamestatus.yfilter)) leaf_name_data.push_back(expnamestatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EXPRESSIONMIB::Expnametable::Expnameentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EXPRESSIONMIB::Expnametable::Expnameentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EXPRESSIONMIB::Expnametable::Expnameentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expName")
    {
        expname = value;
        expname.value_namespace = name_space;
        expname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionIndex")
    {
        expexpressionindex = value;
        expexpressionindex.value_namespace = name_space;
        expexpressionindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expNameStatus")
    {
        expnamestatus = value;
        expnamestatus.value_namespace = name_space;
        expnamestatus.value_namespace_prefix = name_space_prefix;
    }
}

void EXPRESSIONMIB::Expnametable::Expnameentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expName")
    {
        expname.yfilter = yfilter;
    }
    if(value_path == "expExpressionIndex")
    {
        expexpressionindex.yfilter = yfilter;
    }
    if(value_path == "expNameStatus")
    {
        expnamestatus.yfilter = yfilter;
    }
}

bool EXPRESSIONMIB::Expnametable::Expnameentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expName" || name == "expExpressionIndex" || name == "expNameStatus")
        return true;
    return false;
}

EXPRESSIONMIB::Expexpressiontable::Expexpressiontable()
{

    yang_name = "expExpressionTable"; yang_parent_name = "EXPRESSION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

EXPRESSIONMIB::Expexpressiontable::~Expexpressiontable()
{
}

bool EXPRESSIONMIB::Expexpressiontable::has_data() const
{
    for (std::size_t index=0; index<expexpressionentry.size(); index++)
    {
        if(expexpressionentry[index]->has_data())
            return true;
    }
    return false;
}

bool EXPRESSIONMIB::Expexpressiontable::has_operation() const
{
    for (std::size_t index=0; index<expexpressionentry.size(); index++)
    {
        if(expexpressionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EXPRESSIONMIB::Expexpressiontable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string EXPRESSIONMIB::Expexpressiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expExpressionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EXPRESSIONMIB::Expexpressiontable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EXPRESSIONMIB::Expexpressiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expExpressionEntry")
    {
        auto c = std::make_shared<EXPRESSIONMIB::Expexpressiontable::Expexpressionentry>();
        c->parent = this;
        expexpressionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EXPRESSIONMIB::Expexpressiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : expexpressionentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void EXPRESSIONMIB::Expexpressiontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EXPRESSIONMIB::Expexpressiontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EXPRESSIONMIB::Expexpressiontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionEntry")
        return true;
    return false;
}

EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionentry()
    :
    expexpressionindex{YType::str, "expExpressionIndex"},
    expexpressionname{YType::str, "expExpressionName"},
    expexpression{YType::str, "expExpression"},
    expexpressionvaluetype{YType::enumeration, "expExpressionValueType"},
    expexpressioncomment{YType::str, "expExpressionComment"},
    expexpressiondeltainterval{YType::int32, "expExpressionDeltaInterval"},
    expexpressionprefix{YType::str, "expExpressionPrefix"},
    expexpressionerrors{YType::uint32, "expExpressionErrors"},
    expexpressionerrortime{YType::uint32, "expExpressionErrorTime"},
    expexpressionerrorindex{YType::int32, "expExpressionErrorIndex"},
    expexpressionerror{YType::enumeration, "expExpressionError"},
    expexpressioninstance{YType::str, "expExpressionInstance"},
    expexpressionowner{YType::str, "expExpressionOwner"}
{

    yang_name = "expExpressionEntry"; yang_parent_name = "expExpressionTable"; is_top_level_class = false; has_list_ancestor = false;
}

EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::~Expexpressionentry()
{
}

bool EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::has_data() const
{
    return expexpressionindex.is_set
	|| expexpressionname.is_set
	|| expexpression.is_set
	|| expexpressionvaluetype.is_set
	|| expexpressioncomment.is_set
	|| expexpressiondeltainterval.is_set
	|| expexpressionprefix.is_set
	|| expexpressionerrors.is_set
	|| expexpressionerrortime.is_set
	|| expexpressionerrorindex.is_set
	|| expexpressionerror.is_set
	|| expexpressioninstance.is_set
	|| expexpressionowner.is_set;
}

bool EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expexpressionindex.yfilter)
	|| ydk::is_set(expexpressionname.yfilter)
	|| ydk::is_set(expexpression.yfilter)
	|| ydk::is_set(expexpressionvaluetype.yfilter)
	|| ydk::is_set(expexpressioncomment.yfilter)
	|| ydk::is_set(expexpressiondeltainterval.yfilter)
	|| ydk::is_set(expexpressionprefix.yfilter)
	|| ydk::is_set(expexpressionerrors.yfilter)
	|| ydk::is_set(expexpressionerrortime.yfilter)
	|| ydk::is_set(expexpressionerrorindex.yfilter)
	|| ydk::is_set(expexpressionerror.yfilter)
	|| ydk::is_set(expexpressioninstance.yfilter)
	|| ydk::is_set(expexpressionowner.yfilter);
}

std::string EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/expExpressionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expExpressionEntry" <<"[expExpressionIndex='" <<expexpressionindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expexpressionindex.is_set || is_set(expexpressionindex.yfilter)) leaf_name_data.push_back(expexpressionindex.get_name_leafdata());
    if (expexpressionname.is_set || is_set(expexpressionname.yfilter)) leaf_name_data.push_back(expexpressionname.get_name_leafdata());
    if (expexpression.is_set || is_set(expexpression.yfilter)) leaf_name_data.push_back(expexpression.get_name_leafdata());
    if (expexpressionvaluetype.is_set || is_set(expexpressionvaluetype.yfilter)) leaf_name_data.push_back(expexpressionvaluetype.get_name_leafdata());
    if (expexpressioncomment.is_set || is_set(expexpressioncomment.yfilter)) leaf_name_data.push_back(expexpressioncomment.get_name_leafdata());
    if (expexpressiondeltainterval.is_set || is_set(expexpressiondeltainterval.yfilter)) leaf_name_data.push_back(expexpressiondeltainterval.get_name_leafdata());
    if (expexpressionprefix.is_set || is_set(expexpressionprefix.yfilter)) leaf_name_data.push_back(expexpressionprefix.get_name_leafdata());
    if (expexpressionerrors.is_set || is_set(expexpressionerrors.yfilter)) leaf_name_data.push_back(expexpressionerrors.get_name_leafdata());
    if (expexpressionerrortime.is_set || is_set(expexpressionerrortime.yfilter)) leaf_name_data.push_back(expexpressionerrortime.get_name_leafdata());
    if (expexpressionerrorindex.is_set || is_set(expexpressionerrorindex.yfilter)) leaf_name_data.push_back(expexpressionerrorindex.get_name_leafdata());
    if (expexpressionerror.is_set || is_set(expexpressionerror.yfilter)) leaf_name_data.push_back(expexpressionerror.get_name_leafdata());
    if (expexpressioninstance.is_set || is_set(expexpressioninstance.yfilter)) leaf_name_data.push_back(expexpressioninstance.get_name_leafdata());
    if (expexpressionowner.is_set || is_set(expexpressionowner.yfilter)) leaf_name_data.push_back(expexpressionowner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expExpressionIndex")
    {
        expexpressionindex = value;
        expexpressionindex.value_namespace = name_space;
        expexpressionindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionName")
    {
        expexpressionname = value;
        expexpressionname.value_namespace = name_space;
        expexpressionname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpression")
    {
        expexpression = value;
        expexpression.value_namespace = name_space;
        expexpression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionValueType")
    {
        expexpressionvaluetype = value;
        expexpressionvaluetype.value_namespace = name_space;
        expexpressionvaluetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionComment")
    {
        expexpressioncomment = value;
        expexpressioncomment.value_namespace = name_space;
        expexpressioncomment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionDeltaInterval")
    {
        expexpressiondeltainterval = value;
        expexpressiondeltainterval.value_namespace = name_space;
        expexpressiondeltainterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionPrefix")
    {
        expexpressionprefix = value;
        expexpressionprefix.value_namespace = name_space;
        expexpressionprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionErrors")
    {
        expexpressionerrors = value;
        expexpressionerrors.value_namespace = name_space;
        expexpressionerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionErrorTime")
    {
        expexpressionerrortime = value;
        expexpressionerrortime.value_namespace = name_space;
        expexpressionerrortime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionErrorIndex")
    {
        expexpressionerrorindex = value;
        expexpressionerrorindex.value_namespace = name_space;
        expexpressionerrorindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionError")
    {
        expexpressionerror = value;
        expexpressionerror.value_namespace = name_space;
        expexpressionerror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionInstance")
    {
        expexpressioninstance = value;
        expexpressioninstance.value_namespace = name_space;
        expexpressioninstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionOwner")
    {
        expexpressionowner = value;
        expexpressionowner.value_namespace = name_space;
        expexpressionowner.value_namespace_prefix = name_space_prefix;
    }
}

void EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expExpressionIndex")
    {
        expexpressionindex.yfilter = yfilter;
    }
    if(value_path == "expExpressionName")
    {
        expexpressionname.yfilter = yfilter;
    }
    if(value_path == "expExpression")
    {
        expexpression.yfilter = yfilter;
    }
    if(value_path == "expExpressionValueType")
    {
        expexpressionvaluetype.yfilter = yfilter;
    }
    if(value_path == "expExpressionComment")
    {
        expexpressioncomment.yfilter = yfilter;
    }
    if(value_path == "expExpressionDeltaInterval")
    {
        expexpressiondeltainterval.yfilter = yfilter;
    }
    if(value_path == "expExpressionPrefix")
    {
        expexpressionprefix.yfilter = yfilter;
    }
    if(value_path == "expExpressionErrors")
    {
        expexpressionerrors.yfilter = yfilter;
    }
    if(value_path == "expExpressionErrorTime")
    {
        expexpressionerrortime.yfilter = yfilter;
    }
    if(value_path == "expExpressionErrorIndex")
    {
        expexpressionerrorindex.yfilter = yfilter;
    }
    if(value_path == "expExpressionError")
    {
        expexpressionerror.yfilter = yfilter;
    }
    if(value_path == "expExpressionInstance")
    {
        expexpressioninstance.yfilter = yfilter;
    }
    if(value_path == "expExpressionOwner")
    {
        expexpressionowner.yfilter = yfilter;
    }
}

bool EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionIndex" || name == "expExpressionName" || name == "expExpression" || name == "expExpressionValueType" || name == "expExpressionComment" || name == "expExpressionDeltaInterval" || name == "expExpressionPrefix" || name == "expExpressionErrors" || name == "expExpressionErrorTime" || name == "expExpressionErrorIndex" || name == "expExpressionError" || name == "expExpressionInstance" || name == "expExpressionOwner")
        return true;
    return false;
}

EXPRESSIONMIB::Expobjecttable::Expobjecttable()
{

    yang_name = "expObjectTable"; yang_parent_name = "EXPRESSION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

EXPRESSIONMIB::Expobjecttable::~Expobjecttable()
{
}

bool EXPRESSIONMIB::Expobjecttable::has_data() const
{
    for (std::size_t index=0; index<expobjectentry.size(); index++)
    {
        if(expobjectentry[index]->has_data())
            return true;
    }
    return false;
}

bool EXPRESSIONMIB::Expobjecttable::has_operation() const
{
    for (std::size_t index=0; index<expobjectentry.size(); index++)
    {
        if(expobjectentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EXPRESSIONMIB::Expobjecttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string EXPRESSIONMIB::Expobjecttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expObjectTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EXPRESSIONMIB::Expobjecttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EXPRESSIONMIB::Expobjecttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expObjectEntry")
    {
        auto c = std::make_shared<EXPRESSIONMIB::Expobjecttable::Expobjectentry>();
        c->parent = this;
        expobjectentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EXPRESSIONMIB::Expobjecttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : expobjectentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void EXPRESSIONMIB::Expobjecttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EXPRESSIONMIB::Expobjecttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EXPRESSIONMIB::Expobjecttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expObjectEntry")
        return true;
    return false;
}

EXPRESSIONMIB::Expobjecttable::Expobjectentry::Expobjectentry()
    :
    expexpressionindex{YType::str, "expExpressionIndex"},
    expobjectindex{YType::uint32, "expObjectIndex"},
    expobjectid{YType::str, "expObjectID"},
    expobjectidwildcard{YType::boolean, "expObjectIDWildcard"},
    expobjectsampletype{YType::enumeration, "expObjectSampleType"},
    expobjectdeltadiscontinuityid{YType::str, "expObjectDeltaDiscontinuityID"},
    expobjectdiscontinuityidwildcard{YType::boolean, "expObjectDiscontinuityIDWildcard"},
    expobjectdiscontinuityidtype{YType::enumeration, "expObjectDiscontinuityIDType"},
    expobjectconditional{YType::str, "expObjectConditional"},
    expobjectconditionalwildcard{YType::boolean, "expObjectConditionalWildcard"},
    expobjectstatus{YType::enumeration, "expObjectStatus"}
{

    yang_name = "expObjectEntry"; yang_parent_name = "expObjectTable"; is_top_level_class = false; has_list_ancestor = false;
}

EXPRESSIONMIB::Expobjecttable::Expobjectentry::~Expobjectentry()
{
}

bool EXPRESSIONMIB::Expobjecttable::Expobjectentry::has_data() const
{
    return expexpressionindex.is_set
	|| expobjectindex.is_set
	|| expobjectid.is_set
	|| expobjectidwildcard.is_set
	|| expobjectsampletype.is_set
	|| expobjectdeltadiscontinuityid.is_set
	|| expobjectdiscontinuityidwildcard.is_set
	|| expobjectdiscontinuityidtype.is_set
	|| expobjectconditional.is_set
	|| expobjectconditionalwildcard.is_set
	|| expobjectstatus.is_set;
}

bool EXPRESSIONMIB::Expobjecttable::Expobjectentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expexpressionindex.yfilter)
	|| ydk::is_set(expobjectindex.yfilter)
	|| ydk::is_set(expobjectid.yfilter)
	|| ydk::is_set(expobjectidwildcard.yfilter)
	|| ydk::is_set(expobjectsampletype.yfilter)
	|| ydk::is_set(expobjectdeltadiscontinuityid.yfilter)
	|| ydk::is_set(expobjectdiscontinuityidwildcard.yfilter)
	|| ydk::is_set(expobjectdiscontinuityidtype.yfilter)
	|| ydk::is_set(expobjectconditional.yfilter)
	|| ydk::is_set(expobjectconditionalwildcard.yfilter)
	|| ydk::is_set(expobjectstatus.yfilter);
}

std::string EXPRESSIONMIB::Expobjecttable::Expobjectentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/expObjectTable/" << get_segment_path();
    return path_buffer.str();
}

std::string EXPRESSIONMIB::Expobjecttable::Expobjectentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expObjectEntry" <<"[expExpressionIndex='" <<expexpressionindex <<"']" <<"[expObjectIndex='" <<expobjectindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EXPRESSIONMIB::Expobjecttable::Expobjectentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expexpressionindex.is_set || is_set(expexpressionindex.yfilter)) leaf_name_data.push_back(expexpressionindex.get_name_leafdata());
    if (expobjectindex.is_set || is_set(expobjectindex.yfilter)) leaf_name_data.push_back(expobjectindex.get_name_leafdata());
    if (expobjectid.is_set || is_set(expobjectid.yfilter)) leaf_name_data.push_back(expobjectid.get_name_leafdata());
    if (expobjectidwildcard.is_set || is_set(expobjectidwildcard.yfilter)) leaf_name_data.push_back(expobjectidwildcard.get_name_leafdata());
    if (expobjectsampletype.is_set || is_set(expobjectsampletype.yfilter)) leaf_name_data.push_back(expobjectsampletype.get_name_leafdata());
    if (expobjectdeltadiscontinuityid.is_set || is_set(expobjectdeltadiscontinuityid.yfilter)) leaf_name_data.push_back(expobjectdeltadiscontinuityid.get_name_leafdata());
    if (expobjectdiscontinuityidwildcard.is_set || is_set(expobjectdiscontinuityidwildcard.yfilter)) leaf_name_data.push_back(expobjectdiscontinuityidwildcard.get_name_leafdata());
    if (expobjectdiscontinuityidtype.is_set || is_set(expobjectdiscontinuityidtype.yfilter)) leaf_name_data.push_back(expobjectdiscontinuityidtype.get_name_leafdata());
    if (expobjectconditional.is_set || is_set(expobjectconditional.yfilter)) leaf_name_data.push_back(expobjectconditional.get_name_leafdata());
    if (expobjectconditionalwildcard.is_set || is_set(expobjectconditionalwildcard.yfilter)) leaf_name_data.push_back(expobjectconditionalwildcard.get_name_leafdata());
    if (expobjectstatus.is_set || is_set(expobjectstatus.yfilter)) leaf_name_data.push_back(expobjectstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EXPRESSIONMIB::Expobjecttable::Expobjectentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EXPRESSIONMIB::Expobjecttable::Expobjectentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EXPRESSIONMIB::Expobjecttable::Expobjectentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expExpressionIndex")
    {
        expexpressionindex = value;
        expexpressionindex.value_namespace = name_space;
        expexpressionindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expObjectIndex")
    {
        expobjectindex = value;
        expobjectindex.value_namespace = name_space;
        expobjectindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expObjectID")
    {
        expobjectid = value;
        expobjectid.value_namespace = name_space;
        expobjectid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expObjectIDWildcard")
    {
        expobjectidwildcard = value;
        expobjectidwildcard.value_namespace = name_space;
        expobjectidwildcard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expObjectSampleType")
    {
        expobjectsampletype = value;
        expobjectsampletype.value_namespace = name_space;
        expobjectsampletype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expObjectDeltaDiscontinuityID")
    {
        expobjectdeltadiscontinuityid = value;
        expobjectdeltadiscontinuityid.value_namespace = name_space;
        expobjectdeltadiscontinuityid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expObjectDiscontinuityIDWildcard")
    {
        expobjectdiscontinuityidwildcard = value;
        expobjectdiscontinuityidwildcard.value_namespace = name_space;
        expobjectdiscontinuityidwildcard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expObjectDiscontinuityIDType")
    {
        expobjectdiscontinuityidtype = value;
        expobjectdiscontinuityidtype.value_namespace = name_space;
        expobjectdiscontinuityidtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expObjectConditional")
    {
        expobjectconditional = value;
        expobjectconditional.value_namespace = name_space;
        expobjectconditional.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expObjectConditionalWildcard")
    {
        expobjectconditionalwildcard = value;
        expobjectconditionalwildcard.value_namespace = name_space;
        expobjectconditionalwildcard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expObjectStatus")
    {
        expobjectstatus = value;
        expobjectstatus.value_namespace = name_space;
        expobjectstatus.value_namespace_prefix = name_space_prefix;
    }
}

void EXPRESSIONMIB::Expobjecttable::Expobjectentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expExpressionIndex")
    {
        expexpressionindex.yfilter = yfilter;
    }
    if(value_path == "expObjectIndex")
    {
        expobjectindex.yfilter = yfilter;
    }
    if(value_path == "expObjectID")
    {
        expobjectid.yfilter = yfilter;
    }
    if(value_path == "expObjectIDWildcard")
    {
        expobjectidwildcard.yfilter = yfilter;
    }
    if(value_path == "expObjectSampleType")
    {
        expobjectsampletype.yfilter = yfilter;
    }
    if(value_path == "expObjectDeltaDiscontinuityID")
    {
        expobjectdeltadiscontinuityid.yfilter = yfilter;
    }
    if(value_path == "expObjectDiscontinuityIDWildcard")
    {
        expobjectdiscontinuityidwildcard.yfilter = yfilter;
    }
    if(value_path == "expObjectDiscontinuityIDType")
    {
        expobjectdiscontinuityidtype.yfilter = yfilter;
    }
    if(value_path == "expObjectConditional")
    {
        expobjectconditional.yfilter = yfilter;
    }
    if(value_path == "expObjectConditionalWildcard")
    {
        expobjectconditionalwildcard.yfilter = yfilter;
    }
    if(value_path == "expObjectStatus")
    {
        expobjectstatus.yfilter = yfilter;
    }
}

bool EXPRESSIONMIB::Expobjecttable::Expobjectentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionIndex" || name == "expObjectIndex" || name == "expObjectID" || name == "expObjectIDWildcard" || name == "expObjectSampleType" || name == "expObjectDeltaDiscontinuityID" || name == "expObjectDiscontinuityIDWildcard" || name == "expObjectDiscontinuityIDType" || name == "expObjectConditional" || name == "expObjectConditionalWildcard" || name == "expObjectStatus")
        return true;
    return false;
}

EXPRESSIONMIB::Expvaluetable::Expvaluetable()
{

    yang_name = "expValueTable"; yang_parent_name = "EXPRESSION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

EXPRESSIONMIB::Expvaluetable::~Expvaluetable()
{
}

bool EXPRESSIONMIB::Expvaluetable::has_data() const
{
    for (std::size_t index=0; index<expvalueentry.size(); index++)
    {
        if(expvalueentry[index]->has_data())
            return true;
    }
    return false;
}

bool EXPRESSIONMIB::Expvaluetable::has_operation() const
{
    for (std::size_t index=0; index<expvalueentry.size(); index++)
    {
        if(expvalueentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EXPRESSIONMIB::Expvaluetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string EXPRESSIONMIB::Expvaluetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expValueTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EXPRESSIONMIB::Expvaluetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EXPRESSIONMIB::Expvaluetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expValueEntry")
    {
        auto c = std::make_shared<EXPRESSIONMIB::Expvaluetable::Expvalueentry>();
        c->parent = this;
        expvalueentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EXPRESSIONMIB::Expvaluetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : expvalueentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void EXPRESSIONMIB::Expvaluetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EXPRESSIONMIB::Expvaluetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EXPRESSIONMIB::Expvaluetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expValueEntry")
        return true;
    return false;
}

EXPRESSIONMIB::Expvaluetable::Expvalueentry::Expvalueentry()
    :
    expexpressionindex{YType::str, "expExpressionIndex"},
    expvalueinstance{YType::str, "expValueInstance"},
    expvaluecounter32val{YType::uint32, "expValueCounter32Val"},
    expvalueunsigned32val{YType::uint32, "expValueUnsigned32Val"},
    expvalueinteger32val{YType::int32, "expValueInteger32Val"},
    expvalueipaddressval{YType::str, "expValueIpAddressVal"},
    expvalueoctetstringval{YType::str, "expValueOctetStringVal"},
    expvalueoidval{YType::str, "expValueOidVal"},
    expvaluecounter64val{YType::uint64, "expValueCounter64Val"}
{

    yang_name = "expValueEntry"; yang_parent_name = "expValueTable"; is_top_level_class = false; has_list_ancestor = false;
}

EXPRESSIONMIB::Expvaluetable::Expvalueentry::~Expvalueentry()
{
}

bool EXPRESSIONMIB::Expvaluetable::Expvalueentry::has_data() const
{
    return expexpressionindex.is_set
	|| expvalueinstance.is_set
	|| expvaluecounter32val.is_set
	|| expvalueunsigned32val.is_set
	|| expvalueinteger32val.is_set
	|| expvalueipaddressval.is_set
	|| expvalueoctetstringval.is_set
	|| expvalueoidval.is_set
	|| expvaluecounter64val.is_set;
}

bool EXPRESSIONMIB::Expvaluetable::Expvalueentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expexpressionindex.yfilter)
	|| ydk::is_set(expvalueinstance.yfilter)
	|| ydk::is_set(expvaluecounter32val.yfilter)
	|| ydk::is_set(expvalueunsigned32val.yfilter)
	|| ydk::is_set(expvalueinteger32val.yfilter)
	|| ydk::is_set(expvalueipaddressval.yfilter)
	|| ydk::is_set(expvalueoctetstringval.yfilter)
	|| ydk::is_set(expvalueoidval.yfilter)
	|| ydk::is_set(expvaluecounter64val.yfilter);
}

std::string EXPRESSIONMIB::Expvaluetable::Expvalueentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/expValueTable/" << get_segment_path();
    return path_buffer.str();
}

std::string EXPRESSIONMIB::Expvaluetable::Expvalueentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expValueEntry" <<"[expExpressionIndex='" <<expexpressionindex <<"']" <<"[expValueInstance='" <<expvalueinstance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EXPRESSIONMIB::Expvaluetable::Expvalueentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expexpressionindex.is_set || is_set(expexpressionindex.yfilter)) leaf_name_data.push_back(expexpressionindex.get_name_leafdata());
    if (expvalueinstance.is_set || is_set(expvalueinstance.yfilter)) leaf_name_data.push_back(expvalueinstance.get_name_leafdata());
    if (expvaluecounter32val.is_set || is_set(expvaluecounter32val.yfilter)) leaf_name_data.push_back(expvaluecounter32val.get_name_leafdata());
    if (expvalueunsigned32val.is_set || is_set(expvalueunsigned32val.yfilter)) leaf_name_data.push_back(expvalueunsigned32val.get_name_leafdata());
    if (expvalueinteger32val.is_set || is_set(expvalueinteger32val.yfilter)) leaf_name_data.push_back(expvalueinteger32val.get_name_leafdata());
    if (expvalueipaddressval.is_set || is_set(expvalueipaddressval.yfilter)) leaf_name_data.push_back(expvalueipaddressval.get_name_leafdata());
    if (expvalueoctetstringval.is_set || is_set(expvalueoctetstringval.yfilter)) leaf_name_data.push_back(expvalueoctetstringval.get_name_leafdata());
    if (expvalueoidval.is_set || is_set(expvalueoidval.yfilter)) leaf_name_data.push_back(expvalueoidval.get_name_leafdata());
    if (expvaluecounter64val.is_set || is_set(expvaluecounter64val.yfilter)) leaf_name_data.push_back(expvaluecounter64val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EXPRESSIONMIB::Expvaluetable::Expvalueentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EXPRESSIONMIB::Expvaluetable::Expvalueentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EXPRESSIONMIB::Expvaluetable::Expvalueentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expExpressionIndex")
    {
        expexpressionindex = value;
        expexpressionindex.value_namespace = name_space;
        expexpressionindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expValueInstance")
    {
        expvalueinstance = value;
        expvalueinstance.value_namespace = name_space;
        expvalueinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expValueCounter32Val")
    {
        expvaluecounter32val = value;
        expvaluecounter32val.value_namespace = name_space;
        expvaluecounter32val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expValueUnsigned32Val")
    {
        expvalueunsigned32val = value;
        expvalueunsigned32val.value_namespace = name_space;
        expvalueunsigned32val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expValueInteger32Val")
    {
        expvalueinteger32val = value;
        expvalueinteger32val.value_namespace = name_space;
        expvalueinteger32val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expValueIpAddressVal")
    {
        expvalueipaddressval = value;
        expvalueipaddressval.value_namespace = name_space;
        expvalueipaddressval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expValueOctetStringVal")
    {
        expvalueoctetstringval = value;
        expvalueoctetstringval.value_namespace = name_space;
        expvalueoctetstringval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expValueOidVal")
    {
        expvalueoidval = value;
        expvalueoidval.value_namespace = name_space;
        expvalueoidval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expValueCounter64Val")
    {
        expvaluecounter64val = value;
        expvaluecounter64val.value_namespace = name_space;
        expvaluecounter64val.value_namespace_prefix = name_space_prefix;
    }
}

void EXPRESSIONMIB::Expvaluetable::Expvalueentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expExpressionIndex")
    {
        expexpressionindex.yfilter = yfilter;
    }
    if(value_path == "expValueInstance")
    {
        expvalueinstance.yfilter = yfilter;
    }
    if(value_path == "expValueCounter32Val")
    {
        expvaluecounter32val.yfilter = yfilter;
    }
    if(value_path == "expValueUnsigned32Val")
    {
        expvalueunsigned32val.yfilter = yfilter;
    }
    if(value_path == "expValueInteger32Val")
    {
        expvalueinteger32val.yfilter = yfilter;
    }
    if(value_path == "expValueIpAddressVal")
    {
        expvalueipaddressval.yfilter = yfilter;
    }
    if(value_path == "expValueOctetStringVal")
    {
        expvalueoctetstringval.yfilter = yfilter;
    }
    if(value_path == "expValueOidVal")
    {
        expvalueoidval.yfilter = yfilter;
    }
    if(value_path == "expValueCounter64Val")
    {
        expvaluecounter64val.yfilter = yfilter;
    }
}

bool EXPRESSIONMIB::Expvaluetable::Expvalueentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionIndex" || name == "expValueInstance" || name == "expValueCounter32Val" || name == "expValueUnsigned32Val" || name == "expValueInteger32Val" || name == "expValueIpAddressVal" || name == "expValueOctetStringVal" || name == "expValueOidVal" || name == "expValueCounter64Val")
        return true;
    return false;
}

const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::counter32 {1, "counter32"};
const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::unsignedOrGauge32 {2, "unsignedOrGauge32"};
const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::timeTicks {3, "timeTicks"};
const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::integer32 {4, "integer32"};
const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::ipAddress {5, "ipAddress"};
const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::octetString {6, "octetString"};
const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::objectId {7, "objectId"};
const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::counter64 {8, "counter64"};

const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionerror::invalidSyntax {1, "invalidSyntax"};
const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionerror::undefinedObjectIndex {2, "undefinedObjectIndex"};
const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionerror::unrecognizedOperator {3, "unrecognizedOperator"};
const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionerror::unrecognizedFunction {4, "unrecognizedFunction"};
const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionerror::invalidOperandType {5, "invalidOperandType"};
const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionerror::unmatchedParenthesis {6, "unmatchedParenthesis"};
const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionerror::tooManyWildcardValues {7, "tooManyWildcardValues"};
const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionerror::recursion {8, "recursion"};
const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionerror::deltaTooShort {9, "deltaTooShort"};
const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionerror::resourceUnavailable {10, "resourceUnavailable"};
const Enum::YLeaf EXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionerror::divideByZero {11, "divideByZero"};

const Enum::YLeaf EXPRESSIONMIB::Expobjecttable::Expobjectentry::Expobjectsampletype::absoluteValue {1, "absoluteValue"};
const Enum::YLeaf EXPRESSIONMIB::Expobjecttable::Expobjectentry::Expobjectsampletype::deltaValue {2, "deltaValue"};

const Enum::YLeaf EXPRESSIONMIB::Expobjecttable::Expobjectentry::Expobjectdiscontinuityidtype::timeTicks {1, "timeTicks"};
const Enum::YLeaf EXPRESSIONMIB::Expobjecttable::Expobjectentry::Expobjectdiscontinuityidtype::timeStamp {2, "timeStamp"};


}
}

